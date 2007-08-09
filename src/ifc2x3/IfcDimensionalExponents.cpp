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
#include <ifc2x3/IfcDimensionalExponents.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDimensionalExponents::IfcDimensionalExponents(Step::SPFData *args) : Step::BaseObject(args) {
  m_lengthExponent = getUnset(m_lengthExponent);
  m_massExponent = getUnset(m_massExponent);
  m_timeExponent = getUnset(m_timeExponent);
  m_electricCurrentExponent = getUnset(m_electricCurrentExponent);
  m_thermodynamicTemperatureExponent = getUnset(m_thermodynamicTemperatureExponent);
  m_amountOfSubstanceExponent = getUnset(m_amountOfSubstanceExponent);
  m_luminousIntensityExponent = getUnset(m_luminousIntensityExponent);
}


IfcDimensionalExponents::~IfcDimensionalExponents() {
}

bool IfcDimensionalExponents::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDimensionalExponents(this);
}

const char *IfcDimensionalExponents::type() {
  return "IfcDimensionalExponents";
}

Step::ClassType IfcDimensionalExponents::getClassType() {
  return IfcDimensionalExponents::s_type;
}

Step::ClassType IfcDimensionalExponents::getType() const {
  return IfcDimensionalExponents::s_type;
}

bool IfcDimensionalExponents::isOfType(Step::ClassType t) {
  return IfcDimensionalExponents::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Integer IfcDimensionalExponents::getLengthExponent() {
  if (Step::BaseObject::inited()) {
    return m_lengthExponent;
  }
  else {
    return getUnset(m_lengthExponent);
  }
}

void IfcDimensionalExponents::setLengthExponent(Integer value) {
  m_lengthExponent = value;
}

Integer IfcDimensionalExponents::getMassExponent() {
  if (Step::BaseObject::inited()) {
    return m_massExponent;
  }
  else {
    return getUnset(m_massExponent);
  }
}

void IfcDimensionalExponents::setMassExponent(Integer value) {
  m_massExponent = value;
}

Integer IfcDimensionalExponents::getTimeExponent() {
  if (Step::BaseObject::inited()) {
    return m_timeExponent;
  }
  else {
    return getUnset(m_timeExponent);
  }
}

void IfcDimensionalExponents::setTimeExponent(Integer value) {
  m_timeExponent = value;
}

Integer IfcDimensionalExponents::getElectricCurrentExponent() {
  if (Step::BaseObject::inited()) {
    return m_electricCurrentExponent;
  }
  else {
    return getUnset(m_electricCurrentExponent);
  }
}

void IfcDimensionalExponents::setElectricCurrentExponent(Integer value) {
  m_electricCurrentExponent = value;
}

Integer IfcDimensionalExponents::getThermodynamicTemperatureExponent() {
  if (Step::BaseObject::inited()) {
    return m_thermodynamicTemperatureExponent;
  }
  else {
    return getUnset(m_thermodynamicTemperatureExponent);
  }
}

void IfcDimensionalExponents::setThermodynamicTemperatureExponent(Integer value) {
  m_thermodynamicTemperatureExponent = value;
}

Integer IfcDimensionalExponents::getAmountOfSubstanceExponent() {
  if (Step::BaseObject::inited()) {
    return m_amountOfSubstanceExponent;
  }
  else {
    return getUnset(m_amountOfSubstanceExponent);
  }
}

void IfcDimensionalExponents::setAmountOfSubstanceExponent(Integer value) {
  m_amountOfSubstanceExponent = value;
}

Integer IfcDimensionalExponents::getLuminousIntensityExponent() {
  if (Step::BaseObject::inited()) {
    return m_luminousIntensityExponent;
  }
  else {
    return getUnset(m_luminousIntensityExponent);
  }
}

void IfcDimensionalExponents::setLuminousIntensityExponent(Integer value) {
  m_luminousIntensityExponent = value;
}

void IfcDimensionalExponents::release() {
}

bool IfcDimensionalExponents::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lengthExponent = getUnset(m_lengthExponent);
  }
  else {
    m_lengthExponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_massExponent = getUnset(m_massExponent);
  }
  else {
    m_massExponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeExponent = getUnset(m_timeExponent);
  }
  else {
    m_timeExponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_electricCurrentExponent = getUnset(m_electricCurrentExponent);
  }
  else {
    m_electricCurrentExponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermodynamicTemperatureExponent = getUnset(m_thermodynamicTemperatureExponent);
  }
  else {
    m_thermodynamicTemperatureExponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_amountOfSubstanceExponent = getUnset(m_amountOfSubstanceExponent);
  }
  else {
    m_amountOfSubstanceExponent = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_luminousIntensityExponent = getUnset(m_luminousIntensityExponent);
  }
  else {
    m_luminousIntensityExponent = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionalExponents::s_type = new Step::ClassType_class("IfcDimensionalExponents");
IfcDimensionalExponents_Factory::IfcDimensionalExponents_Factory() {
}

IfcDimensionalExponents_Factory::~IfcDimensionalExponents_Factory() {
  clear(true);
}

void IfcDimensionalExponents_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionalExponents_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionalExponents_Factory::end() {
  return m_idMap.end();
}

IfcDimensionalExponents *IfcDimensionalExponents_Factory::get(Step::StepId id) {
  IfcDimensionalExponents *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDimensionalExponents * > (it->second);
  }
  else {
    LOG_ERROR("IfcDimensionalExponents_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDimensionalExponents * > (create(id));
  }
}

Step::BaseObject *IfcDimensionalExponents_Factory::create(Step::StepId id) {
  IfcDimensionalExponents *ret = new IfcDimensionalExponents(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionalExponents_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDimensionalExponents *ret = new IfcDimensionalExponents(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionalExponents_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDimensionalExponents *ret = new IfcDimensionalExponents(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDimensionalExponents *IfcDimensionalExponents_Factory::generate() {
  return static_cast< IfcDimensionalExponents * > (create(m_model->getNewId()));
}

IfcDimensionalExponents *IfcDimensionalExponents_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDimensionalExponents * > (it->second);
  }
  else {
    return NULL;
  }
}

