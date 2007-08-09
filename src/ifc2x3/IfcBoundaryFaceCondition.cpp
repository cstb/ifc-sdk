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
#include <ifc2x3/IfcBoundaryFaceCondition.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoundaryFaceCondition::IfcBoundaryFaceCondition(Step::SPFData *args) : IfcBoundaryCondition(args) {
  m_linearStiffnessByAreaX = getUnset(m_linearStiffnessByAreaX);
  m_linearStiffnessByAreaY = getUnset(m_linearStiffnessByAreaY);
  m_linearStiffnessByAreaZ = getUnset(m_linearStiffnessByAreaZ);
}


IfcBoundaryFaceCondition::~IfcBoundaryFaceCondition() {
}

bool IfcBoundaryFaceCondition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoundaryFaceCondition(this);
}

const char *IfcBoundaryFaceCondition::type() {
  return "IfcBoundaryFaceCondition";
}

Step::ClassType IfcBoundaryFaceCondition::getClassType() {
  return IfcBoundaryFaceCondition::s_type;
}

Step::ClassType IfcBoundaryFaceCondition::getType() const {
  return IfcBoundaryFaceCondition::s_type;
}

bool IfcBoundaryFaceCondition::isOfType(Step::ClassType t) {
  return IfcBoundaryFaceCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaX() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessByAreaX;
  }
  else {
    return getUnset(m_linearStiffnessByAreaX);
  }
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaX(IfcModulusOfSubgradeReactionMeasure value) {
  m_linearStiffnessByAreaX = value;
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaY() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessByAreaY;
  }
  else {
    return getUnset(m_linearStiffnessByAreaY);
  }
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaY(IfcModulusOfSubgradeReactionMeasure value) {
  m_linearStiffnessByAreaY = value;
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaZ() {
  if (Step::BaseObject::inited()) {
    return m_linearStiffnessByAreaZ;
  }
  else {
    return getUnset(m_linearStiffnessByAreaZ);
  }
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaZ(IfcModulusOfSubgradeReactionMeasure value) {
  m_linearStiffnessByAreaZ = value;
}

void IfcBoundaryFaceCondition::release() {
  IfcBoundaryCondition::release();
}

bool IfcBoundaryFaceCondition::init() {
  bool status = IfcBoundaryCondition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessByAreaX = getUnset(m_linearStiffnessByAreaX);
  }
  else {
    m_linearStiffnessByAreaX = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessByAreaY = getUnset(m_linearStiffnessByAreaY);
  }
  else {
    m_linearStiffnessByAreaY = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_linearStiffnessByAreaZ = getUnset(m_linearStiffnessByAreaZ);
  }
  else {
    m_linearStiffnessByAreaZ = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryFaceCondition::s_type = new Step::ClassType_class("IfcBoundaryFaceCondition");
IfcBoundaryFaceCondition_Factory::IfcBoundaryFaceCondition_Factory() {
}

IfcBoundaryFaceCondition_Factory::~IfcBoundaryFaceCondition_Factory() {
  clear(true);
}

void IfcBoundaryFaceCondition_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryFaceCondition_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoundaryFaceCondition_Factory::end() {
  return m_idMap.end();
}

IfcBoundaryFaceCondition *IfcBoundaryFaceCondition_Factory::get(Step::StepId id) {
  IfcBoundaryFaceCondition *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoundaryFaceCondition * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoundaryFaceCondition_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoundaryFaceCondition * > (create(id));
  }
}

Step::BaseObject *IfcBoundaryFaceCondition_Factory::create(Step::StepId id) {
  IfcBoundaryFaceCondition *ret = new IfcBoundaryFaceCondition(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryFaceCondition_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoundaryFaceCondition *ret = new IfcBoundaryFaceCondition(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoundaryFaceCondition_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoundaryFaceCondition *ret = new IfcBoundaryFaceCondition(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoundaryFaceCondition *IfcBoundaryFaceCondition_Factory::generate() {
  return static_cast< IfcBoundaryFaceCondition * > (create(m_model->getNewId()));
}

IfcBoundaryFaceCondition *IfcBoundaryFaceCondition_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoundaryFaceCondition * > (it->second);
  }
  else {
    return NULL;
  }
}

