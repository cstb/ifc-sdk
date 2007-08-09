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
#include <ifc2x3/IfcTShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTShapeProfileDef::IfcTShapeProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_depth = getUnset(m_depth);
  m_flangeWidth = getUnset(m_flangeWidth);
  m_webThickness = getUnset(m_webThickness);
  m_flangeThickness = getUnset(m_flangeThickness);
  m_filletRadius = getUnset(m_filletRadius);
  m_flangeEdgeRadius = getUnset(m_flangeEdgeRadius);
  m_webEdgeRadius = getUnset(m_webEdgeRadius);
  m_webSlope = getUnset(m_webSlope);
  m_flangeSlope = getUnset(m_flangeSlope);
  m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
}


IfcTShapeProfileDef::~IfcTShapeProfileDef() {
}

bool IfcTShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTShapeProfileDef(this);
}

const char *IfcTShapeProfileDef::type() {
  return "IfcTShapeProfileDef";
}

Step::ClassType IfcTShapeProfileDef::getClassType() {
  return IfcTShapeProfileDef::s_type;
}

Step::ClassType IfcTShapeProfileDef::getType() const {
  return IfcTShapeProfileDef::s_type;
}

bool IfcTShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcTShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getDepth() {
  if (Step::BaseObject::inited()) {
    return m_depth;
  }
  else {
    return getUnset(m_depth);
  }
}

void IfcTShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
  m_depth = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeWidth() {
  if (Step::BaseObject::inited()) {
    return m_flangeWidth;
  }
  else {
    return getUnset(m_flangeWidth);
  }
}

void IfcTShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
  m_flangeWidth = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebThickness() {
  if (Step::BaseObject::inited()) {
    return m_webThickness;
  }
  else {
    return getUnset(m_webThickness);
  }
}

void IfcTShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
  m_webThickness = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeThickness() {
  if (Step::BaseObject::inited()) {
    return m_flangeThickness;
  }
  else {
    return getUnset(m_flangeThickness);
  }
}

void IfcTShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
  m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_filletRadius;
  }
  else {
    return getUnset(m_filletRadius);
  }
}

void IfcTShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
  m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeEdgeRadius() {
  if (Step::BaseObject::inited()) {
    return m_flangeEdgeRadius;
  }
  else {
    return getUnset(m_flangeEdgeRadius);
  }
}

void IfcTShapeProfileDef::setFlangeEdgeRadius(IfcPositiveLengthMeasure value) {
  m_flangeEdgeRadius = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebEdgeRadius() {
  if (Step::BaseObject::inited()) {
    return m_webEdgeRadius;
  }
  else {
    return getUnset(m_webEdgeRadius);
  }
}

void IfcTShapeProfileDef::setWebEdgeRadius(IfcPositiveLengthMeasure value) {
  m_webEdgeRadius = value;
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getWebSlope() {
  if (Step::BaseObject::inited()) {
    return m_webSlope;
  }
  else {
    return getUnset(m_webSlope);
  }
}

void IfcTShapeProfileDef::setWebSlope(IfcPlaneAngleMeasure value) {
  m_webSlope = value;
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getFlangeSlope() {
  if (Step::BaseObject::inited()) {
    return m_flangeSlope;
  }
  else {
    return getUnset(m_flangeSlope);
  }
}

void IfcTShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value) {
  m_flangeSlope = value;
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getCentreOfGravityInY() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInY;
  }
  else {
    return getUnset(m_centreOfGravityInY);
  }
}

void IfcTShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInY = value;
}

void IfcTShapeProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcTShapeProfileDef::init() {
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
    m_flangeEdgeRadius = getUnset(m_flangeEdgeRadius);
  }
  else {
    m_flangeEdgeRadius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_webEdgeRadius = getUnset(m_webEdgeRadius);
  }
  else {
    m_webEdgeRadius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_webSlope = getUnset(m_webSlope);
  }
  else {
    m_webSlope = Step::spfToReal(arg);
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
    m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
  }
  else {
    m_centreOfGravityInY = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTShapeProfileDef::s_type = new Step::ClassType_class("IfcTShapeProfileDef");
IfcTShapeProfileDef_Factory::IfcTShapeProfileDef_Factory() {
}

IfcTShapeProfileDef_Factory::~IfcTShapeProfileDef_Factory() {
  clear(true);
}

void IfcTShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcTShapeProfileDef *IfcTShapeProfileDef_Factory::get(Step::StepId id) {
  IfcTShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcTShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcTShapeProfileDef_Factory::create(Step::StepId id) {
  IfcTShapeProfileDef *ret = new IfcTShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTShapeProfileDef *ret = new IfcTShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTShapeProfileDef *ret = new IfcTShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTShapeProfileDef *IfcTShapeProfileDef_Factory::generate() {
  return static_cast< IfcTShapeProfileDef * > (create(m_model->getNewId()));
}

IfcTShapeProfileDef *IfcTShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

