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
#include <ifc2x3/IfcRelAssignsTasks.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcScheduleTimeControl.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsTasks::IfcRelAssignsTasks(Step::SPFData *args) : IfcRelAssignsToControl(args) {
  m_timeForTask = NULL;
}


IfcRelAssignsTasks::~IfcRelAssignsTasks() {
}

bool IfcRelAssignsTasks::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsTasks(this);
}

const char *IfcRelAssignsTasks::type() {
  return "IfcRelAssignsTasks";
}

Step::ClassType IfcRelAssignsTasks::getClassType() {
  return IfcRelAssignsTasks::s_type;
}

Step::ClassType IfcRelAssignsTasks::getType() const {
  return IfcRelAssignsTasks::s_type;
}

bool IfcRelAssignsTasks::isOfType(Step::ClassType t) {
  return IfcRelAssignsTasks::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

IfcScheduleTimeControl *IfcRelAssignsTasks::getTimeForTask() {
  if (Step::BaseObject::inited()) {
    return m_timeForTask.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsTasks::setTimeForTask(const Step::RefPtr< IfcScheduleTimeControl > &value) {
  m_timeForTask = value;
}

void IfcRelAssignsTasks::release() {
  IfcRelAssignsToControl::release();
  m_timeForTask.release();
}

bool IfcRelAssignsTasks::init() {
  bool status = IfcRelAssignsToControl::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeForTask = NULL;
  }
  else {
    m_timeForTask = static_cast< IfcScheduleTimeControl * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsTasks::s_type = new Step::ClassType_class("IfcRelAssignsTasks");
IfcRelAssignsTasks_Factory::IfcRelAssignsTasks_Factory() {
}

IfcRelAssignsTasks_Factory::~IfcRelAssignsTasks_Factory() {
  clear(true);
}

void IfcRelAssignsTasks_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsTasks_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsTasks_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsTasks *IfcRelAssignsTasks_Factory::get(Step::StepId id) {
  IfcRelAssignsTasks *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsTasks * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsTasks_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsTasks * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsTasks_Factory::create(Step::StepId id) {
  IfcRelAssignsTasks *ret = new IfcRelAssignsTasks(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsTasks_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsTasks *ret = new IfcRelAssignsTasks(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsTasks_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsTasks *ret = new IfcRelAssignsTasks(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsTasks *IfcRelAssignsTasks_Factory::generate() {
  return static_cast< IfcRelAssignsTasks * > (create(m_model->getNewId()));
}

IfcRelAssignsTasks *IfcRelAssignsTasks_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsTasks * > (it->second);
  }
  else {
    return NULL;
  }
}

