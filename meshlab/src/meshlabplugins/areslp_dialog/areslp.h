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

#ifndef EDIT_PickPoints_PLUGIN_H
#define EDIT_PickPoints_PLUGIN_H

#include <common/interfaces.h>
#include "areslpDialog.h"

class EditAreslpPlugin : public QObject, public MeshEditInterface
{
    Q_OBJECT
    Q_INTERFACES(MeshEditInterface)

public:
    //constructor
    EditAreslpPlugin();

    //destructor
    virtual ~EditAreslpPlugin() {
    }

    static const QString Info();

    virtual bool StartEdit(MeshModel &/*m*/, GLArea * /*parent*/);
    virtual void EndEdit(MeshModel &/*m*/, GLArea * /*parent*/);
    virtual void Decorate(MeshModel &/*m*/, GLArea * /*parent*/, QPainter *);
    virtual void mousePressEvent(QMouseEvent *event, MeshModel &, GLArea *) ;
    virtual void mouseMoveEvent(QMouseEvent *event, MeshModel &, GLArea *) ;
    virtual void mouseReleaseEvent(QMouseEvent *event, MeshModel &/*m*/, GLArea *);

private:
};

#endif
