/****************************************************************************
* MeshLab                                                           o o     *
* An extendible mesh processor                                    o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005, 2009                                          \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/

/*  A class implementing Meshlab's Edit interface that is for picking points in 3D
 *
 *
 * @author Oscar Barney
 */

#include <QtGui>
#include <GL/glew.h>
#include "areslp.h"
#include <meshlab/mainwindow.h>
#include <wrap/gl/picking.h>
#include <wrap/gl/pick.h>
#include <wrap/qt/gl_label.h>
#include <math.h>
#include <map>
#include <boost/lexical_cast.hpp>
#include <fstream>

using namespace vcg;
using namespace std;

#define PI 3.14159265


EditAreslpPlugin::EditAreslpPlugin()
{
}

//Constants


const QString EditAreslpPlugin::Info()
{
    return tr("Select Points and Faces By their Index");
}

//called
void EditAreslpPlugin::Decorate(MeshModel &mm, GLArea *gla, QPainter *painter)
{
}

bool EditAreslpPlugin::StartEdit(MeshModel &mm, GLArea *gla)
{
    qDebug()<<"EditAreslpPlugin StartEdit";

    if(!mm.hasDataMask(MeshModel::MM_VERTQUALITY)) {
        mm.updateDataMask(MeshModel::MM_VERTQUALITY);
    }

    if(!mm.hasDataMask(MeshModel::MM_FACEQUALITY)) {
        mm.updateDataMask(MeshModel::MM_FACEQUALITY);
    }


    AreslpDialog dialog;
    dialog.exec();

    std::vector<int> pointset=dialog.pointset_;
    std::vector<int> faceset=dialog.faceset_;
    std::vector<int> patchset=dialog.patchset_;

    //Debug the content of above two vector
    for(int i = 0; i < pointset.size(); i++) {
        qDebug()<<pointset[i];
    }

    for(int i = 0; i < faceset.size(); i++) {
        qDebug()<<faceset[i];
    }

    for(int i = 0; i < patchset.size(); i++) {
        qDebug()<<patchset[i];
    }

    CMeshO& cm = mm.cm;

    int point_size = cm.vert.size();
    
	
	if(pointset.size()!=0){
		//先把之前设置的值清空
		for(int i = 0; i < point_size; i++) {
			cm.vert[i].Q() = 0;
		}
		for(int i = 0; i < pointset.size(); i++) {
			cm.vert[pointset[i]].Q() = 1;
		}
	}
    int face_size=cm.face.size();

	if(faceset.size()!=0){
		//先把之前设置的值清空
		for(int i = 0; i < face_size; i++) {
			cm.face[i].Q() = 0;
		}
		for(int i = 0; i < faceset.size(); i++) {
			cm.face[faceset[i]].Q() = 1;
		}
	}


	if(patchset.size()!=0){
		//patch
		std::map<int,double> qm;

		for (int i = 0; i < patchset.size(); i++) {
			std::string tstring="faceq";
			tstring.append(boost::lexical_cast<std::string>(patchset[i]));
			tstring.append(".txt");
			qDebug()<<tstring.c_str();
			std::ifstream ifile(tstring.c_str());
			int ii;
			double v;
			while(ifile >> ii >> v) {
				// qDebug()<<i<<" "<<v;
				qm.insert(make_pair<int,double>(ii,v));
			}
			ifile.close();
		}

		for (int i = 0; i < face_size; i++) {
			if (qm.find(i)!=qm.end()) {
				cm.face[i].Q()=qm[i];
			}else{
				cm.face[i].Q()=0;
			}
		}
	}

    pair<float,float> minmax;
    minmax = tri::Stat<CMeshO>::ComputePerFaceQualityMinMax(mm.cm);
    qDebug()<<minmax.first;
    qDebug()<<minmax.second;
    mm.updateDataMask(MeshModel::MM_FACECOLOR);
    float RangeMin = minmax.first;
    float RangeMax = minmax.second;
    float perc = 0.0;

    Histogramf H;
    tri::Stat<CMeshO>::ComputePerFaceQualityHistogram(mm.cm,H);
    float PercLo = H.Percentile(perc/100.f);
    float PercHi = H.Percentile(1.0-perc/100.f);

    tri::UpdateColor<CMeshO>::FaceQualityRamp(mm.cm,PercLo,PercHi);
    return true;
}

void EditAreslpPlugin::EndEdit(MeshModel &mm, GLArea *gla)
{
}

void EditAreslpPlugin::mousePressEvent(QMouseEvent *event, MeshModel &mm, GLArea *gla)
{
}

void EditAreslpPlugin::mouseMoveEvent(QMouseEvent *event, MeshModel &mm, GLArea *gla)
{
}

void EditAreslpPlugin::mouseReleaseEvent(QMouseEvent *event, MeshModel &mm, GLArea * gla)
{
}

QString EditAreslpPlugin::filterName(FilterIDType c) const
{
	return QString("EditAresPlugin");
}