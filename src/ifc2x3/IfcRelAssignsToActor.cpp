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
#include <ifc2x3/IfcRelAssignsToActor.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActor.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToActor::IfcRelAssignsToActor(Step::SPFData *args) : IfcRelAssigns(args) {
  m_relatingActor = NULL;
  m_actingRole = NULL;
}


IfcRelAssignsToActor::~IfcRelAssignsToActor() {
}

bool IfcRelAssignsToActor::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToActor(this);
}

const char *IfcRelAssignsToActor::type() {
  return "IfcRelAssignsToActor";
}

Step::ClassType IfcRelAssignsToActor::getClassType() {
  return IfcRelAssignsToActor::s_type;
}

Step::ClassType IfcRelAssignsToActor::getType() const {
  return IfcRelAssignsToActor::s_type;
}

bool IfcRelAssignsToActor::isOfType(Step::ClassType t) {
  return IfcRelAssignsToActor::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcActor *IfcRelAssignsToActor::getRelatingActor() {
  if (Step::BaseObject::inited()) {
    return m_relatingActor.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToActor::setRelatingActor(const Step::RefPtr< IfcActor > &value) {
  m_relatingActor = value;
}

IfcActorRole *IfcRelAssignsToActor::getActingRole() {
  if (Step::BaseObject::inited()) {
    return m_actingRole.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToActor::setActingRole(const Step::RefPtr< IfcActorRole > &value) {
  m_actingRole = value;
}

void IfcRelAssignsToActor::release() {
  IfcRelAssigns::release();
  m_relatingActor.release();
  m_actingRole.release();
}

bool IfcRelAssignsToActor::init() {
  bool status = IfcRelAssigns::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingActor = NULL;
  }
  else {
    m_relatingActor = static_cast< IfcActor * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actingRole = NULL;
  }
  else {
    m_actingRole = static_cast< IfcActorRole * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToActor::s_type = new Step::ClassType_class("IfcRelAssignsToActor");
IfcRelAssignsToActor_Factory::IfcRelAssignsToActor_Factory() {
}

IfcRelAssignsToActor_Factory::~IfcRelAssignsToActor_Factory() {
  clear(true);
}

void IfcRelAssignsToActor_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToActor_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToActor_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToActor *IfcRelAssignsToActor_Factory::get(Step::StepId id) {
  IfcRelAssignsToActor *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToActor * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToActor_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToActor * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToActor_Factory::create(Step::StepId id) {
  IfcRelAssignsToActor *ret = new IfcRelAssignsToActor(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToActor_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToActor *ret = new IfcRelAssignsToActor(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToActor_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToActor *ret = new IfcRelAssignsToActor(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToActor *IfcRelAssignsToActor_Factory::generate() {
  return static_cast< IfcRelAssignsToActor * > (create(m_model->getNewId()));
}

IfcRelAssignsToActor *IfcRelAssignsToActor_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToActor * > (it->second);
  }
  else {
    return NULL;
  }
}

