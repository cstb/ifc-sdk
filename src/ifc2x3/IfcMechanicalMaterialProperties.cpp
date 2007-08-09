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
#include <ifc2x3/IfcMechanicalMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMechanicalMaterialProperties::IfcMechanicalMaterialProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_dynamicViscosity = getUnset(m_dynamicViscosity);
  m_youngModulus = getUnset(m_youngModulus);
  m_shearModulus = getUnset(m_shearModulus);
  m_poissonRatio = getUnset(m_poissonRatio);
  m_thermalExpansionCoefficient = getUnset(m_thermalExpansionCoefficient);
}


IfcMechanicalMaterialProperties::~IfcMechanicalMaterialProperties() {
}

bool IfcMechanicalMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMechanicalMaterialProperties(this);
}

const char *IfcMechanicalMaterialProperties::type() {
  return "IfcMechanicalMaterialProperties";
}

Step::ClassType IfcMechanicalMaterialProperties::getClassType() {
  return IfcMechanicalMaterialProperties::s_type;
}

Step::ClassType IfcMechanicalMaterialProperties::getType() const {
  return IfcMechanicalMaterialProperties::s_type;
}

bool IfcMechanicalMaterialProperties::isOfType(Step::ClassType t) {
  return IfcMechanicalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcDynamicViscosityMeasure IfcMechanicalMaterialProperties::getDynamicViscosity() {
  if (Step::BaseObject::inited()) {
    return m_dynamicViscosity;
  }
  else {
    return getUnset(m_dynamicViscosity);
  }
}

void IfcMechanicalMaterialProperties::setDynamicViscosity(IfcDynamicViscosityMeasure value) {
  m_dynamicViscosity = value;
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getYoungModulus() {
  if (Step::BaseObject::inited()) {
    return m_youngModulus;
  }
  else {
    return getUnset(m_youngModulus);
  }
}

void IfcMechanicalMaterialProperties::setYoungModulus(IfcModulusOfElasticityMeasure value) {
  m_youngModulus = value;
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getShearModulus() {
  if (Step::BaseObject::inited()) {
    return m_shearModulus;
  }
  else {
    return getUnset(m_shearModulus);
  }
}

void IfcMechanicalMaterialProperties::setShearModulus(IfcModulusOfElasticityMeasure value) {
  m_shearModulus = value;
}

IfcPositiveRatioMeasure IfcMechanicalMaterialProperties::getPoissonRatio() {
  if (Step::BaseObject::inited()) {
    return m_poissonRatio;
  }
  else {
    return getUnset(m_poissonRatio);
  }
}

void IfcMechanicalMaterialProperties::setPoissonRatio(IfcPositiveRatioMeasure value) {
  m_poissonRatio = value;
}

IfcThermalExpansionCoefficientMeasure IfcMechanicalMaterialProperties::getThermalExpansionCoefficient() {
  if (Step::BaseObject::inited()) {
    return m_thermalExpansionCoefficient;
  }
  else {
    return getUnset(m_thermalExpansionCoefficient);
  }
}

void IfcMechanicalMaterialProperties::setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value) {
  m_thermalExpansionCoefficient = value;
}

void IfcMechanicalMaterialProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcMechanicalMaterialProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dynamicViscosity = getUnset(m_dynamicViscosity);
  }
  else {
    m_dynamicViscosity = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_youngModulus = getUnset(m_youngModulus);
  }
  else {
    m_youngModulus = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shearModulus = getUnset(m_shearModulus);
  }
  else {
    m_shearModulus = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_poissonRatio = getUnset(m_poissonRatio);
  }
  else {
    m_poissonRatio = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalExpansionCoefficient = getUnset(m_thermalExpansionCoefficient);
  }
  else {
    m_thermalExpansionCoefficient = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalMaterialProperties::s_type = new Step::ClassType_class("IfcMechanicalMaterialProperties");
IfcMechanicalMaterialProperties_Factory::IfcMechanicalMaterialProperties_Factory() {
}

IfcMechanicalMaterialProperties_Factory::~IfcMechanicalMaterialProperties_Factory() {
  clear(true);
}

void IfcMechanicalMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcMechanicalMaterialProperties *IfcMechanicalMaterialProperties_Factory::get(Step::StepId id) {
  IfcMechanicalMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMechanicalMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcMechanicalMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMechanicalMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcMechanicalMaterialProperties_Factory::create(Step::StepId id) {
  IfcMechanicalMaterialProperties *ret = new IfcMechanicalMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMechanicalMaterialProperties *ret = new IfcMechanicalMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMechanicalMaterialProperties *ret = new IfcMechanicalMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMechanicalMaterialProperties *IfcMechanicalMaterialProperties_Factory::generate() {
  return static_cast< IfcMechanicalMaterialProperties * > (create(m_model->getNewId()));
}

IfcMechanicalMaterialProperties *IfcMechanicalMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMechanicalMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

