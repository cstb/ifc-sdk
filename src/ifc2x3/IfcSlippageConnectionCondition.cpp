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
#include <ifc2x3/IfcSlippageConnectionCondition.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSlippageConnectionCondition::IfcSlippageConnectionCondition(Step::SPFData *args) : IfcStructuralConnectionCondition(args) {
  m_slippageX = getUnset(m_slippageX);
  m_slippageY = getUnset(m_slippageY);
  m_slippageZ = getUnset(m_slippageZ);
}


IfcSlippageConnectionCondition::~IfcSlippageConnectionCondition() {
}

bool IfcSlippageConnectionCondition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSlippageConnectionCondition(this);
}

const char *IfcSlippageConnectionCondition::type() {
  return "IfcSlippageConnectionCondition";
}

Step::ClassType IfcSlippageConnectionCondition::getClassType() {
  return IfcSlippageConnectionCondition::s_type;
}

Step::ClassType IfcSlippageConnectionCondition::getType() const {
  return IfcSlippageConnectionCondition::s_type;
}

bool IfcSlippageConnectionCondition::isOfType(Step::ClassType t) {
  return IfcSlippageConnectionCondition::s_type == t ? true : IfcStructuralConnectionCondition::isOfType(t);
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageX() {
  if (Step::BaseObject::inited()) {
    return m_slippageX;
  }
  else {
    return getUnset(m_slippageX);
  }
}

void IfcSlippageConnectionCondition::setSlippageX(IfcLengthMeasure value) {
  m_slippageX = value;
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageY() {
  if (Step::BaseObject::inited()) {
    return m_slippageY;
  }
  else {
    return getUnset(m_slippageY);
  }
}

void IfcSlippageConnectionCondition::setSlippageY(IfcLengthMeasure value) {
  m_slippageY = value;
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageZ() {
  if (Step::BaseObject::inited()) {
    return m_slippageZ;
  }
  else {
    return getUnset(m_slippageZ);
  }
}

void IfcSlippageConnectionCondition::setSlippageZ(IfcLengthMeasure value) {
  m_slippageZ = value;
}

void IfcSlippageConnectionCondition::release() {
  IfcStructuralConnectionCondition::release();
}

bool IfcSlippageConnectionCondition::init() {
  bool status = IfcStructuralConnectionCondition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_slippageX = getUnset(m_slippageX);
  }
  else {
    m_slippageX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_slippageY = getUnset(m_slippageY);
  }
  else {
    m_slippageY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_slippageZ = getUnset(m_slippageZ);
  }
  else {
    m_slippageZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSlippageConnectionCondition::s_type = new Step::ClassType_class("IfcSlippageConnectionCondition");
IfcSlippageConnectionCondition_Factory::IfcSlippageConnectionCondition_Factory() {
}

IfcSlippageConnectionCondition_Factory::~IfcSlippageConnectionCondition_Factory() {
  clear(true);
}

void IfcSlippageConnectionCondition_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSlippageConnectionCondition_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSlippageConnectionCondition_Factory::end() {
  return m_idMap.end();
}

IfcSlippageConnectionCondition *IfcSlippageConnectionCondition_Factory::get(Step::StepId id) {
  IfcSlippageConnectionCondition *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSlippageConnectionCondition * > (it->second);
  }
  else {
    LOG_ERROR("IfcSlippageConnectionCondition_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSlippageConnectionCondition * > (create(id));
  }
}

Step::BaseObject *IfcSlippageConnectionCondition_Factory::create(Step::StepId id) {
  IfcSlippageConnectionCondition *ret = new IfcSlippageConnectionCondition(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSlippageConnectionCondition_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSlippageConnectionCondition *ret = new IfcSlippageConnectionCondition(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSlippageConnectionCondition_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSlippageConnectionCondition *ret = new IfcSlippageConnectionCondition(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSlippageConnectionCondition *IfcSlippageConnectionCondition_Factory::generate() {
  return static_cast< IfcSlippageConnectionCondition * > (create(m_model->getNewId()));
}

IfcSlippageConnectionCondition *IfcSlippageConnectionCondition_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSlippageConnectionCondition * > (it->second);
  }
  else {
    return NULL;
  }
}

