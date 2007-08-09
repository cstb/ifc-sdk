/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcOrderAction.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOrderAction::IfcOrderAction(Step::SPFData *args) : IfcTask(args) {
  m_actionID = getUnset(m_actionID);
}


IfcOrderAction::~IfcOrderAction() {
}

bool IfcOrderAction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOrderAction(this);
}

const char *IfcOrderAction::type() {
  return "IfcOrderAction";
}

Step::ClassType IfcOrderAction::getClassType() {
  return IfcOrderAction::s_type;
}

Step::ClassType IfcOrderAction::getType() const {
  return IfcOrderAction::s_type;
}

bool IfcOrderAction::isOfType(Step::ClassType t) {
  return IfcOrderAction::s_type == t ? true : IfcTask::isOfType(t);
}

IfcIdentifier IfcOrderAction::getActionID() {
  if (Step::BaseObject::inited()) {
    return m_actionID;
  }
  else {
    return getUnset(m_actionID);
  }
}

void IfcOrderAction::setActionID(const IfcIdentifier &value) {
  m_actionID = value;
}

void IfcOrderAction::release() {
  IfcTask::release();
}

bool IfcOrderAction::init() {
  bool status = IfcTask::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actionID = getUnset(m_actionID);
  }
  else {
    m_actionID = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrderAction::s_type = new Step::ClassType_class("IfcOrderAction");
IfcOrderAction_Factory::IfcOrderAction_Factory() {
}

IfcOrderAction_Factory::~IfcOrderAction_Factory() {
  clear(true);
}

void IfcOrderAction_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrderAction_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrderAction_Factory::end() {
  return m_idMap.end();
}

IfcOrderAction *IfcOrderAction_Factory::get(Step::StepId id) {
  IfcOrderAction *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOrderAction * > (it->second);
  }
  else {
    LOG_ERROR("IfcOrderAction_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOrderAction * > (create(id));
  }
}

Step::BaseObject *IfcOrderAction_Factory::create(Step::StepId id) {
  IfcOrderAction *ret = new IfcOrderAction(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOrderAction_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOrderAction *ret = new IfcOrderAction(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOrderAction_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOrderAction *ret = new IfcOrderAction(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOrderAction *IfcOrderAction_Factory::generate() {
  return static_cast< IfcOrderAction * > (create(m_model->getNewId()));
}

IfcOrderAction *IfcOrderAction_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOrderAction * > (it->second);
  }
  else {
    return NULL;
  }
}

