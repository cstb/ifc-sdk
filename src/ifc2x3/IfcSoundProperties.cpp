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
#include <ifc2x3/IfcSoundProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSoundValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSoundProperties::IfcSoundProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_isAttenuating = getUnset(m_isAttenuating);
  m_soundScale = IfcSoundScaleEnum_UNSET;
  m_soundValues.setUnset(true);
}


IfcSoundProperties::~IfcSoundProperties() {
}

bool IfcSoundProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSoundProperties(this);
}

const char *IfcSoundProperties::type() {
  return "IfcSoundProperties";
}

Step::ClassType IfcSoundProperties::getClassType() {
  return IfcSoundProperties::s_type;
}

Step::ClassType IfcSoundProperties::getType() const {
  return IfcSoundProperties::s_type;
}

bool IfcSoundProperties::isOfType(Step::ClassType t) {
  return IfcSoundProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcBoolean IfcSoundProperties::getIsAttenuating() {
  if (Step::BaseObject::inited()) {
    return m_isAttenuating;
  }
  else {
    return getUnset(m_isAttenuating);
  }
}

void IfcSoundProperties::setIsAttenuating(IfcBoolean value) {
  m_isAttenuating = value;
}

IfcSoundScaleEnum IfcSoundProperties::getSoundScale() {
  if (Step::BaseObject::inited()) {
    return m_soundScale;
  }
  else {
    return IfcSoundScaleEnum_UNSET;
  }
}

void IfcSoundProperties::setSoundScale(IfcSoundScaleEnum value) {
  m_soundScale = value;
}

Step::StepList< Step::RefPtr< IfcSoundValue > > &IfcSoundProperties::getSoundValues() {
  if (Step::BaseObject::inited()) {
    return m_soundValues;
  }
  else {
    m_soundValues.setUnset(true);
    return m_soundValues;
  }
}

void IfcSoundProperties::setSoundValues(const Step::StepList< Step::RefPtr< IfcSoundValue > > &value) {
  m_soundValues = value;
}

void IfcSoundProperties::release() {
  IfcPropertySetDefinition::release();
  m_soundValues.clear();
}

bool IfcSoundProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isAttenuating = getUnset(m_isAttenuating);
  }
  else {
    m_isAttenuating = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_soundScale = IfcSoundScaleEnum_UNSET;
  }
  else {
    if (arg == ".DBA.") {
      m_soundScale = IfcSoundScaleEnum_DBA;
    }
    else if (arg == ".DBB.") {
      m_soundScale = IfcSoundScaleEnum_DBB;
    }
    else if (arg == ".DBC.") {
      m_soundScale = IfcSoundScaleEnum_DBC;
    }
    else if (arg == ".NC.") {
      m_soundScale = IfcSoundScaleEnum_NC;
    }
    else if (arg == ".NR.") {
      m_soundScale = IfcSoundScaleEnum_NR;
    }
    else if (arg == ".USERDEFINED.") {
      m_soundScale = IfcSoundScaleEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_soundScale = IfcSoundScaleEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_soundValues.setUnset(true);
  }
  else {
    m_soundValues.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcSoundValue > attr2;
        attr2 = static_cast< IfcSoundValue * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_soundValues.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSoundProperties::s_type = new Step::ClassType_class("IfcSoundProperties");
IfcSoundProperties_Factory::IfcSoundProperties_Factory() {
}

IfcSoundProperties_Factory::~IfcSoundProperties_Factory() {
  clear(true);
}

void IfcSoundProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSoundProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSoundProperties_Factory::end() {
  return m_idMap.end();
}

IfcSoundProperties *IfcSoundProperties_Factory::get(Step::StepId id) {
  IfcSoundProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSoundProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcSoundProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSoundProperties * > (create(id));
  }
}

Step::BaseObject *IfcSoundProperties_Factory::create(Step::StepId id) {
  IfcSoundProperties *ret = new IfcSoundProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSoundProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSoundProperties *ret = new IfcSoundProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSoundProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSoundProperties *ret = new IfcSoundProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSoundProperties *IfcSoundProperties_Factory::generate() {
  return static_cast< IfcSoundProperties * > (create(m_model->getNewId()));
}

IfcSoundProperties *IfcSoundProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSoundProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

