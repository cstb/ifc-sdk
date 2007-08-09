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
#include <ifc2x3/IfcMetricValueSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcMetricValueSelect::IfcMetricValueSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcMetricValueSelect::IfcMetricValueSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcMetricValueSelect::~IfcMetricValueSelect() {
  deleteUnion();
}

bool IfcMetricValueSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMetricValueSelect(this);
}

bool IfcMetricValueSelect::init() {
  return false;
}

const char *IfcMetricValueSelect::type() {
  return "IfcMetricValueSelect";
}

Step::ClassType IfcMetricValueSelect::getClassType() {
  return IfcMetricValueSelect::s_type;
}

Step::ClassType IfcMetricValueSelect::getType() const {
  return IfcMetricValueSelect::s_type;
}

bool IfcMetricValueSelect::isOfType(Step::ClassType t) {
  return IfcMetricValueSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcMetricValueSelect::currentTypeName() {
  switch(m_type) {
  case IFCCALENDARDATE:
    return "IfcCalendarDate";
    break;
  case IFCLOCALTIME:
    return "IfcLocalTime";
    break;
  case IFCDATEANDTIME:
    return "IfcDateAndTime";
    break;
  case IFCMEASUREWITHUNIT:
    return "IfcMeasureWithUnit";
    break;
  case IFCTABLE:
    return "IfcTable";
    break;
  case IFCTEXT:
    return "IfcText";
    break;
  case IFCTIMESERIES:
    return "IfcTimeSeries";
    break;
  case IFCCOSTVALUE:
    return "IfcCostValue";
    break;
  default:
    return "UNSET";
  }
}

IfcMetricValueSelect::IfcMetricValueSelect_select IfcMetricValueSelect::currentType() {
  return m_type;
}

void IfcMetricValueSelect::deleteUnion() {
  switch(m_type) {
  case IFCCALENDARDATE:
    m_IfcMetricValueSelect_union.m_IfcCalendarDate->unref();
    break;
  case IFCLOCALTIME:
    m_IfcMetricValueSelect_union.m_IfcLocalTime->unref();
    break;
  case IFCDATEANDTIME:
    m_IfcMetricValueSelect_union.m_IfcDateAndTime->unref();
    break;
  case IFCMEASUREWITHUNIT:
    m_IfcMetricValueSelect_union.m_IfcMeasureWithUnit->unref();
    break;
  case IFCTABLE:
    m_IfcMetricValueSelect_union.m_IfcTable->unref();
    break;
  case IFCTEXT:
    delete m_IfcMetricValueSelect_union.m_IfcText;
    break;
  case IFCTIMESERIES:
    m_IfcMetricValueSelect_union.m_IfcTimeSeries->unref();
    break;
  case IFCCOSTVALUE:
    m_IfcMetricValueSelect_union.m_IfcCostValue->unref();
    break;
    }
  m_type = UNSET;
}

IfcCalendarDate *IfcMetricValueSelect::getIfcCalendarDate() {
  return m_IfcMetricValueSelect_union.m_IfcCalendarDate;
}

void IfcMetricValueSelect::setIfcCalendarDate(IfcCalendarDate *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcCalendarDate = value;
  if (value) {
    value->ref();
    m_type = IFCCALENDARDATE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCALENDARDATE;
}

IfcLocalTime *IfcMetricValueSelect::getIfcLocalTime() {
  return m_IfcMetricValueSelect_union.m_IfcLocalTime;
}

void IfcMetricValueSelect::setIfcLocalTime(IfcLocalTime *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcLocalTime = value;
  if (value) {
    value->ref();
    m_type = IFCLOCALTIME;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCLOCALTIME;
}

IfcDateAndTime *IfcMetricValueSelect::getIfcDateAndTime() {
  return m_IfcMetricValueSelect_union.m_IfcDateAndTime;
}

void IfcMetricValueSelect::setIfcDateAndTime(IfcDateAndTime *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcDateAndTime = value;
  if (value) {
    value->ref();
    m_type = IFCDATEANDTIME;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCDATEANDTIME;
}

IfcMeasureWithUnit *IfcMetricValueSelect::getIfcMeasureWithUnit() {
  return m_IfcMetricValueSelect_union.m_IfcMeasureWithUnit;
}

void IfcMetricValueSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcMeasureWithUnit = value;
  if (value) {
    value->ref();
    m_type = IFCMEASUREWITHUNIT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMEASUREWITHUNIT;
}

IfcTable *IfcMetricValueSelect::getIfcTable() {
  return m_IfcMetricValueSelect_union.m_IfcTable;
}

void IfcMetricValueSelect::setIfcTable(IfcTable *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcTable = value;
  if (value) {
    value->ref();
    m_type = IFCTABLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTABLE;
}

IfcText IfcMetricValueSelect::getIfcText() {
  return *m_IfcMetricValueSelect_union.m_IfcText;
}

void IfcMetricValueSelect::setIfcText(const IfcText &value) {
  deleteUnion();
  m_IfcMetricValueSelect_union.m_IfcText = new IfcText(value);
  m_type = IFCTEXT;
}

IfcTimeSeries *IfcMetricValueSelect::getIfcTimeSeries() {
  return m_IfcMetricValueSelect_union.m_IfcTimeSeries;
}

void IfcMetricValueSelect::setIfcTimeSeries(IfcTimeSeries *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcTimeSeries = value;
  if (value) {
    value->ref();
    m_type = IFCTIMESERIES;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTIMESERIES;
}

IfcCostValue *IfcMetricValueSelect::getIfcCostValue() {
  return m_IfcMetricValueSelect_union.m_IfcCostValue;
}

void IfcMetricValueSelect::setIfcCostValue(IfcCostValue *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcMetricValueSelect_union.m_IfcCostValue = value;
  if (value) {
    value->ref();
    m_type = IFCCOSTVALUE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCOSTVALUE;
}

void IfcMetricValueSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcCalendarDate::getClassType())) {
    setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
  }
  else if (v->isOfType(IfcLocalTime::getClassType())) {
    setIfcLocalTime(static_cast< IfcLocalTime* > (v));
  }
  else if (v->isOfType(IfcDateAndTime::getClassType())) {
    setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
  }
  else if (v->isOfType(IfcMeasureWithUnit::getClassType())) {
    setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
  }
  else if (v->isOfType(IfcTable::getClassType())) {
    setIfcTable(static_cast< IfcTable* > (v));
  }
  else if (v->isOfType(IfcTimeSeries::getClassType())) {
    setIfcTimeSeries(static_cast< IfcTimeSeries* > (v));
  }
  else if (v->isOfType(IfcCostValue::getClassType())) {
    setIfcCostValue(static_cast< IfcCostValue* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcMetricValueSelect::s_type = new Step::ClassType_class("IfcMetricValueSelect");
