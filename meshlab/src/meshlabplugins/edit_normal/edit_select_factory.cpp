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
    editNormal= new QAction(QIcon(":/images/png-0429.png"),"recompute points normal", this);
    editSubdivision= new QAction(QIcon(":/images/png-0435.png"),"subdivision the mesh", this);
    subdivision= new QAction(QIcon(":/images/png-0380.png"),"new subdivision the mesh", this);

    actionList << editNormal;
    actionList << editSubdivision;
    actionList << subdivision;
	
	foreach(QAction *editAction, actionList)
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
	if(action == editNormal)
      return new EditSelectPlugin(EditSelectPlugin::NORMAL_MODE);
  else if(action == editSubdivision)
      return new EditSelectPlugin(EditSelectPlugin::SUBDIVISION_MODE);
  else if (action==subdivision) {
      return new EditSelectPlugin(EditSelectPlugin::ADDPOINTS_MODE);
  }
	 
	assert(0); //should never be asked for an action that isnt here
}

QString EditSelectFactory::getEditToolDescription(QAction */*a*/)
{
  return EditSelectPlugin::Info();
}

Q_EXPORT_PLUGIN(EditSelectFactory)
