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
#include <ifc2x3/IfcComplexProperty.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcComplexProperty::IfcComplexProperty(Step::SPFData *args) : IfcProperty(args) {
  m_usageName = getUnset(m_usageName);
  m_hasProperties.setUnset(true);
}


IfcComplexProperty::~IfcComplexProperty() {
}

bool IfcComplexProperty::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcComplexProperty(this);
}

const char *IfcComplexProperty::type() {
  return "IfcComplexProperty";
}

Step::ClassType IfcComplexProperty::getClassType() {
  return IfcComplexProperty::s_type;
}

Step::ClassType IfcComplexProperty::getType() const {
  return IfcComplexProperty::s_type;
}

bool IfcComplexProperty::isOfType(Step::ClassType t) {
  return IfcComplexProperty::s_type == t ? true : IfcProperty::isOfType(t);
}

IfcIdentifier IfcComplexProperty::getUsageName() {
  if (Step::BaseObject::inited()) {
    return m_usageName;
  }
  else {
    return getUnset(m_usageName);
  }
}

void IfcComplexProperty::setUsageName(const IfcIdentifier &value) {
  m_usageName = value;
}

Step::StepSet< Step::RefPtr< IfcProperty > > &IfcComplexProperty::getHasProperties() {
  if (Step::BaseObject::inited()) {
    return m_hasProperties;
  }
  else {
    m_hasProperties.setUnset(true);
    return m_hasProperties;
  }
}

void IfcComplexProperty::setHasProperties(const Step::StepSet< Step::RefPtr< IfcProperty > > &value) {
  m_hasProperties = value;
}

void IfcComplexProperty::release() {
  IfcProperty::release();
  m_hasProperties.clear();
}

bool IfcComplexProperty::init() {
  bool status = IfcProperty::init();
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
    m_hasProperties.setUnset(true);
  }
  else {
    m_hasProperties.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProperty > attr2;
        attr2 = static_cast< IfcProperty * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_hasProperties.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcComplexProperty::s_type = new Step::ClassType_class("IfcComplexProperty");
IfcComplexProperty_Factory::IfcComplexProperty_Factory() {
}

IfcComplexProperty_Factory::~IfcComplexProperty_Factory() {
  clear(true);
}

void IfcComplexProperty_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcComplexProperty_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcComplexProperty_Factory::end() {
  return m_idMap.end();
}

IfcComplexProperty *IfcComplexProperty_Factory::get(Step::StepId id) {
  IfcComplexProperty *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcComplexProperty * > (it->second);
  }
  else {
    LOG_ERROR("IfcComplexProperty_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcComplexProperty * > (create(id));
  }
}

Step::BaseObject *IfcComplexProperty_Factory::create(Step::StepId id) {
  IfcComplexProperty *ret = new IfcComplexProperty(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcComplexProperty_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcComplexProperty *ret = new IfcComplexProperty(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcComplexProperty_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcComplexProperty *ret = new IfcComplexProperty(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcComplexProperty *IfcComplexProperty_Factory::generate() {
  return static_cast< IfcComplexProperty * > (create(m_model->getNewId()));
}

IfcComplexProperty *IfcComplexProperty_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcComplexProperty * > (it->second);
  }
  else {
    return NULL;
  }
}

