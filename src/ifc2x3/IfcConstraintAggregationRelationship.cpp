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
#include <ifc2x3/IfcConstraintAggregationRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConstraintAggregationRelationship::IfcConstraintAggregationRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_relatingConstraint = NULL;
  m_relatedConstraints.setUnset(true);
  m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
}


IfcConstraintAggregationRelationship::~IfcConstraintAggregationRelationship() {
}

bool IfcConstraintAggregationRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstraintAggregationRelationship(this);
}

const char *IfcConstraintAggregationRelationship::type() {
  return "IfcConstraintAggregationRelationship";
}

Step::ClassType IfcConstraintAggregationRelationship::getClassType() {
  return IfcConstraintAggregationRelationship::s_type;
}

Step::ClassType IfcConstraintAggregationRelationship::getType() const {
  return IfcConstraintAggregationRelationship::s_type;
}

bool IfcConstraintAggregationRelationship::isOfType(Step::ClassType t) {
  return IfcConstraintAggregationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintAggregationRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcConstraintAggregationRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcConstraintAggregationRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcConstraintAggregationRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

IfcConstraint *IfcConstraintAggregationRelationship::getRelatingConstraint() {
  if (Step::BaseObject::inited()) {
    return m_relatingConstraint.get();
  }
  else {
    return NULL;
  }
}

void IfcConstraintAggregationRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
  m_relatingConstraint = value;
}

Step::StepList< Step::RefPtr< IfcConstraint > > &IfcConstraintAggregationRelationship::getRelatedConstraints() {
  if (Step::BaseObject::inited()) {
    return m_relatedConstraints;
  }
  else {
    m_relatedConstraints.setUnset(true);
    return m_relatedConstraints;
  }
}

void IfcConstraintAggregationRelationship::setRelatedConstraints(const Step::StepList< Step::RefPtr< IfcConstraint > > &value) {
  m_relatedConstraints = value;
}

IfcLogicalOperatorEnum IfcConstraintAggregationRelationship::getLogicalAggregator() {
  if (Step::BaseObject::inited()) {
    return m_logicalAggregator;
  }
  else {
    return IfcLogicalOperatorEnum_UNSET;
  }
}

void IfcConstraintAggregationRelationship::setLogicalAggregator(IfcLogicalOperatorEnum value) {
  m_logicalAggregator = value;
}

void IfcConstraintAggregationRelationship::release() {
  m_relatingConstraint.release();
  m_relatedConstraints.clear();
}

bool IfcConstraintAggregationRelationship::init() {
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
    m_relatingConstraint = NULL;
  }
  else {
    m_relatingConstraint = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedConstraints.setUnset(true);
  }
  else {
    m_relatedConstraints.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcConstraint > attr2;
        attr2 = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedConstraints.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
  }
  else {
    if (arg == ".LOGICALAND.") {
      m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALAND;
    }
    else if (arg == ".LOGICALOR.") {
      m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALOR;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintAggregationRelationship::s_type = new Step::ClassType_class("IfcConstraintAggregationRelationship");
IfcConstraintAggregationRelationship_Factory::IfcConstraintAggregationRelationship_Factory() {
}

IfcConstraintAggregationRelationship_Factory::~IfcConstraintAggregationRelationship_Factory() {
  clear(true);
}

void IfcConstraintAggregationRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstraintAggregationRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstraintAggregationRelationship_Factory::end() {
  return m_idMap.end();
}

IfcConstraintAggregationRelationship *IfcConstraintAggregationRelationship_Factory::get(Step::StepId id) {
  IfcConstraintAggregationRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConstraintAggregationRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcConstraintAggregationRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConstraintAggregationRelationship * > (create(id));
  }
}

Step::BaseObject *IfcConstraintAggregationRelationship_Factory::create(Step::StepId id) {
  IfcConstraintAggregationRelationship *ret = new IfcConstraintAggregationRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConstraintAggregationRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConstraintAggregationRelationship *ret = new IfcConstraintAggregationRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConstraintAggregationRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConstraintAggregationRelationship *ret = new IfcConstraintAggregationRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConstraintAggregationRelationship *IfcConstraintAggregationRelationship_Factory::generate() {
  return static_cast< IfcConstraintAggregationRelationship * > (create(m_model->getNewId()));
}

IfcConstraintAggregationRelationship *IfcConstraintAggregationRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConstraintAggregationRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

