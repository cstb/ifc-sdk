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
#include <ifc2x3/IfcCostValue.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCostValue::IfcCostValue(Step::SPFData *args) : IfcAppliedValue(args) {
  m_costType = getUnset(m_costType);
  m_condition = getUnset(m_condition);
}


IfcCostValue::~IfcCostValue() {
}

bool IfcCostValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCostValue(this);
}

const char *IfcCostValue::type() {
  return "IfcCostValue";
}

Step::ClassType IfcCostValue::getClassType() {
  return IfcCostValue::s_type;
}

Step::ClassType IfcCostValue::getType() const {
  return IfcCostValue::s_type;
}

bool IfcCostValue::isOfType(Step::ClassType t) {
  return IfcCostValue::s_type == t ? true : IfcAppliedValue::isOfType(t);
}

IfcLabel IfcCostValue::getCostType() {
  if (Step::BaseObject::inited()) {
    return m_costType;
  }
  else {
    return getUnset(m_costType);
  }
}

void IfcCostValue::setCostType(const IfcLabel &value) {
  m_costType = value;
}

IfcText IfcCostValue::getCondition() {
  if (Step::BaseObject::inited()) {
    return m_condition;
  }
  else {
    return getUnset(m_condition);
  }
}

void IfcCostValue::setCondition(const IfcText &value) {
  m_condition = value;
}

void IfcCostValue::release() {
  IfcAppliedValue::release();
}

bool IfcCostValue::init() {
  bool status = IfcAppliedValue::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_costType = getUnset(m_costType);
  }
  else {
    m_costType = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_condition = getUnset(m_condition);
  }
  else {
    m_condition = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCostValue::s_type = new Step::ClassType_class("IfcCostValue");
IfcCostValue_Factory::IfcCostValue_Factory() {
}

IfcCostValue_Factory::~IfcCostValue_Factory() {
  clear(true);
}

void IfcCostValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCostValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCostValue_Factory::end() {
  return m_idMap.end();
}

IfcCostValue *IfcCostValue_Factory::get(Step::StepId id) {
  IfcCostValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCostValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcCostValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCostValue * > (create(id));
  }
}

Step::BaseObject *IfcCostValue_Factory::create(Step::StepId id) {
  IfcCostValue *ret = new IfcCostValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCostValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCostValue *ret = new IfcCostValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCostValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCostValue *ret = new IfcCostValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCostValue *IfcCostValue_Factory::generate() {
  return static_cast< IfcCostValue * > (create(m_model->getNewId()));
}

IfcCostValue *IfcCostValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCostValue * > (it->second);
  }
  else {
    return NULL;
  }
}

