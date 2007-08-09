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
#include <ifc2x3/IfcBoundaryEdgeCondition.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoundaryEdgeCondition::IfcBoundaryEdgeCondition(Step::SPFData *args) : IfcBoundaryCondition(args) {
  m_linearStiffnessByLengthX = getUnset(m_linearStiffnessByLengthX);
  m_linearStiffnessByLengthY = getUnset(m_linearStiffnessByLengthY);
  m_linearStiffnessByLengthZ = getUnset(m_linearStiffnessByLengthZ);
  m_rotationalStiffnessByLengthX = getUnset(m_rotationalStiffnessByLengthX);
  m_rotationalStiffnessByLengthY = getUnset(m_rotationalStiffnessByLengthY);
  m_rotationalStiffnessByLengthZ = getUnset(m_rotationalStiffnessByLengthZ);
}


IfcBoundaryEdgeCondition::~IfcBoundaryEdgeCondition() {
}

bool IfcBoundaryEdgeCondition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoundaryEdgeCondition(this);
}

const char *IfcBoundaryEdgeCondition::type() {
  return "IfcBoundaryEdgeCondition";
}

Step::ClassType IfcBoundaryEdgeCondition::getClassType() {
  return IfcBoundaryEdgeCondition::s_type;
}

Step::ClassType IfcBoundaryEdgeCondition::getType() const {
  return IfcBoundaryEdgeCondition::s_type;
}

bool IfcBoundaryEdgeCondition::isOfType(Step::ClassType t) {
  return IfcBoundaryEdgeCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessByLengthX;
  }
  else {
    return getUnset(m_linearStiffnessByLengthX);
  }
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value) {
  m_linearStiffnessByLengthX = value;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessByLengthY;
  }
  else {
    return getUnset(m_linearStiffnessByLengthY);
  }
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value) {
  m_linearStiffnessByLengthY = value;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessByLengthZ;
  }
  else {
    return getUnset(m_linearStiffnessByLengthZ);
  }
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value) {
  m_linearStiffnessByLengthZ = value;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX() {
  if (Step::BaseObject::inited()) {
    return m_rotationalStiffnessByLengthX;
  }
  else {
    return getUnset(m_rotationalStiffnessByLengthX);
  }
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value) {
  m_rotationalStiffnessByLengthX = value;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY() {
  if (Step::BaseObject::inited()) {
    return m_rotationalStiffnessByLengthY;
  }
  else {
    return getUnset(m_rotationalStiffnessByLengthY);
  }
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value) {
  m_rotationalStiffnessByLengthY = value;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ() {
  if (Step::BaseObject::inited()) {
    return m_rotationalStiffnessByLengthZ;
  }
  else {
    return getUnset(m_rotationalStiffnessByLengthZ);
  }
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value) {
  m_rotationalStiffnessByLengthZ = value;
}

void IfcBoundaryEdgeCondition::release() {
  IfcBoundaryCondition::release();
}

bool IfcBoundaryEdgeCondition::init() {
  bool status = IfcBoundaryCondition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessByLengthX = getUnset(m_linearStiffnessByLengthX);
  }
  else {
    m_linearStiffnessByLengthX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessByLengthY = getUnset(m_linearStiffnessByLengthY);
  }
  else {
    m_linearStiffnessByLengthY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessByLengthZ = getUnset(m_linearStiffnessByLengthZ);
  }
  else {
    m_linearStiffnessByLengthZ = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalStiffnessByLengthX = getUnset(m_rotationalStiffnessByLengthX);
  }
  else {
    m_rotationalStiffnessByLengthX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalStiffnessByLengthY = getUnset(m_rotationalStiffnessByLengthY);
  }
  else {
    m_rotationalStiffnessByLengthY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_rotationalStiffnessByLengthZ = getUnset(m_rotationalStiffnessByLengthZ);
  }
  else {
    m_rotationalStiffnessByLengthZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryEdgeCondition::s_type = new Step::ClassType_class("IfcBoundaryEdgeCondition");
IfcBoundaryEdgeCondition_Factory::IfcBoundaryEdgeCondition_Factory() {
}

IfcBoundaryEdgeCondition_Factory::~IfcBoundaryEdgeCondition_Factory() {
  clear(true);
}

void IfcBoundaryEdgeCondition_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryEdgeCondition_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryEdgeCondition_Factory::end() {
  return m_idMap.end();
}

IfcBoundaryEdgeCondition *IfcBoundaryEdgeCondition_Factory::get(Step::StepId id) {
  IfcBoundaryEdgeCondition *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoundaryEdgeCondition * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoundaryEdgeCondition_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoundaryEdgeCondition * > (create(id));
  }
}

Step::BaseObject *IfcBoundaryEdgeCondition_Factory::create(Step::StepId id) {
  IfcBoundaryEdgeCondition *ret = new IfcBoundaryEdgeCondition(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryEdgeCondition_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoundaryEdgeCondition *ret = new IfcBoundaryEdgeCondition(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryEdgeCondition_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoundaryEdgeCondition *ret = new IfcBoundaryEdgeCondition(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoundaryEdgeCondition *IfcBoundaryEdgeCondition_Factory::generate() {
  return static_cast< IfcBoundaryEdgeCondition * > (create(m_model->getNewId()));
}

IfcBoundaryEdgeCondition *IfcBoundaryEdgeCondition_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoundaryEdgeCondition * > (it->second);
  }
  else {
    return NULL;
  }
}

