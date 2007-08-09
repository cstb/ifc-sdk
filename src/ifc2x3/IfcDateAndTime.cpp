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
#include <ifc2x3/IfcDateAndTime.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDateAndTime::IfcDateAndTime(Step::SPFData *args) : Step::BaseObject(args) {
  m_dateComponent = NULL;
  m_timeComponent = NULL;
}


IfcDateAndTime::~IfcDateAndTime() {
}

bool IfcDateAndTime::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDateAndTime(this);
}

const char *IfcDateAndTime::type() {
  return "IfcDateAndTime";
}

Step::ClassType IfcDateAndTime::getClassType() {
  return IfcDateAndTime::s_type;
}

Step::ClassType IfcDateAndTime::getType() const {
  return IfcDateAndTime::s_type;
}

bool IfcDateAndTime::isOfType(Step::ClassType t) {
  return IfcDateAndTime::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcCalendarDate *IfcDateAndTime::getDateComponent() {
  if (Step::BaseObject::inited()) {
    return m_dateComponent.get();
  }
  else {
    return NULL;
  }
}

void IfcDateAndTime::setDateComponent(const Step::RefPtr< IfcCalendarDate > &value) {
  m_dateComponent = value;
}

IfcLocalTime *IfcDateAndTime::getTimeComponent() {
  if (Step::BaseObject::inited()) {
    return m_timeComponent.get();
  }
  else {
    return NULL;
  }
}

void IfcDateAndTime::setTimeComponent(const Step::RefPtr< IfcLocalTime > &value) {
  m_timeComponent = value;
}

void IfcDateAndTime::release() {
  m_dateComponent.release();
  m_timeComponent.release();
}

bool IfcDateAndTime::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dateComponent = NULL;
  }
  else {
    m_dateComponent = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeComponent = NULL;
  }
  else {
    m_timeComponent = static_cast< IfcLocalTime * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDateAndTime::s_type = new Step::ClassType_class("IfcDateAndTime");
IfcDateAndTime_Factory::IfcDateAndTime_Factory() {
}

IfcDateAndTime_Factory::~IfcDateAndTime_Factory() {
  clear(true);
}

void IfcDateAndTime_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDateAndTime_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDateAndTime_Factory::end() {
  return m_idMap.end();
}

IfcDateAndTime *IfcDateAndTime_Factory::get(Step::StepId id) {
  IfcDateAndTime *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDateAndTime * > (it->second);
  }
  else {
    LOG_ERROR("IfcDateAndTime_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDateAndTime * > (create(id));
  }
}

Step::BaseObject *IfcDateAndTime_Factory::create(Step::StepId id) {
  IfcDateAndTime *ret = new IfcDateAndTime(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDateAndTime_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDateAndTime *ret = new IfcDateAndTime(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDateAndTime_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDateAndTime *ret = new IfcDateAndTime(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDateAndTime *IfcDateAndTime_Factory::generate() {
  return static_cast< IfcDateAndTime * > (create(m_model->getNewId()));
}

IfcDateAndTime *IfcDateAndTime_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDateAndTime * > (it->second);
  }
  else {
    return NULL;
  }
}

