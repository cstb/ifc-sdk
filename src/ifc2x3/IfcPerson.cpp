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
#include <ifc2x3/IfcPerson.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPerson::IfcPerson(Step::SPFData *args) : Step::BaseObject(args) {
  m_id = getUnset(m_id);
  m_familyName = getUnset(m_familyName);
  m_givenName = getUnset(m_givenName);
  m_middleNames.setUnset(true);
  m_prefixTitles.setUnset(true);
  m_suffixTitles.setUnset(true);
  m_roles.setUnset(true);
  m_addresses.setUnset(true);
  m_engagedIn.setUnset(true);
}


IfcPerson::~IfcPerson() {
}

bool IfcPerson::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPerson(this);
}

const char *IfcPerson::type() {
  return "IfcPerson";
}

Step::ClassType IfcPerson::getClassType() {
  return IfcPerson::s_type;
}

Step::ClassType IfcPerson::getType() const {
  return IfcPerson::s_type;
}

bool IfcPerson::isOfType(Step::ClassType t) {
  return IfcPerson::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcPerson::getId() {
  if (Step::BaseObject::inited()) {
    return m_id;
  }
  else {
    return getUnset(m_id);
  }
}

void IfcPerson::setId(const IfcIdentifier &value) {
  m_id = value;
}

IfcLabel IfcPerson::getFamilyName() {
  if (Step::BaseObject::inited()) {
    return m_familyName;
  }
  else {
    return getUnset(m_familyName);
  }
}

void IfcPerson::setFamilyName(const IfcLabel &value) {
  m_familyName = value;
}

IfcLabel IfcPerson::getGivenName() {
  if (Step::BaseObject::inited()) {
    return m_givenName;
  }
  else {
    return getUnset(m_givenName);
  }
}

void IfcPerson::setGivenName(const IfcLabel &value) {
  m_givenName = value;
}

Step::StepList< IfcLabel > &IfcPerson::getMiddleNames() {
  if (Step::BaseObject::inited()) {
    return m_middleNames;
  }
  else {
    m_middleNames.setUnset(true);
    return m_middleNames;
  }
}

void IfcPerson::setMiddleNames(const Step::StepList< IfcLabel > &value) {
  m_middleNames = value;
}

Step::StepList< IfcLabel > &IfcPerson::getPrefixTitles() {
  if (Step::BaseObject::inited()) {
    return m_prefixTitles;
  }
  else {
    m_prefixTitles.setUnset(true);
    return m_prefixTitles;
  }
}

void IfcPerson::setPrefixTitles(const Step::StepList< IfcLabel > &value) {
  m_prefixTitles = value;
}

Step::StepList< IfcLabel > &IfcPerson::getSuffixTitles() {
  if (Step::BaseObject::inited()) {
    return m_suffixTitles;
  }
  else {
    m_suffixTitles.setUnset(true);
    return m_suffixTitles;
  }
}

void IfcPerson::setSuffixTitles(const Step::StepList< IfcLabel > &value) {
  m_suffixTitles = value;
}

Step::StepList< Step::RefPtr< IfcActorRole > > &IfcPerson::getRoles() {
  if (Step::BaseObject::inited()) {
    return m_roles;
  }
  else {
    m_roles.setUnset(true);
    return m_roles;
  }
}

void IfcPerson::setRoles(const Step::StepList< Step::RefPtr< IfcActorRole > > &value) {
  m_roles = value;
}

Step::StepList< Step::RefPtr< IfcAddress > > &IfcPerson::getAddresses() {
  if (Step::BaseObject::inited()) {
    return m_addresses;
  }
  else {
    m_addresses.setUnset(true);
    return m_addresses;
  }
}

void IfcPerson::setAddresses(const Step::StepList< Step::RefPtr< IfcAddress > > &value) {
  m_addresses = value;
}

Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &IfcPerson::getEngagedIn() {
  if (Step::BaseObject::inited()) {
    return m_engagedIn;
  }
  else {
    m_engagedIn.setUnset(true);
    return m_engagedIn;
  }
}

void IfcPerson::setEngagedIn(const Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &value) {
  m_engagedIn = value;
}

void IfcPerson::release() {
  m_middleNames.clear();
  m_prefixTitles.clear();
  m_suffixTitles.clear();
  m_roles.clear();
  m_addresses.clear();
}

bool IfcPerson::init() {
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
    m_familyName = getUnset(m_familyName);
  }
  else {
    m_familyName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_givenName = getUnset(m_givenName);
  }
  else {
    m_givenName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_middleNames.setUnset(true);
  }
  else {
    m_middleNames.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_middleNames.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_prefixTitles.setUnset(true);
  }
  else {
    m_prefixTitles.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_prefixTitles.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_suffixTitles.setUnset(true);
  }
  else {
    m_suffixTitles.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLabel attr2;
        attr2 = Step::spfToString(str1);
        m_suffixTitles.push_back(attr2);
      }
      else {
        break;
      }
    }
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
  inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_engagedIn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_engagedIn.insert(static_cast< IfcPersonAndOrganization * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPerson::s_type = new Step::ClassType_class("IfcPerson");
IfcPerson_Factory::IfcPerson_Factory() {
}

IfcPerson_Factory::~IfcPerson_Factory() {
  clear(true);
}

void IfcPerson_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPerson_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPerson_Factory::end() {
  return m_idMap.end();
}

IfcPerson *IfcPerson_Factory::get(Step::StepId id) {
  IfcPerson *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPerson * > (it->second);
  }
  else {
    LOG_ERROR("IfcPerson_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPerson * > (create(id));
  }
}

Step::BaseObject *IfcPerson_Factory::create(Step::StepId id) {
  IfcPerson *ret = new IfcPerson(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPerson_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPerson *ret = new IfcPerson(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPerson_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPerson *ret = new IfcPerson(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPerson *IfcPerson_Factory::generate() {
  return static_cast< IfcPerson * > (create(m_model->getNewId()));
}

IfcPerson *IfcPerson_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPerson * > (it->second);
  }
  else {
    return NULL;
  }
}

