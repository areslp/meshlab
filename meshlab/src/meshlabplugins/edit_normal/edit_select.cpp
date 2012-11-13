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
#include<vcg/complex/append.h>
#include <vcg/complex/allocate.h>
#include <QMessageBox>


using namespace std;
using namespace vcg;

EditSelectPlugin::EditSelectPlugin(int m):mode(m)
{
}

QString EditSelectPlugin::Info()
{
    return tr("assign the points normal and subdivision the mesh");
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

bool EditSelectPlugin::mode0(MeshModel &m, GLArea *gla)
{
    if(!m.hasDataMask(MeshModel::MM_VERTFACETOPO)) {
        m.updateDataMask(MeshModel::MM_VERTFACETOPO);
    }
    CMeshO& cm=m.cm;
    int point_size=cm.vert.size();
    vcg::tri::UpdateTopology<CMeshO>::VertexFace(cm); 
    CMeshO::VertexIterator vi;
    for(vi=cm.vert.begin();vi!=cm.vert.end();++vi)
    {
        if( !(*vi).IsD())
        { 
            CMeshO::FacePointer f=(*vi).VFp();
            (*vi).N()=(*f).cN();
        }
    }
    return true;
}

bool EditSelectPlugin::mode1(MeshModel &m, GLArea *gla)
{
    if(!m.hasDataMask(MeshModel::MM_FACEFACETOPO)) {
        m.updateDataMask(MeshModel::MM_FACEFACETOPO);
    }
    if(!m.hasDataMask(MeshModel::MM_FACEFLAG)) {
        m.updateDataMask(MeshModel::MM_FACEFLAG);
    }
    if(!m.hasDataMask(MeshModel::MM_VERTFLAG)) {
        m.updateDataMask(MeshModel::MM_VERTFLAG);
    }
    CMeshO& cm=m.cm;
    CMeshO temp;
    temp.Clear();
    vcg::tri::Append<CMeshO, CMeshO>::Mesh(temp,cm);
    //updateDataMask
    temp.face.EnableFFAdjacency();
    tri::UpdateTopology<CMeshO>::FaceFace(temp);
    temp.vert.EnableVFAdjacency();
    temp.face.EnableVFAdjacency();
    tri::UpdateTopology<CMeshO>::VertexFace(temp);
    //main loop
    int face_size=cm.face.size();
    vcg::tri::UpdateTopology<CMeshO>::FaceFace(temp); 
    vcg::tri::Allocator<CMeshO>::PointerUpdater<CMeshO::VertexPointer> puv;
    vcg::tri::Allocator<CMeshO>::PointerUpdater<CMeshO::FacePointer> puf;
    //遍历用拷贝的mesh temp
    for(int i=0;i<face_size;i++)
    {
        CMeshO::FaceType& f=temp.face[i];
        CMeshO::FacePointer of=&cm.face[i];
        if( !f.IsD() && !f.IsV() )
        { 
            f.SetV();
            //原始的三顶点
            CMeshO::VertexPointer v0,v1,v2;
            v0=of->V(0);
            v1=of->V(1);
            v2=of->V(2);
            //添加的三顶点
            CMeshO::VertexPointer v01=NULL,v12=NULL,v20=NULL;
            //这些顶点是否已添加
            for (int i = 0; i < 3; i++) {
                CMeshO::FacePointer ff=f.FFp(i);
                if (ff->IsV()) {
                    //找到已添加的顶点
                    CMeshO::VertexType vt;
                    if (i==0) {
                        vt.P()=CMeshO::CoordType(0.5*(v0->P()[0]+v1->P()[0]),0.5*(v0->P()[1]+v1->P()[1]),0.5*(v0->P()[2]+v1->P()[2]));
                        v01=&*std::find_if(cm.vert.begin(), cm.vert.end(), std::bind2nd<Equal>(Equal(),vt));
                    }else if (i==1) {
                        vt.P()=CMeshO::CoordType(0.5*(v2->P()[0]+v1->P()[0]),0.5*(v2->P()[1]+v1->P()[1]),0.5*(v2->P()[2]+v1->P()[2]));
                        v12=&*std::find_if(cm.vert.begin(), cm.vert.end(), std::bind2nd<Equal>(Equal(),vt));
                    }else{
                        vt.P()=CMeshO::CoordType(0.5*(v0->P()[0]+v2->P()[0]),0.5*(v0->P()[1]+v2->P()[1]),0.5*(v0->P()[2]+v2->P()[2]));
                        v20=&*std::find_if(cm.vert.begin(), cm.vert.end(), std::bind2nd<Equal>(Equal(),vt));
                    }
                }else{
                    //插入点
                    CMeshO::VertexIterator avi=vcg::tri::Allocator<CMeshO>::AddVertices(cm,1,puv);
                    if(puv.NeedUpdate())
                    {
                        puv.Update(v0);
                        puv.Update(v1);
                        puv.Update(v2);
                        if (v01) {
                            puv.Update(v01);
                        }
                        if (v12) {
                            puv.Update(v12);
                        }
                        if (v20) {
                            puv.Update(v20);
                        }
                    }
                    if (i==0) {
                        v01=&*avi;                             
                        v01->P()=CMeshO::CoordType(0.5*(v0->P()[0]+v1->P()[0]),0.5*(v0->P()[1]+v1->P()[1]),0.5*(v0->P()[2]+v1->P()[2]));
                        v01->N()=of->cN();
                    }else if (i==1) {
                        v12=&*avi;                             
                        v12->P()=CMeshO::CoordType(0.5*(v2->P()[0]+v1->P()[0]),0.5*(v2->P()[1]+v1->P()[1]),0.5*(v2->P()[2]+v1->P()[2]));
                        v12->N()=of->cN();
                    }else{
                        v20=&*avi;                             
                        v20->P()=CMeshO::CoordType(0.5*(v0->P()[0]+v2->P()[0]),0.5*(v0->P()[1]+v2->P()[1]),0.5*(v0->P()[2]+v2->P()[2]));
                        v20->N()=of->cN();
                    }
                }
            }
            //添加面，更新面顶点信息
            CMeshO::FaceIterator afi=vcg::tri::Allocator<CMeshO>::AddFaces(cm,3,puf);
            if(puf.NeedUpdate())
            {
                puf.Update(of);
            }
            of->V(0)=v0;  of->V(1)=v01; of->V(2)=v20; 
            (*afi).V(0)=v01;(*afi).V(1)=v1; (*afi).V(2)=v12;(*afi).N()=of->cN();afi++;
            (*afi).V(0)=v20;(*afi).V(1)=v12; (*afi).V(2)=v2;(*afi).N()=of->cN();afi++;
            (*afi).V(0)=v01;(*afi).V(1)=v12; (*afi).V(2)=v20;(*afi).N()=of->cN();afi++;
        }
    }
    return false;
}

bool EditSelectPlugin::mode2(MeshModel &m, GLArea *gla)
{
    CMeshO &cm=m.cm;
    // vcg::tri::UpdateEdges<CMeshO>::Set(cm);
    const vcg::Box3f& box = cm.trBB();
    float max_bb=std::max(box.max.X()-box.min.X(),box.max.Y()-box.min.Y());
    max_bb=std::max(max_bb,box.max.Z()-box.min.Z());
    float step=max_bb/100.0;
    // std::cout<<"max_bb:"<<max_bb<<",step:"<<step<<std::endl;
    CMeshO::FaceIterator fi; 
    for (fi=cm.face.begin();fi!=cm.face.end();fi++) {
        CMeshO::CoordType v0,v1,v2;
        v0=fi->V(0)->P();
        v1=fi->V(1)->P();
        v2=fi->V(2)->P();
        float l01=Distance(v0,v1);
        float l12=Distance(v1,v2);
        float l20=Distance(v0,v2);
        int nl01=l01/step+0.5;      
        int nl12=l12/step+0.5;
        int nl20=l20/step+0.5;
        // std::cout<<"nl01:"<<nl01<<",nl12:"<<nl12<<",nl20:"<<nl20<<std::endl;

        if (l01<l12 && l01<l20) {
            //先分最短的边
            SubdivisionLine(m,v0,v1,nl01,fi);
            //分長边,然后继续分连线
            std::vector<CMeshO::CoordType> a1=SubdivisionLine(m,v2,v1,nl12,fi);
            std::vector<CMeshO::CoordType> a2=SubdivisionLine(m,v2,v0,nl20,fi);
            int tn=std::min(a1.size(),a2.size());
            for (int i = 0; i < tn; i++) {
                int tt=Distance(a1[i],a2[i])/step;
                SubdivisionLine(m,a1[i],a2[i],tt,fi);
            }
        }else if (l12<l01 && l12<l20) {
            SubdivisionLine(m,v1,v2,nl12,fi);
            std::vector<CMeshO::CoordType> a1=SubdivisionLine(m,v0,v1,nl01,fi);
            std::vector<CMeshO::CoordType> a2=SubdivisionLine(m,v0,v2,nl20,fi);
            int tn=std::min(a1.size(),a2.size());
            for (int i = 0; i < tn; i++) {
                int tt=Distance(a1[i],a2[i])/step;
                SubdivisionLine(m,a1[i],a2[i],tt,fi);
            }
        }else{
            SubdivisionLine(m,v0,v2,nl20,fi);
            std::vector<CMeshO::CoordType> a1=SubdivisionLine(m,v1,v0,nl01,fi);
            std::vector<CMeshO::CoordType> a2=SubdivisionLine(m,v1,v2,nl12,fi);
            int tn=std::min(a1.size(),a2.size());
            for (int i = 0; i < tn; i++) {
                int tt=Distance(a1[i],a2[i])/step;
                SubdivisionLine(m,a1[i],a2[i],tt,fi);
            }
        }
    }
    return true;
}


bool EditSelectPlugin::StartEdit(MeshModel &m, GLArea *gla)
{
    if (mode==0) {
        mode0(m,gla);
    }
    if (mode==1) {
        mode1(m,gla);
    }
    if (mode==2) {
        mode2(m,gla);
    }
    QMessageBox::information(NULL, "Title", "Complete", QMessageBox::Yes | QMessageBox::Yes);
    return true;
}

std::vector<CMeshO::CoordType> EditSelectPlugin::SubdivisionLine(MeshModel &m, CMeshO::CoordType p1, CMeshO::CoordType p2, int num, CMeshO::FaceIterator fi)
{
    std::vector<CMeshO::CoordType> addpoints;
    CMeshO &cm=m.cm;
    CMeshO::VertexIterator avi=vcg::tri::Allocator<CMeshO>::AddVertices(cm,num-1);
    float len=Distance(p1,p2)/num;
    CMeshO::CoordType v=p1-p2;
    v=v/Norm(v);
    // std::cout<<"v:"<<v[0]<<" "<<v[1]<<" "<<v[2]<<std::endl;
    // std::cout<<"SquaredNorm of v:"<<SquaredNorm(v)<<std::endl;
    // std::cout<<"Norm of v:"<<Norm(v)<<std::endl;
    // std::cout<<"p1:"<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<",p2:"<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<std::endl;
    for (int i = 0; i < num-1; i++) {
        float ll=(i+1)*len;
        CMeshO::CoordType np=p2+v*ll;
        // std::cout<<"np:"<<np[0]<<" "<<np[1]<<" "<<np[2]<<std::endl;
        avi->P()=CMeshO::CoordType(np);
        avi->N()=fi->cN();
        addpoints.push_back(np);
        avi++;
    }
    return addpoints;
}
