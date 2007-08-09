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
#include <ifc2x3/IfcOrganization.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcOrganizationRelationship.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOrganization::IfcOrganization(Step::SPFData *args) : Step::BaseObject(args) {
  m_id = getUnset(m_id);
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_roles.setUnset(true);
  m_addresses.setUnset(true);
  m_isRelatedBy.setUnset(true);
  m_relates.setUnset(true);
  m_engages.setUnset(true);
}


IfcOrganization::~IfcOrganization() {
}

bool IfcOrganization::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOrganization(this);
}

const char *IfcOrganization::type() {
  return "IfcOrganization";
}

Step::ClassType IfcOrganization::getClassType() {
  return IfcOrganization::s_type;
}

Step::ClassType IfcOrganization::getType() const {
  return IfcOrganization::s_type;
}

bool IfcOrganization::isOfType(Step::ClassType t) {
  return IfcOrganization::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcOrganization::getId() {
  if (Step::BaseObject::inited()) {
    return m_id;
  }
  else {
    return getUnset(m_id);
  }
}

void IfcOrganization::setId(const IfcIdentifier &value) {
  m_id = value;
}

IfcLabel IfcOrganization::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcOrganization::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcOrganization::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcOrganization::setDescription(const IfcText &value) {
  m_description = value;
}

Step::StepList< Step::RefPtr< IfcActorRole > > &IfcOrganization::getRoles() {
  if (Step::BaseObject::inited()) {
    return m_roles;
  }
  else {
    m_roles.setUnset(true);
    return m_roles;
  }
}

void IfcOrganization::setRoles(const Step::StepList< Step::RefPtr< IfcActorRole > > &value) {
  m_roles = value;
}

Step::StepList< Step::RefPtr< IfcAddress > > &IfcOrganization::getAddresses() {
  if (Step::BaseObject::inited()) {
    return m_addresses;
  }
  else {
    m_addresses.setUnset(true);
    return m_addresses;
  }
}

void IfcOrganization::setAddresses(const Step::StepList< Step::RefPtr< IfcAddress > > &value) {
  m_addresses = value;
}

Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &IfcOrganization::getIsRelatedBy() {
  if (Step::BaseObject::inited()) {
    return m_isRelatedBy;
  }
  else {
    m_isRelatedBy.setUnset(true);
    return m_isRelatedBy;
  }
}

void IfcOrganization::setIsRelatedBy(const Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &value) {
  m_isRelatedBy = value;
}

Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &IfcOrganization::getRelates() {
  if (Step::BaseObject::inited()) {
    return m_relates;
  }
  else {
    m_relates.setUnset(true);
    return m_relates;
  }
}

void IfcOrganization::setRelates(const Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &value) {
  m_relates = value;
}

Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &IfcOrganization::getEngages() {
  if (Step::BaseObject::inited()) {
    return m_engages;
  }
  else {
    m_engages.setUnset(true);
    return m_engages;
  }
}

void IfcOrganization::setEngages(const Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &value) {
  m_engages = value;
}

void IfcOrganization::release() {
  m_roles.clear();
  m_addresses.clear();
}

bool IfcOrganization::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_id = getUnset(m_id);
  }
  else {
    m_id = Step::spfToString(arg);
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
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_addresses.setUnset(true);
  }
  else {
    m_addresses.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcAddress > attr2;
        attr2 = static_cast< IfcAddress * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_addresses.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_isRelatedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isRelatedBy.insert(static_cast< IfcOrganizationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_relates.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_relates.insert(static_cast< IfcOrganizationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_engages.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_engages.insert(static_cast< IfcPersonAndOrganization * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrganization::s_type = new Step::ClassType_class("IfcOrganization");
IfcOrganization_Factory::IfcOrganization_Factory() {
}

IfcOrganization_Factory::~IfcOrganization_Factory() {
  clear(true);
}

void IfcOrganization_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrganization_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrganization_Factory::end() {
  return m_idMap.end();
}

IfcOrganization *IfcOrganization_Factory::get(Step::StepId id) {
  IfcOrganization *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOrganization * > (it->second);
  }
  else {
    LOG_ERROR("IfcOrganization_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOrganization * > (create(id));
  }
}

Step::BaseObject *IfcOrganization_Factory::create(Step::StepId id) {
  IfcOrganization *ret = new IfcOrganization(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOrganization_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOrganization *ret = new IfcOrganization(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOrganization_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOrganization *ret = new IfcOrganization(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOrganization *IfcOrganization_Factory::generate() {
  return static_cast< IfcOrganization * > (create(m_model->getNewId()));
}

IfcOrganization *IfcOrganization_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOrganization * > (it->second);
  }
  else {
    return NULL;
  }
}

