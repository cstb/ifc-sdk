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
#include <ifc2x3/IfcEnergyProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEnergyProperties::IfcEnergyProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_energySequence = IfcEnergySequenceEnum_UNSET;
  m_userDefinedEnergySequence = getUnset(m_userDefinedEnergySequence);
}


IfcEnergyProperties::~IfcEnergyProperties() {
}

bool IfcEnergyProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEnergyProperties(this);
}

const char *IfcEnergyProperties::type() {
  return "IfcEnergyProperties";
}

Step::ClassType IfcEnergyProperties::getClassType() {
  return IfcEnergyProperties::s_type;
}

Step::ClassType IfcEnergyProperties::getType() const {
  return IfcEnergyProperties::s_type;
}

bool IfcEnergyProperties::isOfType(Step::ClassType t) {
  return IfcEnergyProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcEnergySequenceEnum IfcEnergyProperties::getEnergySequence() {
  if (Step::BaseObject::inited()) {
    return m_energySequence;
  }
  else {
    return IfcEnergySequenceEnum_UNSET;
  }
}

void IfcEnergyProperties::setEnergySequence(IfcEnergySequenceEnum value) {
  m_energySequence = value;
}

IfcLabel IfcEnergyProperties::getUserDefinedEnergySequence() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedEnergySequence;
  }
  else {
    return getUnset(m_userDefinedEnergySequence);
  }
}

void IfcEnergyProperties::setUserDefinedEnergySequence(const IfcLabel &value) {
  m_userDefinedEnergySequence = value;
}

void IfcEnergyProperties::release() {
  IfcPropertySetDefinition::release();
}

bool IfcEnergyProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_energySequence = IfcEnergySequenceEnum_UNSET;
  }
  else {
    if (arg == ".PRIMARY.") {
      m_energySequence = IfcEnergySequenceEnum_PRIMARY;
    }
    else if (arg == ".SECONDARY.") {
      m_energySequence = IfcEnergySequenceEnum_SECONDARY;
    }
    else if (arg == ".TERTIARY.") {
      m_energySequence = IfcEnergySequenceEnum_TERTIARY;
    }
    else if (arg == ".AUXILIARY.") {
      m_energySequence = IfcEnergySequenceEnum_AUXILIARY;
    }
    else if (arg == ".USERDEFINED.") {
      m_energySequence = IfcEnergySequenceEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_energySequence = IfcEnergySequenceEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedEnergySequence = getUnset(m_userDefinedEnergySequence);
  }
  else {
    m_userDefinedEnergySequence = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnergyProperties::s_type = new Step::ClassType_class("IfcEnergyProperties");
IfcEnergyProperties_Factory::IfcEnergyProperties_Factory() {
}

IfcEnergyProperties_Factory::~IfcEnergyProperties_Factory() {
  clear(true);
}

void IfcEnergyProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEnergyProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEnergyProperties_Factory::end() {
  return m_idMap.end();
}

IfcEnergyProperties *IfcEnergyProperties_Factory::get(Step::StepId id) {
  IfcEnergyProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEnergyProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcEnergyProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEnergyProperties * > (create(id));
  }
}

Step::BaseObject *IfcEnergyProperties_Factory::create(Step::StepId id) {
  IfcEnergyProperties *ret = new IfcEnergyProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEnergyProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEnergyProperties *ret = new IfcEnergyProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEnergyProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEnergyProperties *ret = new IfcEnergyProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEnergyProperties *IfcEnergyProperties_Factory::generate() {
  return static_cast< IfcEnergyProperties * > (create(m_model->getNewId()));
}

IfcEnergyProperties *IfcEnergyProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEnergyProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

