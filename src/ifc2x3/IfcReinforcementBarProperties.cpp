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
#include <ifc2x3/IfcReinforcementBarProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcReinforcementBarProperties::IfcReinforcementBarProperties(Step::SPFData *args) : Step::BaseObject(args) {
  m_totalCrossSectionArea = getUnset(m_totalCrossSectionArea);
  m_steelGrade = getUnset(m_steelGrade);
  m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
  m_effectiveDepth = getUnset(m_effectiveDepth);
  m_nominalBarDiameter = getUnset(m_nominalBarDiameter);
  m_barCount = getUnset(m_barCount);
}


IfcReinforcementBarProperties::~IfcReinforcementBarProperties() {
}

bool IfcReinforcementBarProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcReinforcementBarProperties(this);
}

const char *IfcReinforcementBarProperties::type() {
  return "IfcReinforcementBarProperties";
}

Step::ClassType IfcReinforcementBarProperties::getClassType() {
  return IfcReinforcementBarProperties::s_type;
}

Step::ClassType IfcReinforcementBarProperties::getType() const {
  return IfcReinforcementBarProperties::s_type;
}

bool IfcReinforcementBarProperties::isOfType(Step::ClassType t) {
  return IfcReinforcementBarProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAreaMeasure IfcReinforcementBarProperties::getTotalCrossSectionArea() {
  if (Step::BaseObject::inited()) {
    return m_totalCrossSectionArea;
  }
  else {
    return getUnset(m_totalCrossSectionArea);
  }
}

void IfcReinforcementBarProperties::setTotalCrossSectionArea(IfcAreaMeasure value) {
  m_totalCrossSectionArea = value;
}

IfcLabel IfcReinforcementBarProperties::getSteelGrade() {
  if (Step::BaseObject::inited()) {
    return m_steelGrade;
  }
  else {
    return getUnset(m_steelGrade);
  }
}

void IfcReinforcementBarProperties::setSteelGrade(const IfcLabel &value) {
  m_steelGrade = value;
}

IfcReinforcingBarSurfaceEnum IfcReinforcementBarProperties::getBarSurface() {
  if (Step::BaseObject::inited()) {
    return m_barSurface;
  }
  else {
    return IfcReinforcingBarSurfaceEnum_UNSET;
  }
}

void IfcReinforcementBarProperties::setBarSurface(IfcReinforcingBarSurfaceEnum value) {
  m_barSurface = value;
}

IfcLengthMeasure IfcReinforcementBarProperties::getEffectiveDepth() {
  if (Step::BaseObject::inited()) {
    return m_effectiveDepth;
  }
  else {
    return getUnset(m_effectiveDepth);
  }
}

void IfcReinforcementBarProperties::setEffectiveDepth(IfcLengthMeasure value) {
  m_effectiveDepth = value;
}

IfcPositiveLengthMeasure IfcReinforcementBarProperties::getNominalBarDiameter() {
  if (Step::BaseObject::inited()) {
    return m_nominalBarDiameter;
  }
  else {
    return getUnset(m_nominalBarDiameter);
  }
}

void IfcReinforcementBarProperties::setNominalBarDiameter(IfcPositiveLengthMeasure value) {
  m_nominalBarDiameter = value;
}

IfcCountMeasure IfcReinforcementBarProperties::getBarCount() {
  if (Step::BaseObject::inited()) {
    return m_barCount;
  }
  else {
    return getUnset(m_barCount);
  }
}

void IfcReinforcementBarProperties::setBarCount(IfcCountMeasure value) {
  m_barCount = value;
}

void IfcReinforcementBarProperties::release() {
}

bool IfcReinforcementBarProperties::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_totalCrossSectionArea = getUnset(m_totalCrossSectionArea);
  }
  else {
    m_totalCrossSectionArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_steelGrade = getUnset(m_steelGrade);
  }
  else {
    m_steelGrade = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
  }
  else {
    if (arg == ".PLAIN.") {
      m_barSurface = IfcReinforcingBarSurfaceEnum_PLAIN;
    }
    else if (arg == ".TEXTURED.") {
      m_barSurface = IfcReinforcingBarSurfaceEnum_TEXTURED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_effectiveDepth = getUnset(m_effectiveDepth);
  }
  else {
    m_effectiveDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_nominalBarDiameter = getUnset(m_nominalBarDiameter);
  }
  else {
    m_nominalBarDiameter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_barCount = getUnset(m_barCount);
  }
  else {
    m_barCount = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcementBarProperties::s_type = new Step::ClassType_class("IfcReinforcementBarProperties");
IfcReinforcementBarProperties_Factory::IfcReinforcementBarProperties_Factory() {
}

IfcReinforcementBarProperties_Factory::~IfcReinforcementBarProperties_Factory() {
  clear(true);
}

void IfcReinforcementBarProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcementBarProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcementBarProperties_Factory::end() {
  return m_idMap.end();
}

IfcReinforcementBarProperties *IfcReinforcementBarProperties_Factory::get(Step::StepId id) {
  IfcReinforcementBarProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcReinforcementBarProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcReinforcementBarProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcReinforcementBarProperties * > (create(id));
  }
}

Step::BaseObject *IfcReinforcementBarProperties_Factory::create(Step::StepId id) {
  IfcReinforcementBarProperties *ret = new IfcReinforcementBarProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcementBarProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcReinforcementBarProperties *ret = new IfcReinforcementBarProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcementBarProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcReinforcementBarProperties *ret = new IfcReinforcementBarProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcReinforcementBarProperties *IfcReinforcementBarProperties_Factory::generate() {
  return static_cast< IfcReinforcementBarProperties * > (create(m_model->getNewId()));
}

IfcReinforcementBarProperties *IfcReinforcementBarProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcReinforcementBarProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

