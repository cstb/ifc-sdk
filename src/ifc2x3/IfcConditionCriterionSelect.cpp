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
#include <ifc2x3/IfcConditionCriterionSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcConditionCriterionSelect::IfcConditionCriterionSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcConditionCriterionSelect::IfcConditionCriterionSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcConditionCriterionSelect::~IfcConditionCriterionSelect() {
  deleteUnion();
}

bool IfcConditionCriterionSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConditionCriterionSelect(this);
}

bool IfcConditionCriterionSelect::init() {
  return false;
}

const char *IfcConditionCriterionSelect::type() {
  return "IfcConditionCriterionSelect";
}

Step::ClassType IfcConditionCriterionSelect::getClassType() {
  return IfcConditionCriterionSelect::s_type;
}

Step::ClassType IfcConditionCriterionSelect::getType() const {
  return IfcConditionCriterionSelect::s_type;
}

bool IfcConditionCriterionSelect::isOfType(Step::ClassType t) {
  return IfcConditionCriterionSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcConditionCriterionSelect::currentTypeName() {
  switch(m_type) {
  case IFCLABEL:
    return "IfcLabel";
    break;
  case IFCMEASUREWITHUNIT:
    return "IfcMeasureWithUnit";
    break;
  default:
    return "UNSET";
  }
}

IfcConditionCriterionSelect::IfcConditionCriterionSelect_select IfcConditionCriterionSelect::currentType() {
  return m_type;
}

void IfcConditionCriterionSelect::deleteUnion() {
  switch(m_type) {
  case IFCLABEL:
    delete m_IfcConditionCriterionSelect_union.m_IfcLabel;
    break;
  case IFCMEASUREWITHUNIT:
    m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit->unref();
    break;
    }
  m_type = UNSET;
}

IfcLabel IfcConditionCriterionSelect::getIfcLabel() {
  return *m_IfcConditionCriterionSelect_union.m_IfcLabel;
}

void IfcConditionCriterionSelect::setIfcLabel(const IfcLabel &value) {
  deleteUnion();
  m_IfcConditionCriterionSelect_union.m_IfcLabel = new IfcLabel(value);
  m_type = IFCLABEL;
}

IfcMeasureWithUnit *IfcConditionCriterionSelect::getIfcMeasureWithUnit() {
  return m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit;
}

void IfcConditionCriterionSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit = value;
  if (value) {
    value->ref();
    m_type = IFCMEASUREWITHUNIT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMEASUREWITHUNIT;
}

void IfcConditionCriterionSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcMeasureWithUnit::getClassType())) {
    setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcConditionCriterionSelect::s_type = new Step::ClassType_class("IfcConditionCriterionSelect");
