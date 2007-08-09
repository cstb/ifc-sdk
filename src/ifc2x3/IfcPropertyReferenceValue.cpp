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
#include <ifc2x3/IfcPropertyReferenceValue.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObjectReferenceSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertyReferenceValue::IfcPropertyReferenceValue(Step::SPFData *args) : IfcSimpleProperty(args) {
  m_usageName = getUnset(m_usageName);
  m_propertyReference = NULL;
}


IfcPropertyReferenceValue::~IfcPropertyReferenceValue() {
}

bool IfcPropertyReferenceValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertyReferenceValue(this);
}

const char *IfcPropertyReferenceValue::type() {
  return "IfcPropertyReferenceValue";
}

Step::ClassType IfcPropertyReferenceValue::getClassType() {
  return IfcPropertyReferenceValue::s_type;
}

Step::ClassType IfcPropertyReferenceValue::getType() const {
  return IfcPropertyReferenceValue::s_type;
}

bool IfcPropertyReferenceValue::isOfType(Step::ClassType t) {
  return IfcPropertyReferenceValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

IfcLabel IfcPropertyReferenceValue::getUsageName() {
  if (Step::BaseObject::inited()) {
    return m_usageName;
  }
  else {
    return getUnset(m_usageName);
  }
}

void IfcPropertyReferenceValue::setUsageName(const IfcLabel &value) {
  m_usageName = value;
}

IfcObjectReferenceSelect *IfcPropertyReferenceValue::getPropertyReference() {
  if (Step::BaseObject::inited()) {
    return m_propertyReference.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyReferenceValue::setPropertyReference(const Step::RefPtr< IfcObjectReferenceSelect > &value) {
  m_propertyReference = value;
}

void IfcPropertyReferenceValue::release() {
  IfcSimpleProperty::release();
}

bool IfcPropertyReferenceValue::init() {
  bool status = IfcSimpleProperty::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_usageName = getUnset(m_usageName);
  }
  else {
    m_usageName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_propertyReference = NULL;
  }
  else {
    m_propertyReference = new IfcObjectReferenceSelect;
    if (arg[0] == '#') {
      m_propertyReference->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyReferenceValue::s_type = new Step::ClassType_class("IfcPropertyReferenceValue");
IfcPropertyReferenceValue_Factory::IfcPropertyReferenceValue_Factory() {
}

IfcPropertyReferenceValue_Factory::~IfcPropertyReferenceValue_Factory() {
  clear(true);
}

void IfcPropertyReferenceValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyReferenceValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyReferenceValue_Factory::end() {
  return m_idMap.end();
}

IfcPropertyReferenceValue *IfcPropertyReferenceValue_Factory::get(Step::StepId id) {
  IfcPropertyReferenceValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertyReferenceValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertyReferenceValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertyReferenceValue * > (create(id));
  }
}

Step::BaseObject *IfcPropertyReferenceValue_Factory::create(Step::StepId id) {
  IfcPropertyReferenceValue *ret = new IfcPropertyReferenceValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyReferenceValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertyReferenceValue *ret = new IfcPropertyReferenceValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyReferenceValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertyReferenceValue *ret = new IfcPropertyReferenceValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertyReferenceValue *IfcPropertyReferenceValue_Factory::generate() {
  return static_cast< IfcPropertyReferenceValue * > (create(m_model->getNewId()));
}

IfcPropertyReferenceValue *IfcPropertyReferenceValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertyReferenceValue * > (it->second);
  }
  else {
    return NULL;
  }
}

