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
#include <ifc2x3/IfcElectricalBaseProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricalBaseProperties::IfcElectricalBaseProperties(Step::SPFData *args) : IfcEnergyProperties(args) {
  m_electricCurrentType = IfcElectricCurrentEnum_UNSET;
  m_inputVoltage = getUnset(m_inputVoltage);
  m_inputFrequency = getUnset(m_inputFrequency);
  m_fullLoadCurrent = getUnset(m_fullLoadCurrent);
  m_minimumCircuitCurrent = getUnset(m_minimumCircuitCurrent);
  m_maximumPowerInput = getUnset(m_maximumPowerInput);
  m_ratedPowerInput = getUnset(m_ratedPowerInput);
  m_inputPhase = getUnset(m_inputPhase);
}


IfcElectricalBaseProperties::~IfcElectricalBaseProperties() {
}

bool IfcElectricalBaseProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricalBaseProperties(this);
}

const char *IfcElectricalBaseProperties::type() {
  return "IfcElectricalBaseProperties";
}

Step::ClassType IfcElectricalBaseProperties::getClassType() {
  return IfcElectricalBaseProperties::s_type;
}

Step::ClassType IfcElectricalBaseProperties::getType() const {
  return IfcElectricalBaseProperties::s_type;
}

bool IfcElectricalBaseProperties::isOfType(Step::ClassType t) {
  return IfcElectricalBaseProperties::s_type == t ? true : IfcEnergyProperties::isOfType(t);
}

IfcElectricCurrentEnum IfcElectricalBaseProperties::getElectricCurrentType() {
  if (Step::BaseObject::inited()) {
    return m_electricCurrentType;
  }
  else {
    return IfcElectricCurrentEnum_UNSET;
  }
}

void IfcElectricalBaseProperties::setElectricCurrentType(IfcElectricCurrentEnum value) {
  m_electricCurrentType = value;
}

IfcElectricVoltageMeasure IfcElectricalBaseProperties::getInputVoltage() {
  if (Step::BaseObject::inited()) {
    return m_inputVoltage;
  }
  else {
    return getUnset(m_inputVoltage);
  }
}

void IfcElectricalBaseProperties::setInputVoltage(IfcElectricVoltageMeasure value) {
  m_inputVoltage = value;
}

IfcFrequencyMeasure IfcElectricalBaseProperties::getInputFrequency() {
  if (Step::BaseObject::inited()) {
    return m_inputFrequency;
  }
  else {
    return getUnset(m_inputFrequency);
  }
}

void IfcElectricalBaseProperties::setInputFrequency(IfcFrequencyMeasure value) {
  m_inputFrequency = value;
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getFullLoadCurrent() {
  if (Step::BaseObject::inited()) {
    return m_fullLoadCurrent;
  }
  else {
    return getUnset(m_fullLoadCurrent);
  }
}

void IfcElectricalBaseProperties::setFullLoadCurrent(IfcElectricCurrentMeasure value) {
  m_fullLoadCurrent = value;
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getMinimumCircuitCurrent() {
  if (Step::BaseObject::inited()) {
    return m_minimumCircuitCurrent;
  }
  else {
    return getUnset(m_minimumCircuitCurrent);
  }
}

void IfcElectricalBaseProperties::setMinimumCircuitCurrent(IfcElectricCurrentMeasure value) {
  m_minimumCircuitCurrent = value;
}

IfcPowerMeasure IfcElectricalBaseProperties::getMaximumPowerInput() {
  if (Step::BaseObject::inited()) {
    return m_maximumPowerInput;
  }
  else {
    return getUnset(m_maximumPowerInput);
  }
}

void IfcElectricalBaseProperties::setMaximumPowerInput(IfcPowerMeasure value) {
  m_maximumPowerInput = value;
}

IfcPowerMeasure IfcElectricalBaseProperties::getRatedPowerInput() {
  if (Step::BaseObject::inited()) {
    return m_ratedPowerInput;
  }
  else {
    return getUnset(m_ratedPowerInput);
  }
}

void IfcElectricalBaseProperties::setRatedPowerInput(IfcPowerMeasure value) {
  m_ratedPowerInput = value;
}

Integer IfcElectricalBaseProperties::getInputPhase() {
  if (Step::BaseObject::inited()) {
    return m_inputPhase;
  }
  else {
    return getUnset(m_inputPhase);
  }
}

void IfcElectricalBaseProperties::setInputPhase(Integer value) {
  m_inputPhase = value;
}

void IfcElectricalBaseProperties::release() {
  IfcEnergyProperties::release();
}

bool IfcElectricalBaseProperties::init() {
  bool status = IfcEnergyProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_electricCurrentType = IfcElectricCurrentEnum_UNSET;
  }
  else {
    if (arg == ".ALTERNATING.") {
      m_electricCurrentType = IfcElectricCurrentEnum_ALTERNATING;
    }
    else if (arg == ".DIRECT.") {
      m_electricCurrentType = IfcElectricCurrentEnum_DIRECT;
    }
    else if (arg == ".NOTDEFINED.") {
      m_electricCurrentType = IfcElectricCurrentEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_inputVoltage = getUnset(m_inputVoltage);
  }
  else {
    m_inputVoltage = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_inputFrequency = getUnset(m_inputFrequency);
  }
  else {
    m_inputFrequency = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fullLoadCurrent = getUnset(m_fullLoadCurrent);
  }
  else {
    m_fullLoadCurrent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minimumCircuitCurrent = getUnset(m_minimumCircuitCurrent);
  }
  else {
    m_minimumCircuitCurrent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maximumPowerInput = getUnset(m_maximumPowerInput);
  }
  else {
    m_maximumPowerInput = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ratedPowerInput = getUnset(m_ratedPowerInput);
  }
  else {
    m_ratedPowerInput = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_inputPhase = getUnset(m_inputPhase);
  }
  else {
    m_inputPhase = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricalBaseProperties::s_type = new Step::ClassType_class("IfcElectricalBaseProperties");
IfcElectricalBaseProperties_Factory::IfcElectricalBaseProperties_Factory() {
}

IfcElectricalBaseProperties_Factory::~IfcElectricalBaseProperties_Factory() {
  clear(true);
}

void IfcElectricalBaseProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricalBaseProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricalBaseProperties_Factory::end() {
  return m_idMap.end();
}

IfcElectricalBaseProperties *IfcElectricalBaseProperties_Factory::get(Step::StepId id) {
  IfcElectricalBaseProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricalBaseProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricalBaseProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricalBaseProperties * > (create(id));
  }
}

Step::BaseObject *IfcElectricalBaseProperties_Factory::create(Step::StepId id) {
  IfcElectricalBaseProperties *ret = new IfcElectricalBaseProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricalBaseProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricalBaseProperties *ret = new IfcElectricalBaseProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricalBaseProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricalBaseProperties *ret = new IfcElectricalBaseProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricalBaseProperties *IfcElectricalBaseProperties_Factory::generate() {
  return static_cast< IfcElectricalBaseProperties * > (create(m_model->getNewId()));
}

IfcElectricalBaseProperties *IfcElectricalBaseProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricalBaseProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

