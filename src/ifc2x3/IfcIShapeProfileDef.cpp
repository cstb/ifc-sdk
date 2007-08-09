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
#include <ifc2x3/IfcIShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcIShapeProfileDef::IfcIShapeProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_overallWidth = getUnset(m_overallWidth);
  m_overallDepth = getUnset(m_overallDepth);
  m_webThickness = getUnset(m_webThickness);
  m_flangeThickness = getUnset(m_flangeThickness);
  m_filletRadius = getUnset(m_filletRadius);
}


IfcIShapeProfileDef::~IfcIShapeProfileDef() {
}

bool IfcIShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcIShapeProfileDef(this);
}

const char *IfcIShapeProfileDef::type() {
  return "IfcIShapeProfileDef";
}

Step::ClassType IfcIShapeProfileDef::getClassType() {
  return IfcIShapeProfileDef::s_type;
}

Step::ClassType IfcIShapeProfileDef::getType() const {
  return IfcIShapeProfileDef::s_type;
}

bool IfcIShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcIShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallWidth() {
  if (Step::BaseObject::inited()) {
    return m_overallWidth;
  }
  else {
    return getUnset(m_overallWidth);
  }
}

void IfcIShapeProfileDef::setOverallWidth(IfcPositiveLengthMeasure value) {
  m_overallWidth = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallDepth() {
  if (Step::BaseObject::inited()) {
    return m_overallDepth;
  }
  else {
    return getUnset(m_overallDepth);
  }
}

void IfcIShapeProfileDef::setOverallDepth(IfcPositiveLengthMeasure value) {
  m_overallDepth = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getWebThickness() {
  if (Step::BaseObject::inited()) {
    return m_webThickness;
  }
  else {
    return getUnset(m_webThickness);
  }
}

void IfcIShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
  m_webThickness = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getFlangeThickness() {
  if (Step::BaseObject::inited()) {
    return m_flangeThickness;
  }
  else {
    return getUnset(m_flangeThickness);
  }
}

void IfcIShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
  m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_filletRadius;
  }
  else {
    return getUnset(m_filletRadius);
  }
}

void IfcIShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
  m_filletRadius = value;
}

void IfcIShapeProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcIShapeProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_overallWidth = getUnset(m_overallWidth);
  }
  else {
    m_overallWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_overallDepth = getUnset(m_overallDepth);
  }
  else {
    m_overallDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_webThickness = getUnset(m_webThickness);
  }
  else {
    m_webThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flangeThickness = getUnset(m_flangeThickness);
  }
  else {
    m_flangeThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_filletRadius = getUnset(m_filletRadius);
  }
  else {
    m_filletRadius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcIShapeProfileDef::s_type = new Step::ClassType_class("IfcIShapeProfileDef");
IfcIShapeProfileDef_Factory::IfcIShapeProfileDef_Factory() {
}

IfcIShapeProfileDef_Factory::~IfcIShapeProfileDef_Factory() {
  clear(true);
}

void IfcIShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcIShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcIShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcIShapeProfileDef *IfcIShapeProfileDef_Factory::get(Step::StepId id) {
  IfcIShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcIShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcIShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcIShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcIShapeProfileDef_Factory::create(Step::StepId id) {
  IfcIShapeProfileDef *ret = new IfcIShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcIShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcIShapeProfileDef *ret = new IfcIShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcIShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcIShapeProfileDef *ret = new IfcIShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcIShapeProfileDef *IfcIShapeProfileDef_Factory::generate() {
  return static_cast< IfcIShapeProfileDef * > (create(m_model->getNewId()));
}

IfcIShapeProfileDef *IfcIShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcIShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

