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
#include <ifc2x3/IfcCShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCShapeProfileDef::IfcCShapeProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_depth = getUnset(m_depth);
  m_width = getUnset(m_width);
  m_wallThickness = getUnset(m_wallThickness);
  m_girth = getUnset(m_girth);
  m_internalFilletRadius = getUnset(m_internalFilletRadius);
  m_centreOfGravityInX = getUnset(m_centreOfGravityInX);
}


IfcCShapeProfileDef::~IfcCShapeProfileDef() {
}

bool IfcCShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCShapeProfileDef(this);
}

const char *IfcCShapeProfileDef::type() {
  return "IfcCShapeProfileDef";
}

Step::ClassType IfcCShapeProfileDef::getClassType() {
  return IfcCShapeProfileDef::s_type;
}

Step::ClassType IfcCShapeProfileDef::getType() const {
  return IfcCShapeProfileDef::s_type;
}

bool IfcCShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcCShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getDepth() {
  if (Step::BaseObject::inited()) {
    return m_depth;
  }
  else {
    return getUnset(m_depth);
  }
}

void IfcCShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
  m_depth = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWidth() {
  if (Step::BaseObject::inited()) {
    return m_width;
  }
  else {
    return getUnset(m_width);
  }
}

void IfcCShapeProfileDef::setWidth(IfcPositiveLengthMeasure value) {
  m_width = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWallThickness() {
  if (Step::BaseObject::inited()) {
    return m_wallThickness;
  }
  else {
    return getUnset(m_wallThickness);
  }
}

void IfcCShapeProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
  m_wallThickness = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getGirth() {
  if (Step::BaseObject::inited()) {
    return m_girth;
  }
  else {
    return getUnset(m_girth);
  }
}

void IfcCShapeProfileDef::setGirth(IfcPositiveLengthMeasure value) {
  m_girth = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getInternalFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_internalFilletRadius;
  }
  else {
    return getUnset(m_internalFilletRadius);
  }
}

void IfcCShapeProfileDef::setInternalFilletRadius(IfcPositiveLengthMeasure value) {
  m_internalFilletRadius = value;
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getCentreOfGravityInX() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInX;
  }
  else {
    return getUnset(m_centreOfGravityInX);
  }
}

void IfcCShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInX = value;
}

void IfcCShapeProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcCShapeProfileDef::init() {
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
    m_wallThickness = getUnset(m_wallThickness);
  }
  else {
    m_wallThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_girth = getUnset(m_girth);
  }
  else {
    m_girth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_internalFilletRadius = getUnset(m_internalFilletRadius);
  }
  else {
    m_internalFilletRadius = Step::spfToReal(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcCShapeProfileDef::s_type = new Step::ClassType_class("IfcCShapeProfileDef");
IfcCShapeProfileDef_Factory::IfcCShapeProfileDef_Factory() {
}

IfcCShapeProfileDef_Factory::~IfcCShapeProfileDef_Factory() {
  clear(true);
}

void IfcCShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcCShapeProfileDef *IfcCShapeProfileDef_Factory::get(Step::StepId id) {
  IfcCShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcCShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcCShapeProfileDef_Factory::create(Step::StepId id) {
  IfcCShapeProfileDef *ret = new IfcCShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCShapeProfileDef *ret = new IfcCShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCShapeProfileDef *ret = new IfcCShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCShapeProfileDef *IfcCShapeProfileDef_Factory::generate() {
  return static_cast< IfcCShapeProfileDef * > (create(m_model->getNewId()));
}

IfcCShapeProfileDef *IfcCShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

