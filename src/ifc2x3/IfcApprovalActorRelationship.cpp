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
#include <ifc2x3/IfcApprovalActorRelationship.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcApprovalActorRelationship::IfcApprovalActorRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_actor = NULL;
  m_approval = NULL;
  m_role = NULL;
}


IfcApprovalActorRelationship::~IfcApprovalActorRelationship() {
}

bool IfcApprovalActorRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcApprovalActorRelationship(this);
}

const char *IfcApprovalActorRelationship::type() {
  return "IfcApprovalActorRelationship";
}

Step::ClassType IfcApprovalActorRelationship::getClassType() {
  return IfcApprovalActorRelationship::s_type;
}

Step::ClassType IfcApprovalActorRelationship::getType() const {
  return IfcApprovalActorRelationship::s_type;
}

bool IfcApprovalActorRelationship::isOfType(Step::ClassType t) {
  return IfcApprovalActorRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcActorSelect *IfcApprovalActorRelationship::getActor() {
  if (Step::BaseObject::inited()) {
    return m_actor.get();
  }
  else {
    return NULL;
  }
}

void IfcApprovalActorRelationship::setActor(const Step::RefPtr< IfcActorSelect > &value) {
  m_actor = value;
}

IfcApproval *IfcApprovalActorRelationship::getApproval() {
  if (Step::BaseObject::inited()) {
    return m_approval.get();
  }
  else {
    return NULL;
  }
}

void IfcApprovalActorRelationship::setApproval(const Step::RefPtr< IfcApproval > &value) {
  m_approval = value;
}

IfcActorRole *IfcApprovalActorRelationship::getRole() {
  if (Step::BaseObject::inited()) {
    return m_role.get();
  }
  else {
    return NULL;
  }
}

void IfcApprovalActorRelationship::setRole(const Step::RefPtr< IfcActorRole > &value) {
  m_role = value;
}

void IfcApprovalActorRelationship::release() {
  m_approval.release();
  m_role.release();
}

bool IfcApprovalActorRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_actor = NULL;
  }
  else {
    m_actor = new IfcActorSelect;
    if (arg[0] == '#') {
      m_actor->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_approval = NULL;
  }
  else {
    m_approval = static_cast< IfcApproval * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_role = NULL;
  }
  else {
    m_role = static_cast< IfcActorRole * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcApprovalActorRelationship::s_type = new Step::ClassType_class("IfcApprovalActorRelationship");
IfcApprovalActorRelationship_Factory::IfcApprovalActorRelationship_Factory() {
}

IfcApprovalActorRelationship_Factory::~IfcApprovalActorRelationship_Factory() {
  clear(true);
}

void IfcApprovalActorRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApprovalActorRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApprovalActorRelationship_Factory::end() {
  return m_idMap.end();
}

IfcApprovalActorRelationship *IfcApprovalActorRelationship_Factory::get(Step::StepId id) {
  IfcApprovalActorRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcApprovalActorRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcApprovalActorRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcApprovalActorRelationship * > (create(id));
  }
}

Step::BaseObject *IfcApprovalActorRelationship_Factory::create(Step::StepId id) {
  IfcApprovalActorRelationship *ret = new IfcApprovalActorRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcApprovalActorRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcApprovalActorRelationship *ret = new IfcApprovalActorRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcApprovalActorRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcApprovalActorRelationship *ret = new IfcApprovalActorRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcApprovalActorRelationship *IfcApprovalActorRelationship_Factory::generate() {
  return static_cast< IfcApprovalActorRelationship * > (create(m_model->getNewId()));
}

IfcApprovalActorRelationship *IfcApprovalActorRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcApprovalActorRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

