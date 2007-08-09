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
#include <ifc2x3/IfcTendon.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTendon::IfcTendon(Step::SPFData *args) : IfcReinforcingElement(args) {
  m_predefinedType = IfcTendonTypeEnum_UNSET;
  m_nominalDiameter = getUnset(m_nominalDiameter);
  m_crossSectionArea = getUnset(m_crossSectionArea);
  m_tensionForce = getUnset(m_tensionForce);
  m_preStress = getUnset(m_preStress);
  m_frictionCoefficient = getUnset(m_frictionCoefficient);
  m_anchorageSlip = getUnset(m_anchorageSlip);
  m_minCurvatureRadius = getUnset(m_minCurvatureRadius);
}


IfcTendon::~IfcTendon() {
}

bool IfcTendon::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTendon(this);
}

const char *IfcTendon::type() {
  return "IfcTendon";
}

Step::ClassType IfcTendon::getClassType() {
  return IfcTendon::s_type;
}

Step::ClassType IfcTendon::getType() const {
  return IfcTendon::s_type;
}

bool IfcTendon::isOfType(Step::ClassType t) {
  return IfcTendon::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcTendonTypeEnum IfcTendon::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcTendonTypeEnum_UNSET;
  }
}

void IfcTendon::setPredefinedType(IfcTendonTypeEnum value) {
  m_predefinedType = value;
}

IfcPositiveLengthMeasure IfcTendon::getNominalDiameter() {
  if (Step::BaseObject::inited()) {
    return m_nominalDiameter;
  }
  else {
    return getUnset(m_nominalDiameter);
  }
}

void IfcTendon::setNominalDiameter(IfcPositiveLengthMeasure value) {
  m_nominalDiameter = value;
}

IfcAreaMeasure IfcTendon::getCrossSectionArea() {
  if (Step::BaseObject::inited()) {
    return m_crossSectionArea;
  }
  else {
    return getUnset(m_crossSectionArea);
  }
}

void IfcTendon::setCrossSectionArea(IfcAreaMeasure value) {
  m_crossSectionArea = value;
}

IfcForceMeasure IfcTendon::getTensionForce() {
  if (Step::BaseObject::inited()) {
    return m_tensionForce;
  }
  else {
    return getUnset(m_tensionForce);
  }
}

void IfcTendon::setTensionForce(IfcForceMeasure value) {
  m_tensionForce = value;
}

IfcPressureMeasure IfcTendon::getPreStress() {
  if (Step::BaseObject::inited()) {
    return m_preStress;
  }
  else {
    return getUnset(m_preStress);
  }
}

void IfcTendon::setPreStress(IfcPressureMeasure value) {
  m_preStress = value;
}

IfcNormalisedRatioMeasure IfcTendon::getFrictionCoefficient() {
  if (Step::BaseObject::inited()) {
    return m_frictionCoefficient;
  }
  else {
    return getUnset(m_frictionCoefficient);
  }
}

void IfcTendon::setFrictionCoefficient(IfcNormalisedRatioMeasure value) {
  m_frictionCoefficient = value;
}

IfcPositiveLengthMeasure IfcTendon::getAnchorageSlip() {
  if (Step::BaseObject::inited()) {
    return m_anchorageSlip;
  }
  else {
    return getUnset(m_anchorageSlip);
  }
}

void IfcTendon::setAnchorageSlip(IfcPositiveLengthMeasure value) {
  m_anchorageSlip = value;
}

IfcPositiveLengthMeasure IfcTendon::getMinCurvatureRadius() {
  if (Step::BaseObject::inited()) {
    return m_minCurvatureRadius;
  }
  else {
    return getUnset(m_minCurvatureRadius);
  }
}

void IfcTendon::setMinCurvatureRadius(IfcPositiveLengthMeasure value) {
  m_minCurvatureRadius = value;
}

void IfcTendon::release() {
  IfcReinforcingElement::release();
}

bool IfcTendon::init() {
  bool status = IfcReinforcingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcTendonTypeEnum_UNSET;
  }
  else {
    if (arg == ".STRAND.") {
      m_predefinedType = IfcTendonTypeEnum_STRAND;
    }
    else if (arg == ".WIRE.") {
      m_predefinedType = IfcTendonTypeEnum_WIRE;
    }
    else if (arg == ".BAR.") {
      m_predefinedType = IfcTendonTypeEnum_BAR;
    }
    else if (arg == ".COATED.") {
      m_predefinedType = IfcTendonTypeEnum_COATED;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcTendonTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcTendonTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_nominalDiameter = getUnset(m_nominalDiameter);
  }
  else {
    m_nominalDiameter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_crossSectionArea = getUnset(m_crossSectionArea);
  }
  else {
    m_crossSectionArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tensionForce = getUnset(m_tensionForce);
  }
  else {
    m_tensionForce = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_preStress = getUnset(m_preStress);
  }
  else {
    m_preStress = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_frictionCoefficient = getUnset(m_frictionCoefficient);
  }
  else {
    m_frictionCoefficient = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_anchorageSlip = getUnset(m_anchorageSlip);
  }
  else {
    m_anchorageSlip = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minCurvatureRadius = getUnset(m_minCurvatureRadius);
  }
  else {
    m_minCurvatureRadius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTendon::s_type = new Step::ClassType_class("IfcTendon");
IfcTendon_Factory::IfcTendon_Factory() {
}

IfcTendon_Factory::~IfcTendon_Factory() {
  clear(true);
}

void IfcTendon_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTendon_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTendon_Factory::end() {
  return m_idMap.end();
}

IfcTendon *IfcTendon_Factory::get(Step::StepId id) {
  IfcTendon *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTendon * > (it->second);
  }
  else {
    LOG_ERROR("IfcTendon_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTendon * > (create(id));
  }
}

Step::BaseObject *IfcTendon_Factory::create(Step::StepId id) {
  IfcTendon *ret = new IfcTendon(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTendon_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTendon *ret = new IfcTendon(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTendon_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTendon *ret = new IfcTendon(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTendon *IfcTendon_Factory::generate() {
  return static_cast< IfcTendon * > (create(m_model->getNewId()));
}

IfcTendon *IfcTendon_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTendon * > (it->second);
  }
  else {
    return NULL;
  }
}

