/*
 * =====================================================================================
 *
 *       Filename:  xyz_plugin.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2011年11月30日 17时25分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *        Company:
 *
 * =====================================================================================
 */
#include <Qt>
#include <QtGui>
#include "xyz_plugin.h"

#include    <iostream>

#include    <fstream>

QList<MeshIOInterface::Format> XYZImporter::exportFormats() const
{
    QList<Format> formatList;
    formatList << Format("XYZ File Format", QObject::tr("xyzn"));
    return formatList;
}       /* -----  end of method XYZImporter::exportFormats  ----- */

QList<MeshIOInterface::Format> XYZImporter::importFormats() const
{
    QList<Format> formatList;
    formatList << Format("XYZN File Format", QObject::tr("xyzn"));
    return formatList;
}

void XYZImporter::GetExportMaskCapability(QString &format, int &capability, int &defaultBits) const
{
    // if(format.toUpper() == QObject::tr("XYZ")) {
        // capability = defaultBits = vcg::tri::io::Mask::IOM_VERTNORMAL;
    // }
    return;
}

bool XYZImporter::open(const QString &format, const QString &fileName, MeshModel &m, int &mask, const RichParameterSet & par, vcg::CallBackPos *cb, QWidget *parent)
{
    if(!m.hasDataMask(MeshModel::MM_VERTNORMAL)) {
        m.updateDataMask(MeshModel::MM_VERTNORMAL);
    }

    QTextCodec *code = QTextCodec::codecForName("utf8");
    std::string fname = code->fromUnicode(fileName).data(); // pathname 为QString的中文路径名

    std::ifstream in(fname.c_str());
    if (!in.is_open()) {
        qDebug()<<"Open file ERROR!";
    }
    std::string tmp;
    int line_count=0;
    while(std::getline(in,tmp)){
        line_count++;
    }
    in.clear();
    in.seekg(0);
    std::cout<<"XYZImporter::file line count is "<<line_count<<std::endl;
    vcg::tri::Allocator<CMeshO>::AddVertices(m.cm, line_count);

    int i = 0;
    double x, y, z, nx, ny, nz;
    while(in >> x >> y >> z >> nx >> ny >> nz) {
        // qDebug()<<x<<" "<<y<<" "<<z<<" "<<nx<<" "<<ny<<" "<<nz;
        m.cm.vert[i].P()[0] = x;
        m.cm.vert[i].P()[1] = y;
        m.cm.vert[i].P()[2] = z;
        m.cm.vert[i].N()[0] = nx;
        m.cm.vert[i].N()[1] = ny;
        m.cm.vert[i].N()[2] = nz;
        i++;
    }

    in.close();
    return true;
}

bool XYZImporter::save(const QString &format, const QString &fileName, MeshModel &m, const int mask, const RichParameterSet & par, vcg::CallBackPos *cb, QWidget *parent)
{
    if(!m.hasDataMask(MeshModel::MM_VERTNORMAL)) {
        m.updateDataMask(MeshModel::MM_VERTNORMAL);
    }

    int p_num = m.cm.vert.size();
    std::ofstream out(fileName.toStdString().c_str());

    for(int i = 0; i < p_num; i++) {
        CVertexO v = m.cm.vert[i];
        out << v.P()[0] << " " << v.P()[1] << " " << v.P()[2] << " " << v.N()[0] <<" "<< v.N()[1] <<" "<< v.N()[2] << "\r\n";
    }

    out.close();
    return true;
}


Q_EXPORT_PLUGIN(XYZImporter)

