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
#include <ifc2x3/IfcCsgSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcCsgSelect::IfcCsgSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcCsgSelect::IfcCsgSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcCsgSelect::~IfcCsgSelect() {
  deleteUnion();
}

bool IfcCsgSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCsgSelect(this);
}

bool IfcCsgSelect::init() {
  return false;
}

const char *IfcCsgSelect::type() {
  return "IfcCsgSelect";
}

Step::ClassType IfcCsgSelect::getClassType() {
  return IfcCsgSelect::s_type;
}

Step::ClassType IfcCsgSelect::getType() const {
  return IfcCsgSelect::s_type;
}

bool IfcCsgSelect::isOfType(Step::ClassType t) {
  return IfcCsgSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcCsgSelect::currentTypeName() {
  switch(m_type) {
  case IFCBOOLEANRESULT:
    return "IfcBooleanResult";
    break;
  case IFCCSGPRIMITIVE3D:
    return "IfcCsgPrimitive3D";
    break;
  default:
    return "UNSET";
  }
}

IfcCsgSelect::IfcCsgSelect_select IfcCsgSelect::currentType() {
  return m_type;
}

void IfcCsgSelect::deleteUnion() {
  switch(m_type) {
  case IFCBOOLEANRESULT:
    m_IfcCsgSelect_union.m_IfcBooleanResult->unref();
    break;
  case IFCCSGPRIMITIVE3D:
    m_IfcCsgSelect_union.m_IfcCsgPrimitive3D->unref();
    break;
    }
  m_type = UNSET;
}

IfcBooleanResult *IfcCsgSelect::getIfcBooleanResult() {
  return m_IfcCsgSelect_union.m_IfcBooleanResult;
}

void IfcCsgSelect::setIfcBooleanResult(IfcBooleanResult *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCsgSelect_union.m_IfcBooleanResult = value;
  if (value) {
    value->ref();
    m_type = IFCBOOLEANRESULT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCBOOLEANRESULT;
}

IfcCsgPrimitive3D *IfcCsgSelect::getIfcCsgPrimitive3D() {
  return m_IfcCsgSelect_union.m_IfcCsgPrimitive3D;
}

void IfcCsgSelect::setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCsgSelect_union.m_IfcCsgPrimitive3D = value;
  if (value) {
    value->ref();
    m_type = IFCCSGPRIMITIVE3D;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCSGPRIMITIVE3D;
}

void IfcCsgSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcBooleanResult::getClassType())) {
    setIfcBooleanResult(static_cast< IfcBooleanResult* > (v));
  }
  else if (v->isOfType(IfcCsgPrimitive3D::getClassType())) {
    setIfcCsgPrimitive3D(static_cast< IfcCsgPrimitive3D* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcCsgSelect::s_type = new Step::ClassType_class("IfcCsgSelect");
