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
#include <ifc2x3/IfcApproval.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcApprovalActorRelationship.h>
#include <ifc2x3/IfcApprovalRelationship.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcApproval::IfcApproval(Step::SPFData *args) : Step::BaseObject(args) {
  m_description = getUnset(m_description);
  m_approvalDateTime = NULL;
  m_approvalStatus = getUnset(m_approvalStatus);
  m_approvalLevel = getUnset(m_approvalLevel);
  m_approvalQualifier = getUnset(m_approvalQualifier);
  m_name = getUnset(m_name);
  m_identifier = getUnset(m_identifier);
  m_actors.setUnset(true);
  m_isRelatedWith.setUnset(true);
  m_relates.setUnset(true);
}


IfcApproval::~IfcApproval() {
}

bool IfcApproval::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcApproval(this);
}

const char *IfcApproval::type() {
  return "IfcApproval";
}

Step::ClassType IfcApproval::getClassType() {
  return IfcApproval::s_type;
}

Step::ClassType IfcApproval::getType() const {
  return IfcApproval::s_type;
}

bool IfcApproval::isOfType(Step::ClassType t) {
  return IfcApproval::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcText IfcApproval::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcApproval::setDescription(const IfcText &value) {
  m_description = value;
}

IfcDateTimeSelect *IfcApproval::getApprovalDateTime() {
  if (Step::BaseObject::inited()) {
    return m_approvalDateTime.get();
  }
  else {
    return NULL;
  }
}

void IfcApproval::setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_approvalDateTime = value;
}

IfcLabel IfcApproval::getApprovalStatus() {
  if (Step::BaseObject::inited()) {
    return m_approvalStatus;
  }
  else {
    return getUnset(m_approvalStatus);
  }
}

void IfcApproval::setApprovalStatus(const IfcLabel &value) {
  m_approvalStatus = value;
}

IfcLabel IfcApproval::getApprovalLevel() {
  if (Step::BaseObject::inited()) {
    return m_approvalLevel;
  }
  else {
    return getUnset(m_approvalLevel);
  }
}

void IfcApproval::setApprovalLevel(const IfcLabel &value) {
  m_approvalLevel = value;
}

IfcText IfcApproval::getApprovalQualifier() {
  if (Step::BaseObject::inited()) {
    return m_approvalQualifier;
  }
  else {
    return getUnset(m_approvalQualifier);
  }
}

void IfcApproval::setApprovalQualifier(const IfcText &value) {
  m_approvalQualifier = value;
}

IfcLabel IfcApproval::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcApproval::setName(const IfcLabel &value) {
  m_name = value;
}

IfcIdentifier IfcApproval::getIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_identifier;
  }
  else {
    return getUnset(m_identifier);
  }
}

void IfcApproval::setIdentifier(const IfcIdentifier &value) {
  m_identifier = value;
}

Step::StepSet< Step::RefPtr< IfcApprovalActorRelationship > > &IfcApproval::getActors() {
  if (Step::BaseObject::inited()) {
    return m_actors;
  }
  else {
    m_actors.setUnset(true);
    return m_actors;
  }
}

void IfcApproval::setActors(const Step::StepSet< Step::RefPtr< IfcApprovalActorRelationship > > &value) {
  m_actors = value;
}

Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &IfcApproval::getIsRelatedWith() {
  if (Step::BaseObject::inited()) {
    return m_isRelatedWith;
  }
  else {
    m_isRelatedWith.setUnset(true);
    return m_isRelatedWith;
  }
}

void IfcApproval::setIsRelatedWith(const Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &value) {
  m_isRelatedWith = value;
}

Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &IfcApproval::getRelates() {
  if (Step::BaseObject::inited()) {
    return m_relates;
  }
  else {
    m_relates.setUnset(true);
    return m_relates;
  }
}

void IfcApproval::setRelates(const Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &value) {
  m_relates = value;
}

void IfcApproval::release() {
}

bool IfcApproval::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_approvalDateTime = NULL;
  }
  else {
    m_approvalDateTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_approvalDateTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_approvalStatus = getUnset(m_approvalStatus);
  }
  else {
    m_approvalStatus = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_approvalLevel = getUnset(m_approvalLevel);
  }
  else {
    m_approvalLevel = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_approvalQualifier = getUnset(m_approvalQualifier);
  }
  else {
    m_approvalQualifier = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_identifier = getUnset(m_identifier);
  }
  else {
    m_identifier = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcApprovalActorRelationship::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_actors.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_actors.insert(static_cast< IfcApprovalActorRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_isRelatedWith.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isRelatedWith.insert(static_cast< IfcApprovalRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_relates.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_relates.insert(static_cast< IfcApprovalRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcApproval::s_type = new Step::ClassType_class("IfcApproval");
IfcApproval_Factory::IfcApproval_Factory() {
}

IfcApproval_Factory::~IfcApproval_Factory() {
  clear(true);
}

void IfcApproval_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApproval_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApproval_Factory::end() {
  return m_idMap.end();
}

IfcApproval *IfcApproval_Factory::get(Step::StepId id) {
  IfcApproval *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcApproval * > (it->second);
  }
  else {
    LOG_ERROR("IfcApproval_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcApproval * > (create(id));
  }
}

Step::BaseObject *IfcApproval_Factory::create(Step::StepId id) {
  IfcApproval *ret = new IfcApproval(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcApproval_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcApproval *ret = new IfcApproval(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcApproval_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcApproval *ret = new IfcApproval(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcApproval *IfcApproval_Factory::generate() {
  return static_cast< IfcApproval * > (create(m_model->getNewId()));
}

IfcApproval *IfcApproval_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcApproval * > (it->second);
  }
  else {
    return NULL;
  }
}

