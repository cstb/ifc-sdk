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
#include <ifc2x3/IfcRibPlateProfileProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRibPlateProfileProperties::IfcRibPlateProfileProperties(Step::SPFData *args) : IfcProfileProperties(args) {
  m_thickness = getUnset(m_thickness);
  m_ribHeight = getUnset(m_ribHeight);
  m_ribWidth = getUnset(m_ribWidth);
  m_ribSpacing = getUnset(m_ribSpacing);
  m_direction = IfcRibPlateDirectionEnum_UNSET;
}


IfcRibPlateProfileProperties::~IfcRibPlateProfileProperties() {
}

bool IfcRibPlateProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRibPlateProfileProperties(this);
}

const char *IfcRibPlateProfileProperties::type() {
  return "IfcRibPlateProfileProperties";
}

Step::ClassType IfcRibPlateProfileProperties::getClassType() {
  return IfcRibPlateProfileProperties::s_type;
}

Step::ClassType IfcRibPlateProfileProperties::getType() const {
  return IfcRibPlateProfileProperties::s_type;
}

bool IfcRibPlateProfileProperties::isOfType(Step::ClassType t) {
  return IfcRibPlateProfileProperties::s_type == t ? true : IfcProfileProperties::isOfType(t);
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getThickness() {
  if (Step::BaseObject::inited()) {
    return m_thickness;
  }
  else {
    return getUnset(m_thickness);
  }
}

void IfcRibPlateProfileProperties::setThickness(IfcPositiveLengthMeasure value) {
  m_thickness = value;
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibHeight() {
  if (Step::BaseObject::inited()) {
    return m_ribHeight;
  }
  else {
    return getUnset(m_ribHeight);
  }
}

void IfcRibPlateProfileProperties::setRibHeight(IfcPositiveLengthMeasure value) {
  m_ribHeight = value;
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibWidth() {
  if (Step::BaseObject::inited()) {
    return m_ribWidth;
  }
  else {
    return getUnset(m_ribWidth);
  }
}

void IfcRibPlateProfileProperties::setRibWidth(IfcPositiveLengthMeasure value) {
  m_ribWidth = value;
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibSpacing() {
  if (Step::BaseObject::inited()) {
    return m_ribSpacing;
  }
  else {
    return getUnset(m_ribSpacing);
  }
}

void IfcRibPlateProfileProperties::setRibSpacing(IfcPositiveLengthMeasure value) {
  m_ribSpacing = value;
}

IfcRibPlateDirectionEnum IfcRibPlateProfileProperties::getDirection() {
  if (Step::BaseObject::inited()) {
    return m_direction;
  }
  else {
    return IfcRibPlateDirectionEnum_UNSET;
  }
}

void IfcRibPlateProfileProperties::setDirection(IfcRibPlateDirectionEnum value) {
  m_direction = value;
}

void IfcRibPlateProfileProperties::release() {
  IfcProfileProperties::release();
}

bool IfcRibPlateProfileProperties::init() {
  bool status = IfcProfileProperties::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thickness = getUnset(m_thickness);
  }
  else {
    m_thickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ribHeight = getUnset(m_ribHeight);
  }
  else {
    m_ribHeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ribWidth = getUnset(m_ribWidth);
  }
  else {
    m_ribWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ribSpacing = getUnset(m_ribSpacing);
  }
  else {
    m_ribSpacing = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_direction = IfcRibPlateDirectionEnum_UNSET;
  }
  else {
    if (arg == ".DIRECTION_X.") {
      m_direction = IfcRibPlateDirectionEnum_DIRECTION_X;
    }
    else if (arg == ".DIRECTION_Y.") {
      m_direction = IfcRibPlateDirectionEnum_DIRECTION_Y;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRibPlateProfileProperties::s_type = new Step::ClassType_class("IfcRibPlateProfileProperties");
IfcRibPlateProfileProperties_Factory::IfcRibPlateProfileProperties_Factory() {
}

IfcRibPlateProfileProperties_Factory::~IfcRibPlateProfileProperties_Factory() {
  clear(true);
}

void IfcRibPlateProfileProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRibPlateProfileProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRibPlateProfileProperties_Factory::end() {
  return m_idMap.end();
}

IfcRibPlateProfileProperties *IfcRibPlateProfileProperties_Factory::get(Step::StepId id) {
  IfcRibPlateProfileProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRibPlateProfileProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcRibPlateProfileProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRibPlateProfileProperties * > (create(id));
  }
}

Step::BaseObject *IfcRibPlateProfileProperties_Factory::create(Step::StepId id) {
  IfcRibPlateProfileProperties *ret = new IfcRibPlateProfileProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRibPlateProfileProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRibPlateProfileProperties *ret = new IfcRibPlateProfileProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRibPlateProfileProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRibPlateProfileProperties *ret = new IfcRibPlateProfileProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRibPlateProfileProperties *IfcRibPlateProfileProperties_Factory::generate() {
  return static_cast< IfcRibPlateProfileProperties * > (create(m_model->getNewId()));
}

IfcRibPlateProfileProperties *IfcRibPlateProfileProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRibPlateProfileProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

