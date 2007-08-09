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
#include <ifc2x3/IfcPersonAndOrganization.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPersonAndOrganization::IfcPersonAndOrganization(Step::SPFData *args) : Step::BaseObject(args) {
  m_thePerson = NULL;
  m_theOrganization = NULL;
  m_roles.setUnset(true);
}


IfcPersonAndOrganization::~IfcPersonAndOrganization() {
}

bool IfcPersonAndOrganization::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPersonAndOrganization(this);
}

const char *IfcPersonAndOrganization::type() {
  return "IfcPersonAndOrganization";
}

Step::ClassType IfcPersonAndOrganization::getClassType() {
  return IfcPersonAndOrganization::s_type;
}

Step::ClassType IfcPersonAndOrganization::getType() const {
  return IfcPersonAndOrganization::s_type;
}

bool IfcPersonAndOrganization::isOfType(Step::ClassType t) {
  return IfcPersonAndOrganization::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPerson *IfcPersonAndOrganization::getThePerson() {
  if (Step::BaseObject::inited()) {
    return m_thePerson.get();
  }
  else {
    return NULL;
  }
}

void IfcPersonAndOrganization::setThePerson(const Step::RefPtr< IfcPerson > &value) {
  m_thePerson = value;
}

IfcOrganization *IfcPersonAndOrganization::getTheOrganization() {
  if (Step::BaseObject::inited()) {
    return m_theOrganization.get();
  }
  else {
    return NULL;
  }
}

void IfcPersonAndOrganization::setTheOrganization(const Step::RefPtr< IfcOrganization > &value) {
  m_theOrganization = value;
}

Step::StepList< Step::RefPtr< IfcActorRole > > &IfcPersonAndOrganization::getRoles() {
  if (Step::BaseObject::inited()) {
    return m_roles;
  }
  else {
    m_roles.setUnset(true);
    return m_roles;
  }
}

void IfcPersonAndOrganization::setRoles(const Step::StepList< Step::RefPtr< IfcActorRole > > &value) {
  m_roles = value;
}

void IfcPersonAndOrganization::release() {
  m_thePerson.release();
  m_theOrganization.release();
  m_roles.clear();
}

bool IfcPersonAndOrganization::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thePerson = NULL;
  }
  else {
    m_thePerson = static_cast< IfcPerson * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_theOrganization = NULL;
  }
  else {
    m_theOrganization = static_cast< IfcOrganization * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_roles.setUnset(true);
  }
  else {
    m_roles.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcActorRole > attr2;
        attr2 = static_cast< IfcActorRole * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_roles.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPersonAndOrganization::s_type = new Step::ClassType_class("IfcPersonAndOrganization");
IfcPersonAndOrganization_Factory::IfcPersonAndOrganization_Factory() {
}

IfcPersonAndOrganization_Factory::~IfcPersonAndOrganization_Factory() {
  clear(true);
}

void IfcPersonAndOrganization_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPersonAndOrganization_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPersonAndOrganization_Factory::end() {
  return m_idMap.end();
}

IfcPersonAndOrganization *IfcPersonAndOrganization_Factory::get(Step::StepId id) {
  IfcPersonAndOrganization *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPersonAndOrganization * > (it->second);
  }
  else {
    LOG_ERROR("IfcPersonAndOrganization_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPersonAndOrganization * > (create(id));
  }
}

Step::BaseObject *IfcPersonAndOrganization_Factory::create(Step::StepId id) {
  IfcPersonAndOrganization *ret = new IfcPersonAndOrganization(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPersonAndOrganization_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPersonAndOrganization *ret = new IfcPersonAndOrganization(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPersonAndOrganization_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPersonAndOrganization *ret = new IfcPersonAndOrganization(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPersonAndOrganization *IfcPersonAndOrganization_Factory::generate() {
  return static_cast< IfcPersonAndOrganization * > (create(m_model->getNewId()));
}

IfcPersonAndOrganization *IfcPersonAndOrganization_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPersonAndOrganization * > (it->second);
  }
  else {
    return NULL;
  }
}

