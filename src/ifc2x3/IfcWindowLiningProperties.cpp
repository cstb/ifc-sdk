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
#include <ifc2x3/IfcWindowLiningProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWindowLiningProperties::IfcWindowLiningProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_liningDepth = getUnset(m_liningDepth);
  m_liningThickness = getUnset(m_liningThickness);
  m_transomThickness = getUnset(m_transomThickness);
  m_mullionThickness = getUnset(m_mullionThickness);
  m_firstTransomOffset = getUnset(m_firstTransomOffset);
  m_secondTransomOffset = getUnset(m_secondTransomOffset);
  m_firstMullionOffset = getUnset(m_firstMullionOffset);
  m_secondMullionOffset = getUnset(m_secondMullionOffset);
  m_shapeAspectStyle = NULL;
}


IfcWindowLiningProperties::~IfcWindowLiningProperties() {
}

bool IfcWindowLiningProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWindowLiningProperties(this);
}

const char *IfcWindowLiningProperties::type() {
  return "IfcWindowLiningProperties";
}

Step::ClassType IfcWindowLiningProperties::getClassType() {
  return IfcWindowLiningProperties::s_type;
}

Step::ClassType IfcWindowLiningProperties::getType() const {
  return IfcWindowLiningProperties::s_type;
}

bool IfcWindowLiningProperties::isOfType(Step::ClassType t) {
  return IfcWindowLiningProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningDepth() {
  if (Step::BaseObject::inited()) {
    return m_liningDepth;
  }
  else {
    return getUnset(m_liningDepth);
  }
}

void IfcWindowLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value) {
  m_liningDepth = value;
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningThickness() {
  if (Step::BaseObject::inited()) {
    return m_liningThickness;
  }
  else {
    return getUnset(m_liningThickness);
  }
}

void IfcWindowLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value) {
  m_liningThickness = value;
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getTransomThickness() {
  if (Step::BaseObject::inited()) {
    return m_transomThickness;
  }
  else {
    return getUnset(m_transomThickness);
  }
}

void IfcWindowLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value) {
  m_transomThickness = value;
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getMullionThickness() {
  if (Step::BaseObject::inited()) {
    return m_mullionThickness;
  }
  else {
    return getUnset(m_mullionThickness);
  }
}

void IfcWindowLiningProperties::setMullionThickness(IfcPositiveLengthMeasure value) {
  m_mullionThickness = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstTransomOffset() {
  if (Step::BaseObject::inited()) {
    return m_firstTransomOffset;
  }
  else {
    return getUnset(m_firstTransomOffset);
  }
}

void IfcWindowLiningProperties::setFirstTransomOffset(IfcNormalisedRatioMeasure value) {
  m_firstTransomOffset = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondTransomOffset() {
  if (Step::BaseObject::inited()) {
    return m_secondTransomOffset;
  }
  else {
    return getUnset(m_secondTransomOffset);
  }
}

void IfcWindowLiningProperties::setSecondTransomOffset(IfcNormalisedRatioMeasure value) {
  m_secondTransomOffset = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstMullionOffset() {
  if (Step::BaseObject::inited()) {
    return m_firstMullionOffset;
  }
  else {
    return getUnset(m_firstMullionOffset);
  }
}

void IfcWindowLiningProperties::setFirstMullionOffset(IfcNormalisedRatioMeasure value) {
  m_firstMullionOffset = value;
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondMullionOffset() {
  if (Step::BaseObject::inited()) {
    return m_secondMullionOffset;
  }
  else {
    return getUnset(m_secondMullionOffset);
  }
}

void IfcWindowLiningProperties::setSecondMullionOffset(IfcNormalisedRatioMeasure value) {
  m_secondMullionOffset = value;
}

IfcShapeAspect *IfcWindowLiningProperties::getShapeAspectStyle() {
  if (Step::BaseObject::inited()) {
    return m_shapeAspectStyle.get();
  }
  else {
    return NULL;
  }
}

void IfcWindowLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
  m_shapeAspectStyle = value;
}

void IfcWindowLiningProperties::release() {
  IfcPropertySetDefinition::release();
  m_shapeAspectStyle.release();
}

bool IfcWindowLiningProperties::init() {
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
    m_transomThickness = getUnset(m_transomThickness);
  }
  else {
    m_transomThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mullionThickness = getUnset(m_mullionThickness);
  }
  else {
    m_mullionThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_firstTransomOffset = getUnset(m_firstTransomOffset);
  }
  else {
    m_firstTransomOffset = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_secondTransomOffset = getUnset(m_secondTransomOffset);
  }
  else {
    m_secondTransomOffset = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_firstMullionOffset = getUnset(m_firstMullionOffset);
  }
  else {
    m_firstMullionOffset = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_secondMullionOffset = getUnset(m_secondMullionOffset);
  }
  else {
    m_secondMullionOffset = Step::spfToReal(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcWindowLiningProperties::s_type = new Step::ClassType_class("IfcWindowLiningProperties");
IfcWindowLiningProperties_Factory::IfcWindowLiningProperties_Factory() {
}

IfcWindowLiningProperties_Factory::~IfcWindowLiningProperties_Factory() {
  clear(true);
}

void IfcWindowLiningProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindowLiningProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindowLiningProperties_Factory::end() {
  return m_idMap.end();
}

IfcWindowLiningProperties *IfcWindowLiningProperties_Factory::get(Step::StepId id) {
  IfcWindowLiningProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWindowLiningProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcWindowLiningProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWindowLiningProperties * > (create(id));
  }
}

Step::BaseObject *IfcWindowLiningProperties_Factory::create(Step::StepId id) {
  IfcWindowLiningProperties *ret = new IfcWindowLiningProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWindowLiningProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWindowLiningProperties *ret = new IfcWindowLiningProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWindowLiningProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWindowLiningProperties *ret = new IfcWindowLiningProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWindowLiningProperties *IfcWindowLiningProperties_Factory::generate() {
  return static_cast< IfcWindowLiningProperties * > (create(m_model->getNewId()));
}

IfcWindowLiningProperties *IfcWindowLiningProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWindowLiningProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

