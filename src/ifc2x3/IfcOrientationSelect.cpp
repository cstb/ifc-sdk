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
#include <ifc2x3/IfcOrientationSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcOrientationSelect::IfcOrientationSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcOrientationSelect::IfcOrientationSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcOrientationSelect::~IfcOrientationSelect() {
  deleteUnion();
}

bool IfcOrientationSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOrientationSelect(this);
}

bool IfcOrientationSelect::init() {
  return false;
}

const char *IfcOrientationSelect::type() {
  return "IfcOrientationSelect";
}

Step::ClassType IfcOrientationSelect::getClassType() {
  return IfcOrientationSelect::s_type;
}

Step::ClassType IfcOrientationSelect::getType() const {
  return IfcOrientationSelect::s_type;
}

bool IfcOrientationSelect::isOfType(Step::ClassType t) {
  return IfcOrientationSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcOrientationSelect::currentTypeName() {
  switch(m_type) {
  case IFCPLANEANGLEMEASURE:
    return "IfcPlaneAngleMeasure";
    break;
  case IFCDIRECTION:
    return "IfcDirection";
    break;
  default:
    return "UNSET";
  }
}

IfcOrientationSelect::IfcOrientationSelect_select IfcOrientationSelect::currentType() {
  return m_type;
}

void IfcOrientationSelect::deleteUnion() {
  switch(m_type) {
  case IFCDIRECTION:
    m_IfcOrientationSelect_union.m_IfcDirection->unref();
    break;
    }
  m_type = UNSET;
}

IfcPlaneAngleMeasure IfcOrientationSelect::getIfcPlaneAngleMeasure() {
  return m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure;
}

void IfcOrientationSelect::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
  deleteUnion();
  m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure = value;
  m_type = IFCPLANEANGLEMEASURE;
}

IfcDirection *IfcOrientationSelect::getIfcDirection() {
  return m_IfcOrientationSelect_union.m_IfcDirection;
}

void IfcOrientationSelect::setIfcDirection(IfcDirection *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcOrientationSelect_union.m_IfcDirection = value;
  if (value) {
    value->ref();
    m_type = IFCDIRECTION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCDIRECTION;
}

void IfcOrientationSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcDirection::getClassType())) {
    setIfcDirection(static_cast< IfcDirection* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcOrientationSelect::s_type = new Step::ClassType_class("IfcOrientationSelect");
