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
#include <ifc2x3/IfcRelAssociatesConstraint.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesConstraint::IfcRelAssociatesConstraint(Step::SPFData *args) : IfcRelAssociates(args) {
  m_intent = getUnset(m_intent);
  m_relatingConstraint = NULL;
}


IfcRelAssociatesConstraint::~IfcRelAssociatesConstraint() {
}

bool IfcRelAssociatesConstraint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesConstraint(this);
}

const char *IfcRelAssociatesConstraint::type() {
  return "IfcRelAssociatesConstraint";
}

Step::ClassType IfcRelAssociatesConstraint::getClassType() {
  return IfcRelAssociatesConstraint::s_type;
}

Step::ClassType IfcRelAssociatesConstraint::getType() const {
  return IfcRelAssociatesConstraint::s_type;
}

bool IfcRelAssociatesConstraint::isOfType(Step::ClassType t) {
  return IfcRelAssociatesConstraint::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcLabel IfcRelAssociatesConstraint::getIntent() {
  if (Step::BaseObject::inited()) {
    return m_intent;
  }
  else {
    return getUnset(m_intent);
  }
}

void IfcRelAssociatesConstraint::setIntent(const IfcLabel &value) {
  m_intent = value;
}

IfcConstraint *IfcRelAssociatesConstraint::getRelatingConstraint() {
  if (Step::BaseObject::inited()) {
    return m_relatingConstraint.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesConstraint::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
  m_relatingConstraint = value;
}

void IfcRelAssociatesConstraint::release() {
  IfcRelAssociates::release();
  m_relatingConstraint.release();
}

bool IfcRelAssociatesConstraint::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_intent = getUnset(m_intent);
  }
  else {
    m_intent = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingConstraint = NULL;
  }
  else {
    m_relatingConstraint = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesConstraint::s_type = new Step::ClassType_class("IfcRelAssociatesConstraint");
IfcRelAssociatesConstraint_Factory::IfcRelAssociatesConstraint_Factory() {
}

IfcRelAssociatesConstraint_Factory::~IfcRelAssociatesConstraint_Factory() {
  clear(true);
}

void IfcRelAssociatesConstraint_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesConstraint_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesConstraint_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesConstraint *IfcRelAssociatesConstraint_Factory::get(Step::StepId id) {
  IfcRelAssociatesConstraint *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesConstraint * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesConstraint_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesConstraint * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesConstraint_Factory::create(Step::StepId id) {
  IfcRelAssociatesConstraint *ret = new IfcRelAssociatesConstraint(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesConstraint_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesConstraint *ret = new IfcRelAssociatesConstraint(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesConstraint_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesConstraint *ret = new IfcRelAssociatesConstraint(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesConstraint *IfcRelAssociatesConstraint_Factory::generate() {
  return static_cast< IfcRelAssociatesConstraint * > (create(m_model->getNewId()));
}

IfcRelAssociatesConstraint *IfcRelAssociatesConstraint_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesConstraint * > (it->second);
  }
  else {
    return NULL;
  }
}

