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
#include <ifc2x3/IfcOrganizationRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOrganizationRelationship::IfcOrganizationRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_relatingOrganization = NULL;
  m_relatedOrganizations.setUnset(true);
}


IfcOrganizationRelationship::~IfcOrganizationRelationship() {
}

bool IfcOrganizationRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOrganizationRelationship(this);
}

const char *IfcOrganizationRelationship::type() {
  return "IfcOrganizationRelationship";
}

Step::ClassType IfcOrganizationRelationship::getClassType() {
  return IfcOrganizationRelationship::s_type;
}

Step::ClassType IfcOrganizationRelationship::getType() const {
  return IfcOrganizationRelationship::s_type;
}

bool IfcOrganizationRelationship::isOfType(Step::ClassType t) {
  return IfcOrganizationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcOrganizationRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcOrganizationRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcOrganizationRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcOrganizationRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

IfcOrganization *IfcOrganizationRelationship::getRelatingOrganization() {
  if (Step::BaseObject::inited()) {
    return m_relatingOrganization.get();
  }
  else {
    return NULL;
  }
}

void IfcOrganizationRelationship::setRelatingOrganization(const Step::RefPtr< IfcOrganization > &value) {
  m_relatingOrganization = value;
}

Step::StepSet< Step::RefPtr< IfcOrganization > > &IfcOrganizationRelationship::getRelatedOrganizations() {
  if (Step::BaseObject::inited()) {
    return m_relatedOrganizations;
  }
  else {
    m_relatedOrganizations.setUnset(true);
    return m_relatedOrganizations;
  }
}

void IfcOrganizationRelationship::setRelatedOrganizations(const Step::StepSet< Step::RefPtr< IfcOrganization > > &value) {
  m_relatedOrganizations = value;
}

void IfcOrganizationRelationship::release() {
  m_relatingOrganization.release();
  m_relatedOrganizations.clear();
}

bool IfcOrganizationRelationship::init() {
  std::string arg;
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
    m_relatingOrganization = NULL;
  }
  else {
    m_relatingOrganization = static_cast< IfcOrganization * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedOrganizations.setUnset(true);
  }
  else {
    m_relatedOrganizations.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcOrganization > attr2;
        attr2 = static_cast< IfcOrganization * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedOrganizations.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrganizationRelationship::s_type = new Step::ClassType_class("IfcOrganizationRelationship");
IfcOrganizationRelationship_Factory::IfcOrganizationRelationship_Factory() {
}

IfcOrganizationRelationship_Factory::~IfcOrganizationRelationship_Factory() {
  clear(true);
}

void IfcOrganizationRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrganizationRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrganizationRelationship_Factory::end() {
  return m_idMap.end();
}

IfcOrganizationRelationship *IfcOrganizationRelationship_Factory::get(Step::StepId id) {
  IfcOrganizationRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOrganizationRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcOrganizationRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOrganizationRelationship * > (create(id));
  }
}

Step::BaseObject *IfcOrganizationRelationship_Factory::create(Step::StepId id) {
  IfcOrganizationRelationship *ret = new IfcOrganizationRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOrganizationRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOrganizationRelationship *ret = new IfcOrganizationRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOrganizationRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOrganizationRelationship *ret = new IfcOrganizationRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOrganizationRelationship *IfcOrganizationRelationship_Factory::generate() {
  return static_cast< IfcOrganizationRelationship * > (create(m_model->getNewId()));
}

IfcOrganizationRelationship *IfcOrganizationRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOrganizationRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

