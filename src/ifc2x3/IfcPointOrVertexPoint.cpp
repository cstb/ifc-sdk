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
#include <ifc2x3/IfcPointOrVertexPoint.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/IfcVertexPoint.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcPointOrVertexPoint::IfcPointOrVertexPoint() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcPointOrVertexPoint::IfcPointOrVertexPoint(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcPointOrVertexPoint::~IfcPointOrVertexPoint() {
  deleteUnion();
}

bool IfcPointOrVertexPoint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPointOrVertexPoint(this);
}

bool IfcPointOrVertexPoint::init() {
  return false;
}

const char *IfcPointOrVertexPoint::type() {
  return "IfcPointOrVertexPoint";
}

Step::ClassType IfcPointOrVertexPoint::getClassType() {
  return IfcPointOrVertexPoint::s_type;
}

Step::ClassType IfcPointOrVertexPoint::getType() const {
  return IfcPointOrVertexPoint::s_type;
}

bool IfcPointOrVertexPoint::isOfType(Step::ClassType t) {
  return IfcPointOrVertexPoint::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcPointOrVertexPoint::currentTypeName() {
  switch(m_type) {
  case IFCPOINT:
    return "IfcPoint";
    break;
  case IFCVERTEXPOINT:
    return "IfcVertexPoint";
    break;
  default:
    return "UNSET";
  }
}

IfcPointOrVertexPoint::IfcPointOrVertexPoint_select IfcPointOrVertexPoint::currentType() {
  return m_type;
}

void IfcPointOrVertexPoint::deleteUnion() {
  switch(m_type) {
  case IFCPOINT:
    m_IfcPointOrVertexPoint_union.m_IfcPoint->unref();
    break;
  case IFCVERTEXPOINT:
    m_IfcPointOrVertexPoint_union.m_IfcVertexPoint->unref();
    break;
    }
  m_type = UNSET;
}

IfcPoint *IfcPointOrVertexPoint::getIfcPoint() {
  return m_IfcPointOrVertexPoint_union.m_IfcPoint;
}

void IfcPointOrVertexPoint::setIfcPoint(IfcPoint *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPointOrVertexPoint_union.m_IfcPoint = value;
  if (value) {
    value->ref();
    m_type = IFCPOINT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPOINT;
}

IfcVertexPoint *IfcPointOrVertexPoint::getIfcVertexPoint() {
  return m_IfcPointOrVertexPoint_union.m_IfcVertexPoint;
}

void IfcPointOrVertexPoint::setIfcVertexPoint(IfcVertexPoint *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPointOrVertexPoint_union.m_IfcVertexPoint = value;
  if (value) {
    value->ref();
    m_type = IFCVERTEXPOINT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCVERTEXPOINT;
}

void IfcPointOrVertexPoint::set(Step::BaseObject *v) {
  if (v->isOfType(IfcPoint::getClassType())) {
    setIfcPoint(static_cast< IfcPoint* > (v));
  }
  else if (v->isOfType(IfcVertexPoint::getClassType())) {
    setIfcVertexPoint(static_cast< IfcVertexPoint* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOrVertexPoint::s_type = new Step::ClassType_class("IfcPointOrVertexPoint");
