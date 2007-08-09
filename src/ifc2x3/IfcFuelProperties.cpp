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
#include <ifc2x3/IfcFuelProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFuelProperties::IfcFuelProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_combustionTemperature = getUnset(m_combustionTemperature);
  m_carbonContent = getUnset(m_carbonContent);
  m_lowerHeatingValue = getUnset(m_lowerHeatingValue);
  m_higherHeatingValue = getUnset(m_higherHeatingValue);
}


IfcFuelProperties::~IfcFuelProperties() {
}

bool IfcFuelProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFuelProperties(this);
}

const char *IfcFuelProperties::type() {
  return "IfcFuelProperties";
}

Step::ClassType IfcFuelProperties::getClassType() {
  return IfcFuelProperties::s_type;
}

Step::ClassType IfcFuelProperties::getType() const {
  return IfcFuelProperties::s_type;
}

bool IfcFuelProperties::isOfType(Step::ClassType t) {
  return IfcFuelProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcThermodynamicTemperatureMeasure IfcFuelProperties::getCombustionTemperature() {
  if (Step::BaseObject::inited()) {
    return m_combustionTemperature;
  }
  else {
    return getUnset(m_combustionTemperature);
  }
}

void IfcFuelProperties::setCombustionTemperature(IfcThermodynamicTemperatureMeasure value) {
  m_combustionTemperature = value;
}

IfcPositiveRatioMeasure IfcFuelProperties::getCarbonContent() {
  if (Step::BaseObject::inited()) {
    return m_carbonContent;
  }
  else {
    return getUnset(m_carbonContent);
  }
}

void IfcFuelProperties::setCarbonContent(IfcPositiveRatioMeasure value) {
  m_carbonContent = value;
}

IfcHeatingValueMeasure IfcFuelProperties::getLowerHeatingValue() {
  if (Step::BaseObject::inited()) {
    return m_lowerHeatingValue;
  }
  else {
    return getUnset(m_lowerHeatingValue);
  }
}

void IfcFuelProperties::setLowerHeatingValue(IfcHeatingValueMeasure value) {
  m_lowerHeatingValue = value;
}

IfcHeatingValueMeasure IfcFuelProperties::getHigherHeatingValue() {
  if (Step::BaseObject::inited()) {
    return m_higherHeatingValue;
  }
  else {
    return getUnset(m_higherHeatingValue);
  }
}

void IfcFuelProperties::setHigherHeatingValue(IfcHeatingValueMeasure value) {
  m_higherHeatingValue = value;
}

void IfcFuelProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcFuelProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_combustionTemperature = getUnset(m_combustionTemperature);
  }
  else {
    m_combustionTemperature = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_carbonContent = getUnset(m_carbonContent);
  }
  else {
    m_carbonContent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lowerHeatingValue = getUnset(m_lowerHeatingValue);
  }
  else {
    m_lowerHeatingValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_higherHeatingValue = getUnset(m_higherHeatingValue);
  }
  else {
    m_higherHeatingValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFuelProperties::s_type = new Step::ClassType_class("IfcFuelProperties");
IfcFuelProperties_Factory::IfcFuelProperties_Factory() {
}

IfcFuelProperties_Factory::~IfcFuelProperties_Factory() {
  clear(true);
}

void IfcFuelProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFuelProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFuelProperties_Factory::end() {
  return m_idMap.end();
}

IfcFuelProperties *IfcFuelProperties_Factory::get(Step::StepId id) {
  IfcFuelProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFuelProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcFuelProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFuelProperties * > (create(id));
  }
}

Step::BaseObject *IfcFuelProperties_Factory::create(Step::StepId id) {
  IfcFuelProperties *ret = new IfcFuelProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFuelProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFuelProperties *ret = new IfcFuelProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFuelProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFuelProperties *ret = new IfcFuelProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFuelProperties *IfcFuelProperties_Factory::generate() {
  return static_cast< IfcFuelProperties * > (create(m_model->getNewId()));
}

IfcFuelProperties *IfcFuelProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFuelProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

