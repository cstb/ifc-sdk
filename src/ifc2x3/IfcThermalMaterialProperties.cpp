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
#include <ifc2x3/IfcThermalMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcThermalMaterialProperties::IfcThermalMaterialProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_specificHeatCapacity = getUnset(m_specificHeatCapacity);
  m_boilingPoint = getUnset(m_boilingPoint);
  m_freezingPoint = getUnset(m_freezingPoint);
  m_thermalConductivity = getUnset(m_thermalConductivity);
}


IfcThermalMaterialProperties::~IfcThermalMaterialProperties() {
}

bool IfcThermalMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcThermalMaterialProperties(this);
}

const char *IfcThermalMaterialProperties::type() {
  return "IfcThermalMaterialProperties";
}

Step::ClassType IfcThermalMaterialProperties::getClassType() {
  return IfcThermalMaterialProperties::s_type;
}

Step::ClassType IfcThermalMaterialProperties::getType() const {
  return IfcThermalMaterialProperties::s_type;
}

bool IfcThermalMaterialProperties::isOfType(Step::ClassType t) {
  return IfcThermalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcSpecificHeatCapacityMeasure IfcThermalMaterialProperties::getSpecificHeatCapacity() {
  if (Step::BaseObject::inited()) {
    return m_specificHeatCapacity;
  }
  else {
    return getUnset(m_specificHeatCapacity);
  }
}

void IfcThermalMaterialProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value) {
  m_specificHeatCapacity = value;
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getBoilingPoint() {
  if (Step::BaseObject::inited()) {
    return m_boilingPoint;
  }
  else {
    return getUnset(m_boilingPoint);
  }
}

void IfcThermalMaterialProperties::setBoilingPoint(IfcThermodynamicTemperatureMeasure value) {
  m_boilingPoint = value;
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getFreezingPoint() {
  if (Step::BaseObject::inited()) {
    return m_freezingPoint;
  }
  else {
    return getUnset(m_freezingPoint);
  }
}

void IfcThermalMaterialProperties::setFreezingPoint(IfcThermodynamicTemperatureMeasure value) {
  m_freezingPoint = value;
}

IfcThermalConductivityMeasure IfcThermalMaterialProperties::getThermalConductivity() {
  if (Step::BaseObject::inited()) {
    return m_thermalConductivity;
  }
  else {
    return getUnset(m_thermalConductivity);
  }
}

void IfcThermalMaterialProperties::setThermalConductivity(IfcThermalConductivityMeasure value) {
  m_thermalConductivity = value;
}

void IfcThermalMaterialProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcThermalMaterialProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_specificHeatCapacity = getUnset(m_specificHeatCapacity);
  }
  else {
    m_specificHeatCapacity = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_boilingPoint = getUnset(m_boilingPoint);
  }
  else {
    m_boilingPoint = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_freezingPoint = getUnset(m_freezingPoint);
  }
  else {
    m_freezingPoint = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalConductivity = getUnset(m_thermalConductivity);
  }
  else {
    m_thermalConductivity = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcThermalMaterialProperties::s_type = new Step::ClassType_class("IfcThermalMaterialProperties");
IfcThermalMaterialProperties_Factory::IfcThermalMaterialProperties_Factory() {
}

IfcThermalMaterialProperties_Factory::~IfcThermalMaterialProperties_Factory() {
  clear(true);
}

void IfcThermalMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcThermalMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcThermalMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcThermalMaterialProperties *IfcThermalMaterialProperties_Factory::get(Step::StepId id) {
  IfcThermalMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcThermalMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcThermalMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcThermalMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcThermalMaterialProperties_Factory::create(Step::StepId id) {
  IfcThermalMaterialProperties *ret = new IfcThermalMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcThermalMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcThermalMaterialProperties *ret = new IfcThermalMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcThermalMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcThermalMaterialProperties *ret = new IfcThermalMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcThermalMaterialProperties *IfcThermalMaterialProperties_Factory::generate() {
  return static_cast< IfcThermalMaterialProperties * > (create(m_model->getNewId()));
}

IfcThermalMaterialProperties *IfcThermalMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcThermalMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

