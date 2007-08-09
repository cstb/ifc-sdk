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
#include <ifc2x3/IfcDerivedProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDerivedProfileDef::IfcDerivedProfileDef(Step::SPFData *args) : IfcProfileDef(args) {
  m_parentProfile = NULL;
  m_operator = NULL;
  m_label = getUnset(m_label);
}


IfcDerivedProfileDef::~IfcDerivedProfileDef() {
}

bool IfcDerivedProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDerivedProfileDef(this);
}

const char *IfcDerivedProfileDef::type() {
  return "IfcDerivedProfileDef";
}

Step::ClassType IfcDerivedProfileDef::getClassType() {
  return IfcDerivedProfileDef::s_type;
}

Step::ClassType IfcDerivedProfileDef::getType() const {
  return IfcDerivedProfileDef::s_type;
}

bool IfcDerivedProfileDef::isOfType(Step::ClassType t) {
  return IfcDerivedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcProfileDef *IfcDerivedProfileDef::getParentProfile() {
  if (Step::BaseObject::inited()) {
    return m_parentProfile.get();
  }
  else {
    return NULL;
  }
}

void IfcDerivedProfileDef::setParentProfile(const Step::RefPtr< IfcProfileDef > &value) {
  m_parentProfile = value;
}

IfcCartesianTransformationOperator2D *IfcDerivedProfileDef::getOperator() {
  if (Step::BaseObject::inited()) {
    return m_operator.get();
  }
  else {
    return NULL;
  }
}

void IfcDerivedProfileDef::setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
  m_operator = value;
}

IfcLabel IfcDerivedProfileDef::getLabel() {
  if (Step::BaseObject::inited()) {
    return m_label;
  }
  else {
    return getUnset(m_label);
  }
}

void IfcDerivedProfileDef::setLabel(const IfcLabel &value) {
  m_label = value;
}

void IfcDerivedProfileDef::release() {
  IfcProfileDef::release();
  m_parentProfile.release();
  m_operator.release();
}

bool IfcDerivedProfileDef::init() {
  bool status = IfcProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_parentProfile = NULL;
  }
  else {
    m_parentProfile = static_cast< IfcProfileDef * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_operator = NULL;
  }
  else {
    m_operator = static_cast< IfcCartesianTransformationOperator2D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_label = getUnset(m_label);
  }
  else {
    m_label = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDerivedProfileDef::s_type = new Step::ClassType_class("IfcDerivedProfileDef");
IfcDerivedProfileDef_Factory::IfcDerivedProfileDef_Factory() {
}

IfcDerivedProfileDef_Factory::~IfcDerivedProfileDef_Factory() {
  clear(true);
}

void IfcDerivedProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDerivedProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDerivedProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcDerivedProfileDef *IfcDerivedProfileDef_Factory::get(Step::StepId id) {
  IfcDerivedProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDerivedProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcDerivedProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDerivedProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcDerivedProfileDef_Factory::create(Step::StepId id) {
  IfcDerivedProfileDef *ret = new IfcDerivedProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDerivedProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDerivedProfileDef *ret = new IfcDerivedProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDerivedProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDerivedProfileDef *ret = new IfcDerivedProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDerivedProfileDef *IfcDerivedProfileDef_Factory::generate() {
  return static_cast< IfcDerivedProfileDef * > (create(m_model->getNewId()));
}

IfcDerivedProfileDef *IfcDerivedProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDerivedProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

