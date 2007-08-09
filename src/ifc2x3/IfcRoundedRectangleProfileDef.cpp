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
#include <ifc2x3/IfcRoundedRectangleProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRoundedRectangleProfileDef::IfcRoundedRectangleProfileDef(Step::SPFData *args) : IfcRectangleProfileDef(args) {
  m_roundingRadius = getUnset(m_roundingRadius);
}


IfcRoundedRectangleProfileDef::~IfcRoundedRectangleProfileDef() {
}

bool IfcRoundedRectangleProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRoundedRectangleProfileDef(this);
}

const char *IfcRoundedRectangleProfileDef::type() {
  return "IfcRoundedRectangleProfileDef";
}

Step::ClassType IfcRoundedRectangleProfileDef::getClassType() {
  return IfcRoundedRectangleProfileDef::s_type;
}

Step::ClassType IfcRoundedRectangleProfileDef::getType() const {
  return IfcRoundedRectangleProfileDef::s_type;
}

bool IfcRoundedRectangleProfileDef::isOfType(Step::ClassType t) {
  return IfcRoundedRectangleProfileDef::s_type == t ? true : IfcRectangleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRoundedRectangleProfileDef::getRoundingRadius() {
  if (Step::BaseObject::inited()) {
    return m_roundingRadius;
  }
  else {
    return getUnset(m_roundingRadius);
  }
}

void IfcRoundedRectangleProfileDef::setRoundingRadius(IfcPositiveLengthMeasure value) {
  m_roundingRadius = value;
}

void IfcRoundedRectangleProfileDef::release() {
  IfcRectangleProfileDef::release();
}

bool IfcRoundedRectangleProfileDef::init() {
  bool status = IfcRectangleProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_roundingRadius = getUnset(m_roundingRadius);
  }
  else {
    m_roundingRadius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoundedRectangleProfileDef::s_type = new Step::ClassType_class("IfcRoundedRectangleProfileDef");
IfcRoundedRectangleProfileDef_Factory::IfcRoundedRectangleProfileDef_Factory() {
}

IfcRoundedRectangleProfileDef_Factory::~IfcRoundedRectangleProfileDef_Factory() {
  clear(true);
}

void IfcRoundedRectangleProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRoundedRectangleProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRoundedRectangleProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcRoundedRectangleProfileDef *IfcRoundedRectangleProfileDef_Factory::get(Step::StepId id) {
  IfcRoundedRectangleProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRoundedRectangleProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcRoundedRectangleProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRoundedRectangleProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcRoundedRectangleProfileDef_Factory::create(Step::StepId id) {
  IfcRoundedRectangleProfileDef *ret = new IfcRoundedRectangleProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRoundedRectangleProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRoundedRectangleProfileDef *ret = new IfcRoundedRectangleProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRoundedRectangleProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRoundedRectangleProfileDef *ret = new IfcRoundedRectangleProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRoundedRectangleProfileDef *IfcRoundedRectangleProfileDef_Factory::generate() {
  return static_cast< IfcRoundedRectangleProfileDef * > (create(m_model->getNewId()));
}

IfcRoundedRectangleProfileDef *IfcRoundedRectangleProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRoundedRectangleProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

