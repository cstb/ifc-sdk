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
#include <ifc2x3/IfcSectionReinforcementProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcReinforcementBarProperties.h>
#include <ifc2x3/IfcSectionProperties.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSectionReinforcementProperties::IfcSectionReinforcementProperties(Step::SPFData *args) : Step::BaseObject(args) {
  m_longitudinalStartPosition = getUnset(m_longitudinalStartPosition);
  m_longitudinalEndPosition = getUnset(m_longitudinalEndPosition);
  m_transversePosition = getUnset(m_transversePosition);
  m_reinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
  m_sectionDefinition = NULL;
  m_crossSectionReinforcementDefinitions.setUnset(true);
}


IfcSectionReinforcementProperties::~IfcSectionReinforcementProperties() {
}

bool IfcSectionReinforcementProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSectionReinforcementProperties(this);
}

const char *IfcSectionReinforcementProperties::type() {
  return "IfcSectionReinforcementProperties";
}

Step::ClassType IfcSectionReinforcementProperties::getClassType() {
  return IfcSectionReinforcementProperties::s_type;
}

Step::ClassType IfcSectionReinforcementProperties::getType() const {
  return IfcSectionReinforcementProperties::s_type;
}

bool IfcSectionReinforcementProperties::isOfType(Step::ClassType t) {
  return IfcSectionReinforcementProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalStartPosition() {
  if (Step::BaseObject::inited()) {
    return m_longitudinalStartPosition;
  }
  else {
    return getUnset(m_longitudinalStartPosition);
  }
}

void IfcSectionReinforcementProperties::setLongitudinalStartPosition(IfcLengthMeasure value) {
  m_longitudinalStartPosition = value;
}

IfcLengthMeasure IfcSectionReinforcementProperties::getLongitudinalEndPosition() {
  if (Step::BaseObject::inited()) {
    return m_longitudinalEndPosition;
  }
  else {
    return getUnset(m_longitudinalEndPosition);
  }
}

void IfcSectionReinforcementProperties::setLongitudinalEndPosition(IfcLengthMeasure value) {
  m_longitudinalEndPosition = value;
}

IfcLengthMeasure IfcSectionReinforcementProperties::getTransversePosition() {
  if (Step::BaseObject::inited()) {
    return m_transversePosition;
  }
  else {
    return getUnset(m_transversePosition);
  }
}

void IfcSectionReinforcementProperties::setTransversePosition(IfcLengthMeasure value) {
  m_transversePosition = value;
}

IfcReinforcingBarRoleEnum IfcSectionReinforcementProperties::getReinforcementRole() {
  if (Step::BaseObject::inited()) {
    return m_reinforcementRole;
  }
  else {
    return IfcReinforcingBarRoleEnum_UNSET;
  }
}

void IfcSectionReinforcementProperties::setReinforcementRole(IfcReinforcingBarRoleEnum value) {
  m_reinforcementRole = value;
}

IfcSectionProperties *IfcSectionReinforcementProperties::getSectionDefinition() {
  if (Step::BaseObject::inited()) {
    return m_sectionDefinition.get();
  }
  else {
    return NULL;
  }
}

void IfcSectionReinforcementProperties::setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value) {
  m_sectionDefinition = value;
}

Step::StepSet< Step::RefPtr< IfcReinforcementBarProperties > > &IfcSectionReinforcementProperties::getCrossSectionReinforcementDefinitions() {
  if (Step::BaseObject::inited()) {
    return m_crossSectionReinforcementDefinitions;
  }
  else {
    m_crossSectionReinforcementDefinitions.setUnset(true);
    return m_crossSectionReinforcementDefinitions;
  }
}

void IfcSectionReinforcementProperties::setCrossSectionReinforcementDefinitions(const Step::StepSet< Step::RefPtr< IfcReinforcementBarProperties > > &value) {
  m_crossSectionReinforcementDefinitions = value;
}

void IfcSectionReinforcementProperties::release() {
  m_sectionDefinition.release();
  m_crossSectionReinforcementDefinitions.clear();
}

bool IfcSectionReinforcementProperties::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longitudinalStartPosition = getUnset(m_longitudinalStartPosition);
  }
  else {
    m_longitudinalStartPosition = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longitudinalEndPosition = getUnset(m_longitudinalEndPosition);
  }
  else {
    m_longitudinalEndPosition = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transversePosition = getUnset(m_transversePosition);
  }
  else {
    m_transversePosition = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_reinforcementRole = IfcReinforcingBarRoleEnum_UNSET;
  }
  else {
    if (arg == ".MAIN.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_MAIN;
    }
    else if (arg == ".SHEAR.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_SHEAR;
    }
    else if (arg == ".LIGATURE.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_LIGATURE;
    }
    else if (arg == ".STUD.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_STUD;
    }
    else if (arg == ".PUNCHING.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_PUNCHING;
    }
    else if (arg == ".EDGE.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_EDGE;
    }
    else if (arg == ".RING.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_RING;
    }
    else if (arg == ".USERDEFINED.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_reinforcementRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sectionDefinition = NULL;
  }
  else {
    m_sectionDefinition = static_cast< IfcSectionProperties * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_crossSectionReinforcementDefinitions.setUnset(true);
  }
  else {
    m_crossSectionReinforcementDefinitions.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcReinforcementBarProperties > attr2;
        attr2 = static_cast< IfcReinforcementBarProperties * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_crossSectionReinforcementDefinitions.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSectionReinforcementProperties::s_type = new Step::ClassType_class("IfcSectionReinforcementProperties");
IfcSectionReinforcementProperties_Factory::IfcSectionReinforcementProperties_Factory() {
}

IfcSectionReinforcementProperties_Factory::~IfcSectionReinforcementProperties_Factory() {
  clear(true);
}

void IfcSectionReinforcementProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSectionReinforcementProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSectionReinforcementProperties_Factory::end() {
  return m_idMap.end();
}

IfcSectionReinforcementProperties *IfcSectionReinforcementProperties_Factory::get(Step::StepId id) {
  IfcSectionReinforcementProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSectionReinforcementProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcSectionReinforcementProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSectionReinforcementProperties * > (create(id));
  }
}

Step::BaseObject *IfcSectionReinforcementProperties_Factory::create(Step::StepId id) {
  IfcSectionReinforcementProperties *ret = new IfcSectionReinforcementProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSectionReinforcementProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSectionReinforcementProperties *ret = new IfcSectionReinforcementProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSectionReinforcementProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSectionReinforcementProperties *ret = new IfcSectionReinforcementProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSectionReinforcementProperties *IfcSectionReinforcementProperties_Factory::generate() {
  return static_cast< IfcSectionReinforcementProperties * > (create(m_model->getNewId()));
}

IfcSectionReinforcementProperties *IfcSectionReinforcementProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSectionReinforcementProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

