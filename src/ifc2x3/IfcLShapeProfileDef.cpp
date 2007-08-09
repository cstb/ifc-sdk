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
#include <ifc2x3/IfcLShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLShapeProfileDef::IfcLShapeProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_depth = getUnset(m_depth);
  m_width = getUnset(m_width);
  m_thickness = getUnset(m_thickness);
  m_filletRadius = getUnset(m_filletRadius);
  m_edgeRadius = getUnset(m_edgeRadius);
  m_legSlope = getUnset(m_legSlope);
  m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
  m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
}


IfcLShapeProfileDef::~IfcLShapeProfileDef() {
}

bool IfcLShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLShapeProfileDef(this);
}

const char *IfcLShapeProfileDef::type() {
  return "IfcLShapeProfileDef";
}

Step::ClassType IfcLShapeProfileDef::getClassType() {
  return IfcLShapeProfileDef::s_type;
}

Step::ClassType IfcLShapeProfileDef::getType() const {
  return IfcLShapeProfileDef::s_type;
}

bool IfcLShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcLShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getDepth() {
  if (Step::BaseObject::inited()) {
    return m_depth;
  }
  else {
    return getUnset(m_depth);
  }
}

void IfcLShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
  m_depth = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getWidth() {
  if (Step::BaseObject::inited()) {
    return m_width;
  }
  else {
    return getUnset(m_width);
  }
}

void IfcLShapeProfileDef::setWidth(IfcPositiveLengthMeasure value) {
  m_width = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getThickness() {
  if (Step::BaseObject::inited()) {
    return m_thickness;
  }
  else {
    return getUnset(m_thickness);
  }
}

void IfcLShapeProfileDef::setThickness(IfcPositiveLengthMeasure value) {
  m_thickness = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_filletRadius;
  }
  else {
    return getUnset(m_filletRadius);
  }
}

void IfcLShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
  m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getEdgeRadius() {
  if (Step::BaseObject::inited()) {
    return m_edgeRadius;
  }
  else {
    return getUnset(m_edgeRadius);
  }
}

void IfcLShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
  m_edgeRadius = value;
}

IfcPlaneAngleMeasure IfcLShapeProfileDef::getLegSlope() {
  if (Step::BaseObject::inited()) {
    return m_legSlope;
  }
  else {
    return getUnset(m_legSlope);
  }
}

void IfcLShapeProfileDef::setLegSlope(IfcPlaneAngleMeasure value) {
  m_legSlope = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInX() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInX;
  }
  else {
    return getUnset(m_centreOfGravityInX);
  }
}

void IfcLShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInX = value;
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInY() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInY;
  }
  else {
    return getUnset(m_centreOfGravityInY);
  }
}

void IfcLShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInY = value;
}

void IfcLShapeProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcLShapeProfileDef::init() {
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
    m_width = getUnset(m_width);
  }
  else {
    m_width = Step::spfToReal(arg);
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
    m_legSlope = getUnset(m_legSlope);
  }
  else {
    m_legSlope = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
  }
  else {
    m_centreOfGravityInX = Step::spfToReal(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcLShapeProfileDef::s_type = new Step::ClassType_class("IfcLShapeProfileDef");
IfcLShapeProfileDef_Factory::IfcLShapeProfileDef_Factory() {
}

IfcLShapeProfileDef_Factory::~IfcLShapeProfileDef_Factory() {
  clear(true);
}

void IfcLShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcLShapeProfileDef *IfcLShapeProfileDef_Factory::get(Step::StepId id) {
  IfcLShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcLShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcLShapeProfileDef_Factory::create(Step::StepId id) {
  IfcLShapeProfileDef *ret = new IfcLShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLShapeProfileDef *ret = new IfcLShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLShapeProfileDef *ret = new IfcLShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLShapeProfileDef *IfcLShapeProfileDef_Factory::generate() {
  return static_cast< IfcLShapeProfileDef * > (create(m_model->getNewId()));
}

IfcLShapeProfileDef *IfcLShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

