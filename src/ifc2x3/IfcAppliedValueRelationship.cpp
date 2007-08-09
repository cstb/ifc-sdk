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
#include <ifc2x3/IfcAppliedValueRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAppliedValueRelationship::IfcAppliedValueRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_componentOfTotal = NULL;
  m_components.setUnset(true);
  m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
}


IfcAppliedValueRelationship::~IfcAppliedValueRelationship() {
}

bool IfcAppliedValueRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAppliedValueRelationship(this);
}

const char *IfcAppliedValueRelationship::type() {
  return "IfcAppliedValueRelationship";
}

Step::ClassType IfcAppliedValueRelationship::getClassType() {
  return IfcAppliedValueRelationship::s_type;
}

Step::ClassType IfcAppliedValueRelationship::getType() const {
  return IfcAppliedValueRelationship::s_type;
}

bool IfcAppliedValueRelationship::isOfType(Step::ClassType t) {
  return IfcAppliedValueRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAppliedValue *IfcAppliedValueRelationship::getComponentOfTotal() {
  if (Step::BaseObject::inited()) {
    return m_componentOfTotal.get();
  }
  else {
    return NULL;
  }
}

void IfcAppliedValueRelationship::setComponentOfTotal(const Step::RefPtr< IfcAppliedValue > &value) {
  m_componentOfTotal = value;
}

Step::StepSet< Step::RefPtr< IfcAppliedValue > > &IfcAppliedValueRelationship::getComponents() {
  if (Step::BaseObject::inited()) {
    return m_components;
  }
  else {
    m_components.setUnset(true);
    return m_components;
  }
}

void IfcAppliedValueRelationship::setComponents(const Step::StepSet< Step::RefPtr< IfcAppliedValue > > &value) {
  m_components = value;
}

IfcArithmeticOperatorEnum IfcAppliedValueRelationship::getArithmeticOperator() {
  if (Step::BaseObject::inited()) {
    return m_arithmeticOperator;
  }
  else {
    return IfcArithmeticOperatorEnum_UNSET;
  }
}

void IfcAppliedValueRelationship::setArithmeticOperator(IfcArithmeticOperatorEnum value) {
  m_arithmeticOperator = value;
}

IfcLabel IfcAppliedValueRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcAppliedValueRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcAppliedValueRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcAppliedValueRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

void IfcAppliedValueRelationship::release() {
  m_componentOfTotal.release();
  m_components.clear();
}

bool IfcAppliedValueRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_componentOfTotal = NULL;
  }
  else {
    m_componentOfTotal = static_cast< IfcAppliedValue * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_components.setUnset(true);
  }
  else {
    m_components.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcAppliedValue > attr2;
        attr2 = static_cast< IfcAppliedValue * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_components.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
  }
  else {
    if (arg == ".ADD.") {
      m_arithmeticOperator = IfcArithmeticOperatorEnum_ADD;
    }
    else if (arg == ".DIVIDE.") {
      m_arithmeticOperator = IfcArithmeticOperatorEnum_DIVIDE;
    }
    else if (arg == ".MULTIPLY.") {
      m_arithmeticOperator = IfcArithmeticOperatorEnum_MULTIPLY;
    }
    else if (arg == ".SUBTRACT.") {
      m_arithmeticOperator = IfcArithmeticOperatorEnum_SUBTRACT;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAppliedValueRelationship::s_type = new Step::ClassType_class("IfcAppliedValueRelationship");
IfcAppliedValueRelationship_Factory::IfcAppliedValueRelationship_Factory() {
}

IfcAppliedValueRelationship_Factory::~IfcAppliedValueRelationship_Factory() {
  clear(true);
}

void IfcAppliedValueRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAppliedValueRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAppliedValueRelationship_Factory::end() {
  return m_idMap.end();
}

IfcAppliedValueRelationship *IfcAppliedValueRelationship_Factory::get(Step::StepId id) {
  IfcAppliedValueRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAppliedValueRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcAppliedValueRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAppliedValueRelationship * > (create(id));
  }
}

Step::BaseObject *IfcAppliedValueRelationship_Factory::create(Step::StepId id) {
  IfcAppliedValueRelationship *ret = new IfcAppliedValueRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAppliedValueRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAppliedValueRelationship *ret = new IfcAppliedValueRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAppliedValueRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAppliedValueRelationship *ret = new IfcAppliedValueRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAppliedValueRelationship *IfcAppliedValueRelationship_Factory::generate() {
  return static_cast< IfcAppliedValueRelationship * > (create(m_model->getNewId()));
}

IfcAppliedValueRelationship *IfcAppliedValueRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAppliedValueRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

