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
#include <ifc2x3/IfcHygroscopicMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcHygroscopicMaterialProperties::IfcHygroscopicMaterialProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_upperVaporResistanceFactor = getUnset(m_upperVaporResistanceFactor);
  m_lowerVaporResistanceFactor = getUnset(m_lowerVaporResistanceFactor);
  m_isothermalMoistureCapacity = getUnset(m_isothermalMoistureCapacity);
  m_vaporPermeability = getUnset(m_vaporPermeability);
  m_moistureDiffusivity = getUnset(m_moistureDiffusivity);
}


IfcHygroscopicMaterialProperties::~IfcHygroscopicMaterialProperties() {
}

bool IfcHygroscopicMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcHygroscopicMaterialProperties(this);
}

const char *IfcHygroscopicMaterialProperties::type() {
  return "IfcHygroscopicMaterialProperties";
}

Step::ClassType IfcHygroscopicMaterialProperties::getClassType() {
  return IfcHygroscopicMaterialProperties::s_type;
}

Step::ClassType IfcHygroscopicMaterialProperties::getType() const {
  return IfcHygroscopicMaterialProperties::s_type;
}

bool IfcHygroscopicMaterialProperties::isOfType(Step::ClassType t) {
  return IfcHygroscopicMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getUpperVaporResistanceFactor() {
  if (Step::BaseObject::inited()) {
    return m_upperVaporResistanceFactor;
  }
  else {
    return getUnset(m_upperVaporResistanceFactor);
  }
}

void IfcHygroscopicMaterialProperties::setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value) {
  m_upperVaporResistanceFactor = value;
}

IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getLowerVaporResistanceFactor() {
  if (Step::BaseObject::inited()) {
    return m_lowerVaporResistanceFactor;
  }
  else {
    return getUnset(m_lowerVaporResistanceFactor);
  }
}

void IfcHygroscopicMaterialProperties::setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value) {
  m_lowerVaporResistanceFactor = value;
}

IfcIsothermalMoistureCapacityMeasure IfcHygroscopicMaterialProperties::getIsothermalMoistureCapacity() {
  if (Step::BaseObject::inited()) {
    return m_isothermalMoistureCapacity;
  }
  else {
    return getUnset(m_isothermalMoistureCapacity);
  }
}

void IfcHygroscopicMaterialProperties::setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value) {
  m_isothermalMoistureCapacity = value;
}

IfcVaporPermeabilityMeasure IfcHygroscopicMaterialProperties::getVaporPermeability() {
  if (Step::BaseObject::inited()) {
    return m_vaporPermeability;
  }
  else {
    return getUnset(m_vaporPermeability);
  }
}

void IfcHygroscopicMaterialProperties::setVaporPermeability(IfcVaporPermeabilityMeasure value) {
  m_vaporPermeability = value;
}

IfcMoistureDiffusivityMeasure IfcHygroscopicMaterialProperties::getMoistureDiffusivity() {
  if (Step::BaseObject::inited()) {
    return m_moistureDiffusivity;
  }
  else {
    return getUnset(m_moistureDiffusivity);
  }
}

void IfcHygroscopicMaterialProperties::setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value) {
  m_moistureDiffusivity = value;
}

void IfcHygroscopicMaterialProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcHygroscopicMaterialProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_upperVaporResistanceFactor = getUnset(m_upperVaporResistanceFactor);
  }
  else {
    m_upperVaporResistanceFactor = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lowerVaporResistanceFactor = getUnset(m_lowerVaporResistanceFactor);
  }
  else {
    m_lowerVaporResistanceFactor = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isothermalMoistureCapacity = getUnset(m_isothermalMoistureCapacity);
  }
  else {
    m_isothermalMoistureCapacity = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_vaporPermeability = getUnset(m_vaporPermeability);
  }
  else {
    m_vaporPermeability = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_moistureDiffusivity = getUnset(m_moistureDiffusivity);
  }
  else {
    m_moistureDiffusivity = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcHygroscopicMaterialProperties::s_type = new Step::ClassType_class("IfcHygroscopicMaterialProperties");
IfcHygroscopicMaterialProperties_Factory::IfcHygroscopicMaterialProperties_Factory() {
}

IfcHygroscopicMaterialProperties_Factory::~IfcHygroscopicMaterialProperties_Factory() {
  clear(true);
}

void IfcHygroscopicMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHygroscopicMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHygroscopicMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcHygroscopicMaterialProperties *IfcHygroscopicMaterialProperties_Factory::get(Step::StepId id) {
  IfcHygroscopicMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcHygroscopicMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcHygroscopicMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcHygroscopicMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcHygroscopicMaterialProperties_Factory::create(Step::StepId id) {
  IfcHygroscopicMaterialProperties *ret = new IfcHygroscopicMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcHygroscopicMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcHygroscopicMaterialProperties *ret = new IfcHygroscopicMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcHygroscopicMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcHygroscopicMaterialProperties *ret = new IfcHygroscopicMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcHygroscopicMaterialProperties *IfcHygroscopicMaterialProperties_Factory::generate() {
  return static_cast< IfcHygroscopicMaterialProperties * > (create(m_model->getNewId()));
}

IfcHygroscopicMaterialProperties *IfcHygroscopicMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcHygroscopicMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

