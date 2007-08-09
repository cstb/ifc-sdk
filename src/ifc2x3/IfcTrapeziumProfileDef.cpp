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
#include <ifc2x3/IfcTrapeziumProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTrapeziumProfileDef::IfcTrapeziumProfileDef(Step::SPFData *args) : IfcParameterizedProfileDef(args) {
  m_bottomXDim = getUnset(m_bottomXDim);
  m_topXDim = getUnset(m_topXDim);
  m_yDim = getUnset(m_yDim);
  m_topXOffset = getUnset(m_topXOffset);
}


IfcTrapeziumProfileDef::~IfcTrapeziumProfileDef() {
}

bool IfcTrapeziumProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTrapeziumProfileDef(this);
}

const char *IfcTrapeziumProfileDef::type() {
  return "IfcTrapeziumProfileDef";
}

Step::ClassType IfcTrapeziumProfileDef::getClassType() {
  return IfcTrapeziumProfileDef::s_type;
}

Step::ClassType IfcTrapeziumProfileDef::getType() const {
  return IfcTrapeziumProfileDef::s_type;
}

bool IfcTrapeziumProfileDef::isOfType(Step::ClassType t) {
  return IfcTrapeziumProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getBottomXDim() {
  if (Step::BaseObject::inited()) {
    return m_bottomXDim;
  }
  else {
    return getUnset(m_bottomXDim);
  }
}

void IfcTrapeziumProfileDef::setBottomXDim(IfcPositiveLengthMeasure value) {
  m_bottomXDim = value;
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getTopXDim() {
  if (Step::BaseObject::inited()) {
    return m_topXDim;
  }
  else {
    return getUnset(m_topXDim);
  }
}

void IfcTrapeziumProfileDef::setTopXDim(IfcPositiveLengthMeasure value) {
  m_topXDim = value;
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getYDim() {
  if (Step::BaseObject::inited()) {
    return m_yDim;
  }
  else {
    return getUnset(m_yDim);
  }
}

void IfcTrapeziumProfileDef::setYDim(IfcPositiveLengthMeasure value) {
  m_yDim = value;
}

IfcLengthMeasure IfcTrapeziumProfileDef::getTopXOffset() {
  if (Step::BaseObject::inited()) {
    return m_topXOffset;
  }
  else {
    return getUnset(m_topXOffset);
  }
}

void IfcTrapeziumProfileDef::setTopXOffset(IfcLengthMeasure value) {
  m_topXOffset = value;
}

void IfcTrapeziumProfileDef::release() {
  IfcParameterizedProfileDef::release();
}

bool IfcTrapeziumProfileDef::init() {
  bool status = IfcParameterizedProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_bottomXDim = getUnset(m_bottomXDim);
  }
  else {
    m_bottomXDim = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_topXDim = getUnset(m_topXDim);
  }
  else {
    m_topXDim = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yDim = getUnset(m_yDim);
  }
  else {
    m_yDim = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_topXOffset = getUnset(m_topXOffset);
  }
  else {
    m_topXOffset = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTrapeziumProfileDef::s_type = new Step::ClassType_class("IfcTrapeziumProfileDef");
IfcTrapeziumProfileDef_Factory::IfcTrapeziumProfileDef_Factory() {
}

IfcTrapeziumProfileDef_Factory::~IfcTrapeziumProfileDef_Factory() {
  clear(true);
}

void IfcTrapeziumProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTrapeziumProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTrapeziumProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcTrapeziumProfileDef *IfcTrapeziumProfileDef_Factory::get(Step::StepId id) {
  IfcTrapeziumProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTrapeziumProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcTrapeziumProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTrapeziumProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcTrapeziumProfileDef_Factory::create(Step::StepId id) {
  IfcTrapeziumProfileDef *ret = new IfcTrapeziumProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTrapeziumProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTrapeziumProfileDef *ret = new IfcTrapeziumProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTrapeziumProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTrapeziumProfileDef *ret = new IfcTrapeziumProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTrapeziumProfileDef *IfcTrapeziumProfileDef_Factory::generate() {
  return static_cast< IfcTrapeziumProfileDef * > (create(m_model->getNewId()));
}

IfcTrapeziumProfileDef *IfcTrapeziumProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTrapeziumProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

