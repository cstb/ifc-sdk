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
#include <ifc2x3/IfcContextDependentUnit.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcContextDependentUnit::IfcContextDependentUnit(Step::SPFData *args) : IfcNamedUnit(args) {
  m_name = getUnset(m_name);
}


IfcContextDependentUnit::~IfcContextDependentUnit() {
}

bool IfcContextDependentUnit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcContextDependentUnit(this);
}

const char *IfcContextDependentUnit::type() {
  return "IfcContextDependentUnit";
}

Step::ClassType IfcContextDependentUnit::getClassType() {
  return IfcContextDependentUnit::s_type;
}

Step::ClassType IfcContextDependentUnit::getType() const {
  return IfcContextDependentUnit::s_type;
}

bool IfcContextDependentUnit::isOfType(Step::ClassType t) {
  return IfcContextDependentUnit::s_type == t ? true : IfcNamedUnit::isOfType(t);
}

IfcLabel IfcContextDependentUnit::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcContextDependentUnit::setName(const IfcLabel &value) {
  m_name = value;
}

void IfcContextDependentUnit::release() {
  IfcNamedUnit::release();
}

bool IfcContextDependentUnit::init() {
  bool status = IfcNamedUnit::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcContextDependentUnit::s_type = new Step::ClassType_class("IfcContextDependentUnit");
IfcContextDependentUnit_Factory::IfcContextDependentUnit_Factory() {
}

IfcContextDependentUnit_Factory::~IfcContextDependentUnit_Factory() {
  clear(true);
}

void IfcContextDependentUnit_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcContextDependentUnit_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcContextDependentUnit_Factory::end() {
  return m_idMap.end();
}

IfcContextDependentUnit *IfcContextDependentUnit_Factory::get(Step::StepId id) {
  IfcContextDependentUnit *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcContextDependentUnit * > (it->second);
  }
  else {
    LOG_ERROR("IfcContextDependentUnit_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcContextDependentUnit * > (create(id));
  }
}

Step::BaseObject *IfcContextDependentUnit_Factory::create(Step::StepId id) {
  IfcContextDependentUnit *ret = new IfcContextDependentUnit(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcContextDependentUnit_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcContextDependentUnit *ret = new IfcContextDependentUnit(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcContextDependentUnit_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcContextDependentUnit *ret = new IfcContextDependentUnit(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcContextDependentUnit *IfcContextDependentUnit_Factory::generate() {
  return static_cast< IfcContextDependentUnit * > (create(m_model->getNewId()));
}

IfcContextDependentUnit *IfcContextDependentUnit_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcContextDependentUnit * > (it->second);
  }
  else {
    return NULL;
  }
}

