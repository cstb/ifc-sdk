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
#include <ifc2x3/IfcApprovalRelationship.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcApprovalRelationship::IfcApprovalRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_relatedApproval = NULL;
  m_relatingApproval = NULL;
  m_description = getUnset(m_description);
  m_name = getUnset(m_name);
}


IfcApprovalRelationship::~IfcApprovalRelationship() {
}

bool IfcApprovalRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcApprovalRelationship(this);
}

const char *IfcApprovalRelationship::type() {
  return "IfcApprovalRelationship";
}

Step::ClassType IfcApprovalRelationship::getClassType() {
  return IfcApprovalRelationship::s_type;
}

Step::ClassType IfcApprovalRelationship::getType() const {
  return IfcApprovalRelationship::s_type;
}

bool IfcApprovalRelationship::isOfType(Step::ClassType t) {
  return IfcApprovalRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcApproval *IfcApprovalRelationship::getRelatedApproval() {
  if (Step::BaseObject::inited()) {
    return m_relatedApproval.get();
  }
  else {
    return NULL;
  }
}

void IfcApprovalRelationship::setRelatedApproval(const Step::RefPtr< IfcApproval > &value) {
  m_relatedApproval = value;
}

IfcApproval *IfcApprovalRelationship::getRelatingApproval() {
  if (Step::BaseObject::inited()) {
    return m_relatingApproval.get();
  }
  else {
    return NULL;
  }
}

void IfcApprovalRelationship::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
  m_relatingApproval = value;
}

IfcText IfcApprovalRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcApprovalRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

IfcLabel IfcApprovalRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcApprovalRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

void IfcApprovalRelationship::release() {
  m_relatedApproval.release();
  m_relatingApproval.release();
}

bool IfcApprovalRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedApproval = NULL;
  }
  else {
    m_relatedApproval = static_cast< IfcApproval * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingApproval = NULL;
  }
  else {
    m_relatingApproval = static_cast< IfcApproval * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcApprovalRelationship::s_type = new Step::ClassType_class("IfcApprovalRelationship");
IfcApprovalRelationship_Factory::IfcApprovalRelationship_Factory() {
}

IfcApprovalRelationship_Factory::~IfcApprovalRelationship_Factory() {
  clear(true);
}

void IfcApprovalRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApprovalRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApprovalRelationship_Factory::end() {
  return m_idMap.end();
}

IfcApprovalRelationship *IfcApprovalRelationship_Factory::get(Step::StepId id) {
  IfcApprovalRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcApprovalRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcApprovalRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcApprovalRelationship * > (create(id));
  }
}

Step::BaseObject *IfcApprovalRelationship_Factory::create(Step::StepId id) {
  IfcApprovalRelationship *ret = new IfcApprovalRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcApprovalRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcApprovalRelationship *ret = new IfcApprovalRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcApprovalRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcApprovalRelationship *ret = new IfcApprovalRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcApprovalRelationship *IfcApprovalRelationship_Factory::generate() {
  return static_cast< IfcApprovalRelationship * > (create(m_model->getNewId()));
}

IfcApprovalRelationship *IfcApprovalRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcApprovalRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

