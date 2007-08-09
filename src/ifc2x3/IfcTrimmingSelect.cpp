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
#include <ifc2x3/IfcTrimmingSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcTrimmingSelect::IfcTrimmingSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcTrimmingSelect::IfcTrimmingSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcTrimmingSelect::~IfcTrimmingSelect() {
  deleteUnion();
}

bool IfcTrimmingSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTrimmingSelect(this);
}

bool IfcTrimmingSelect::init() {
  return false;
}

const char *IfcTrimmingSelect::type() {
  return "IfcTrimmingSelect";
}

Step::ClassType IfcTrimmingSelect::getClassType() {
  return IfcTrimmingSelect::s_type;
}

Step::ClassType IfcTrimmingSelect::getType() const {
  return IfcTrimmingSelect::s_type;
}

bool IfcTrimmingSelect::isOfType(Step::ClassType t) {
  return IfcTrimmingSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcTrimmingSelect::currentTypeName() {
  switch(m_type) {
  case IFCCARTESIANPOINT:
    return "IfcCartesianPoint";
    break;
  case IFCPARAMETERVALUE:
    return "IfcParameterValue";
    break;
  default:
    return "UNSET";
  }
}

IfcTrimmingSelect::IfcTrimmingSelect_select IfcTrimmingSelect::currentType() {
  return m_type;
}

void IfcTrimmingSelect::deleteUnion() {
  switch(m_type) {
  case IFCCARTESIANPOINT:
    m_IfcTrimmingSelect_union.m_IfcCartesianPoint->unref();
    break;
    }
  m_type = UNSET;
}

IfcCartesianPoint *IfcTrimmingSelect::getIfcCartesianPoint() {
  return m_IfcTrimmingSelect_union.m_IfcCartesianPoint;
}

void IfcTrimmingSelect::setIfcCartesianPoint(IfcCartesianPoint *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcTrimmingSelect_union.m_IfcCartesianPoint = value;
  if (value) {
    value->ref();
    m_type = IFCCARTESIANPOINT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCARTESIANPOINT;
}

IfcParameterValue IfcTrimmingSelect::getIfcParameterValue() {
  return m_IfcTrimmingSelect_union.m_IfcParameterValue;
}

void IfcTrimmingSelect::setIfcParameterValue(IfcParameterValue value) {
  deleteUnion();
  m_IfcTrimmingSelect_union.m_IfcParameterValue = value;
  m_type = IFCPARAMETERVALUE;
}

void IfcTrimmingSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcCartesianPoint::getClassType())) {
    setIfcCartesianPoint(static_cast< IfcCartesianPoint* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcTrimmingSelect::s_type = new Step::ClassType_class("IfcTrimmingSelect");
