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
#include <ifc2x3/IfcEnvironmentalImpactValue.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEnvironmentalImpactValue::IfcEnvironmentalImpactValue(Step::SPFData *args) : IfcAppliedValue(args) {
  m_impactType = getUnset(m_impactType);
  m_category = IfcEnvironmentalImpactCategoryEnum_UNSET;
  m_userDefinedCategory = getUnset(m_userDefinedCategory);
}


IfcEnvironmentalImpactValue::~IfcEnvironmentalImpactValue() {
}

bool IfcEnvironmentalImpactValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEnvironmentalImpactValue(this);
}

const char *IfcEnvironmentalImpactValue::type() {
  return "IfcEnvironmentalImpactValue";
}

Step::ClassType IfcEnvironmentalImpactValue::getClassType() {
  return IfcEnvironmentalImpactValue::s_type;
}

Step::ClassType IfcEnvironmentalImpactValue::getType() const {
  return IfcEnvironmentalImpactValue::s_type;
}

bool IfcEnvironmentalImpactValue::isOfType(Step::ClassType t) {
  return IfcEnvironmentalImpactValue::s_type == t ? true : IfcAppliedValue::isOfType(t);
}

IfcLabel IfcEnvironmentalImpactValue::getImpactType() {
  if (Step::BaseObject::inited()) {
    return m_impactType;
  }
  else {
    return getUnset(m_impactType);
  }
}

void IfcEnvironmentalImpactValue::setImpactType(const IfcLabel &value) {
  m_impactType = value;
}

IfcEnvironmentalImpactCategoryEnum IfcEnvironmentalImpactValue::getCategory() {
  if (Step::BaseObject::inited()) {
    return m_category;
  }
  else {
    return IfcEnvironmentalImpactCategoryEnum_UNSET;
  }
}

void IfcEnvironmentalImpactValue::setCategory(IfcEnvironmentalImpactCategoryEnum value) {
  m_category = value;
}

IfcLabel IfcEnvironmentalImpactValue::getUserDefinedCategory() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedCategory;
  }
  else {
    return getUnset(m_userDefinedCategory);
  }
}

void IfcEnvironmentalImpactValue::setUserDefinedCategory(const IfcLabel &value) {
  m_userDefinedCategory = value;
}

void IfcEnvironmentalImpactValue::release() {
  IfcAppliedValue::release();
}

bool IfcEnvironmentalImpactValue::init() {
  bool status = IfcAppliedValue::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_impactType = getUnset(m_impactType);
  }
  else {
    m_impactType = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_category = IfcEnvironmentalImpactCategoryEnum_UNSET;
  }
  else {
    if (arg == ".COMBINEDVALUE.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_COMBINEDVALUE;
    }
    else if (arg == ".DISPOSAL.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_DISPOSAL;
    }
    else if (arg == ".EXTRACTION.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_EXTRACTION;
    }
    else if (arg == ".INSTALLATION.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_INSTALLATION;
    }
    else if (arg == ".MANUFACTURE.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_MANUFACTURE;
    }
    else if (arg == ".TRANSPORTATION.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_TRANSPORTATION;
    }
    else if (arg == ".USERDEFINED.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_category = IfcEnvironmentalImpactCategoryEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedCategory = getUnset(m_userDefinedCategory);
  }
  else {
    m_userDefinedCategory = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnvironmentalImpactValue::s_type = new Step::ClassType_class("IfcEnvironmentalImpactValue");
IfcEnvironmentalImpactValue_Factory::IfcEnvironmentalImpactValue_Factory() {
}

IfcEnvironmentalImpactValue_Factory::~IfcEnvironmentalImpactValue_Factory() {
  clear(true);
}

void IfcEnvironmentalImpactValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEnvironmentalImpactValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEnvironmentalImpactValue_Factory::end() {
  return m_idMap.end();
}

IfcEnvironmentalImpactValue *IfcEnvironmentalImpactValue_Factory::get(Step::StepId id) {
  IfcEnvironmentalImpactValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEnvironmentalImpactValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcEnvironmentalImpactValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEnvironmentalImpactValue * > (create(id));
  }
}

Step::BaseObject *IfcEnvironmentalImpactValue_Factory::create(Step::StepId id) {
  IfcEnvironmentalImpactValue *ret = new IfcEnvironmentalImpactValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEnvironmentalImpactValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEnvironmentalImpactValue *ret = new IfcEnvironmentalImpactValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEnvironmentalImpactValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEnvironmentalImpactValue *ret = new IfcEnvironmentalImpactValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEnvironmentalImpactValue *IfcEnvironmentalImpactValue_Factory::generate() {
  return static_cast< IfcEnvironmentalImpactValue * > (create(m_model->getNewId()));
}

IfcEnvironmentalImpactValue *IfcEnvironmentalImpactValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEnvironmentalImpactValue * > (it->second);
  }
  else {
    return NULL;
  }
}

