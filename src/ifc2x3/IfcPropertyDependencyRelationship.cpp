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
#include <ifc2x3/IfcPropertyDependencyRelationship.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_dependingProperty = NULL;
  m_dependantProperty = NULL;
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_expression = getUnset(m_expression);
}


IfcPropertyDependencyRelationship::~IfcPropertyDependencyRelationship() {
}

bool IfcPropertyDependencyRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertyDependencyRelationship(this);
}

const char *IfcPropertyDependencyRelationship::type() {
  return "IfcPropertyDependencyRelationship";
}

Step::ClassType IfcPropertyDependencyRelationship::getClassType() {
  return IfcPropertyDependencyRelationship::s_type;
}

Step::ClassType IfcPropertyDependencyRelationship::getType() const {
  return IfcPropertyDependencyRelationship::s_type;
}

bool IfcPropertyDependencyRelationship::isOfType(Step::ClassType t) {
  return IfcPropertyDependencyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcProperty *IfcPropertyDependencyRelationship::getDependingProperty() {
  if (Step::BaseObject::inited()) {
    return m_dependingProperty.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyDependencyRelationship::setDependingProperty(const Step::RefPtr< IfcProperty > &value) {
  m_dependingProperty = value;
}

IfcProperty *IfcPropertyDependencyRelationship::getDependantProperty() {
  if (Step::BaseObject::inited()) {
    return m_dependantProperty.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyDependencyRelationship::setDependantProperty(const Step::RefPtr< IfcProperty > &value) {
  m_dependantProperty = value;
}

IfcLabel IfcPropertyDependencyRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcPropertyDependencyRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcPropertyDependencyRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcPropertyDependencyRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

IfcText IfcPropertyDependencyRelationship::getExpression() {
  if (Step::BaseObject::inited()) {
    return m_expression;
  }
  else {
    return getUnset(m_expression);
  }
}

void IfcPropertyDependencyRelationship::setExpression(const IfcText &value) {
  m_expression = value;
}

void IfcPropertyDependencyRelationship::release() {
  m_dependingProperty.release();
  m_dependantProperty.release();
}

bool IfcPropertyDependencyRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dependingProperty = NULL;
  }
  else {
    m_dependingProperty = static_cast< IfcProperty * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dependantProperty = NULL;
  }
  else {
    m_dependantProperty = static_cast< IfcProperty * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_expression = getUnset(m_expression);
  }
  else {
    m_expression = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyDependencyRelationship::s_type = new Step::ClassType_class("IfcPropertyDependencyRelationship");
IfcPropertyDependencyRelationship_Factory::IfcPropertyDependencyRelationship_Factory() {
}

IfcPropertyDependencyRelationship_Factory::~IfcPropertyDependencyRelationship_Factory() {
  clear(true);
}

void IfcPropertyDependencyRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyDependencyRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyDependencyRelationship_Factory::end() {
  return m_idMap.end();
}

IfcPropertyDependencyRelationship *IfcPropertyDependencyRelationship_Factory::get(Step::StepId id) {
  IfcPropertyDependencyRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertyDependencyRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertyDependencyRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertyDependencyRelationship * > (create(id));
  }
}

Step::BaseObject *IfcPropertyDependencyRelationship_Factory::create(Step::StepId id) {
  IfcPropertyDependencyRelationship *ret = new IfcPropertyDependencyRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyDependencyRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertyDependencyRelationship *ret = new IfcPropertyDependencyRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyDependencyRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertyDependencyRelationship *ret = new IfcPropertyDependencyRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertyDependencyRelationship *IfcPropertyDependencyRelationship_Factory::generate() {
  return static_cast< IfcPropertyDependencyRelationship * > (create(m_model->getNewId()));
}

IfcPropertyDependencyRelationship *IfcPropertyDependencyRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertyDependencyRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

