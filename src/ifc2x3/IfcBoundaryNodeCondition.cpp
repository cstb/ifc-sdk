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
#include <ifc2x3/IfcBoundaryNodeCondition.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoundaryNodeCondition::IfcBoundaryNodeCondition(Step::SPFData *args) : IfcBoundaryCondition(args) {
  m_linearStiffnessX = getUnset(m_linearStiffnessX);
  m_linearStiffnessY = getUnset(m_linearStiffnessY);
  m_linearStiffnessZ = getUnset(m_linearStiffnessZ);
  m_rotationalStiffnessX = getUnset(m_rotationalStiffnessX);
  m_rotationalStiffnessY = getUnset(m_rotationalStiffnessY);
  m_rotationalStiffnessZ = getUnset(m_rotationalStiffnessZ);
}


IfcBoundaryNodeCondition::~IfcBoundaryNodeCondition() {
}

bool IfcBoundaryNodeCondition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoundaryNodeCondition(this);
}

const char *IfcBoundaryNodeCondition::type() {
  return "IfcBoundaryNodeCondition";
}

Step::ClassType IfcBoundaryNodeCondition::getClassType() {
  return IfcBoundaryNodeCondition::s_type;
}

Step::ClassType IfcBoundaryNodeCondition::getType() const {
  return IfcBoundaryNodeCondition::s_type;
}

bool IfcBoundaryNodeCondition::isOfType(Step::ClassType t) {
  return IfcBoundaryNodeCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessX() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessX;
  }
  else {
    return getUnset(m_linearStiffnessX);
  }
}

void IfcBoundaryNodeCondition::setLinearStiffnessX(IfcLinearStiffnessMeasure value) {
  m_linearStiffnessX = value;
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessY() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessY;
  }
  else {
    return getUnset(m_linearStiffnessY);
  }
}

void IfcBoundaryNodeCondition::setLinearStiffnessY(IfcLinearStiffnessMeasure value) {
  m_linearStiffnessY = value;
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessZ() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessZ;
  }
  else {
    return getUnset(m_linearStiffnessZ);
  }
}

void IfcBoundaryNodeCondition::setLinearStiffnessZ(IfcLinearStiffnessMeasure value) {
  m_linearStiffnessZ = value;
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessX() {
  if (Step::BaseObject::inited()) {
    return m_rotationalStiffnessX;
  }
  else {
    return getUnset(m_rotationalStiffnessX);
  }
}

void IfcBoundaryNodeCondition::setRotationalStiffnessX(IfcRotationalStiffnessMeasure value) {
  m_rotationalStiffnessX = value;
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessY() {
  if (Step::BaseObject::inited()) {
    return m_rotationalStiffnessY;
  }
  else {
    return getUnset(m_rotationalStiffnessY);
  }
}

void IfcBoundaryNodeCondition::setRotationalStiffnessY(IfcRotationalStiffnessMeasure value) {
  m_rotationalStiffnessY = value;
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessZ() {
  if (Step::BaseObject::inited()) {
    return m_rotationalStiffnessZ;
  }
  else {
    return getUnset(m_rotationalStiffnessZ);
  }
}

void IfcBoundaryNodeCondition::setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value) {
  m_rotationalStiffnessZ = value;
}

void IfcBoundaryNodeCondition::release() {
  IfcBoundaryCondition::release();
}

bool IfcBoundaryNodeCondition::init() {
  bool status = IfcBoundaryCondition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessX = getUnset(m_linearStiffnessX);
  }
  else {
    m_linearStiffnessX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessY = getUnset(m_linearStiffnessY);
  }
  else {
    m_linearStiffnessY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessZ = getUnset(m_linearStiffnessZ);
  }
  else {
    m_linearStiffnessZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalStiffnessX = getUnset(m_rotationalStiffnessX);
  }
  else {
    m_rotationalStiffnessX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalStiffnessY = getUnset(m_rotationalStiffnessY);
  }
  else {
    m_rotationalStiffnessY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalStiffnessZ = getUnset(m_rotationalStiffnessZ);
  }
  else {
    m_rotationalStiffnessZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryNodeCondition::s_type = new Step::ClassType_class("IfcBoundaryNodeCondition");
IfcBoundaryNodeCondition_Factory::IfcBoundaryNodeCondition_Factory() {
}

IfcBoundaryNodeCondition_Factory::~IfcBoundaryNodeCondition_Factory() {
  clear(true);
}

void IfcBoundaryNodeCondition_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryNodeCondition_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryNodeCondition_Factory::end() {
  return m_idMap.end();
}

IfcBoundaryNodeCondition *IfcBoundaryNodeCondition_Factory::get(Step::StepId id) {
  IfcBoundaryNodeCondition *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoundaryNodeCondition * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoundaryNodeCondition_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoundaryNodeCondition * > (create(id));
  }
}

Step::BaseObject *IfcBoundaryNodeCondition_Factory::create(Step::StepId id) {
  IfcBoundaryNodeCondition *ret = new IfcBoundaryNodeCondition(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryNodeCondition_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoundaryNodeCondition *ret = new IfcBoundaryNodeCondition(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryNodeCondition_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoundaryNodeCondition *ret = new IfcBoundaryNodeCondition(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoundaryNodeCondition *IfcBoundaryNodeCondition_Factory::generate() {
  return static_cast< IfcBoundaryNodeCondition * > (create(m_model->getNewId()));
}

IfcBoundaryNodeCondition *IfcBoundaryNodeCondition_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoundaryNodeCondition * > (it->second);
  }
  else {
    return NULL;
  }
}

