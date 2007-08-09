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
#include <ifc2x3/IfcActorRole.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcActorRole::IfcActorRole(Step::SPFData *args) : Step::BaseObject(args) {
  m_role = IfcRoleEnum_UNSET;
  m_userDefinedRole = getUnset(m_userDefinedRole);
  m_description = getUnset(m_description);
}


IfcActorRole::~IfcActorRole() {
}

bool IfcActorRole::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcActorRole(this);
}

const char *IfcActorRole::type() {
  return "IfcActorRole";
}

Step::ClassType IfcActorRole::getClassType() {
  return IfcActorRole::s_type;
}

Step::ClassType IfcActorRole::getType() const {
  return IfcActorRole::s_type;
}

bool IfcActorRole::isOfType(Step::ClassType t) {
  return IfcActorRole::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcRoleEnum IfcActorRole::getRole() {
  if (Step::BaseObject::inited()) {
    return m_role;
  }
  else {
    return IfcRoleEnum_UNSET;
  }
}

void IfcActorRole::setRole(IfcRoleEnum value) {
  m_role = value;
}

IfcLabel IfcActorRole::getUserDefinedRole() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedRole;
  }
  else {
    return getUnset(m_userDefinedRole);
  }
}

void IfcActorRole::setUserDefinedRole(const IfcLabel &value) {
  m_userDefinedRole = value;
}

IfcText IfcActorRole::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcActorRole::setDescription(const IfcText &value) {
  m_description = value;
}

void IfcActorRole::release() {
}

bool IfcActorRole::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_role = IfcRoleEnum_UNSET;
  }
  else {
    if (arg == ".SUPPLIER.") {
      m_role = IfcRoleEnum_SUPPLIER;
    }
    else if (arg == ".MANUFACTURER.") {
      m_role = IfcRoleEnum_MANUFACTURER;
    }
    else if (arg == ".CONTRACTOR.") {
      m_role = IfcRoleEnum_CONTRACTOR;
    }
    else if (arg == ".SUBCONTRACTOR.") {
      m_role = IfcRoleEnum_SUBCONTRACTOR;
    }
    else if (arg == ".ARCHITECT.") {
      m_role = IfcRoleEnum_ARCHITECT;
    }
    else if (arg == ".STRUCTURALENGINEER.") {
      m_role = IfcRoleEnum_STRUCTURALENGINEER;
    }
    else if (arg == ".COSTENGINEER.") {
      m_role = IfcRoleEnum_COSTENGINEER;
    }
    else if (arg == ".CLIENT.") {
      m_role = IfcRoleEnum_CLIENT;
    }
    else if (arg == ".BUILDINGOWNER.") {
      m_role = IfcRoleEnum_BUILDINGOWNER;
    }
    else if (arg == ".BUILDINGOPERATOR.") {
      m_role = IfcRoleEnum_BUILDINGOPERATOR;
    }
    else if (arg == ".MECHANICALENGINEER.") {
      m_role = IfcRoleEnum_MECHANICALENGINEER;
    }
    else if (arg == ".ELECTRICALENGINEER.") {
      m_role = IfcRoleEnum_ELECTRICALENGINEER;
    }
    else if (arg == ".PROJECTMANAGER.") {
      m_role = IfcRoleEnum_PROJECTMANAGER;
    }
    else if (arg == ".FACILITIESMANAGER.") {
      m_role = IfcRoleEnum_FACILITIESMANAGER;
    }
    else if (arg == ".CIVILENGINEER.") {
      m_role = IfcRoleEnum_CIVILENGINEER;
    }
    else if (arg == ".COMISSIONINGENGINEER.") {
      m_role = IfcRoleEnum_COMISSIONINGENGINEER;
    }
    else if (arg == ".ENGINEER.") {
      m_role = IfcRoleEnum_ENGINEER;
    }
    else if (arg == ".OWNER.") {
      m_role = IfcRoleEnum_OWNER;
    }
    else if (arg == ".CONSULTANT.") {
      m_role = IfcRoleEnum_CONSULTANT;
    }
    else if (arg == ".CONSTRUCTIONMANAGER.") {
      m_role = IfcRoleEnum_CONSTRUCTIONMANAGER;
    }
    else if (arg == ".FIELDCONSTRUCTIONMANAGER.") {
      m_role = IfcRoleEnum_FIELDCONSTRUCTIONMANAGER;
    }
    else if (arg == ".RESELLER.") {
      m_role = IfcRoleEnum_RESELLER;
    }
    else if (arg == ".USERDEFINED.") {
      m_role = IfcRoleEnum_USERDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedRole = getUnset(m_userDefinedRole);
  }
  else {
    m_userDefinedRole = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcActorRole::s_type = new Step::ClassType_class("IfcActorRole");
IfcActorRole_Factory::IfcActorRole_Factory() {
}

IfcActorRole_Factory::~IfcActorRole_Factory() {
  clear(true);
}

void IfcActorRole_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActorRole_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActorRole_Factory::end() {
  return m_idMap.end();
}

IfcActorRole *IfcActorRole_Factory::get(Step::StepId id) {
  IfcActorRole *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcActorRole * > (it->second);
  }
  else {
    LOG_ERROR("IfcActorRole_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcActorRole * > (create(id));
  }
}

Step::BaseObject *IfcActorRole_Factory::create(Step::StepId id) {
  IfcActorRole *ret = new IfcActorRole(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcActorRole_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcActorRole *ret = new IfcActorRole(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcActorRole_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcActorRole *ret = new IfcActorRole(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcActorRole *IfcActorRole_Factory::generate() {
  return static_cast< IfcActorRole * > (create(m_model->getNewId()));
}

IfcActorRole *IfcActorRole_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcActorRole * > (it->second);
  }
  else {
    return NULL;
  }
}

