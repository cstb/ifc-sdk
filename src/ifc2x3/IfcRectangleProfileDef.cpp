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
#include <ifc2x3/IfcRectangleProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRectangleProfileDef::IfcRectangleProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_xDim = getUnset(m_xDim);
  m_yDim = getUnset(m_yDim);
}


IfcRectangleProfileDef::~IfcRectangleProfileDef() {
}

bool IfcRectangleProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRectangleProfileDef(this);
}

const char *IfcRectangleProfileDef::type() {
  return "IfcRectangleProfileDef";
}

Step::ClassType IfcRectangleProfileDef::getClassType() {
  return IfcRectangleProfileDef::s_type;
}

Step::ClassType IfcRectangleProfileDef::getType() const {
  return IfcRectangleProfileDef::s_type;
}

bool IfcRectangleProfileDef::isOfType(Step::ClassType t) {
  return IfcRectangleProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getXDim() {
  if (Step::BaseObject::inited()) {
    return m_xDim;
  }
  else {
    return getUnset(m_xDim);
  }
}

void IfcRectangleProfileDef::setXDim(IfcPositiveLengthMeasure value) {
  m_xDim = value;
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getYDim() {
  if (Step::BaseObject::inited()) {
    return m_yDim;
  }
  else {
    return getUnset(m_yDim);
  }
}

void IfcRectangleProfileDef::setYDim(IfcPositiveLengthMeasure value) {
  m_yDim = value;
}

void IfcRectangleProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcRectangleProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_xDim = getUnset(m_xDim);
  }
  else {
    m_xDim = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yDim = getUnset(m_yDim);
  }
  else {
    m_yDim = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangleProfileDef::s_type = new Step::ClassType_class("IfcRectangleProfileDef");
IfcRectangleProfileDef_Factory::IfcRectangleProfileDef_Factory() {
}

IfcRectangleProfileDef_Factory::~IfcRectangleProfileDef_Factory() {
  clear(true);
}

void IfcRectangleProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangleProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangleProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcRectangleProfileDef *IfcRectangleProfileDef_Factory::get(Step::StepId id) {
  IfcRectangleProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRectangleProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcRectangleProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRectangleProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcRectangleProfileDef_Factory::create(Step::StepId id) {
  IfcRectangleProfileDef *ret = new IfcRectangleProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRectangleProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRectangleProfileDef *ret = new IfcRectangleProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRectangleProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRectangleProfileDef *ret = new IfcRectangleProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRectangleProfileDef *IfcRectangleProfileDef_Factory::generate() {
  return static_cast< IfcRectangleProfileDef * > (create(m_model->getNewId()));
}

IfcRectangleProfileDef *IfcRectangleProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRectangleProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

