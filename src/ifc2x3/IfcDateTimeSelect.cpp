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
#include <ifc2x3/IfcDateTimeSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcDateTimeSelect::IfcDateTimeSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcDateTimeSelect::IfcDateTimeSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcDateTimeSelect::~IfcDateTimeSelect() {
  deleteUnion();
}

bool IfcDateTimeSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDateTimeSelect(this);
}

bool IfcDateTimeSelect::init() {
  return false;
}

const char *IfcDateTimeSelect::type() {
  return "IfcDateTimeSelect";
}

Step::ClassType IfcDateTimeSelect::getClassType() {
  return IfcDateTimeSelect::s_type;
}

Step::ClassType IfcDateTimeSelect::getType() const {
  return IfcDateTimeSelect::s_type;
}

bool IfcDateTimeSelect::isOfType(Step::ClassType t) {
  return IfcDateTimeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcDateTimeSelect::currentTypeName() {
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
  default:
    return "UNSET";
  }
}

IfcDateTimeSelect::IfcDateTimeSelect_select IfcDateTimeSelect::currentType() {
  return m_type;
}

void IfcDateTimeSelect::deleteUnion() {
  switch(m_type) {
  case IFCCALENDARDATE:
    m_IfcDateTimeSelect_union.m_IfcCalendarDate->unref();
    break;
  case IFCLOCALTIME:
    m_IfcDateTimeSelect_union.m_IfcLocalTime->unref();
    break;
  case IFCDATEANDTIME:
    m_IfcDateTimeSelect_union.m_IfcDateAndTime->unref();
    break;
    }
  m_type = UNSET;
}

IfcCalendarDate *IfcDateTimeSelect::getIfcCalendarDate() {
  return m_IfcDateTimeSelect_union.m_IfcCalendarDate;
}

void IfcDateTimeSelect::setIfcCalendarDate(IfcCalendarDate *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDateTimeSelect_union.m_IfcCalendarDate = value;
  if (value) {
    value->ref();
    m_type = IFCCALENDARDATE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCALENDARDATE;
}

IfcLocalTime *IfcDateTimeSelect::getIfcLocalTime() {
  return m_IfcDateTimeSelect_union.m_IfcLocalTime;
}

void IfcDateTimeSelect::setIfcLocalTime(IfcLocalTime *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDateTimeSelect_union.m_IfcLocalTime = value;
  if (value) {
    value->ref();
    m_type = IFCLOCALTIME;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCLOCALTIME;
}

IfcDateAndTime *IfcDateTimeSelect::getIfcDateAndTime() {
  return m_IfcDateTimeSelect_union.m_IfcDateAndTime;
}

void IfcDateTimeSelect::setIfcDateAndTime(IfcDateAndTime *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDateTimeSelect_union.m_IfcDateAndTime = value;
  if (value) {
    value->ref();
    m_type = IFCDATEANDTIME;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCDATEANDTIME;
}

void IfcDateTimeSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcCalendarDate::getClassType())) {
    setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
  }
  else if (v->isOfType(IfcLocalTime::getClassType())) {
    setIfcLocalTime(static_cast< IfcLocalTime* > (v));
  }
  else if (v->isOfType(IfcDateAndTime::getClassType())) {
    setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcDateTimeSelect::s_type = new Step::ClassType_class("IfcDateTimeSelect");
