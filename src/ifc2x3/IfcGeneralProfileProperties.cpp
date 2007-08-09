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
#include <ifc2x3/IfcGeneralProfileProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGeneralProfileProperties::IfcGeneralProfileProperties(Step::SPFData *args) : IfcProfileProperties(args) {
  m_physicalWeight = getUnset(m_physicalWeight);
  m_perimeter = getUnset(m_perimeter);
  m_minimumPlateThickness = getUnset(m_minimumPlateThickness);
  m_maximumPlateThickness = getUnset(m_maximumPlateThickness);
  m_crossSectionArea = getUnset(m_crossSectionArea);
}


IfcGeneralProfileProperties::~IfcGeneralProfileProperties() {
}

bool IfcGeneralProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGeneralProfileProperties(this);
}

const char *IfcGeneralProfileProperties::type() {
  return "IfcGeneralProfileProperties";
}

Step::ClassType IfcGeneralProfileProperties::getClassType() {
  return IfcGeneralProfileProperties::s_type;
}

Step::ClassType IfcGeneralProfileProperties::getType() const {
  return IfcGeneralProfileProperties::s_type;
}

bool IfcGeneralProfileProperties::isOfType(Step::ClassType t) {
  return IfcGeneralProfileProperties::s_type == t ? true : IfcProfileProperties::isOfType(t);
}

IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight() {
  if (Step::BaseObject::inited()) {
    return m_physicalWeight;
  }
  else {
    return getUnset(m_physicalWeight);
  }
}

void IfcGeneralProfileProperties::setPhysicalWeight(IfcMassPerLengthMeasure value) {
  m_physicalWeight = value;
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter() {
  if (Step::BaseObject::inited()) {
    return m_perimeter;
  }
  else {
    return getUnset(m_perimeter);
  }
}

void IfcGeneralProfileProperties::setPerimeter(IfcPositiveLengthMeasure value) {
  m_perimeter = value;
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness() {
  if (Step::BaseObject::inited()) {
    return m_minimumPlateThickness;
  }
  else {
    return getUnset(m_minimumPlateThickness);
  }
}

void IfcGeneralProfileProperties::setMinimumPlateThickness(IfcPositiveLengthMeasure value) {
  m_minimumPlateThickness = value;
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness() {
  if (Step::BaseObject::inited()) {
    return m_maximumPlateThickness;
  }
  else {
    return getUnset(m_maximumPlateThickness);
  }
}

void IfcGeneralProfileProperties::setMaximumPlateThickness(IfcPositiveLengthMeasure value) {
  m_maximumPlateThickness = value;
}

IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea() {
  if (Step::BaseObject::inited()) {
    return m_crossSectionArea;
  }
  else {
    return getUnset(m_crossSectionArea);
  }
}

void IfcGeneralProfileProperties::setCrossSectionArea(IfcAreaMeasure value) {
  m_crossSectionArea = value;
}

void IfcGeneralProfileProperties::release() {
  IfcProfileProperties::release();
}

bool IfcGeneralProfileProperties::init() {
  bool status = IfcProfileProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_physicalWeight = getUnset(m_physicalWeight);
  }
  else {
    m_physicalWeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_perimeter = getUnset(m_perimeter);
  }
  else {
    m_perimeter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minimumPlateThickness = getUnset(m_minimumPlateThickness);
  }
  else {
    m_minimumPlateThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maximumPlateThickness = getUnset(m_maximumPlateThickness);
  }
  else {
    m_maximumPlateThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_crossSectionArea = getUnset(m_crossSectionArea);
  }
  else {
    m_crossSectionArea = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeneralProfileProperties::s_type = new Step::ClassType_class("IfcGeneralProfileProperties");
IfcGeneralProfileProperties_Factory::IfcGeneralProfileProperties_Factory() {
}

IfcGeneralProfileProperties_Factory::~IfcGeneralProfileProperties_Factory() {
  clear(true);
}

void IfcGeneralProfileProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeneralProfileProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeneralProfileProperties_Factory::end() {
  return m_idMap.end();
}

IfcGeneralProfileProperties *IfcGeneralProfileProperties_Factory::get(Step::StepId id) {
  IfcGeneralProfileProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGeneralProfileProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcGeneralProfileProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGeneralProfileProperties * > (create(id));
  }
}

Step::BaseObject *IfcGeneralProfileProperties_Factory::create(Step::StepId id) {
  IfcGeneralProfileProperties *ret = new IfcGeneralProfileProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGeneralProfileProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGeneralProfileProperties *ret = new IfcGeneralProfileProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGeneralProfileProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGeneralProfileProperties *ret = new IfcGeneralProfileProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGeneralProfileProperties *IfcGeneralProfileProperties_Factory::generate() {
  return static_cast< IfcGeneralProfileProperties * > (create(m_model->getNewId()));
}

IfcGeneralProfileProperties *IfcGeneralProfileProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGeneralProfileProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

