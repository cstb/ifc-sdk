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
#include <ifc2x3/IfcConstraint.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcConstraintClassificationRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcPropertyConstraintRelationship.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcConstraint::IfcConstraint(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_constraintGrade = IfcConstraintEnum_UNSET;
  m_constraintSource = getUnset(m_constraintSource);
  m_creatingActor = NULL;
  m_creationTime = NULL;
  m_userDefinedGrade = getUnset(m_userDefinedGrade);
  m_classifiedAs.setUnset(true);
  m_relatesConstraints.setUnset(true);
  m_isRelatedWith.setUnset(true);
  m_propertiesForConstraint.setUnset(true);
  m_aggregates.setUnset(true);
  m_isAggregatedIn.setUnset(true);
}


IfcConstraint::~IfcConstraint() {
}

bool IfcConstraint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstraint(this);
}

const char *IfcConstraint::type() {
  return "IfcConstraint";
}

Step::ClassType IfcConstraint::getClassType() {
  return IfcConstraint::s_type;
}

Step::ClassType IfcConstraint::getType() const {
  return IfcConstraint::s_type;
}

bool IfcConstraint::isOfType(Step::ClassType t) {
  return IfcConstraint::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraint::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcConstraint::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcConstraint::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcConstraint::setDescription(const IfcText &value) {
  m_description = value;
}

IfcConstraintEnum IfcConstraint::getConstraintGrade() {
  if (Step::BaseObject::inited()) {
    return m_constraintGrade;
  }
  else {
    return IfcConstraintEnum_UNSET;
  }
}

void IfcConstraint::setConstraintGrade(IfcConstraintEnum value) {
  m_constraintGrade = value;
}

IfcLabel IfcConstraint::getConstraintSource() {
  if (Step::BaseObject::inited()) {
    return m_constraintSource;
  }
  else {
    return getUnset(m_constraintSource);
  }
}

void IfcConstraint::setConstraintSource(const IfcLabel &value) {
  m_constraintSource = value;
}

IfcActorSelect *IfcConstraint::getCreatingActor() {
  if (Step::BaseObject::inited()) {
    return m_creatingActor.get();
  }
  else {
    return NULL;
  }
}

void IfcConstraint::setCreatingActor(const Step::RefPtr< IfcActorSelect > &value) {
  m_creatingActor = value;
}

IfcDateTimeSelect *IfcConstraint::getCreationTime() {
  if (Step::BaseObject::inited()) {
    return m_creationTime.get();
  }
  else {
    return NULL;
  }
}

void IfcConstraint::setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_creationTime = value;
}

IfcLabel IfcConstraint::getUserDefinedGrade() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedGrade;
  }
  else {
    return getUnset(m_userDefinedGrade);
  }
}

void IfcConstraint::setUserDefinedGrade(const IfcLabel &value) {
  m_userDefinedGrade = value;
}

Step::StepSet< Step::RefPtr< IfcConstraintClassificationRelationship > > &IfcConstraint::getClassifiedAs() {
  if (Step::BaseObject::inited()) {
    return m_classifiedAs;
  }
  else {
    m_classifiedAs.setUnset(true);
    return m_classifiedAs;
  }
}

void IfcConstraint::setClassifiedAs(const Step::StepSet< Step::RefPtr< IfcConstraintClassificationRelationship > > &value) {
  m_classifiedAs = value;
}

Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &IfcConstraint::getRelatesConstraints() {
  if (Step::BaseObject::inited()) {
    return m_relatesConstraints;
  }
  else {
    m_relatesConstraints.setUnset(true);
    return m_relatesConstraints;
  }
}

void IfcConstraint::setRelatesConstraints(const Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &value) {
  m_relatesConstraints = value;
}

Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &IfcConstraint::getIsRelatedWith() {
  if (Step::BaseObject::inited()) {
    return m_isRelatedWith;
  }
  else {
    m_isRelatedWith.setUnset(true);
    return m_isRelatedWith;
  }
}

void IfcConstraint::setIsRelatedWith(const Step::StepSet< Step::RefPtr< IfcConstraintRelationship > > &value) {
  m_isRelatedWith = value;
}

Step::StepSet< Step::RefPtr< IfcPropertyConstraintRelationship > > &IfcConstraint::getPropertiesForConstraint() {
  if (Step::BaseObject::inited()) {
    return m_propertiesForConstraint;
  }
  else {
    m_propertiesForConstraint.setUnset(true);
    return m_propertiesForConstraint;
  }
}

void IfcConstraint::setPropertiesForConstraint(const Step::StepSet< Step::RefPtr< IfcPropertyConstraintRelationship > > &value) {
  m_propertiesForConstraint = value;
}

Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &IfcConstraint::getAggregates() {
  if (Step::BaseObject::inited()) {
    return m_aggregates;
  }
  else {
    m_aggregates.setUnset(true);
    return m_aggregates;
  }
}

void IfcConstraint::setAggregates(const Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &value) {
  m_aggregates = value;
}

Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &IfcConstraint::getIsAggregatedIn() {
  if (Step::BaseObject::inited()) {
    return m_isAggregatedIn;
  }
  else {
    m_isAggregatedIn.setUnset(true);
    return m_isAggregatedIn;
  }
}

void IfcConstraint::setIsAggregatedIn(const Step::StepSet< Step::RefPtr< IfcConstraintAggregationRelationship > > &value) {
  m_isAggregatedIn = value;
}

void IfcConstraint::release() {
}

bool IfcConstraint::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
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
    m_constraintGrade = IfcConstraintEnum_UNSET;
  }
  else {
    if (arg == ".HARD.") {
      m_constraintGrade = IfcConstraintEnum_HARD;
    }
    else if (arg == ".SOFT.") {
      m_constraintGrade = IfcConstraintEnum_SOFT;
    }
    else if (arg == ".ADVISORY.") {
      m_constraintGrade = IfcConstraintEnum_ADVISORY;
    }
    else if (arg == ".USERDEFINED.") {
      m_constraintGrade = IfcConstraintEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_constraintGrade = IfcConstraintEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_constraintSource = getUnset(m_constraintSource);
  }
  else {
    m_constraintSource = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_creatingActor = NULL;
  }
  else {
    m_creatingActor = new IfcActorSelect;
    if (arg[0] == '#') {
      m_creatingActor->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_creationTime = NULL;
  }
  else {
    m_creationTime = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_creationTime->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedGrade = getUnset(m_userDefinedGrade);
  }
  else {
    m_userDefinedGrade = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcConstraintClassificationRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_classifiedAs.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_classifiedAs.insert(static_cast< IfcConstraintClassificationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcConstraintRelationship::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_relatesConstraints.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_relatesConstraints.insert(static_cast< IfcConstraintRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcConstraintRelationship::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_isRelatedWith.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isRelatedWith.insert(static_cast< IfcConstraintRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcPropertyConstraintRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_propertiesForConstraint.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_propertiesForConstraint.insert(static_cast< IfcPropertyConstraintRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcConstraintAggregationRelationship::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_aggregates.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_aggregates.insert(static_cast< IfcConstraintAggregationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcConstraintAggregationRelationship::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_isAggregatedIn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isAggregatedIn.insert(static_cast< IfcConstraintAggregationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraint::s_type = new Step::ClassType_class("IfcConstraint");
