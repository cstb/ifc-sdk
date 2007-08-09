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
#include <ifc2x3/IfcRectangleHollowProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRectangleHollowProfileDef::IfcRectangleHollowProfileDef(Step::SPFData *args) : IfcRectangleProfileDef(args) {
  m_wallThickness = getUnset(m_wallThickness);
  m_innerFilletRadius = getUnset(m_innerFilletRadius);
  m_outerFilletRadius = getUnset(m_outerFilletRadius);
}


IfcRectangleHollowProfileDef::~IfcRectangleHollowProfileDef() {
}

bool IfcRectangleHollowProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRectangleHollowProfileDef(this);
}

const char *IfcRectangleHollowProfileDef::type() {
  return "IfcRectangleHollowProfileDef";
}

Step::ClassType IfcRectangleHollowProfileDef::getClassType() {
  return IfcRectangleHollowProfileDef::s_type;
}

Step::ClassType IfcRectangleHollowProfileDef::getType() const {
  return IfcRectangleHollowProfileDef::s_type;
}

bool IfcRectangleHollowProfileDef::isOfType(Step::ClassType t) {
  return IfcRectangleHollowProfileDef::s_type == t ? true : IfcRectangleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getWallThickness() {
  if (Step::BaseObject::inited()) {
    return m_wallThickness;
  }
  else {
    return getUnset(m_wallThickness);
  }
}

void IfcRectangleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
  m_wallThickness = value;
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getInnerFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_innerFilletRadius;
  }
  else {
    return getUnset(m_innerFilletRadius);
  }
}

void IfcRectangleHollowProfileDef::setInnerFilletRadius(IfcPositiveLengthMeasure value) {
  m_innerFilletRadius = value;
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getOuterFilletRadius() {
  if (Step::BaseObject::inited()) {
    return m_outerFilletRadius;
  }
  else {
    return getUnset(m_outerFilletRadius);
  }
}

void IfcRectangleHollowProfileDef::setOuterFilletRadius(IfcPositiveLengthMeasure value) {
  m_outerFilletRadius = value;
}

void IfcRectangleHollowProfileDef::release() {
  IfcRectangleProfileDef::release();
}

bool IfcRectangleHollowProfileDef::init() {
  bool status = IfcRectangleProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
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
    m_innerFilletRadius = getUnset(m_innerFilletRadius);
  }
  else {
    m_innerFilletRadius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_outerFilletRadius = getUnset(m_outerFilletRadius);
  }
  else {
    m_outerFilletRadius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangleHollowProfileDef::s_type = new Step::ClassType_class("IfcRectangleHollowProfileDef");
IfcRectangleHollowProfileDef_Factory::IfcRectangleHollowProfileDef_Factory() {
}

IfcRectangleHollowProfileDef_Factory::~IfcRectangleHollowProfileDef_Factory() {
  clear(true);
}

void IfcRectangleHollowProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangleHollowProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangleHollowProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcRectangleHollowProfileDef *IfcRectangleHollowProfileDef_Factory::get(Step::StepId id) {
  IfcRectangleHollowProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRectangleHollowProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcRectangleHollowProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRectangleHollowProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcRectangleHollowProfileDef_Factory::create(Step::StepId id) {
  IfcRectangleHollowProfileDef *ret = new IfcRectangleHollowProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRectangleHollowProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRectangleHollowProfileDef *ret = new IfcRectangleHollowProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRectangleHollowProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRectangleHollowProfileDef *ret = new IfcRectangleHollowProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRectangleHollowProfileDef *IfcRectangleHollowProfileDef_Factory::generate() {
  return static_cast< IfcRectangleHollowProfileDef * > (create(m_model->getNewId()));
}

IfcRectangleHollowProfileDef *IfcRectangleHollowProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRectangleHollowProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

