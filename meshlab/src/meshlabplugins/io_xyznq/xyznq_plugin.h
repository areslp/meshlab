/*
 * =====================================================================================
 *
 *       Filename:  xyz_plugin.h
 *
 *    Description:  read,write xyz file format(CGAL format)
 *
 *        Version:  1.0
 *        Created:  2011年11月30日 17时21分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *        Company:
 *
 * =====================================================================================
 */
#ifndef  xyznq_plugin_INC
#define  xyznq_plugin_INC


#include <common/interfaces.h>
#include	<QObject>
/*
 * =====================================================================================
 *        Class:  XYZImporter
 *  Description:
 * =====================================================================================
 */
class XYZNQImporter : public QObject, public MeshIOInterface
{
    Q_OBJECT
    Q_INTERFACES(MeshIOInterface)

    public:

        QList<Format> importFormats() const;
        QList<Format> exportFormats() const;

        virtual void GetExportMaskCapability(QString &format, int &capability, int &defaultBits) const;

        bool open(const QString &format, const QString &fileName, MeshModel &m, int &mask,
                const RichParameterSet & par, vcg::CallBackPos *cb = 0, QWidget *parent = 0);
        bool save(const QString &format, const QString &fileName, MeshModel &m, const int mask,
                const RichParameterSet & par, vcg::CallBackPos *cb = 0, QWidget *parent = 0);
        /* ====================  ACCESSORS     ======================================= */

        /* ====================  MUTATORS      ======================================= */

        /* ====================  OPERATORS     ======================================= */


    protected:
        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class XYZImporter  ----- */
#endif   /* ----- #ifndef xyz_plugin_INC  ----- */

