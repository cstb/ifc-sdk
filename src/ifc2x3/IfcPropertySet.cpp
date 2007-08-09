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
#include <ifc2x3/IfcPropertySet.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertySet::IfcPropertySet(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_hasProperties.setUnset(true);
}


IfcPropertySet::~IfcPropertySet() {
}

bool IfcPropertySet::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertySet(this);
}

const char *IfcPropertySet::type() {
  return "IfcPropertySet";
}

Step::ClassType IfcPropertySet::getClassType() {
  return IfcPropertySet::s_type;
}

Step::ClassType IfcPropertySet::getType() const {
  return IfcPropertySet::s_type;
}

bool IfcPropertySet::isOfType(Step::ClassType t) {
  return IfcPropertySet::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProperty > > &IfcPropertySet::getHasProperties() {
  if (Step::BaseObject::inited()) {
    return m_hasProperties;
  }
  else {
    m_hasProperties.setUnset(true);
    return m_hasProperties;
  }
}

void IfcPropertySet::setHasProperties(const Step::StepSet< Step::RefPtr< IfcProperty > > &value) {
  m_hasProperties = value;
}

void IfcPropertySet::release() {
  IfcPropertySetDefinition::release();
  m_hasProperties.clear();
}

bool IfcPropertySet::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
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

IFC2X3_DLL_DEF Step::ClassType IfcPropertySet::s_type = new Step::ClassType_class("IfcPropertySet");
IfcPropertySet_Factory::IfcPropertySet_Factory() {
}

IfcPropertySet_Factory::~IfcPropertySet_Factory() {
  clear(true);
}

void IfcPropertySet_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertySet_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertySet_Factory::end() {
  return m_idMap.end();
}

IfcPropertySet *IfcPropertySet_Factory::get(Step::StepId id) {
  IfcPropertySet *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertySet * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertySet_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertySet * > (create(id));
  }
}

Step::BaseObject *IfcPropertySet_Factory::create(Step::StepId id) {
  IfcPropertySet *ret = new IfcPropertySet(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertySet_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertySet *ret = new IfcPropertySet(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertySet_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertySet *ret = new IfcPropertySet(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertySet *IfcPropertySet_Factory::generate() {
  return static_cast< IfcPropertySet * > (create(m_model->getNewId()));
}

IfcPropertySet *IfcPropertySet_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertySet * > (it->second);
  }
  else {
    return NULL;
  }
}

