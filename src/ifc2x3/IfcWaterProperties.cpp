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
#include <ifc2x3/IfcWaterProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWaterProperties::IfcWaterProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_isPotable = getUnset(m_isPotable);
  m_hardness = getUnset(m_hardness);
  m_alkalinityConcentration = getUnset(m_alkalinityConcentration);
  m_acidityConcentration = getUnset(m_acidityConcentration);
  m_impuritiesContent = getUnset(m_impuritiesContent);
  m_pHLevel = getUnset(m_pHLevel);
  m_dissolvedSolidsContent = getUnset(m_dissolvedSolidsContent);
}


IfcWaterProperties::~IfcWaterProperties() {
}

bool IfcWaterProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWaterProperties(this);
}

const char *IfcWaterProperties::type() {
  return "IfcWaterProperties";
}

Step::ClassType IfcWaterProperties::getClassType() {
  return IfcWaterProperties::s_type;
}

Step::ClassType IfcWaterProperties::getType() const {
  return IfcWaterProperties::s_type;
}

bool IfcWaterProperties::isOfType(Step::ClassType t) {
  return IfcWaterProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

Bool IfcWaterProperties::getIsPotable() {
  if (Step::BaseObject::inited()) {
    return m_isPotable;
  }
  else {
    return getUnset(m_isPotable);
  }
}

void IfcWaterProperties::setIsPotable(Bool value) {
  m_isPotable = value;
}

IfcIonConcentrationMeasure IfcWaterProperties::getHardness() {
  if (Step::BaseObject::inited()) {
    return m_hardness;
  }
  else {
    return getUnset(m_hardness);
  }
}

void IfcWaterProperties::setHardness(IfcIonConcentrationMeasure value) {
  m_hardness = value;
}

IfcIonConcentrationMeasure IfcWaterProperties::getAlkalinityConcentration() {
  if (Step::BaseObject::inited()) {
    return m_alkalinityConcentration;
  }
  else {
    return getUnset(m_alkalinityConcentration);
  }
}

void IfcWaterProperties::setAlkalinityConcentration(IfcIonConcentrationMeasure value) {
  m_alkalinityConcentration = value;
}

IfcIonConcentrationMeasure IfcWaterProperties::getAcidityConcentration() {
  if (Step::BaseObject::inited()) {
    return m_acidityConcentration;
  }
  else {
    return getUnset(m_acidityConcentration);
  }
}

void IfcWaterProperties::setAcidityConcentration(IfcIonConcentrationMeasure value) {
  m_acidityConcentration = value;
}

IfcNormalisedRatioMeasure IfcWaterProperties::getImpuritiesContent() {
  if (Step::BaseObject::inited()) {
    return m_impuritiesContent;
  }
  else {
    return getUnset(m_impuritiesContent);
  }
}

void IfcWaterProperties::setImpuritiesContent(IfcNormalisedRatioMeasure value) {
  m_impuritiesContent = value;
}

IfcPHMeasure IfcWaterProperties::getPHLevel() {
  if (Step::BaseObject::inited()) {
    return m_pHLevel;
  }
  else {
    return getUnset(m_pHLevel);
  }
}

void IfcWaterProperties::setPHLevel(IfcPHMeasure value) {
  m_pHLevel = value;
}

IfcNormalisedRatioMeasure IfcWaterProperties::getDissolvedSolidsContent() {
  if (Step::BaseObject::inited()) {
    return m_dissolvedSolidsContent;
  }
  else {
    return getUnset(m_dissolvedSolidsContent);
  }
}

void IfcWaterProperties::setDissolvedSolidsContent(IfcNormalisedRatioMeasure value) {
  m_dissolvedSolidsContent = value;
}

void IfcWaterProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcWaterProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_isPotable = getUnset(m_isPotable);
  }
  else {
    m_isPotable = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_hardness = getUnset(m_hardness);
  }
  else {
    m_hardness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_alkalinityConcentration = getUnset(m_alkalinityConcentration);
  }
  else {
    m_alkalinityConcentration = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_acidityConcentration = getUnset(m_acidityConcentration);
  }
  else {
    m_acidityConcentration = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_impuritiesContent = getUnset(m_impuritiesContent);
  }
  else {
    m_impuritiesContent = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pHLevel = getUnset(m_pHLevel);
  }
  else {
    m_pHLevel = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dissolvedSolidsContent = getUnset(m_dissolvedSolidsContent);
  }
  else {
    m_dissolvedSolidsContent = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcWaterProperties::s_type = new Step::ClassType_class("IfcWaterProperties");
IfcWaterProperties_Factory::IfcWaterProperties_Factory() {
}

IfcWaterProperties_Factory::~IfcWaterProperties_Factory() {
  clear(true);
}

void IfcWaterProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWaterProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWaterProperties_Factory::end() {
  return m_idMap.end();
}

IfcWaterProperties *IfcWaterProperties_Factory::get(Step::StepId id) {
  IfcWaterProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWaterProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcWaterProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWaterProperties * > (create(id));
  }
}

Step::BaseObject *IfcWaterProperties_Factory::create(Step::StepId id) {
  IfcWaterProperties *ret = new IfcWaterProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWaterProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWaterProperties *ret = new IfcWaterProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWaterProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWaterProperties *ret = new IfcWaterProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWaterProperties *IfcWaterProperties_Factory::generate() {
  return static_cast< IfcWaterProperties * > (create(m_model->getNewId()));
}

IfcWaterProperties *IfcWaterProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWaterProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

