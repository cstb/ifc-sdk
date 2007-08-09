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
#include <ifc2x3/IfcPropertyConstraintRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertyConstraintRelationship::IfcPropertyConstraintRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_relatingConstraint = NULL;
  m_relatedProperties.setUnset(true);
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
}


IfcPropertyConstraintRelationship::~IfcPropertyConstraintRelationship() {
}

bool IfcPropertyConstraintRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertyConstraintRelationship(this);
}

const char *IfcPropertyConstraintRelationship::type() {
  return "IfcPropertyConstraintRelationship";
}

Step::ClassType IfcPropertyConstraintRelationship::getClassType() {
  return IfcPropertyConstraintRelationship::s_type;
}

Step::ClassType IfcPropertyConstraintRelationship::getType() const {
  return IfcPropertyConstraintRelationship::s_type;
}

bool IfcPropertyConstraintRelationship::isOfType(Step::ClassType t) {
  return IfcPropertyConstraintRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcConstraint *IfcPropertyConstraintRelationship::getRelatingConstraint() {
  if (Step::BaseObject::inited()) {
    return m_relatingConstraint.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
  m_relatingConstraint = value;
}

Step::StepSet< Step::RefPtr< IfcProperty > > &IfcPropertyConstraintRelationship::getRelatedProperties() {
  if (Step::BaseObject::inited()) {
    return m_relatedProperties;
  }
  else {
    m_relatedProperties.setUnset(true);
    return m_relatedProperties;
  }
}

void IfcPropertyConstraintRelationship::setRelatedProperties(const Step::StepSet< Step::RefPtr< IfcProperty > > &value) {
  m_relatedProperties = value;
}

IfcLabel IfcPropertyConstraintRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcPropertyConstraintRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcPropertyConstraintRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcPropertyConstraintRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

void IfcPropertyConstraintRelationship::release() {
  m_relatingConstraint.release();
  m_relatedProperties.clear();
}

bool IfcPropertyConstraintRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingConstraint = NULL;
  }
  else {
    m_relatingConstraint = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedProperties.setUnset(true);
  }
  else {
    m_relatedProperties.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProperty > attr2;
        attr2 = static_cast< IfcProperty * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedProperties.insert(attr2);
      }
      else {
        break;
      }
    }
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyConstraintRelationship::s_type = new Step::ClassType_class("IfcPropertyConstraintRelationship");
IfcPropertyConstraintRelationship_Factory::IfcPropertyConstraintRelationship_Factory() {
}

IfcPropertyConstraintRelationship_Factory::~IfcPropertyConstraintRelationship_Factory() {
  clear(true);
}

void IfcPropertyConstraintRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyConstraintRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyConstraintRelationship_Factory::end() {
  return m_idMap.end();
}

IfcPropertyConstraintRelationship *IfcPropertyConstraintRelationship_Factory::get(Step::StepId id) {
  IfcPropertyConstraintRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertyConstraintRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertyConstraintRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertyConstraintRelationship * > (create(id));
  }
}

Step::BaseObject *IfcPropertyConstraintRelationship_Factory::create(Step::StepId id) {
  IfcPropertyConstraintRelationship *ret = new IfcPropertyConstraintRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyConstraintRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertyConstraintRelationship *ret = new IfcPropertyConstraintRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyConstraintRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertyConstraintRelationship *ret = new IfcPropertyConstraintRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertyConstraintRelationship *IfcPropertyConstraintRelationship_Factory::generate() {
  return static_cast< IfcPropertyConstraintRelationship * > (create(m_model->getNewId()));
}

IfcPropertyConstraintRelationship *IfcPropertyConstraintRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertyConstraintRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

