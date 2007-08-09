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
#include <ifc2x3/IfcAppliedValueSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcAppliedValueSelect::IfcAppliedValueSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcAppliedValueSelect::IfcAppliedValueSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcAppliedValueSelect::~IfcAppliedValueSelect() {
  deleteUnion();
}

bool IfcAppliedValueSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAppliedValueSelect(this);
}

bool IfcAppliedValueSelect::init() {
  return false;
}

const char *IfcAppliedValueSelect::type() {
  return "IfcAppliedValueSelect";
}

Step::ClassType IfcAppliedValueSelect::getClassType() {
  return IfcAppliedValueSelect::s_type;
}

Step::ClassType IfcAppliedValueSelect::getType() const {
  return IfcAppliedValueSelect::s_type;
}

bool IfcAppliedValueSelect::isOfType(Step::ClassType t) {
  return IfcAppliedValueSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcAppliedValueSelect::currentTypeName() {
  switch(m_type) {
  case IFCRATIOMEASURE:
    return "IfcRatioMeasure";
    break;
  case IFCMEASUREWITHUNIT:
    return "IfcMeasureWithUnit";
    break;
  case IFCMONETARYMEASURE:
    return "IfcMonetaryMeasure";
    break;
  default:
    return "UNSET";
  }
}

IfcAppliedValueSelect::IfcAppliedValueSelect_select IfcAppliedValueSelect::currentType() {
  return m_type;
}

void IfcAppliedValueSelect::deleteUnion() {
  switch(m_type) {
  case IFCMEASUREWITHUNIT:
    m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit->unref();
    break;
    }
  m_type = UNSET;
}

IfcRatioMeasure IfcAppliedValueSelect::getIfcRatioMeasure() {
  return m_IfcAppliedValueSelect_union.m_IfcRatioMeasure;
}

void IfcAppliedValueSelect::setIfcRatioMeasure(IfcRatioMeasure value) {
  deleteUnion();
  m_IfcAppliedValueSelect_union.m_IfcRatioMeasure = value;
  m_type = IFCRATIOMEASURE;
}

IfcMeasureWithUnit *IfcAppliedValueSelect::getIfcMeasureWithUnit() {
  return m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit;
}

void IfcAppliedValueSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit = value;
  if (value) {
    value->ref();
    m_type = IFCMEASUREWITHUNIT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMEASUREWITHUNIT;
}

IfcMonetaryMeasure IfcAppliedValueSelect::getIfcMonetaryMeasure() {
  return m_IfcAppliedValueSelect_union.m_IfcMonetaryMeasure;
}

void IfcAppliedValueSelect::setIfcMonetaryMeasure(IfcMonetaryMeasure value) {
  deleteUnion();
  m_IfcAppliedValueSelect_union.m_IfcMonetaryMeasure = value;
  m_type = IFCMONETARYMEASURE;
}

void IfcAppliedValueSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcMeasureWithUnit::getClassType())) {
    setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcAppliedValueSelect::s_type = new Step::ClassType_class("IfcAppliedValueSelect");
