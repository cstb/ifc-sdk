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
#include <ifc2x3/IfcReinforcementDefinitionProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSectionReinforcementProperties.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcReinforcementDefinitionProperties::IfcReinforcementDefinitionProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_definitionType = getUnset(m_definitionType);
  m_reinforcementSectionDefinitions.setUnset(true);
}


IfcReinforcementDefinitionProperties::~IfcReinforcementDefinitionProperties() {
}

bool IfcReinforcementDefinitionProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcReinforcementDefinitionProperties(this);
}

const char *IfcReinforcementDefinitionProperties::type() {
  return "IfcReinforcementDefinitionProperties";
}

Step::ClassType IfcReinforcementDefinitionProperties::getClassType() {
  return IfcReinforcementDefinitionProperties::s_type;
}

Step::ClassType IfcReinforcementDefinitionProperties::getType() const {
  return IfcReinforcementDefinitionProperties::s_type;
}

bool IfcReinforcementDefinitionProperties::isOfType(Step::ClassType t) {
  return IfcReinforcementDefinitionProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcLabel IfcReinforcementDefinitionProperties::getDefinitionType() {
  if (Step::BaseObject::inited()) {
    return m_definitionType;
  }
  else {
    return getUnset(m_definitionType);
  }
}

void IfcReinforcementDefinitionProperties::setDefinitionType(const IfcLabel &value) {
  m_definitionType = value;
}

Step::StepList< Step::RefPtr< IfcSectionReinforcementProperties > > &IfcReinforcementDefinitionProperties::getReinforcementSectionDefinitions() {
  if (Step::BaseObject::inited()) {
    return m_reinforcementSectionDefinitions;
  }
  else {
    m_reinforcementSectionDefinitions.setUnset(true);
    return m_reinforcementSectionDefinitions;
  }
}

void IfcReinforcementDefinitionProperties::setReinforcementSectionDefinitions(const Step::StepList< Step::RefPtr< IfcSectionReinforcementProperties > > &value) {
  m_reinforcementSectionDefinitions = value;
}

void IfcReinforcementDefinitionProperties::release() {
  IfcPropertySetDefinition::release();
  m_reinforcementSectionDefinitions.clear();
}

bool IfcReinforcementDefinitionProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_definitionType = getUnset(m_definitionType);
  }
  else {
    m_definitionType = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_reinforcementSectionDefinitions.setUnset(true);
  }
  else {
    m_reinforcementSectionDefinitions.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcSectionReinforcementProperties > attr2;
        attr2 = static_cast< IfcSectionReinforcementProperties * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_reinforcementSectionDefinitions.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcementDefinitionProperties::s_type = new Step::ClassType_class("IfcReinforcementDefinitionProperties");
IfcReinforcementDefinitionProperties_Factory::IfcReinforcementDefinitionProperties_Factory() {
}

IfcReinforcementDefinitionProperties_Factory::~IfcReinforcementDefinitionProperties_Factory() {
  clear(true);
}

void IfcReinforcementDefinitionProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcementDefinitionProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcementDefinitionProperties_Factory::end() {
  return m_idMap.end();
}

IfcReinforcementDefinitionProperties *IfcReinforcementDefinitionProperties_Factory::get(Step::StepId id) {
  IfcReinforcementDefinitionProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcReinforcementDefinitionProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcReinforcementDefinitionProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcReinforcementDefinitionProperties * > (create(id));
  }
}

Step::BaseObject *IfcReinforcementDefinitionProperties_Factory::create(Step::StepId id) {
  IfcReinforcementDefinitionProperties *ret = new IfcReinforcementDefinitionProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcementDefinitionProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcReinforcementDefinitionProperties *ret = new IfcReinforcementDefinitionProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcementDefinitionProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcReinforcementDefinitionProperties *ret = new IfcReinforcementDefinitionProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcReinforcementDefinitionProperties *IfcReinforcementDefinitionProperties_Factory::generate() {
  return static_cast< IfcReinforcementDefinitionProperties * > (create(m_model->getNewId()));
}

IfcReinforcementDefinitionProperties *IfcReinforcementDefinitionProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcReinforcementDefinitionProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

