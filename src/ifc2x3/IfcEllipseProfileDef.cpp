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
#include <ifc2x3/IfcEllipseProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEllipseProfileDef::IfcEllipseProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_semiAxis1 = getUnset(m_semiAxis1);
  m_semiAxis2 = getUnset(m_semiAxis2);
}


IfcEllipseProfileDef::~IfcEllipseProfileDef() {
}

bool IfcEllipseProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEllipseProfileDef(this);
}

const char *IfcEllipseProfileDef::type() {
  return "IfcEllipseProfileDef";
}

Step::ClassType IfcEllipseProfileDef::getClassType() {
  return IfcEllipseProfileDef::s_type;
}

Step::ClassType IfcEllipseProfileDef::getType() const {
  return IfcEllipseProfileDef::s_type;
}

bool IfcEllipseProfileDef::isOfType(Step::ClassType t) {
  return IfcEllipseProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis1() {
  if (Step::BaseObject::inited()) {
    return m_semiAxis1;
  }
  else {
    return getUnset(m_semiAxis1);
  }
}

void IfcEllipseProfileDef::setSemiAxis1(IfcPositiveLengthMeasure value) {
  m_semiAxis1 = value;
}

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis2() {
  if (Step::BaseObject::inited()) {
    return m_semiAxis2;
  }
  else {
    return getUnset(m_semiAxis2);
  }
}

void IfcEllipseProfileDef::setSemiAxis2(IfcPositiveLengthMeasure value) {
  m_semiAxis2 = value;
}

void IfcEllipseProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcEllipseProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_semiAxis1 = getUnset(m_semiAxis1);
  }
  else {
    m_semiAxis1 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_semiAxis2 = getUnset(m_semiAxis2);
  }
  else {
    m_semiAxis2 = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEllipseProfileDef::s_type = new Step::ClassType_class("IfcEllipseProfileDef");
IfcEllipseProfileDef_Factory::IfcEllipseProfileDef_Factory() {
}

IfcEllipseProfileDef_Factory::~IfcEllipseProfileDef_Factory() {
  clear(true);
}

void IfcEllipseProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEllipseProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEllipseProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcEllipseProfileDef *IfcEllipseProfileDef_Factory::get(Step::StepId id) {
  IfcEllipseProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEllipseProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcEllipseProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEllipseProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcEllipseProfileDef_Factory::create(Step::StepId id) {
  IfcEllipseProfileDef *ret = new IfcEllipseProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEllipseProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEllipseProfileDef *ret = new IfcEllipseProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEllipseProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEllipseProfileDef *ret = new IfcEllipseProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEllipseProfileDef *IfcEllipseProfileDef_Factory::generate() {
  return static_cast< IfcEllipseProfileDef * > (create(m_model->getNewId()));
}

IfcEllipseProfileDef *IfcEllipseProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEllipseProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

