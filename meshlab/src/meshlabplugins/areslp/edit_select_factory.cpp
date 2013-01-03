/****************************************************************************
* MeshLab                                                           o o     *
* A versatile mesh processing toolbox                             o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005-2008                                           \/)\/    *
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

#include "edit_select_factory.h"
#include "edit_select.h"

EditSelectFactory::EditSelectFactory()
{
    setQ = new QAction(QIcon(":/images/Number_001.png"), "Set vertex quality", this);
    setFaceQ = new QAction(QIcon(":/images/Number_002.png"), "Set face quality", this);
    saveCurvature = new QAction(QIcon(":/images/Number_003.png"), "Save face curvature", this);
    setFaceQ2 = new QAction(QIcon(":/images/Number_004.png"), "Set face quality2 Histogram", this);
	saveFaceQ = new QAction(QIcon(":/images/Number_005.png"), "Save face quality", this);
	setFaceQ3 = new QAction(QIcon(":/images/Number_006.png"), "Set face quality (princeton)", this);
	sepFaceQ = new QAction(QIcon(":/images/Number_007.png"), "Seperate face quality (princeton)", this);
	saveVertQ = new QAction(QIcon(":/images/Number_008.png"), "save vertex quality", this);
	setFaceQPaper = new QAction(QIcon(":/images/Number_009.png"), "set face quality paper", this);
    actionList << setQ;
    actionList << setFaceQ;
    actionList << saveCurvature;
    actionList << setFaceQ2;
	actionList << saveFaceQ;
	actionList << setFaceQ3;
	actionList << sepFaceQ;
	actionList << saveVertQ;
	actionList << setFaceQPaper;
    foreach(QAction * editAction, actionList)
        editAction->setCheckable(true);
}

//gets a list of actions available from this plugin
QList<QAction *> EditSelectFactory::actions() const
{
    return actionList;
}

//get the edit tool for the given action
MeshEditInterface* EditSelectFactory::getMeshEditInterface(QAction *action)
{
    if(action == setQ)
        return new EditSelectPlugin(EditSelectPlugin::SET_VERT_Q);
    if(action == setFaceQ)
        return new EditSelectPlugin(EditSelectPlugin::SET_FACE_Q);
    if(action == setFaceQ2)
        return new EditSelectPlugin(EditSelectPlugin::SET_FACE_Q2);
    if(action == saveCurvature)
        return new EditSelectPlugin(EditSelectPlugin::SAVE_CURVATURE);
	if(action == saveFaceQ)
		return new EditSelectPlugin(EditSelectPlugin::SAVE_FACE_Q);
	if(action == setFaceQ3)
		return new EditSelectPlugin(EditSelectPlugin::SET_FACE_Q3);
	if(action == sepFaceQ)
		return new EditSelectPlugin(EditSelectPlugin::SAVE_SEP_LABEL);
	if (action == saveVertQ)
	{
		return new EditSelectPlugin(EditSelectPlugin::SAVE_VERT_Q);
	}
	if (action == setFaceQPaper)
	{
		return new EditSelectPlugin(EditSelectPlugin::SET_Q_PAPER);
	}

    assert(0); //should never be asked for an action that isnt here
}

QString EditSelectFactory::getEditToolDescription(QAction */*a*/)
{
    return EditSelectPlugin::Info();
}

Q_EXPORT_PLUGIN(EditSelectFactory)
