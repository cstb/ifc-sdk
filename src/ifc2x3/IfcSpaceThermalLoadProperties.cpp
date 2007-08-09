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
#include <ifc2x3/IfcSpaceThermalLoadProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSpaceThermalLoadProperties::IfcSpaceThermalLoadProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_applicableValueRatio = getUnset(m_applicableValueRatio);
  m_thermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
  m_propertySource = IfcPropertySourceEnum_UNSET;
  m_sourceDescription = getUnset(m_sourceDescription);
  m_maximumValue = getUnset(m_maximumValue);
  m_minimumValue = getUnset(m_minimumValue);
  m_thermalLoadTimeSeriesValues = NULL;
  m_userDefinedThermalLoadSource = getUnset(m_userDefinedThermalLoadSource);
  m_userDefinedPropertySource = getUnset(m_userDefinedPropertySource);
  m_thermalLoadType = IfcThermalLoadTypeEnum_UNSET;
}


IfcSpaceThermalLoadProperties::~IfcSpaceThermalLoadProperties() {
}

bool IfcSpaceThermalLoadProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpaceThermalLoadProperties(this);
}

const char *IfcSpaceThermalLoadProperties::type() {
  return "IfcSpaceThermalLoadProperties";
}

Step::ClassType IfcSpaceThermalLoadProperties::getClassType() {
  return IfcSpaceThermalLoadProperties::s_type;
}

Step::ClassType IfcSpaceThermalLoadProperties::getType() const {
  return IfcSpaceThermalLoadProperties::s_type;
}

bool IfcSpaceThermalLoadProperties::isOfType(Step::ClassType t) {
  return IfcSpaceThermalLoadProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveRatioMeasure IfcSpaceThermalLoadProperties::getApplicableValueRatio() {
  if (Step::BaseObject::inited()) {
    return m_applicableValueRatio;
  }
  else {
    return getUnset(m_applicableValueRatio);
  }
}

void IfcSpaceThermalLoadProperties::setApplicableValueRatio(IfcPositiveRatioMeasure value) {
  m_applicableValueRatio = value;
}

IfcThermalLoadSourceEnum IfcSpaceThermalLoadProperties::getThermalLoadSource() {
  if (Step::BaseObject::inited()) {
    return m_thermalLoadSource;
  }
  else {
    return IfcThermalLoadSourceEnum_UNSET;
  }
}

void IfcSpaceThermalLoadProperties::setThermalLoadSource(IfcThermalLoadSourceEnum value) {
  m_thermalLoadSource = value;
}

IfcPropertySourceEnum IfcSpaceThermalLoadProperties::getPropertySource() {
  if (Step::BaseObject::inited()) {
    return m_propertySource;
  }
  else {
    return IfcPropertySourceEnum_UNSET;
  }
}

void IfcSpaceThermalLoadProperties::setPropertySource(IfcPropertySourceEnum value) {
  m_propertySource = value;
}

IfcText IfcSpaceThermalLoadProperties::getSourceDescription() {
  if (Step::BaseObject::inited()) {
    return m_sourceDescription;
  }
  else {
    return getUnset(m_sourceDescription);
  }
}

void IfcSpaceThermalLoadProperties::setSourceDescription(const IfcText &value) {
  m_sourceDescription = value;
}

IfcPowerMeasure IfcSpaceThermalLoadProperties::getMaximumValue() {
  if (Step::BaseObject::inited()) {
    return m_maximumValue;
  }
  else {
    return getUnset(m_maximumValue);
  }
}

void IfcSpaceThermalLoadProperties::setMaximumValue(IfcPowerMeasure value) {
  m_maximumValue = value;
}

IfcPowerMeasure IfcSpaceThermalLoadProperties::getMinimumValue() {
  if (Step::BaseObject::inited()) {
    return m_minimumValue;
  }
  else {
    return getUnset(m_minimumValue);
  }
}

void IfcSpaceThermalLoadProperties::setMinimumValue(IfcPowerMeasure value) {
  m_minimumValue = value;
}

IfcTimeSeries *IfcSpaceThermalLoadProperties::getThermalLoadTimeSeriesValues() {
  if (Step::BaseObject::inited()) {
    return m_thermalLoadTimeSeriesValues.get();
  }
  else {
    return NULL;
  }
}

void IfcSpaceThermalLoadProperties::setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value) {
  m_thermalLoadTimeSeriesValues = value;
}

IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedThermalLoadSource() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedThermalLoadSource;
  }
  else {
    return getUnset(m_userDefinedThermalLoadSource);
  }
}

void IfcSpaceThermalLoadProperties::setUserDefinedThermalLoadSource(const IfcLabel &value) {
  m_userDefinedThermalLoadSource = value;
}

IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedPropertySource() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedPropertySource;
  }
  else {
    return getUnset(m_userDefinedPropertySource);
  }
}

void IfcSpaceThermalLoadProperties::setUserDefinedPropertySource(const IfcLabel &value) {
  m_userDefinedPropertySource = value;
}

IfcThermalLoadTypeEnum IfcSpaceThermalLoadProperties::getThermalLoadType() {
  if (Step::BaseObject::inited()) {
    return m_thermalLoadType;
  }
  else {
    return IfcThermalLoadTypeEnum_UNSET;
  }
}

void IfcSpaceThermalLoadProperties::setThermalLoadType(IfcThermalLoadTypeEnum value) {
  m_thermalLoadType = value;
}

void IfcSpaceThermalLoadProperties::release() {
  IfcPropertySetDefinition::release();
  m_thermalLoadTimeSeriesValues.release();
}

bool IfcSpaceThermalLoadProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicableValueRatio = getUnset(m_applicableValueRatio);
  }
  else {
    m_applicableValueRatio = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
  }
  else {
    if (arg == ".PEOPLE.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_PEOPLE;
    }
    else if (arg == ".LIGHTING.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_LIGHTING;
    }
    else if (arg == ".EQUIPMENT.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_EQUIPMENT;
    }
    else if (arg == ".VENTILATIONINDOORAIR.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_VENTILATIONINDOORAIR;
    }
    else if (arg == ".VENTILATIONOUTSIDEAIR.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_VENTILATIONOUTSIDEAIR;
    }
    else if (arg == ".RECIRCULATEDAIR.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_RECIRCULATEDAIR;
    }
    else if (arg == ".EXHAUSTAIR.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_EXHAUSTAIR;
    }
    else if (arg == ".AIREXCHANGERATE.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_AIREXCHANGERATE;
    }
    else if (arg == ".DRYBULBTEMPERATURE.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_DRYBULBTEMPERATURE;
    }
    else if (arg == ".RELATIVEHUMIDITY.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_RELATIVEHUMIDITY;
    }
    else if (arg == ".INFILTRATION.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_INFILTRATION;
    }
    else if (arg == ".USERDEFINED.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_thermalLoadSource = IfcThermalLoadSourceEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_propertySource = IfcPropertySourceEnum_UNSET;
  }
  else {
    if (arg == ".DESIGN.") {
      m_propertySource = IfcPropertySourceEnum_DESIGN;
    }
    else if (arg == ".DESIGNMAXIMUM.") {
      m_propertySource = IfcPropertySourceEnum_DESIGNMAXIMUM;
    }
    else if (arg == ".DESIGNMINIMUM.") {
      m_propertySource = IfcPropertySourceEnum_DESIGNMINIMUM;
    }
    else if (arg == ".SIMULATED.") {
      m_propertySource = IfcPropertySourceEnum_SIMULATED;
    }
    else if (arg == ".ASBUILT.") {
      m_propertySource = IfcPropertySourceEnum_ASBUILT;
    }
    else if (arg == ".COMMISSIONING.") {
      m_propertySource = IfcPropertySourceEnum_COMMISSIONING;
    }
    else if (arg == ".MEASURED.") {
      m_propertySource = IfcPropertySourceEnum_MEASURED;
    }
    else if (arg == ".USERDEFINED.") {
      m_propertySource = IfcPropertySourceEnum_USERDEFINED;
    }
    else if (arg == ".NOTKNOWN.") {
      m_propertySource = IfcPropertySourceEnum_NOTKNOWN;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sourceDescription = getUnset(m_sourceDescription);
  }
  else {
    m_sourceDescription = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maximumValue = getUnset(m_maximumValue);
  }
  else {
    m_maximumValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minimumValue = getUnset(m_minimumValue);
  }
  else {
    m_minimumValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalLoadTimeSeriesValues = NULL;
  }
  else {
    m_thermalLoadTimeSeriesValues = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedThermalLoadSource = getUnset(m_userDefinedThermalLoadSource);
  }
  else {
    m_userDefinedThermalLoadSource = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedPropertySource = getUnset(m_userDefinedPropertySource);
  }
  else {
    m_userDefinedPropertySource = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalLoadType = IfcThermalLoadTypeEnum_UNSET;
  }
  else {
    if (arg == ".SENSIBLE.") {
      m_thermalLoadType = IfcThermalLoadTypeEnum_SENSIBLE;
    }
    else if (arg == ".LATENT.") {
      m_thermalLoadType = IfcThermalLoadTypeEnum_LATENT;
    }
    else if (arg == ".RADIANT.") {
      m_thermalLoadType = IfcThermalLoadTypeEnum_RADIANT;
    }
    else if (arg == ".NOTDEFINED.") {
      m_thermalLoadType = IfcThermalLoadTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceThermalLoadProperties::s_type = new Step::ClassType_class("IfcSpaceThermalLoadProperties");
IfcSpaceThermalLoadProperties_Factory::IfcSpaceThermalLoadProperties_Factory() {
}

IfcSpaceThermalLoadProperties_Factory::~IfcSpaceThermalLoadProperties_Factory() {
  clear(true);
}

void IfcSpaceThermalLoadProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceThermalLoadProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceThermalLoadProperties_Factory::end() {
  return m_idMap.end();
}

IfcSpaceThermalLoadProperties *IfcSpaceThermalLoadProperties_Factory::get(Step::StepId id) {
  IfcSpaceThermalLoadProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSpaceThermalLoadProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcSpaceThermalLoadProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSpaceThermalLoadProperties * > (create(id));
  }
}

Step::BaseObject *IfcSpaceThermalLoadProperties_Factory::create(Step::StepId id) {
  IfcSpaceThermalLoadProperties *ret = new IfcSpaceThermalLoadProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceThermalLoadProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSpaceThermalLoadProperties *ret = new IfcSpaceThermalLoadProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceThermalLoadProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSpaceThermalLoadProperties *ret = new IfcSpaceThermalLoadProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSpaceThermalLoadProperties *IfcSpaceThermalLoadProperties_Factory::generate() {
  return static_cast< IfcSpaceThermalLoadProperties * > (create(m_model->getNewId()));
}

IfcSpaceThermalLoadProperties *IfcSpaceThermalLoadProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSpaceThermalLoadProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

