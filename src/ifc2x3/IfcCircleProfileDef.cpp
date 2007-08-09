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
#include <ifc2x3/IfcCircleProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCircleProfileDef::IfcCircleProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_radius = getUnset(m_radius);
}


IfcCircleProfileDef::~IfcCircleProfileDef() {
}

bool IfcCircleProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCircleProfileDef(this);
}

const char *IfcCircleProfileDef::type() {
  return "IfcCircleProfileDef";
}

Step::ClassType IfcCircleProfileDef::getClassType() {
  return IfcCircleProfileDef::s_type;
}

Step::ClassType IfcCircleProfileDef::getType() const {
  return IfcCircleProfileDef::s_type;
}

bool IfcCircleProfileDef::isOfType(Step::ClassType t) {
  return IfcCircleProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircleProfileDef::getRadius() {
  if (Step::BaseObject::inited()) {
    return m_radius;
  }
  else {
    return getUnset(m_radius);
  }
}

void IfcCircleProfileDef::setRadius(IfcPositiveLengthMeasure value) {
  m_radius = value;
}

void IfcCircleProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcCircleProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_radius = getUnset(m_radius);
  }
  else {
    m_radius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircleProfileDef::s_type = new Step::ClassType_class("IfcCircleProfileDef");
IfcCircleProfileDef_Factory::IfcCircleProfileDef_Factory() {
}

IfcCircleProfileDef_Factory::~IfcCircleProfileDef_Factory() {
  clear(true);
}

void IfcCircleProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCircleProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCircleProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcCircleProfileDef *IfcCircleProfileDef_Factory::get(Step::StepId id) {
  IfcCircleProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCircleProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcCircleProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCircleProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcCircleProfileDef_Factory::create(Step::StepId id) {
  IfcCircleProfileDef *ret = new IfcCircleProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCircleProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCircleProfileDef *ret = new IfcCircleProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCircleProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCircleProfileDef *ret = new IfcCircleProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCircleProfileDef *IfcCircleProfileDef_Factory::generate() {
  return static_cast< IfcCircleProfileDef * > (create(m_model->getNewId()));
}

IfcCircleProfileDef *IfcCircleProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCircleProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

