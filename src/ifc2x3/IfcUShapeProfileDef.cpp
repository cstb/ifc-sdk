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
#include <ifc2x3/IfcUShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcUShapeProfileDef::IfcUShapeProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_depth = getUnset(m_depth);
  m_flangeWidth = getUnset(m_flangeWidth);
  m_webThickness = getUnset(m_webThickness);
  m_flangeThickness = getUnset(m_flangeThickness);
  m_filletRadius = getUnset(m_filletRadius);
  m_edgeRadius = getUnset(m_edgeRadius);
  m_flangeSlope = getUnset(m_flangeSlope);
  m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
}


IfcUShapeProfileDef::~IfcUShapeProfileDef() {
}

bool IfcUShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcUShapeProfileDef(this);
}

const char *IfcUShapeProfileDef::type() {
  return "IfcUShapeProfileDef";
}

Step::ClassType IfcUShapeProfileDef::getClassType() {
  return IfcUShapeProfileDef::s_type;
}

Step::ClassType IfcUShapeProfileDef::getType() const {
  return IfcUShapeProfileDef::s_type;
}

bool IfcUShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcUShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getDepth() {
  if (Step::BaseObject::inited()) {
    return m_depth;
  }
  else {
    return getUnset(m_depth);
  }
}

void IfcUShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
  m_depth = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeWidth() {
  if (Step::BaseObject::inited()) {
    return m_flangeWidth;
  }
  else {
    return getUnset(m_flangeWidth);
  }
}

void IfcUShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
  m_flangeWidth = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getWebThickness() {
  if (Step::BaseObject::inited()) {
    return m_webThickness;
  }
  else {
    return getUnset(m_webThickness);
  }
}

void IfcUShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
  m_webThickness = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeThickness() {
  if (Step::BaseObject::inited()) {
    return m_flangeThickness;
  }
  else {
    return getUnset(m_flangeThickness);
  }
}

void IfcUShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
  m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_filletRadius;
  }
  else {
    return getUnset(m_filletRadius);
  }
}

void IfcUShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
  m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getEdgeRadius() {
  if (Step::BaseObject::inited()) {
    return m_edgeRadius;
  }
  else {
    return getUnset(m_edgeRadius);
  }
}

void IfcUShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
  m_edgeRadius = value;
}

IfcPlaneAngleMeasure IfcUShapeProfileDef::getFlangeSlope() {
  if (Step::BaseObject::inited()) {
    return m_flangeSlope;
  }
  else {
    return getUnset(m_flangeSlope);
  }
}

void IfcUShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value) {
  m_flangeSlope = value;
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getCentreOfGravityInX() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInX;
  }
  else {
    return getUnset(m_centreOfGravityInX);
  }
}

void IfcUShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInX = value;
}

void IfcUShapeProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcUShapeProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_depth = getUnset(m_depth);
  }
  else {
    m_depth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flangeWidth = getUnset(m_flangeWidth);
  }
  else {
    m_flangeWidth = Step::spfToReal(arg);
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edgeRadius = getUnset(m_edgeRadius);
  }
  else {
    m_edgeRadius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flangeSlope = getUnset(m_flangeSlope);
  }
  else {
    m_flangeSlope = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
  }
  else {
    m_centreOfGravityInX = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcUShapeProfileDef::s_type = new Step::ClassType_class("IfcUShapeProfileDef");
IfcUShapeProfileDef_Factory::IfcUShapeProfileDef_Factory() {
}

IfcUShapeProfileDef_Factory::~IfcUShapeProfileDef_Factory() {
  clear(true);
}

void IfcUShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcUShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcUShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcUShapeProfileDef *IfcUShapeProfileDef_Factory::get(Step::StepId id) {
  IfcUShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcUShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcUShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcUShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcUShapeProfileDef_Factory::create(Step::StepId id) {
  IfcUShapeProfileDef *ret = new IfcUShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcUShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcUShapeProfileDef *ret = new IfcUShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcUShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcUShapeProfileDef *ret = new IfcUShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcUShapeProfileDef *IfcUShapeProfileDef_Factory::generate() {
  return static_cast< IfcUShapeProfileDef * > (create(m_model->getNewId()));
}

IfcUShapeProfileDef *IfcUShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcUShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

