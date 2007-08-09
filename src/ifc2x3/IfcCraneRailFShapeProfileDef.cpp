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
#include <ifc2x3/IfcCraneRailFShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCraneRailFShapeProfileDef::IfcCraneRailFShapeProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_overallHeight = getUnset(m_overallHeight);
  m_headWidth = getUnset(m_headWidth);
  m_radius = getUnset(m_radius);
  m_headDepth2 = getUnset(m_headDepth2);
  m_headDepth3 = getUnset(m_headDepth3);
  m_webThickness = getUnset(m_webThickness);
  m_baseDepth1 = getUnset(m_baseDepth1);
  m_baseDepth2 = getUnset(m_baseDepth2);
  m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
}


IfcCraneRailFShapeProfileDef::~IfcCraneRailFShapeProfileDef() {
}

bool IfcCraneRailFShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCraneRailFShapeProfileDef(this);
}

const char *IfcCraneRailFShapeProfileDef::type() {
  return "IfcCraneRailFShapeProfileDef";
}

Step::ClassType IfcCraneRailFShapeProfileDef::getClassType() {
  return IfcCraneRailFShapeProfileDef::s_type;
}

Step::ClassType IfcCraneRailFShapeProfileDef::getType() const {
  return IfcCraneRailFShapeProfileDef::s_type;
}

bool IfcCraneRailFShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcCraneRailFShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getOverallHeight() {
  if (Step::BaseObject::inited()) {
    return m_overallHeight;
  }
  else {
    return getUnset(m_overallHeight);
  }
}

void IfcCraneRailFShapeProfileDef::setOverallHeight(IfcPositiveLengthMeasure value) {
  m_overallHeight = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadWidth() {
  if (Step::BaseObject::inited()) {
    return m_headWidth;
  }
  else {
    return getUnset(m_headWidth);
  }
}

void IfcCraneRailFShapeProfileDef::setHeadWidth(IfcPositiveLengthMeasure value) {
  m_headWidth = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getRadius() {
  if (Step::BaseObject::inited()) {
    return m_radius;
  }
  else {
    return getUnset(m_radius);
  }
}

void IfcCraneRailFShapeProfileDef::setRadius(IfcPositiveLengthMeasure value) {
  m_radius = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth2() {
  if (Step::BaseObject::inited()) {
    return m_headDepth2;
  }
  else {
    return getUnset(m_headDepth2);
  }
}

void IfcCraneRailFShapeProfileDef::setHeadDepth2(IfcPositiveLengthMeasure value) {
  m_headDepth2 = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth3() {
  if (Step::BaseObject::inited()) {
    return m_headDepth3;
  }
  else {
    return getUnset(m_headDepth3);
  }
}

void IfcCraneRailFShapeProfileDef::setHeadDepth3(IfcPositiveLengthMeasure value) {
  m_headDepth3 = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getWebThickness() {
  if (Step::BaseObject::inited()) {
    return m_webThickness;
  }
  else {
    return getUnset(m_webThickness);
  }
}

void IfcCraneRailFShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
  m_webThickness = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth1() {
  if (Step::BaseObject::inited()) {
    return m_baseDepth1;
  }
  else {
    return getUnset(m_baseDepth1);
  }
}

void IfcCraneRailFShapeProfileDef::setBaseDepth1(IfcPositiveLengthMeasure value) {
  m_baseDepth1 = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth2() {
  if (Step::BaseObject::inited()) {
    return m_baseDepth2;
  }
  else {
    return getUnset(m_baseDepth2);
  }
}

void IfcCraneRailFShapeProfileDef::setBaseDepth2(IfcPositiveLengthMeasure value) {
  m_baseDepth2 = value;
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getCentreOfGravityInY() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInY;
  }
  else {
    return getUnset(m_centreOfGravityInY);
  }
}

void IfcCraneRailFShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInY = value;
}

void IfcCraneRailFShapeProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcCraneRailFShapeProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_overallHeight = getUnset(m_overallHeight);
  }
  else {
    m_overallHeight = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_headWidth = getUnset(m_headWidth);
  }
  else {
    m_headWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_radius = getUnset(m_radius);
  }
  else {
    m_radius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_headDepth2 = getUnset(m_headDepth2);
  }
  else {
    m_headDepth2 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_headDepth3 = getUnset(m_headDepth3);
  }
  else {
    m_headDepth3 = Step::spfToReal(arg);
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
    m_baseDepth1 = getUnset(m_baseDepth1);
  }
  else {
    m_baseDepth1 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_baseDepth2 = getUnset(m_baseDepth2);
  }
  else {
    m_baseDepth2 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
  }
  else {
    m_centreOfGravityInY = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCraneRailFShapeProfileDef::s_type = new Step::ClassType_class("IfcCraneRailFShapeProfileDef");
IfcCraneRailFShapeProfileDef_Factory::IfcCraneRailFShapeProfileDef_Factory() {
}

IfcCraneRailFShapeProfileDef_Factory::~IfcCraneRailFShapeProfileDef_Factory() {
  clear(true);
}

void IfcCraneRailFShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCraneRailFShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCraneRailFShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcCraneRailFShapeProfileDef *IfcCraneRailFShapeProfileDef_Factory::get(Step::StepId id) {
  IfcCraneRailFShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCraneRailFShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcCraneRailFShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCraneRailFShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcCraneRailFShapeProfileDef_Factory::create(Step::StepId id) {
  IfcCraneRailFShapeProfileDef *ret = new IfcCraneRailFShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCraneRailFShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCraneRailFShapeProfileDef *ret = new IfcCraneRailFShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCraneRailFShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCraneRailFShapeProfileDef *ret = new IfcCraneRailFShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCraneRailFShapeProfileDef *IfcCraneRailFShapeProfileDef_Factory::generate() {
  return static_cast< IfcCraneRailFShapeProfileDef * > (create(m_model->getNewId()));
}

IfcCraneRailFShapeProfileDef *IfcCraneRailFShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCraneRailFShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

