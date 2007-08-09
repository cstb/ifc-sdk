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
#include <ifc2x3/IfcApprovalPropertyRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcApprovalPropertyRelationship::IfcApprovalPropertyRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_approvedProperties.setUnset(true);
  m_approval = NULL;
}


IfcApprovalPropertyRelationship::~IfcApprovalPropertyRelationship() {
}

bool IfcApprovalPropertyRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcApprovalPropertyRelationship(this);
}

const char *IfcApprovalPropertyRelationship::type() {
  return "IfcApprovalPropertyRelationship";
}

Step::ClassType IfcApprovalPropertyRelationship::getClassType() {
  return IfcApprovalPropertyRelationship::s_type;
}

Step::ClassType IfcApprovalPropertyRelationship::getType() const {
  return IfcApprovalPropertyRelationship::s_type;
}

bool IfcApprovalPropertyRelationship::isOfType(Step::ClassType t) {
  return IfcApprovalPropertyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProperty > > &IfcApprovalPropertyRelationship::getApprovedProperties() {
  if (Step::BaseObject::inited()) {
    return m_approvedProperties;
  }
  else {
    m_approvedProperties.setUnset(true);
    return m_approvedProperties;
  }
}

void IfcApprovalPropertyRelationship::setApprovedProperties(const Step::StepSet< Step::RefPtr< IfcProperty > > &value) {
  m_approvedProperties = value;
}

IfcApproval *IfcApprovalPropertyRelationship::getApproval() {
  if (Step::BaseObject::inited()) {
    return m_approval.get();
  }
  else {
    return NULL;
  }
}

void IfcApprovalPropertyRelationship::setApproval(const Step::RefPtr< IfcApproval > &value) {
  m_approval = value;
}

void IfcApprovalPropertyRelationship::release() {
  m_approvedProperties.clear();
  m_approval.release();
}

bool IfcApprovalPropertyRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_approvedProperties.setUnset(true);
  }
  else {
    m_approvedProperties.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProperty > attr2;
        attr2 = static_cast< IfcProperty * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_approvedProperties.insert(attr2);
      }
      else {
        break;
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcApprovalPropertyRelationship::s_type = new Step::ClassType_class("IfcApprovalPropertyRelationship");
IfcApprovalPropertyRelationship_Factory::IfcApprovalPropertyRelationship_Factory() {
}

IfcApprovalPropertyRelationship_Factory::~IfcApprovalPropertyRelationship_Factory() {
  clear(true);
}

void IfcApprovalPropertyRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApprovalPropertyRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcApprovalPropertyRelationship_Factory::end() {
  return m_idMap.end();
}

IfcApprovalPropertyRelationship *IfcApprovalPropertyRelationship_Factory::get(Step::StepId id) {
  IfcApprovalPropertyRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcApprovalPropertyRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcApprovalPropertyRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcApprovalPropertyRelationship * > (create(id));
  }
}

Step::BaseObject *IfcApprovalPropertyRelationship_Factory::create(Step::StepId id) {
  IfcApprovalPropertyRelationship *ret = new IfcApprovalPropertyRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcApprovalPropertyRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcApprovalPropertyRelationship *ret = new IfcApprovalPropertyRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcApprovalPropertyRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcApprovalPropertyRelationship *ret = new IfcApprovalPropertyRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcApprovalPropertyRelationship *IfcApprovalPropertyRelationship_Factory::generate() {
  return static_cast< IfcApprovalPropertyRelationship * > (create(m_model->getNewId()));
}

IfcApprovalPropertyRelationship *IfcApprovalPropertyRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcApprovalPropertyRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

