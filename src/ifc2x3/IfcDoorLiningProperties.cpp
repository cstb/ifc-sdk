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
#include <ifc2x3/IfcDoorLiningProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDoorLiningProperties::IfcDoorLiningProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_liningDepth = getUnset(m_liningDepth);
  m_liningThickness = getUnset(m_liningThickness);
  m_thresholdDepth = getUnset(m_thresholdDepth);
  m_thresholdThickness = getUnset(m_thresholdThickness);
  m_transomThickness = getUnset(m_transomThickness);
  m_transomOffset = getUnset(m_transomOffset);
  m_liningOffset = getUnset(m_liningOffset);
  m_thresholdOffset = getUnset(m_thresholdOffset);
  m_casingThickness = getUnset(m_casingThickness);
  m_casingDepth = getUnset(m_casingDepth);
  m_shapeAspectStyle = NULL;
}


IfcDoorLiningProperties::~IfcDoorLiningProperties() {
}

bool IfcDoorLiningProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDoorLiningProperties(this);
}

const char *IfcDoorLiningProperties::type() {
  return "IfcDoorLiningProperties";
}

Step::ClassType IfcDoorLiningProperties::getClassType() {
  return IfcDoorLiningProperties::s_type;
}

Step::ClassType IfcDoorLiningProperties::getType() const {
  return IfcDoorLiningProperties::s_type;
}

bool IfcDoorLiningProperties::isOfType(Step::ClassType t) {
  return IfcDoorLiningProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningDepth() {
  if (Step::BaseObject::inited()) {
    return m_liningDepth;
  }
  else {
    return getUnset(m_liningDepth);
  }
}

void IfcDoorLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value) {
  m_liningDepth = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningThickness() {
  if (Step::BaseObject::inited()) {
    return m_liningThickness;
  }
  else {
    return getUnset(m_liningThickness);
  }
}

void IfcDoorLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value) {
  m_liningThickness = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdDepth() {
  if (Step::BaseObject::inited()) {
    return m_thresholdDepth;
  }
  else {
    return getUnset(m_thresholdDepth);
  }
}

void IfcDoorLiningProperties::setThresholdDepth(IfcPositiveLengthMeasure value) {
  m_thresholdDepth = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdThickness() {
  if (Step::BaseObject::inited()) {
    return m_thresholdThickness;
  }
  else {
    return getUnset(m_thresholdThickness);
  }
}

void IfcDoorLiningProperties::setThresholdThickness(IfcPositiveLengthMeasure value) {
  m_thresholdThickness = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getTransomThickness() {
  if (Step::BaseObject::inited()) {
    return m_transomThickness;
  }
  else {
    return getUnset(m_transomThickness);
  }
}

void IfcDoorLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value) {
  m_transomThickness = value;
}

IfcLengthMeasure IfcDoorLiningProperties::getTransomOffset() {
  if (Step::BaseObject::inited()) {
    return m_transomOffset;
  }
  else {
    return getUnset(m_transomOffset);
  }
}

void IfcDoorLiningProperties::setTransomOffset(IfcLengthMeasure value) {
  m_transomOffset = value;
}

IfcLengthMeasure IfcDoorLiningProperties::getLiningOffset() {
  if (Step::BaseObject::inited()) {
    return m_liningOffset;
  }
  else {
    return getUnset(m_liningOffset);
  }
}

void IfcDoorLiningProperties::setLiningOffset(IfcLengthMeasure value) {
  m_liningOffset = value;
}

IfcLengthMeasure IfcDoorLiningProperties::getThresholdOffset() {
  if (Step::BaseObject::inited()) {
    return m_thresholdOffset;
  }
  else {
    return getUnset(m_thresholdOffset);
  }
}

void IfcDoorLiningProperties::setThresholdOffset(IfcLengthMeasure value) {
  m_thresholdOffset = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingThickness() {
  if (Step::BaseObject::inited()) {
    return m_casingThickness;
  }
  else {
    return getUnset(m_casingThickness);
  }
}

void IfcDoorLiningProperties::setCasingThickness(IfcPositiveLengthMeasure value) {
  m_casingThickness = value;
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingDepth() {
  if (Step::BaseObject::inited()) {
    return m_casingDepth;
  }
  else {
    return getUnset(m_casingDepth);
  }
}

void IfcDoorLiningProperties::setCasingDepth(IfcPositiveLengthMeasure value) {
  m_casingDepth = value;
}

IfcShapeAspect *IfcDoorLiningProperties::getShapeAspectStyle() {
  if (Step::BaseObject::inited()) {
    return m_shapeAspectStyle.get();
  }
  else {
    return NULL;
  }
}

void IfcDoorLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
  m_shapeAspectStyle = value;
}

void IfcDoorLiningProperties::release() {
  IfcPropertySetDefinition::release();
  m_shapeAspectStyle.release();
}

bool IfcDoorLiningProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_liningDepth = getUnset(m_liningDepth);
  }
  else {
    m_liningDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_liningThickness = getUnset(m_liningThickness);
  }
  else {
    m_liningThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thresholdDepth = getUnset(m_thresholdDepth);
  }
  else {
    m_thresholdDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thresholdThickness = getUnset(m_thresholdThickness);
  }
  else {
    m_thresholdThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transomThickness = getUnset(m_transomThickness);
  }
  else {
    m_transomThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transomOffset = getUnset(m_transomOffset);
  }
  else {
    m_transomOffset = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_liningOffset = getUnset(m_liningOffset);
  }
  else {
    m_liningOffset = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thresholdOffset = getUnset(m_thresholdOffset);
  }
  else {
    m_thresholdOffset = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_casingThickness = getUnset(m_casingThickness);
  }
  else {
    m_casingThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_casingDepth = getUnset(m_casingDepth);
  }
  else {
    m_casingDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shapeAspectStyle = NULL;
  }
  else {
    m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoorLiningProperties::s_type = new Step::ClassType_class("IfcDoorLiningProperties");
IfcDoorLiningProperties_Factory::IfcDoorLiningProperties_Factory() {
}

IfcDoorLiningProperties_Factory::~IfcDoorLiningProperties_Factory() {
  clear(true);
}

void IfcDoorLiningProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDoorLiningProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDoorLiningProperties_Factory::end() {
  return m_idMap.end();
}

IfcDoorLiningProperties *IfcDoorLiningProperties_Factory::get(Step::StepId id) {
  IfcDoorLiningProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDoorLiningProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcDoorLiningProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDoorLiningProperties * > (create(id));
  }
}

Step::BaseObject *IfcDoorLiningProperties_Factory::create(Step::StepId id) {
  IfcDoorLiningProperties *ret = new IfcDoorLiningProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDoorLiningProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDoorLiningProperties *ret = new IfcDoorLiningProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDoorLiningProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDoorLiningProperties *ret = new IfcDoorLiningProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDoorLiningProperties *IfcDoorLiningProperties_Factory::generate() {
  return static_cast< IfcDoorLiningProperties * > (create(m_model->getNewId()));
}

IfcDoorLiningProperties *IfcDoorLiningProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDoorLiningProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

