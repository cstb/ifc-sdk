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
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDraughtingCallout.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDraughtingCalloutRelationship::IfcDraughtingCalloutRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_relatingDraughtingCallout = NULL;
  m_relatedDraughtingCallout = NULL;
}


IfcDraughtingCalloutRelationship::~IfcDraughtingCalloutRelationship() {
}

bool IfcDraughtingCalloutRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDraughtingCalloutRelationship(this);
}

const char *IfcDraughtingCalloutRelationship::type() {
  return "IfcDraughtingCalloutRelationship";
}

Step::ClassType IfcDraughtingCalloutRelationship::getClassType() {
  return IfcDraughtingCalloutRelationship::s_type;
}

Step::ClassType IfcDraughtingCalloutRelationship::getType() const {
  return IfcDraughtingCalloutRelationship::s_type;
}

bool IfcDraughtingCalloutRelationship::isOfType(Step::ClassType t) {
  return IfcDraughtingCalloutRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcDraughtingCalloutRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcDraughtingCalloutRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcDraughtingCalloutRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcDraughtingCalloutRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatingDraughtingCallout() {
  if (Step::BaseObject::inited()) {
    return m_relatingDraughtingCallout.get();
  }
  else {
    return NULL;
  }
}

void IfcDraughtingCalloutRelationship::setRelatingDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value) {
  m_relatingDraughtingCallout = value;
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatedDraughtingCallout() {
  if (Step::BaseObject::inited()) {
    return m_relatedDraughtingCallout.get();
  }
  else {
    return NULL;
  }
}

void IfcDraughtingCalloutRelationship::setRelatedDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value) {
  m_relatedDraughtingCallout = value;
}

void IfcDraughtingCalloutRelationship::release() {
  m_relatingDraughtingCallout.release();
  m_relatedDraughtingCallout.release();
}

bool IfcDraughtingCalloutRelationship::init() {
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
    m_relatingDraughtingCallout = NULL;
  }
  else {
    m_relatingDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedDraughtingCallout = NULL;
  }
  else {
    m_relatedDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingCalloutRelationship::s_type = new Step::ClassType_class("IfcDraughtingCalloutRelationship");
IfcDraughtingCalloutRelationship_Factory::IfcDraughtingCalloutRelationship_Factory() {
}

IfcDraughtingCalloutRelationship_Factory::~IfcDraughtingCalloutRelationship_Factory() {
  clear(true);
}

void IfcDraughtingCalloutRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDraughtingCalloutRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDraughtingCalloutRelationship_Factory::end() {
  return m_idMap.end();
}

IfcDraughtingCalloutRelationship *IfcDraughtingCalloutRelationship_Factory::get(Step::StepId id) {
  IfcDraughtingCalloutRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDraughtingCalloutRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcDraughtingCalloutRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDraughtingCalloutRelationship * > (create(id));
  }
}

Step::BaseObject *IfcDraughtingCalloutRelationship_Factory::create(Step::StepId id) {
  IfcDraughtingCalloutRelationship *ret = new IfcDraughtingCalloutRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDraughtingCalloutRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDraughtingCalloutRelationship *ret = new IfcDraughtingCalloutRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDraughtingCalloutRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDraughtingCalloutRelationship *ret = new IfcDraughtingCalloutRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDraughtingCalloutRelationship *IfcDraughtingCalloutRelationship_Factory::generate() {
  return static_cast< IfcDraughtingCalloutRelationship * > (create(m_model->getNewId()));
}

IfcDraughtingCalloutRelationship *IfcDraughtingCalloutRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDraughtingCalloutRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

