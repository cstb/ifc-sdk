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
#include <ifc2x3/IfcAppliedValue.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAppliedValueRelationship.h>
#include <ifc2x3/IfcAppliedValueSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcReferencesValueDocument.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcAppliedValue::IfcAppliedValue(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_appliedValue = NULL;
  m_unitBasis = NULL;
  m_applicableDate = NULL;
  m_fixedUntilDate = NULL;
  m_valuesReferenced.setUnset(true);
  m_valueOfComponents.setUnset(true);
  m_isComponentIn.setUnset(true);
}


IfcAppliedValue::~IfcAppliedValue() {
}

bool IfcAppliedValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAppliedValue(this);
}

const char *IfcAppliedValue::type() {
  return "IfcAppliedValue";
}

Step::ClassType IfcAppliedValue::getClassType() {
  return IfcAppliedValue::s_type;
}

Step::ClassType IfcAppliedValue::getType() const {
  return IfcAppliedValue::s_type;
}

bool IfcAppliedValue::isOfType(Step::ClassType t) {
  return IfcAppliedValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcAppliedValue::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcAppliedValue::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcAppliedValue::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcAppliedValue::setDescription(const IfcText &value) {
  m_description = value;
}

IfcAppliedValueSelect *IfcAppliedValue::getAppliedValue() {
  if (Step::BaseObject::inited()) {
    return m_appliedValue.get();
  }
  else {
    return NULL;
  }
}

void IfcAppliedValue::setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value) {
  m_appliedValue = value;
}

IfcMeasureWithUnit *IfcAppliedValue::getUnitBasis() {
  if (Step::BaseObject::inited()) {
    return m_unitBasis.get();
  }
  else {
    return NULL;
  }
}

void IfcAppliedValue::setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value) {
  m_unitBasis = value;
}

IfcDateTimeSelect *IfcAppliedValue::getApplicableDate() {
  if (Step::BaseObject::inited()) {
    return m_applicableDate.get();
  }
  else {
    return NULL;
  }
}

void IfcAppliedValue::setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_applicableDate = value;
}

IfcDateTimeSelect *IfcAppliedValue::getFixedUntilDate() {
  if (Step::BaseObject::inited()) {
    return m_fixedUntilDate.get();
  }
  else {
    return NULL;
  }
}

void IfcAppliedValue::setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
  m_fixedUntilDate = value;
}

Step::StepSet< Step::RefPtr< IfcReferencesValueDocument > > &IfcAppliedValue::getValuesReferenced() {
  if (Step::BaseObject::inited()) {
    return m_valuesReferenced;
  }
  else {
    m_valuesReferenced.setUnset(true);
    return m_valuesReferenced;
  }
}

void IfcAppliedValue::setValuesReferenced(const Step::StepSet< Step::RefPtr< IfcReferencesValueDocument > > &value) {
  m_valuesReferenced = value;
}

Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &IfcAppliedValue::getValueOfComponents() {
  if (Step::BaseObject::inited()) {
    return m_valueOfComponents;
  }
  else {
    m_valueOfComponents.setUnset(true);
    return m_valueOfComponents;
  }
}

void IfcAppliedValue::setValueOfComponents(const Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &value) {
  m_valueOfComponents = value;
}

Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &IfcAppliedValue::getIsComponentIn() {
  if (Step::BaseObject::inited()) {
    return m_isComponentIn;
  }
  else {
    m_isComponentIn.setUnset(true);
    return m_isComponentIn;
  }
}

void IfcAppliedValue::setIsComponentIn(const Step::StepSet< Step::RefPtr< IfcAppliedValueRelationship > > &value) {
  m_isComponentIn = value;
}

void IfcAppliedValue::release() {
  m_unitBasis.release();
}

bool IfcAppliedValue::init() {
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
    m_appliedValue = NULL;
  }
  else {
    m_appliedValue = new IfcAppliedValueSelect;
    if (arg[0] == '#') {
      m_appliedValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_appliedValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_appliedValue->setIfcMonetaryMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unitBasis = NULL;
  }
  else {
    m_unitBasis = static_cast< IfcMeasureWithUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_applicableDate = NULL;
  }
  else {
    m_applicableDate = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_applicableDate->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_fixedUntilDate = NULL;
  }
  else {
    m_fixedUntilDate = new IfcDateTimeSelect;
    if (arg[0] == '#') {
      m_fixedUntilDate->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  inverses = m_args->getInverses(IfcReferencesValueDocument::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_valuesReferenced.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_valuesReferenced.insert(static_cast< IfcReferencesValueDocument * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcAppliedValueRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_valueOfComponents.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_valueOfComponents.insert(static_cast< IfcAppliedValueRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcAppliedValueRelationship::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_isComponentIn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isComponentIn.insert(static_cast< IfcAppliedValueRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAppliedValue::s_type = new Step::ClassType_class("IfcAppliedValue");
