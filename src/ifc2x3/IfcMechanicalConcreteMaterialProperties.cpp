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
#include <ifc2x3/IfcMechanicalConcreteMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMechanicalConcreteMaterialProperties::IfcMechanicalConcreteMaterialProperties(Step::SPFData *args) : IfcMechanicalMaterialProperties(args) {
  m_compressiveStrength = getUnset(m_compressiveStrength);
  m_maxAggregateSize = getUnset(m_maxAggregateSize);
  m_admixturesDescription = getUnset(m_admixturesDescription);
  m_workability = getUnset(m_workability);
  m_protectivePoreRatio = getUnset(m_protectivePoreRatio);
  m_waterImpermeability = getUnset(m_waterImpermeability);
}


IfcMechanicalConcreteMaterialProperties::~IfcMechanicalConcreteMaterialProperties() {
}

bool IfcMechanicalConcreteMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMechanicalConcreteMaterialProperties(this);
}

const char *IfcMechanicalConcreteMaterialProperties::type() {
  return "IfcMechanicalConcreteMaterialProperties";
}

Step::ClassType IfcMechanicalConcreteMaterialProperties::getClassType() {
  return IfcMechanicalConcreteMaterialProperties::s_type;
}

Step::ClassType IfcMechanicalConcreteMaterialProperties::getType() const {
  return IfcMechanicalConcreteMaterialProperties::s_type;
}

bool IfcMechanicalConcreteMaterialProperties::isOfType(Step::ClassType t) {
  return IfcMechanicalConcreteMaterialProperties::s_type == t ? true : IfcMechanicalMaterialProperties::isOfType(t);
}

IfcPressureMeasure IfcMechanicalConcreteMaterialProperties::getCompressiveStrength() {
  if (Step::BaseObject::inited()) {
    return m_compressiveStrength;
  }
  else {
    return getUnset(m_compressiveStrength);
  }
}

void IfcMechanicalConcreteMaterialProperties::setCompressiveStrength(IfcPressureMeasure value) {
  m_compressiveStrength = value;
}

IfcPositiveLengthMeasure IfcMechanicalConcreteMaterialProperties::getMaxAggregateSize() {
  if (Step::BaseObject::inited()) {
    return m_maxAggregateSize;
  }
  else {
    return getUnset(m_maxAggregateSize);
  }
}

void IfcMechanicalConcreteMaterialProperties::setMaxAggregateSize(IfcPositiveLengthMeasure value) {
  m_maxAggregateSize = value;
}

IfcText IfcMechanicalConcreteMaterialProperties::getAdmixturesDescription() {
  if (Step::BaseObject::inited()) {
    return m_admixturesDescription;
  }
  else {
    return getUnset(m_admixturesDescription);
  }
}

void IfcMechanicalConcreteMaterialProperties::setAdmixturesDescription(const IfcText &value) {
  m_admixturesDescription = value;
}

IfcText IfcMechanicalConcreteMaterialProperties::getWorkability() {
  if (Step::BaseObject::inited()) {
    return m_workability;
  }
  else {
    return getUnset(m_workability);
  }
}

void IfcMechanicalConcreteMaterialProperties::setWorkability(const IfcText &value) {
  m_workability = value;
}

IfcNormalisedRatioMeasure IfcMechanicalConcreteMaterialProperties::getProtectivePoreRatio() {
  if (Step::BaseObject::inited()) {
    return m_protectivePoreRatio;
  }
  else {
    return getUnset(m_protectivePoreRatio);
  }
}

void IfcMechanicalConcreteMaterialProperties::setProtectivePoreRatio(IfcNormalisedRatioMeasure value) {
  m_protectivePoreRatio = value;
}

IfcText IfcMechanicalConcreteMaterialProperties::getWaterImpermeability() {
  if (Step::BaseObject::inited()) {
    return m_waterImpermeability;
  }
  else {
    return getUnset(m_waterImpermeability);
  }
}

void IfcMechanicalConcreteMaterialProperties::setWaterImpermeability(const IfcText &value) {
  m_waterImpermeability = value;
}

void IfcMechanicalConcreteMaterialProperties::release() {
  IfcMechanicalMaterialProperties::release();
}

bool IfcMechanicalConcreteMaterialProperties::init() {
  bool status = IfcMechanicalMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_compressiveStrength = getUnset(m_compressiveStrength);
  }
  else {
    m_compressiveStrength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maxAggregateSize = getUnset(m_maxAggregateSize);
  }
  else {
    m_maxAggregateSize = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_admixturesDescription = getUnset(m_admixturesDescription);
  }
  else {
    m_admixturesDescription = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_workability = getUnset(m_workability);
  }
  else {
    m_workability = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_protectivePoreRatio = getUnset(m_protectivePoreRatio);
  }
  else {
    m_protectivePoreRatio = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_waterImpermeability = getUnset(m_waterImpermeability);
  }
  else {
    m_waterImpermeability = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalConcreteMaterialProperties::s_type = new Step::ClassType_class("IfcMechanicalConcreteMaterialProperties");
IfcMechanicalConcreteMaterialProperties_Factory::IfcMechanicalConcreteMaterialProperties_Factory() {
}

IfcMechanicalConcreteMaterialProperties_Factory::~IfcMechanicalConcreteMaterialProperties_Factory() {
  clear(true);
}

void IfcMechanicalConcreteMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalConcreteMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMechanicalConcreteMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcMechanicalConcreteMaterialProperties *IfcMechanicalConcreteMaterialProperties_Factory::get(Step::StepId id) {
  IfcMechanicalConcreteMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMechanicalConcreteMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcMechanicalConcreteMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMechanicalConcreteMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcMechanicalConcreteMaterialProperties_Factory::create(Step::StepId id) {
  IfcMechanicalConcreteMaterialProperties *ret = new IfcMechanicalConcreteMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalConcreteMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMechanicalConcreteMaterialProperties *ret = new IfcMechanicalConcreteMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMechanicalConcreteMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMechanicalConcreteMaterialProperties *ret = new IfcMechanicalConcreteMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMechanicalConcreteMaterialProperties *IfcMechanicalConcreteMaterialProperties_Factory::generate() {
  return static_cast< IfcMechanicalConcreteMaterialProperties * > (create(m_model->getNewId()));
}

IfcMechanicalConcreteMaterialProperties *IfcMechanicalConcreteMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMechanicalConcreteMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

