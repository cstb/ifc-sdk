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
#include <ifc2x3/IfcAsymmetricIShapeProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAsymmetricIShapeProfileDef::IfcAsymmetricIShapeProfileDef(Step::SPFData *args) : IfcIShapeProfileDef(args) {
  m_topFlangeWidth = getUnset(m_topFlangeWidth);
  m_topFlangeThickness = getUnset(m_topFlangeThickness);
  m_topFlangeFilletRadius = getUnset(m_topFlangeFilletRadius);
  m_centreOfGravityInY = getUnset(m_centreOfGravityInY);
}


IfcAsymmetricIShapeProfileDef::~IfcAsymmetricIShapeProfileDef() {
}

bool IfcAsymmetricIShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAsymmetricIShapeProfileDef(this);
}

const char *IfcAsymmetricIShapeProfileDef::type() {
  return "IfcAsymmetricIShapeProfileDef";
}

Step::ClassType IfcAsymmetricIShapeProfileDef::getClassType() {
  return IfcAsymmetricIShapeProfileDef::s_type;
}

Step::ClassType IfcAsymmetricIShapeProfileDef::getType() const {
  return IfcAsymmetricIShapeProfileDef::s_type;
}

bool IfcAsymmetricIShapeProfileDef::isOfType(Step::ClassType t) {
  return IfcAsymmetricIShapeProfileDef::s_type == t ? true : IfcIShapeProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeWidth() {
  if (Step::BaseObject::inited()) {
    return m_topFlangeWidth;
  }
  else {
    return getUnset(m_topFlangeWidth);
  }
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeWidth(IfcPositiveLengthMeasure value) {
  m_topFlangeWidth = value;
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeThickness() {
  if (Step::BaseObject::inited()) {
    return m_topFlangeThickness;
  }
  else {
    return getUnset(m_topFlangeThickness);
  }
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeThickness(IfcPositiveLengthMeasure value) {
  m_topFlangeThickness = value;
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_topFlangeFilletRadius;
  }
  else {
    return getUnset(m_topFlangeFilletRadius);
  }
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeFilletRadius(IfcPositiveLengthMeasure value) {
  m_topFlangeFilletRadius = value;
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getCentreOfGravityInY() {
  if (Step::BaseObject::inited()) {
    return m_centreOfGravityInY;
  }
  else {
    return getUnset(m_centreOfGravityInY);
  }
}

void IfcAsymmetricIShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value) {
  m_centreOfGravityInY = value;
}

void IfcAsymmetricIShapeProfileDef::release() {
  IfcIShapeProfileDef::release();
}

bool IfcAsymmetricIShapeProfileDef::init() {
  bool status = IfcIShapeProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_topFlangeWidth = getUnset(m_topFlangeWidth);
  }
  else {
    m_topFlangeWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_topFlangeThickness = getUnset(m_topFlangeThickness);
  }
  else {
    m_topFlangeThickness = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_topFlangeFilletRadius = getUnset(m_topFlangeFilletRadius);
  }
  else {
    m_topFlangeFilletRadius = Step::spfToReal(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcAsymmetricIShapeProfileDef::s_type = new Step::ClassType_class("IfcAsymmetricIShapeProfileDef");
IfcAsymmetricIShapeProfileDef_Factory::IfcAsymmetricIShapeProfileDef_Factory() {
}

IfcAsymmetricIShapeProfileDef_Factory::~IfcAsymmetricIShapeProfileDef_Factory() {
  clear(true);
}

void IfcAsymmetricIShapeProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAsymmetricIShapeProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAsymmetricIShapeProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcAsymmetricIShapeProfileDef *IfcAsymmetricIShapeProfileDef_Factory::get(Step::StepId id) {
  IfcAsymmetricIShapeProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAsymmetricIShapeProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcAsymmetricIShapeProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAsymmetricIShapeProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcAsymmetricIShapeProfileDef_Factory::create(Step::StepId id) {
  IfcAsymmetricIShapeProfileDef *ret = new IfcAsymmetricIShapeProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAsymmetricIShapeProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAsymmetricIShapeProfileDef *ret = new IfcAsymmetricIShapeProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAsymmetricIShapeProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAsymmetricIShapeProfileDef *ret = new IfcAsymmetricIShapeProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAsymmetricIShapeProfileDef *IfcAsymmetricIShapeProfileDef_Factory::generate() {
  return static_cast< IfcAsymmetricIShapeProfileDef * > (create(m_model->getNewId()));
}

IfcAsymmetricIShapeProfileDef *IfcAsymmetricIShapeProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAsymmetricIShapeProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

