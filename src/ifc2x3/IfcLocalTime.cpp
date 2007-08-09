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
#include <ifc2x3/IfcLocalTime.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLocalTime::IfcLocalTime(Step::SPFData *args) : Step::BaseObject(args) {
  m_hourComponent = getUnset(m_hourComponent);
  m_minuteComponent = getUnset(m_minuteComponent);
  m_secondComponent = getUnset(m_secondComponent);
  m_zone = NULL;
  m_daylightSavingOffset = getUnset(m_daylightSavingOffset);
}


IfcLocalTime::~IfcLocalTime() {
}

bool IfcLocalTime::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLocalTime(this);
}

const char *IfcLocalTime::type() {
  return "IfcLocalTime";
}

Step::ClassType IfcLocalTime::getClassType() {
  return IfcLocalTime::s_type;
}

Step::ClassType IfcLocalTime::getType() const {
  return IfcLocalTime::s_type;
}

bool IfcLocalTime::isOfType(Step::ClassType t) {
  return IfcLocalTime::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcHourInDay IfcLocalTime::getHourComponent() {
  if (Step::BaseObject::inited()) {
    return m_hourComponent;
  }
  else {
    return getUnset(m_hourComponent);
  }
}

void IfcLocalTime::setHourComponent(IfcHourInDay value) {
  m_hourComponent = value;
}

IfcMinuteInHour IfcLocalTime::getMinuteComponent() {
  if (Step::BaseObject::inited()) {
    return m_minuteComponent;
  }
  else {
    return getUnset(m_minuteComponent);
  }
}

void IfcLocalTime::setMinuteComponent(IfcMinuteInHour value) {
  m_minuteComponent = value;
}

IfcSecondInMinute IfcLocalTime::getSecondComponent() {
  if (Step::BaseObject::inited()) {
    return m_secondComponent;
  }
  else {
    return getUnset(m_secondComponent);
  }
}

void IfcLocalTime::setSecondComponent(IfcSecondInMinute value) {
  m_secondComponent = value;
}

IfcCoordinatedUniversalTimeOffset *IfcLocalTime::getZone() {
  if (Step::BaseObject::inited()) {
    return m_zone.get();
  }
  else {
    return NULL;
  }
}

void IfcLocalTime::setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value) {
  m_zone = value;
}

IfcDaylightSavingHour IfcLocalTime::getDaylightSavingOffset() {
  if (Step::BaseObject::inited()) {
    return m_daylightSavingOffset;
  }
  else {
    return getUnset(m_daylightSavingOffset);
  }
}

void IfcLocalTime::setDaylightSavingOffset(IfcDaylightSavingHour value) {
  m_daylightSavingOffset = value;
}

void IfcLocalTime::release() {
  m_zone.release();
}

bool IfcLocalTime::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hourComponent = getUnset(m_hourComponent);
  }
  else {
    m_hourComponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minuteComponent = getUnset(m_minuteComponent);
  }
  else {
    m_minuteComponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_secondComponent = getUnset(m_secondComponent);
  }
  else {
    m_secondComponent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_zone = NULL;
  }
  else {
    m_zone = static_cast< IfcCoordinatedUniversalTimeOffset * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_daylightSavingOffset = getUnset(m_daylightSavingOffset);
  }
  else {
    m_daylightSavingOffset = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLocalTime::s_type = new Step::ClassType_class("IfcLocalTime");
IfcLocalTime_Factory::IfcLocalTime_Factory() {
}

IfcLocalTime_Factory::~IfcLocalTime_Factory() {
  clear(true);
}

void IfcLocalTime_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLocalTime_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLocalTime_Factory::end() {
  return m_idMap.end();
}

IfcLocalTime *IfcLocalTime_Factory::get(Step::StepId id) {
  IfcLocalTime *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLocalTime * > (it->second);
  }
  else {
    LOG_ERROR("IfcLocalTime_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLocalTime * > (create(id));
  }
}

Step::BaseObject *IfcLocalTime_Factory::create(Step::StepId id) {
  IfcLocalTime *ret = new IfcLocalTime(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLocalTime_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLocalTime *ret = new IfcLocalTime(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLocalTime_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLocalTime *ret = new IfcLocalTime(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLocalTime *IfcLocalTime_Factory::generate() {
  return static_cast< IfcLocalTime * > (create(m_model->getNewId()));
}

IfcLocalTime *IfcLocalTime_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLocalTime * > (it->second);
  }
  else {
    return NULL;
  }
}

