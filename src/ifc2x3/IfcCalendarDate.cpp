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
#include <ifc2x3/IfcCalendarDate.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCalendarDate::IfcCalendarDate(Step::SPFData *args) : Step::BaseObject(args) {
  m_dayComponent = getUnset(m_dayComponent);
  m_monthComponent = getUnset(m_monthComponent);
  m_yearComponent = getUnset(m_yearComponent);
}


IfcCalendarDate::~IfcCalendarDate() {
}

bool IfcCalendarDate::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCalendarDate(this);
}

const char *IfcCalendarDate::type() {
  return "IfcCalendarDate";
}

Step::ClassType IfcCalendarDate::getClassType() {
  return IfcCalendarDate::s_type;
}

Step::ClassType IfcCalendarDate::getType() const {
  return IfcCalendarDate::s_type;
}

bool IfcCalendarDate::isOfType(Step::ClassType t) {
  return IfcCalendarDate::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDayInMonthNumber IfcCalendarDate::getDayComponent() {
  if (Step::BaseObject::inited()) {
    return m_dayComponent;
  }
  else {
    return getUnset(m_dayComponent);
  }
}

void IfcCalendarDate::setDayComponent(IfcDayInMonthNumber value) {
  m_dayComponent = value;
}

IfcMonthInYearNumber IfcCalendarDate::getMonthComponent() {
  if (Step::BaseObject::inited()) {
    return m_monthComponent;
  }
  else {
    return getUnset(m_monthComponent);
  }
}

void IfcCalendarDate::setMonthComponent(IfcMonthInYearNumber value) {
  m_monthComponent = value;
}

IfcYearNumber IfcCalendarDate::getYearComponent() {
  if (Step::BaseObject::inited()) {
    return m_yearComponent;
  }
  else {
    return getUnset(m_yearComponent);
  }
}

void IfcCalendarDate::setYearComponent(IfcYearNumber value) {
  m_yearComponent = value;
}

void IfcCalendarDate::release() {
}

bool IfcCalendarDate::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dayComponent = getUnset(m_dayComponent);
  }
  else {
    m_dayComponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_monthComponent = getUnset(m_monthComponent);
  }
  else {
    m_monthComponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yearComponent = getUnset(m_yearComponent);
  }
  else {
    m_yearComponent = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCalendarDate::s_type = new Step::ClassType_class("IfcCalendarDate");
IfcCalendarDate_Factory::IfcCalendarDate_Factory() {
}

IfcCalendarDate_Factory::~IfcCalendarDate_Factory() {
  clear(true);
}

void IfcCalendarDate_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCalendarDate_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCalendarDate_Factory::end() {
  return m_idMap.end();
}

IfcCalendarDate *IfcCalendarDate_Factory::get(Step::StepId id) {
  IfcCalendarDate *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCalendarDate * > (it->second);
  }
  else {
    LOG_ERROR("IfcCalendarDate_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCalendarDate * > (create(id));
  }
}

Step::BaseObject *IfcCalendarDate_Factory::create(Step::StepId id) {
  IfcCalendarDate *ret = new IfcCalendarDate(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCalendarDate_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCalendarDate *ret = new IfcCalendarDate(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCalendarDate_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCalendarDate *ret = new IfcCalendarDate(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCalendarDate *IfcCalendarDate_Factory::generate() {
  return static_cast< IfcCalendarDate * > (create(m_model->getNewId()));
}

IfcCalendarDate *IfcCalendarDate_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCalendarDate * > (it->second);
  }
  else {
    return NULL;
  }
}

