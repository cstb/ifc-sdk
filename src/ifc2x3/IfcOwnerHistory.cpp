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
#include <ifc2x3/IfcOwnerHistory.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcApplication.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOwnerHistory::IfcOwnerHistory(Step::SPFData *args) : Step::BaseObject(args) {
  m_owningUser = NULL;
  m_owningApplication = NULL;
  m_state = IfcStateEnum_UNSET;
  m_changeAction = IfcChangeActionEnum_UNSET;
  m_lastModifiedDate = getUnset(m_lastModifiedDate);
  m_lastModifyingUser = NULL;
  m_lastModifyingApplication = NULL;
  m_creationDate = getUnset(m_creationDate);
}


IfcOwnerHistory::~IfcOwnerHistory() {
}

bool IfcOwnerHistory::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOwnerHistory(this);
}

const char *IfcOwnerHistory::type() {
  return "IfcOwnerHistory";
}

Step::ClassType IfcOwnerHistory::getClassType() {
  return IfcOwnerHistory::s_type;
}

Step::ClassType IfcOwnerHistory::getType() const {
  return IfcOwnerHistory::s_type;
}

bool IfcOwnerHistory::isOfType(Step::ClassType t) {
  return IfcOwnerHistory::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPersonAndOrganization *IfcOwnerHistory::getOwningUser() {
  if (Step::BaseObject::inited()) {
    return m_owningUser.get();
  }
  else {
    return NULL;
  }
}

void IfcOwnerHistory::setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value) {
  m_owningUser = value;
}

IfcApplication *IfcOwnerHistory::getOwningApplication() {
  if (Step::BaseObject::inited()) {
    return m_owningApplication.get();
  }
  else {
    return NULL;
  }
}

void IfcOwnerHistory::setOwningApplication(const Step::RefPtr< IfcApplication > &value) {
  m_owningApplication = value;
}

IfcStateEnum IfcOwnerHistory::getState() {
  if (Step::BaseObject::inited()) {
    return m_state;
  }
  else {
    return IfcStateEnum_UNSET;
  }
}

void IfcOwnerHistory::setState(IfcStateEnum value) {
  m_state = value;
}

IfcChangeActionEnum IfcOwnerHistory::getChangeAction() {
  if (Step::BaseObject::inited()) {
    return m_changeAction;
  }
  else {
    return IfcChangeActionEnum_UNSET;
  }
}

void IfcOwnerHistory::setChangeAction(IfcChangeActionEnum value) {
  m_changeAction = value;
}

IfcTimeStamp IfcOwnerHistory::getLastModifiedDate() {
  if (Step::BaseObject::inited()) {
    return m_lastModifiedDate;
  }
  else {
    return getUnset(m_lastModifiedDate);
  }
}

void IfcOwnerHistory::setLastModifiedDate(IfcTimeStamp value) {
  m_lastModifiedDate = value;
}

IfcPersonAndOrganization *IfcOwnerHistory::getLastModifyingUser() {
  if (Step::BaseObject::inited()) {
    return m_lastModifyingUser.get();
  }
  else {
    return NULL;
  }
}

void IfcOwnerHistory::setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value) {
  m_lastModifyingUser = value;
}

IfcApplication *IfcOwnerHistory::getLastModifyingApplication() {
  if (Step::BaseObject::inited()) {
    return m_lastModifyingApplication.get();
  }
  else {
    return NULL;
  }
}

void IfcOwnerHistory::setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value) {
  m_lastModifyingApplication = value;
}

IfcTimeStamp IfcOwnerHistory::getCreationDate() {
  if (Step::BaseObject::inited()) {
    return m_creationDate;
  }
  else {
    return getUnset(m_creationDate);
  }
}

void IfcOwnerHistory::setCreationDate(IfcTimeStamp value) {
  m_creationDate = value;
}

void IfcOwnerHistory::release() {
  m_owningUser.release();
  m_owningApplication.release();
  m_lastModifyingUser.release();
  m_lastModifyingApplication.release();
}

bool IfcOwnerHistory::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_owningUser = NULL;
  }
  else {
    m_owningUser = static_cast< IfcPersonAndOrganization * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_owningApplication = NULL;
  }
  else {
    m_owningApplication = static_cast< IfcApplication * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_state = IfcStateEnum_UNSET;
  }
  else {
    if (arg == ".READWRITE.") {
      m_state = IfcStateEnum_READWRITE;
    }
    else if (arg == ".READONLY.") {
      m_state = IfcStateEnum_READONLY;
    }
    else if (arg == ".LOCKED.") {
      m_state = IfcStateEnum_LOCKED;
    }
    else if (arg == ".READWRITELOCKED.") {
      m_state = IfcStateEnum_READWRITELOCKED;
    }
    else if (arg == ".READONLYLOCKED.") {
      m_state = IfcStateEnum_READONLYLOCKED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_changeAction = IfcChangeActionEnum_UNSET;
  }
  else {
    if (arg == ".NOCHANGE.") {
      m_changeAction = IfcChangeActionEnum_NOCHANGE;
    }
    else if (arg == ".MODIFIED.") {
      m_changeAction = IfcChangeActionEnum_MODIFIED;
    }
    else if (arg == ".ADDED.") {
      m_changeAction = IfcChangeActionEnum_ADDED;
    }
    else if (arg == ".DELETED.") {
      m_changeAction = IfcChangeActionEnum_DELETED;
    }
    else if (arg == ".MODIFIEDADDED.") {
      m_changeAction = IfcChangeActionEnum_MODIFIEDADDED;
    }
    else if (arg == ".MODIFIEDDELETED.") {
      m_changeAction = IfcChangeActionEnum_MODIFIEDDELETED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lastModifiedDate = getUnset(m_lastModifiedDate);
  }
  else {
    m_lastModifiedDate = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lastModifyingUser = NULL;
  }
  else {
    m_lastModifyingUser = static_cast< IfcPersonAndOrganization * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lastModifyingApplication = NULL;
  }
  else {
    m_lastModifyingApplication = static_cast< IfcApplication * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_creationDate = getUnset(m_creationDate);
  }
  else {
    m_creationDate = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOwnerHistory::s_type = new Step::ClassType_class("IfcOwnerHistory");
IfcOwnerHistory_Factory::IfcOwnerHistory_Factory() {
}

IfcOwnerHistory_Factory::~IfcOwnerHistory_Factory() {
  clear(true);
}

void IfcOwnerHistory_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOwnerHistory_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOwnerHistory_Factory::end() {
  return m_idMap.end();
}

IfcOwnerHistory *IfcOwnerHistory_Factory::get(Step::StepId id) {
  IfcOwnerHistory *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOwnerHistory * > (it->second);
  }
  else {
    LOG_ERROR("IfcOwnerHistory_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOwnerHistory * > (create(id));
  }
}

Step::BaseObject *IfcOwnerHistory_Factory::create(Step::StepId id) {
  IfcOwnerHistory *ret = new IfcOwnerHistory(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOwnerHistory_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOwnerHistory *ret = new IfcOwnerHistory(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOwnerHistory_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOwnerHistory *ret = new IfcOwnerHistory(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOwnerHistory *IfcOwnerHistory_Factory::generate() {
  return static_cast< IfcOwnerHistory * > (create(m_model->getNewId()));
}

IfcOwnerHistory *IfcOwnerHistory_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOwnerHistory * > (it->second);
  }
  else {
    return NULL;
  }
}

