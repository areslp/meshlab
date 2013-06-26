/****************************************************************************
 * MeshLab                                                           o o     *
 * A versatile mesh processing toolbox                             o     o   *
 *                                                                _   O  _   *
 * Copyright(C) 2005                                                \/)\/    *
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

#include <QtGui>

#include <math.h>
#include <stdlib.h>
#include <limits>
#include <meshlab/glarea.h>
#include "edit_select.h"
#include <wrap/gl/pick.h>
#include <vcg/complex/algorithms/update/selection.h>
#include <vcg/complex/algorithms/update/edges.h>
#include <vcg/complex/algorithms/update/curvature.h>
#include<vcg/complex/append.h>
#include <vcg/complex/allocate.h>
#include <QMessageBox>
#include <fstream>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace vcg;

EditSelectPlugin::EditSelectPlugin(int mode):mode_(mode)
{
}

QString EditSelectPlugin::Info()
{
    return tr("Set vertex/face quality by external files");
}
void EditSelectPlugin::keyReleaseEvent(QKeyEvent *, MeshModel &/*m*/, GLArea *gla)
{
}

void EditSelectPlugin::keyPressEvent(QKeyEvent */*event*/, MeshModel &/*m*/, GLArea *gla)
{
}

void EditSelectPlugin::mousePressEvent(QMouseEvent * event, MeshModel &m, GLArea *)
{
    return;
}

void EditSelectPlugin::mouseMoveEvent(QMouseEvent * event, MeshModel &/*m*/, GLArea * gla)
{
}

void EditSelectPlugin::mouseReleaseEvent(QMouseEvent * event, MeshModel &/*m*/, GLArea * gla)
{
}

void EditSelectPlugin::Decorate(MeshModel &m, GLArea * gla)
{
}


class Equal : public binary_function<CMeshO::VertexType,CMeshO::VertexType,bool>
{
    public:
        bool operator()(const CMeshO::VertexType& left, const CMeshO::VertexType& right) const 
        {
            if (left.P()[0]==right.P()[0] && left.P()[1]==right.P()[1] && left.P()[1]==right.P()[1]) {
                return true;
            }else{
                return false;
            }
        }

};

void EditSelectPlugin::set_vert_q(MeshModel& m){
    if(!m.hasDataMask(MeshModel::MM_VERTNORMAL)) {
        m.updateDataMask(MeshModel::MM_VERTNORMAL);
    }
    if(!m.hasDataMask(MeshModel::MM_VERTQUALITY)) {
        m.updateDataMask(MeshModel::MM_VERTQUALITY);
    }
    //read quality file
	//if (!isset)
	//{

	//}
	
    QFileDialog fileDialog;
    QString qfile;
    fileDialog.setWindowTitle(tr("Open File"));
    QDir dir;
    fileDialog.setDirectory(dir.currentPath());
    fileDialog.setFilter(tr("Filter File(*)"));

    std::map<int,double> qm;

    if(fileDialog.exec() == QDialog::Accepted) {
        qfile = fileDialog.selectedFiles()[0];

        if(!qfile.isEmpty()) {
            std::string tstring=qfile.toStdString();
            std::ifstream ifile(tstring.c_str());

            int i;
            double v;

			ofstream fpoints("ml_points.txt");

            while(ifile >> i >> v) {
                // qDebug()<<i<<" "<<v;
                qm.insert(make_pair<int,double>(i,v));

				fpoints<<m.cm.vert[i].P()[0]<<" "<<m.cm.vert[i].P()[1]<<" "<<m.cm.vert[i].P()[2]<<std::endl;
            }

			fpoints.close();

            ifile.close();
        } else {
        }
        // QMessageBox::information(NULL, tr("Path"), tr("You selected ") + qfile);
    } else {
        // QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }

    CMeshO& cm=m.cm;

	int point_size=cm.vert.size();
	for (int i = 0; i < point_size; i++) {
		cm.vert[i].Q()=-1;
	}


    for (int i = 0; i < point_size; i++) {
        cm.vert[i].Q()=qm[i];
    }
    // QMessageBox::information(NULL, "Title", "Complete", QMessageBox::Yes | QMessageBox::Yes);
}


void normalize(std::map<int,double>& m);


// for paper
void EditSelectPlugin::set_face_q(MeshModel& m){
	if(!m.hasDataMask(MeshModel::MM_FACEQUALITY)) {
		m.updateDataMask(MeshModel::MM_FACEQUALITY);
	}
	//read quality file
	QFileDialog fileDialog;
	QString qfile;
	fileDialog.setWindowTitle(tr("Open File"));
	QDir dir;
	fileDialog.setDirectory(dir.currentPath());
	fileDialog.setFilter(tr("Filter File(*)"));

	std::map<int,double> qm;

	if(fileDialog.exec() == QDialog::Accepted) {
		qfile = fileDialog.selectedFiles()[0];

		if(!qfile.isEmpty()) {
			std::string tstring=qfile.toStdString();
			// qDebug()<<tstring.c_str();
			std::ifstream ifile(tstring.c_str());

			int i;
			double v;

			while(ifile >> i >> v) {
				// qDebug()<<i<<" "<<v;
				qm.insert(make_pair<int,double>(i,v));
			}
			ifile.close();
		} else {
		}
		// QMessageBox::information(NULL, tr("Path"), tr("You selected ") + qfile);
	} else {
		// QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
	}

	//normalize(qm);

	CMeshO& cm=m.cm;
	int face_size=cm.face.size();
	for (int i = 0; i < face_size; i++) {
		if (qm.find(i)!=qm.end()) {
			cm.face[i].Q()=qm[i];
		}else{
			cm.face[i].Q()=-1;
		}
	}
	// QMessageBox::information(NULL, "Title", "Complete", QMessageBox::Yes | QMessageBox::Yes);

	pair<float,float> minmax;
	minmax = tri::Stat<CMeshO>::ComputePerFaceQualityMinMax(m.cm);
	qDebug()<<minmax.first;
	qDebug()<<minmax.second;
	m.updateDataMask(MeshModel::MM_FACECOLOR);

	for (int i = 0; i < face_size; i++) {
		//qDebug()<<cm.face[i].Q();
		cm.face[i].C().SetColorRamp(cm.face[i].Q());
	}
	
}


// read [faceid q] file and do histogram [per] before colorize the mesh
void EditSelectPlugin::set_face_q(MeshModel& m,float per){
    if(!m.hasDataMask(MeshModel::MM_FACEQUALITY)) {
        m.updateDataMask(MeshModel::MM_FACEQUALITY);
    }
    //read quality file
    QFileDialog fileDialog;
    QString qfile;
    fileDialog.setWindowTitle(tr("Open File"));
    QDir dir;
    fileDialog.setDirectory(dir.currentPath());
    fileDialog.setFilter(tr("Filter File(*)"));

    std::map<int,double> qm;

    if(fileDialog.exec() == QDialog::Accepted) {
        qfile = fileDialog.selectedFiles()[0];

        if(!qfile.isEmpty()) {
            std::string tstring=qfile.toStdString();
            // qDebug()<<tstring.c_str();
            std::ifstream ifile(tstring.c_str());

            int i;
            double v;

            while(ifile >> i >> v) {
                // qDebug()<<i<<" "<<v;
                qm.insert(make_pair<int,double>(i,v));
            }
            ifile.close();
        } else {
        }
        // QMessageBox::information(NULL, tr("Path"), tr("You selected ") + qfile);
    } else {
        // QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }

	normalize(qm);

    CMeshO& cm=m.cm;
    int face_size=cm.face.size();
    for (int i = 0; i < face_size; i++) {
        if (qm.find(i)!=qm.end()) {
            cm.face[i].Q()=qm[i];
        }else{
            cm.face[i].Q()=-1;
        }
    }
    // QMessageBox::information(NULL, "Title", "Complete", QMessageBox::Yes | QMessageBox::Yes);

    pair<float,float> minmax;
    minmax = tri::Stat<CMeshO>::ComputePerFaceQualityMinMax(m.cm);
    qDebug()<<minmax.first;
    qDebug()<<minmax.second;
    m.updateDataMask(MeshModel::MM_FACECOLOR);
    float RangeMin = minmax.first;
    float RangeMax = minmax.second;
    float perc = per;

    Histogramf H;
    tri::Stat<CMeshO>::ComputePerFaceQualityHistogram(m.cm,H);
    float PercLo = H.Percentile(perc/100.f);
    float PercHi = H.Percentile(1.0-perc/100.f);

    tri::UpdateColor<CMeshO>::FaceQualityRamp(m.cm,PercLo,PercHi);
}

// read *.seg file and set the face quality
void EditSelectPlugin::set_face_q3(MeshModel& m){
	if(!m.hasDataMask(MeshModel::MM_FACEQUALITY)) {
		m.updateDataMask(MeshModel::MM_FACEQUALITY);
	}
	//read quality file
	QFileDialog fileDialog;
	QString qfile;
	fileDialog.setWindowTitle(tr("Open File"));
	QDir dir;
	fileDialog.setDirectory(dir.currentPath());
	fileDialog.setFilter(tr("Filter File(*)"));

	std::map<int,double> qm;

	if(fileDialog.exec() == QDialog::Accepted) {
		qfile = fileDialog.selectedFiles()[0];

		if(!qfile.isEmpty()) {
			std::string tstring=qfile.toStdString();
			// qDebug()<<tstring.c_str();
			std::ifstream ifile(tstring.c_str());
			double v;
			int i=0;
			while(ifile >> v) {
				// qDebug()<<i<<" "<<v;
				qm.insert(make_pair<int,double>(i,v));
				i++;
			}
			ifile.close();
		} else {
		}
		// QMessageBox::information(NULL, tr("Path"), tr("You selected ") + qfile);
	} else {
		// QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
	}

	normalize(qm);

	CMeshO& cm=m.cm;
	int face_size=cm.face.size();
	for (int i = 0; i < face_size; i++) {
		cm.face[i].Q()=qm[i];
	}
	// QMessageBox::information(NULL, "Title", "Complete", QMessageBox::Yes | QMessageBox::Yes);

	pair<float,float> minmax;
	minmax = tri::Stat<CMeshO>::ComputePerFaceQualityMinMax(m.cm);
	qDebug()<<minmax.first;
	qDebug()<<minmax.second;
	m.updateDataMask(MeshModel::MM_FACECOLOR);
	float RangeMin = minmax.first;
	float RangeMax = minmax.second;
	float perc = 0.0;

	Histogramf H;
	tri::Stat<CMeshO>::ComputePerFaceQualityHistogram(m.cm,H);
	float PercLo = H.Percentile(perc/100.f);
	float PercHi = H.Percentile(1.0-perc/100.f);

	tri::UpdateColor<CMeshO>::FaceQualityRamp(m.cm,PercLo,PercHi);
}

// save face curvature by average the curvature of it's three vertex
void EditSelectPlugin::save_curvature(MeshModel &m)
{
    CMeshO& cm=m.cm;
    if(!m.hasDataMask(MeshModel::MM_VERTFACETOPO)) {
        m.updateDataMask(MeshModel::MM_VERTFACETOPO);
    }
    if(!m.hasDataMask(MeshModel::MM_VERTCURV)) {
        m.updateDataMask(MeshModel::MM_VERTCURV);
        // vcg::tri::UpdateCurvature<CMeshO>::VertexCurvature(cm);
    }
    //当前目录
    QDir dir;
    //dir.currentPath();
    //设置输出文件
    std::string ofs=dir.currentPath().toStdString();
    ofs.append("/fq_gc2.txt");
    qDebug()<<"ofs:"<<ofs.c_str();
    ofstream oo(ofs.c_str());
    int face_size=cm.face.size();
    for (int i = 0; i < face_size; i++) {
        CMeshO::VertexPointer v0=cm.face[i].V(0);
        CMeshO::VertexPointer v1=cm.face[i].V(1);
        CMeshO::VertexPointer v2=cm.face[i].V(2);
        // float gc=(v0->Kg()+v1->Kg()+v2->Kg())/3.0;
        float gc=(v0->Q()+v1->Q()+v2->Q())/3.0;
        oo<<i<<" "<<gc<<endl;
    }
    oo.close();
}


void EditSelectPlugin::save_vert_q(MeshModel &m)
{
	CMeshO& cm=m.cm;
	if(!m.hasDataMask(MeshModel::MM_VERTFACETOPO)) {
		m.updateDataMask(MeshModel::MM_VERTFACETOPO);
	}
	if(!m.hasDataMask(MeshModel::MM_VERTCURV)) {
		m.updateDataMask(MeshModel::MM_VERTCURV);
		// vcg::tri::UpdateCurvature<CMeshO>::VertexCurvature(cm);
	}
	//当前目录
	QDir dir;
	//dir.currentPath();
	//设置输出文件
	std::string ofs=dir.currentPath().toStdString();
	ofs.append("/vq_ml.txt");
	qDebug()<<"ofs:"<<ofs.c_str();
	ofstream oo(ofs.c_str());
	int vert_size=cm.vert.size();
	for (int i = 0; i < vert_size; i++) {
		CMeshO::VertexType v=cm.vert[i];
		float gc=v.Q();
		oo<<i<<" "<<gc<<endl;
	}
	oo.close();
}

void EditSelectPlugin::save_face_q(MeshModel &m)
{
	CMeshO& cm=m.cm;
	if(!m.hasDataMask(MeshModel::MM_VERTFACETOPO)) {
		m.updateDataMask(MeshModel::MM_VERTFACETOPO);
	}
	if(!m.hasDataMask(MeshModel::MM_VERTCURV)) {
		m.updateDataMask(MeshModel::MM_VERTCURV);
		// vcg::tri::UpdateCurvature<CMeshO>::VertexCurvature(cm);
	}
	//当前目录
	QDir dir;
	//dir.currentPath();
	//设置输出文件
	std::string ofs=dir.currentPath().toStdString();
	ofs.append("/fq_ml.txt");
	qDebug()<<"ofs:"<<ofs.c_str();
	ofstream oo(ofs.c_str());
	int face_size=cm.face.size();
	for (int i = 0; i < face_size; i++) {
		//CMeshO::VertexPointer v0=cm.face[i].V(0);
		//CMeshO::VertexPointer v1=cm.face[i].V(1);
		//CMeshO::VertexPointer v2=cm.face[i].V(2);
		//// float gc=(v0->Kg()+v1->Kg()+v2->Kg())/3.0;
		//float gc=(v0->Q()+v1->Q()+v2->Q())/3.0;
		float gc=cm.face[i].Q();
		oo<<i<<" "<<gc<<endl;
	}
	oo.close();
}


void EditSelectPlugin::save_sep_label(MeshModel &m)
{
	// read segmentation result (benchmark)
	if(!m.hasDataMask(MeshModel::MM_FACEQUALITY)) {
		m.updateDataMask(MeshModel::MM_FACEQUALITY);
	}
	//read quality file
	QFileDialog fileDialog;
	QString qfile;
	fileDialog.setWindowTitle(tr("Open File"));
	QDir dir;
	fileDialog.setDirectory(dir.currentPath());
	fileDialog.setFilter(tr("Filter File(*)"));

	std::map<int,double> qm;

	if(fileDialog.exec() == QDialog::Accepted) {
		qfile = fileDialog.selectedFiles()[0];

		if(!qfile.isEmpty()) {
			std::string tstring=qfile.toStdString();
			// qDebug()<<tstring.c_str();
			std::ifstream ifile(tstring.c_str());
			double v;
			int i=0;
			while(ifile >> v) {
				// qDebug()<<i<<" "<<v;
				qm.insert(make_pair<int,double>(i,v));
				i++;
			}
			ifile.close();
		} else {
		}
		// QMessageBox::information(NULL, tr("Path"), tr("You selected ") + qfile);
	} else {
		// QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
	}
	// save benchmark segmentation result to LP format for over-segementation
	CMeshO& cm=m.cm;
	std::string path=dir.currentPath().toStdString();
	path.append("/faceq.txt");
	std::ofstream ooo(path.c_str());
	int face_size=cm.face.size();
	for (int i = 0; i < face_size; i++) {
		cm.face[i].Q()=qm[i];
		ooo<<i<<" "<<qm[i]<<std::endl;
	}
	ooo.close();
	// QMessageBox::information(NULL, "Title", "Complete", QMessageBox::Yes | QMessageBox::Yes);

	pair<float,float> minmax;
	minmax = tri::Stat<CMeshO>::ComputePerFaceQualityMinMax(m.cm);
	qDebug()<<minmax.first;
	qDebug()<<minmax.second;

	int minv=minmax.first;
	int maxv=minmax.second;

	for (int l=minv;l<=maxv;l++)
	{
		std::string ofs=dir.currentPath().toStdString();
		ofs.append("/faceq");
		ofs.append(boost::lexical_cast<std::string>(l+1));
		ofs.append(".txt");
		qDebug()<<"ofs:"<<ofs.c_str();
		ofstream oo(ofs.c_str());
		for (int i = 0; i < face_size; i++) {
			if ((int)(cm.face[i].Q())==l)
			{
				oo<<i<<" "<<l<<std::endl;
			}
		}
		oo.close();
	}
	
}


void EditSelectPlugin::EndEdit(MeshModel &m, GLArea * gla)
{
}

bool EditSelectPlugin::StartEdit(MeshModel &m, GLArea *gla)
{
    if (mode_==SET_VERT_Q) {
        // qDebug()<<"set vert Q";
        set_vert_q(m);
    }
    if (mode_==SET_FACE_Q) {
        set_face_q(m,0.0);
		//set_face_q(m);
    }
    if (mode_==SET_FACE_Q2) {
        set_face_q(m,5.0);
    }
    if (mode_==SAVE_CURVATURE) {
        save_curvature(m);
    }
	if (mode_==SAVE_FACE_Q) {
		save_face_q(m);
	}
	if (mode_==SET_FACE_Q3) {
		set_face_q3(m);
	}
	if (mode_==SAVE_SEP_LABEL) {
		save_sep_label(m);
	}
	if (mode_==SAVE_VERT_Q) {
		save_vert_q(m);
	}
	if (mode_==SET_Q_PAPER) {
		set_face_q(m);
	}
    // gla->setColorMode(GLW::CMPerFace);
    // QList<int> models;
    // models.push_back(0);
    // m.parent->updateRenderState(models, GLW::CMPerFace, models, 0);
    return true;
}


void normalize(std::map<int,double>& m){
	std::map<int,double>::iterator it=m.begin();
	float vmax=std::numeric_limits<float>::min(),vmin=numeric_limits<float>::max();
	for (;it!=m.end();it++)
	{
		float v=it->second;
		vmax=std::max(vmax,v);
		vmin=std::min(vmin,v);
	}
	if (vmin==vmax){
		return;
	}
	for (it=m.begin();it!=m.end();it++)
	{
		float v=it->second;
		it->second=(v-vmin)/(vmax-vmin);
	}
}

QString EditSelectPlugin::filterName(FilterIDType c) const
{
	switch(c) {
		case SET_VERT_Q:
			return QString("SET_VERT_Q");
		case SET_FACE_Q:
			return QString("SET_FACE_Q");
		case SAVE_CURVATURE:
			return QString("SAVE_CURVATURE");
		case SET_FACE_Q2:
			return QString("SET_FACE_Q2");
		case SAVE_FACE_Q:
			return QString("SAVE_FACE_Q");
		case SET_FACE_Q3:
			return QString("SET_FACE_Q3");
		case SAVE_SEP_LABEL:
			return QString("SAVE_SEP_LABEL");
		case SAVE_VERT_Q:
			return QString("SAVE_VERT_Q");
		case SET_Q_PAPER:
			return QString("SET_Q_PAPER");
		default:
			assert(0);
	}

	return QString("error!");
}