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
#include <ifc2x3/IfcMechanicalSteelMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelaxation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMechanicalSteelMaterialProperties::IfcMechanicalSteelMaterialProperties(Step::SPFData *args) : IfcMechanicalMaterialProperties(args) {
  m_yieldStress = getUnset(m_yieldStress);
  m_ultimateStress = getUnset(m_ultimateStress);
  m_ultimateStrain = getUnset(m_ultimateStrain);
  m_hardeningModule = getUnset(m_hardeningModule);
  m_proportionalStress = getUnset(m_proportionalStress);
  m_plasticStrain = getUnset(m_plasticStrain);
  m_relaxations.setUnset(true);
}


IfcMechanicalSteelMaterialProperties::~IfcMechanicalSteelMaterialProperties() {
}

bool IfcMechanicalSteelMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMechanicalSteelMaterialProperties(this);
}

const char *IfcMechanicalSteelMaterialProperties::type() {
  return "IfcMechanicalSteelMaterialProperties";
}

Step::ClassType IfcMechanicalSteelMaterialProperties::getClassType() {
  return IfcMechanicalSteelMaterialProperties::s_type;
}

Step::ClassType IfcMechanicalSteelMaterialProperties::getType() const {
  return IfcMechanicalSteelMaterialProperties::s_type;
}

bool IfcMechanicalSteelMaterialProperties::isOfType(Step::ClassType t) {
  return IfcMechanicalSteelMaterialProperties::s_type == t ? true : IfcMechanicalMaterialProperties::isOfType(t);
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getYieldStress() {
  if (Step::BaseObject::inited()) {
    return m_yieldStress;
  }
  else {
    return getUnset(m_yieldStress);
  }
}

void IfcMechanicalSteelMaterialProperties::setYieldStress(IfcPressureMeasure value) {
  m_yieldStress = value;
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getUltimateStress() {
  if (Step::BaseObject::inited()) {
    return m_ultimateStress;
  }
  else {
    return getUnset(m_ultimateStress);
  }
}

void IfcMechanicalSteelMaterialProperties::setUltimateStress(IfcPressureMeasure value) {
  m_ultimateStress = value;
}

IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getUltimateStrain() {
  if (Step::BaseObject::inited()) {
    return m_ultimateStrain;
  }
  else {
    return getUnset(m_ultimateStrain);
  }
}

void IfcMechanicalSteelMaterialProperties::setUltimateStrain(IfcPositiveRatioMeasure value) {
  m_ultimateStrain = value;
}

IfcModulusOfElasticityMeasure IfcMechanicalSteelMaterialProperties::getHardeningModule() {
  if (Step::BaseObject::inited()) {
    return m_hardeningModule;
  }
  else {
    return getUnset(m_hardeningModule);
  }
}

void IfcMechanicalSteelMaterialProperties::setHardeningModule(IfcModulusOfElasticityMeasure value) {
  m_hardeningModule = value;
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getProportionalStress() {
  if (Step::BaseObject::inited()) {
    return m_proportionalStress;
  }
  else {
    return getUnset(m_proportionalStress);
  }
}

void IfcMechanicalSteelMaterialProperties::setProportionalStress(IfcPressureMeasure value) {
  m_proportionalStress = value;
}

IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getPlasticStrain() {
  if (Step::BaseObject::inited()) {
    return m_plasticStrain;
  }
  else {
    return getUnset(m_plasticStrain);
  }
}

void IfcMechanicalSteelMaterialProperties::setPlasticStrain(IfcPositiveRatioMeasure value) {
  m_plasticStrain = value;
}

Step::StepSet< Step::RefPtr< IfcRelaxation > > &IfcMechanicalSteelMaterialProperties::getRelaxations() {
  if (Step::BaseObject::inited()) {
    return m_relaxations;
  }
  else {
    m_relaxations.setUnset(true);
    return m_relaxations;
  }
}

void IfcMechanicalSteelMaterialProperties::setRelaxations(const Step::StepSet< Step::RefPtr< IfcRelaxation > > &value) {
  m_relaxations = value;
}

void IfcMechanicalSteelMaterialProperties::release() {
  IfcMechanicalMaterialProperties::release();
  m_relaxations.clear();
}

bool IfcMechanicalSteelMaterialProperties::init() {
  bool status = IfcMechanicalMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yieldStress = getUnset(m_yieldStress);
  }
  else {
    m_yieldStress = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ultimateStress = getUnset(m_ultimateStress);
  }
  else {
    m_ultimateStress = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ultimateStrain = getUnset(m_ultimateStrain);
  }
  else {
    m_ultimateStrain = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hardeningModule = getUnset(m_hardeningModule);
  }
  else {
    m_hardeningModule = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_proportionalStress = getUnset(m_proportionalStress);
  }
  else {
    m_proportionalStress = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_plasticStrain = getUnset(m_plasticStrain);
  }
  else {
    m_plasticStrain = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relaxations.setUnset(true);
  }
  else {
    m_relaxations.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRelaxation > attr2;
        attr2 = static_cast< IfcRelaxation * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relaxations.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalSteelMaterialProperties::s_type = new Step::ClassType_class("IfcMechanicalSteelMaterialProperties");
IfcMechanicalSteelMaterialProperties_Factory::IfcMechanicalSteelMaterialProperties_Factory() {
}

IfcMechanicalSteelMaterialProperties_Factory::~IfcMechanicalSteelMaterialProperties_Factory() {
  clear(true);
}

void IfcMechanicalSteelMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalSteelMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalSteelMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcMechanicalSteelMaterialProperties *IfcMechanicalSteelMaterialProperties_Factory::get(Step::StepId id) {
  IfcMechanicalSteelMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMechanicalSteelMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcMechanicalSteelMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMechanicalSteelMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcMechanicalSteelMaterialProperties_Factory::create(Step::StepId id) {
  IfcMechanicalSteelMaterialProperties *ret = new IfcMechanicalSteelMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalSteelMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMechanicalSteelMaterialProperties *ret = new IfcMechanicalSteelMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalSteelMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMechanicalSteelMaterialProperties *ret = new IfcMechanicalSteelMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMechanicalSteelMaterialProperties *IfcMechanicalSteelMaterialProperties_Factory::generate() {
  return static_cast< IfcMechanicalSteelMaterialProperties * > (create(m_model->getNewId()));
}

IfcMechanicalSteelMaterialProperties *IfcMechanicalSteelMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMechanicalSteelMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

