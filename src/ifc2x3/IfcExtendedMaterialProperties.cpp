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
#include <ifc2x3/IfcExtendedMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcExtendedMaterialProperties::IfcExtendedMaterialProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_extendedProperties.setUnset(true);
  m_description = getUnset(m_description);
  m_name = getUnset(m_name);
}


IfcExtendedMaterialProperties::~IfcExtendedMaterialProperties() {
}

bool IfcExtendedMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcExtendedMaterialProperties(this);
}

const char *IfcExtendedMaterialProperties::type() {
  return "IfcExtendedMaterialProperties";
}

Step::ClassType IfcExtendedMaterialProperties::getClassType() {
  return IfcExtendedMaterialProperties::s_type;
}

Step::ClassType IfcExtendedMaterialProperties::getType() const {
  return IfcExtendedMaterialProperties::s_type;
}

bool IfcExtendedMaterialProperties::isOfType(Step::ClassType t) {
  return IfcExtendedMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProperty > > &IfcExtendedMaterialProperties::getExtendedProperties() {
  if (Step::BaseObject::inited()) {
    return m_extendedProperties;
  }
  else {
    m_extendedProperties.setUnset(true);
    return m_extendedProperties;
  }
}

void IfcExtendedMaterialProperties::setExtendedProperties(const Step::StepSet< Step::RefPtr< IfcProperty > > &value) {
  m_extendedProperties = value;
}

IfcText IfcExtendedMaterialProperties::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcExtendedMaterialProperties::setDescription(const IfcText &value) {
  m_description = value;
}

IfcLabel IfcExtendedMaterialProperties::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcExtendedMaterialProperties::setName(const IfcLabel &value) {
  m_name = value;
}

void IfcExtendedMaterialProperties::release() {
  IfcMaterialProperties::release();
  m_extendedProperties.clear();
}

bool IfcExtendedMaterialProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_extendedProperties.setUnset(true);
  }
  else {
    m_extendedProperties.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProperty > attr2;
        attr2 = static_cast< IfcProperty * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_extendedProperties.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcExtendedMaterialProperties::s_type = new Step::ClassType_class("IfcExtendedMaterialProperties");
IfcExtendedMaterialProperties_Factory::IfcExtendedMaterialProperties_Factory() {
}

IfcExtendedMaterialProperties_Factory::~IfcExtendedMaterialProperties_Factory() {
  clear(true);
}

void IfcExtendedMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExtendedMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExtendedMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcExtendedMaterialProperties *IfcExtendedMaterialProperties_Factory::get(Step::StepId id) {
  IfcExtendedMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcExtendedMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcExtendedMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcExtendedMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcExtendedMaterialProperties_Factory::create(Step::StepId id) {
  IfcExtendedMaterialProperties *ret = new IfcExtendedMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcExtendedMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcExtendedMaterialProperties *ret = new IfcExtendedMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcExtendedMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcExtendedMaterialProperties *ret = new IfcExtendedMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcExtendedMaterialProperties *IfcExtendedMaterialProperties_Factory::generate() {
  return static_cast< IfcExtendedMaterialProperties * > (create(m_model->getNewId()));
}

IfcExtendedMaterialProperties *IfcExtendedMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcExtendedMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

