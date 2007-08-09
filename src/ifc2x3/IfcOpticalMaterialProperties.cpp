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
#include <ifc2x3/IfcOpticalMaterialProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOpticalMaterialProperties::IfcOpticalMaterialProperties(Step::SPFData *args) : IfcMaterialProperties(args) {
  m_visibleTransmittance = getUnset(m_visibleTransmittance);
  m_solarTransmittance = getUnset(m_solarTransmittance);
  m_thermalIrTransmittance = getUnset(m_thermalIrTransmittance);
  m_thermalIrEmissivityBack = getUnset(m_thermalIrEmissivityBack);
  m_thermalIrEmissivityFront = getUnset(m_thermalIrEmissivityFront);
  m_visibleReflectanceBack = getUnset(m_visibleReflectanceBack);
  m_visibleReflectanceFront = getUnset(m_visibleReflectanceFront);
  m_solarReflectanceFront = getUnset(m_solarReflectanceFront);
  m_solarReflectanceBack = getUnset(m_solarReflectanceBack);
}


IfcOpticalMaterialProperties::~IfcOpticalMaterialProperties() {
}

bool IfcOpticalMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOpticalMaterialProperties(this);
}

const char *IfcOpticalMaterialProperties::type() {
  return "IfcOpticalMaterialProperties";
}

Step::ClassType IfcOpticalMaterialProperties::getClassType() {
  return IfcOpticalMaterialProperties::s_type;
}

Step::ClassType IfcOpticalMaterialProperties::getType() const {
  return IfcOpticalMaterialProperties::s_type;
}

bool IfcOpticalMaterialProperties::isOfType(Step::ClassType t) {
  return IfcOpticalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance() {
  if (Step::BaseObject::inited()) {
    return m_visibleTransmittance;
  }
  else {
    return getUnset(m_visibleTransmittance);
  }
}

void IfcOpticalMaterialProperties::setVisibleTransmittance(IfcPositiveRatioMeasure value) {
  m_visibleTransmittance = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance() {
  if (Step::BaseObject::inited()) {
    return m_solarTransmittance;
  }
  else {
    return getUnset(m_solarTransmittance);
  }
}

void IfcOpticalMaterialProperties::setSolarTransmittance(IfcPositiveRatioMeasure value) {
  m_solarTransmittance = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance() {
  if (Step::BaseObject::inited()) {
    return m_thermalIrTransmittance;
  }
  else {
    return getUnset(m_thermalIrTransmittance);
  }
}

void IfcOpticalMaterialProperties::setThermalIrTransmittance(IfcPositiveRatioMeasure value) {
  m_thermalIrTransmittance = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack() {
  if (Step::BaseObject::inited()) {
    return m_thermalIrEmissivityBack;
  }
  else {
    return getUnset(m_thermalIrEmissivityBack);
  }
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityBack(IfcPositiveRatioMeasure value) {
  m_thermalIrEmissivityBack = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront() {
  if (Step::BaseObject::inited()) {
    return m_thermalIrEmissivityFront;
  }
  else {
    return getUnset(m_thermalIrEmissivityFront);
  }
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityFront(IfcPositiveRatioMeasure value) {
  m_thermalIrEmissivityFront = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack() {
  if (Step::BaseObject::inited()) {
    return m_visibleReflectanceBack;
  }
  else {
    return getUnset(m_visibleReflectanceBack);
  }
}

void IfcOpticalMaterialProperties::setVisibleReflectanceBack(IfcPositiveRatioMeasure value) {
  m_visibleReflectanceBack = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront() {
  if (Step::BaseObject::inited()) {
    return m_visibleReflectanceFront;
  }
  else {
    return getUnset(m_visibleReflectanceFront);
  }
}

void IfcOpticalMaterialProperties::setVisibleReflectanceFront(IfcPositiveRatioMeasure value) {
  m_visibleReflectanceFront = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront() {
  if (Step::BaseObject::inited()) {
    return m_solarReflectanceFront;
  }
  else {
    return getUnset(m_solarReflectanceFront);
  }
}

void IfcOpticalMaterialProperties::setSolarReflectanceFront(IfcPositiveRatioMeasure value) {
  m_solarReflectanceFront = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack() {
  if (Step::BaseObject::inited()) {
    return m_solarReflectanceBack;
  }
  else {
    return getUnset(m_solarReflectanceBack);
  }
}

void IfcOpticalMaterialProperties::setSolarReflectanceBack(IfcPositiveRatioMeasure value) {
  m_solarReflectanceBack = value;
}

void IfcOpticalMaterialProperties::release() {
  IfcMaterialProperties::release();
}

bool IfcOpticalMaterialProperties::init() {
  bool status = IfcMaterialProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_visibleTransmittance = getUnset(m_visibleTransmittance);
  }
  else {
    m_visibleTransmittance = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_solarTransmittance = getUnset(m_solarTransmittance);
  }
  else {
    m_solarTransmittance = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalIrTransmittance = getUnset(m_thermalIrTransmittance);
  }
  else {
    m_thermalIrTransmittance = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalIrEmissivityBack = getUnset(m_thermalIrEmissivityBack);
  }
  else {
    m_thermalIrEmissivityBack = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thermalIrEmissivityFront = getUnset(m_thermalIrEmissivityFront);
  }
  else {
    m_thermalIrEmissivityFront = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_visibleReflectanceBack = getUnset(m_visibleReflectanceBack);
  }
  else {
    m_visibleReflectanceBack = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_visibleReflectanceFront = getUnset(m_visibleReflectanceFront);
  }
  else {
    m_visibleReflectanceFront = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_solarReflectanceFront = getUnset(m_solarReflectanceFront);
  }
  else {
    m_solarReflectanceFront = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_solarReflectanceBack = getUnset(m_solarReflectanceBack);
  }
  else {
    m_solarReflectanceBack = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpticalMaterialProperties::s_type = new Step::ClassType_class("IfcOpticalMaterialProperties");
IfcOpticalMaterialProperties_Factory::IfcOpticalMaterialProperties_Factory() {
}

IfcOpticalMaterialProperties_Factory::~IfcOpticalMaterialProperties_Factory() {
  clear(true);
}

void IfcOpticalMaterialProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOpticalMaterialProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOpticalMaterialProperties_Factory::end() {
  return m_idMap.end();
}

IfcOpticalMaterialProperties *IfcOpticalMaterialProperties_Factory::get(Step::StepId id) {
  IfcOpticalMaterialProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOpticalMaterialProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcOpticalMaterialProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOpticalMaterialProperties * > (create(id));
  }
}

Step::BaseObject *IfcOpticalMaterialProperties_Factory::create(Step::StepId id) {
  IfcOpticalMaterialProperties *ret = new IfcOpticalMaterialProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOpticalMaterialProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOpticalMaterialProperties *ret = new IfcOpticalMaterialProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOpticalMaterialProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOpticalMaterialProperties *ret = new IfcOpticalMaterialProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOpticalMaterialProperties *IfcOpticalMaterialProperties_Factory::generate() {
  return static_cast< IfcOpticalMaterialProperties * > (create(m_model->getNewId()));
}

IfcOpticalMaterialProperties *IfcOpticalMaterialProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOpticalMaterialProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

