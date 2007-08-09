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
#include <ifc2x3/IfcApplication.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcApplication::IfcApplication(Step::SPFData *args) : Step::BaseObject(args) {
  m_applicationDeveloper = NULL;
  m_version = getUnset(m_version);
  m_applicationFullName = getUnset(m_applicationFullName);
  m_applicationIdentifier = getUnset(m_applicationIdentifier);
}


IfcApplication::~IfcApplication() {
}

bool IfcApplication::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcApplication(this);
}

const char *IfcApplication::type() {
  return "IfcApplication";
}

Step::ClassType IfcApplication::getClassType() {
  return IfcApplication::s_type;
}

Step::ClassType IfcApplication::getType() const {
  return IfcApplication::s_type;
}

bool IfcApplication::isOfType(Step::ClassType t) {
  return IfcApplication::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcOrganization *IfcApplication::getApplicationDeveloper() {
  if (Step::BaseObject::inited()) {
    return m_applicationDeveloper.get();
  }
  else {
    return NULL;
  }
}

void IfcApplication::setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value) {
  m_applicationDeveloper = value;
}

IfcLabel IfcApplication::getVersion() {
  if (Step::BaseObject::inited()) {
    return m_version;
  }
  else {
    return getUnset(m_version);
  }
}

void IfcApplication::setVersion(const IfcLabel &value) {
  m_version = value;
}

IfcLabel IfcApplication::getApplicationFullName() {
  if (Step::BaseObject::inited()) {
    return m_applicationFullName;
  }
  else {
    return getUnset(m_applicationFullName);
  }
}

void IfcApplication::setApplicationFullName(const IfcLabel &value) {
  m_applicationFullName = value;
}

IfcIdentifier IfcApplication::getApplicationIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_applicationIdentifier;
  }
  else {
    return getUnset(m_applicationIdentifier);
  }
}

void IfcApplication::setApplicationIdentifier(const IfcIdentifier &value) {
  m_applicationIdentifier = value;
}

void IfcApplication::release() {
  m_applicationDeveloper.release();
}

bool IfcApplication::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicationDeveloper = NULL;
  }
  else {
    m_applicationDeveloper = static_cast< IfcOrganization * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_version = getUnset(m_version);
  }
  else {
    m_version = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicationFullName = getUnset(m_applicationFullName);
  }
  else {
    m_applicationFullName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicationIdentifier = getUnset(m_applicationIdentifier);
  }
  else {
    m_applicationIdentifier = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcApplication::s_type = new Step::ClassType_class("IfcApplication");
IfcApplication_Factory::IfcApplication_Factory() {
}

IfcApplication_Factory::~IfcApplication_Factory() {
  clear(true);
}

void IfcApplication_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApplication_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApplication_Factory::end() {
  return m_idMap.end();
}

IfcApplication *IfcApplication_Factory::get(Step::StepId id) {
  IfcApplication *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcApplication * > (it->second);
  }
  else {
    LOG_ERROR("IfcApplication_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcApplication * > (create(id));
  }
}

Step::BaseObject *IfcApplication_Factory::create(Step::StepId id) {
  IfcApplication *ret = new IfcApplication(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcApplication_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcApplication *ret = new IfcApplication(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcApplication_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcApplication *ret = new IfcApplication(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcApplication *IfcApplication_Factory::generate() {
  return static_cast< IfcApplication * > (create(m_model->getNewId()));
}

IfcApplication *IfcApplication_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcApplication * > (it->second);
  }
  else {
    return NULL;
  }
}

