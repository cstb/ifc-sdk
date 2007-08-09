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
#include <ifc2x3/IfcQuantityTime.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcQuantityTime::IfcQuantityTime(Step::SPFData *args) : IfcPhysicalSimpleQuantity(args) {
  m_timeValue = getUnset(m_timeValue);
}


IfcQuantityTime::~IfcQuantityTime() {
}

bool IfcQuantityTime::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcQuantityTime(this);
}

const char *IfcQuantityTime::type() {
  return "IfcQuantityTime";
}

Step::ClassType IfcQuantityTime::getClassType() {
  return IfcQuantityTime::s_type;
}

Step::ClassType IfcQuantityTime::getType() const {
  return IfcQuantityTime::s_type;
}

bool IfcQuantityTime::isOfType(Step::ClassType t) {
  return IfcQuantityTime::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcTimeMeasure IfcQuantityTime::getTimeValue() {
  if (Step::BaseObject::inited()) {
    return m_timeValue;
  }
  else {
    return getUnset(m_timeValue);
  }
}

void IfcQuantityTime::setTimeValue(IfcTimeMeasure value) {
  m_timeValue = value;
}

void IfcQuantityTime::release() {
  IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityTime::init() {
  bool status = IfcPhysicalSimpleQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeValue = getUnset(m_timeValue);
  }
  else {
    m_timeValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityTime::s_type = new Step::ClassType_class("IfcQuantityTime");
IfcQuantityTime_Factory::IfcQuantityTime_Factory() {
}

IfcQuantityTime_Factory::~IfcQuantityTime_Factory() {
  clear(true);
}

void IfcQuantityTime_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityTime_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityTime_Factory::end() {
  return m_idMap.end();
}

IfcQuantityTime *IfcQuantityTime_Factory::get(Step::StepId id) {
  IfcQuantityTime *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcQuantityTime * > (it->second);
  }
  else {
    LOG_ERROR("IfcQuantityTime_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcQuantityTime * > (create(id));
  }
}

Step::BaseObject *IfcQuantityTime_Factory::create(Step::StepId id) {
  IfcQuantityTime *ret = new IfcQuantityTime(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityTime_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcQuantityTime *ret = new IfcQuantityTime(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityTime_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcQuantityTime *ret = new IfcQuantityTime(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcQuantityTime *IfcQuantityTime_Factory::generate() {
  return static_cast< IfcQuantityTime * > (create(m_model->getNewId()));
}

IfcQuantityTime *IfcQuantityTime_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcQuantityTime * > (it->second);
  }
  else {
    return NULL;
  }
}

