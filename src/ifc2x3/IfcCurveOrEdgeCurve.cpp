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
#include <ifc2x3/IfcCurveOrEdgeCurve.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcEdgeCurve.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcCurveOrEdgeCurve::~IfcCurveOrEdgeCurve() {
  deleteUnion();
}

bool IfcCurveOrEdgeCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveOrEdgeCurve(this);
}

bool IfcCurveOrEdgeCurve::init() {
  return false;
}

const char *IfcCurveOrEdgeCurve::type() {
  return "IfcCurveOrEdgeCurve";
}

Step::ClassType IfcCurveOrEdgeCurve::getClassType() {
  return IfcCurveOrEdgeCurve::s_type;
}

Step::ClassType IfcCurveOrEdgeCurve::getType() const {
  return IfcCurveOrEdgeCurve::s_type;
}

bool IfcCurveOrEdgeCurve::isOfType(Step::ClassType t) {
  return IfcCurveOrEdgeCurve::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcCurveOrEdgeCurve::currentTypeName() {
  switch(m_type) {
  case IFCBOUNDEDCURVE:
    return "IfcBoundedCurve";
    break;
  case IFCEDGECURVE:
    return "IfcEdgeCurve";
    break;
  default:
    return "UNSET";
  }
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve_select IfcCurveOrEdgeCurve::currentType() {
  return m_type;
}

void IfcCurveOrEdgeCurve::deleteUnion() {
  switch(m_type) {
  case IFCBOUNDEDCURVE:
    m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve->unref();
    break;
  case IFCEDGECURVE:
    m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve->unref();
    break;
    }
  m_type = UNSET;
}

IfcBoundedCurve *IfcCurveOrEdgeCurve::getIfcBoundedCurve() {
  return m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve;
}

void IfcCurveOrEdgeCurve::setIfcBoundedCurve(IfcBoundedCurve *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve = value;
  if (value) {
    value->ref();
    m_type = IFCBOUNDEDCURVE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCBOUNDEDCURVE;
}

IfcEdgeCurve *IfcCurveOrEdgeCurve::getIfcEdgeCurve() {
  return m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve;
}

void IfcCurveOrEdgeCurve::setIfcEdgeCurve(IfcEdgeCurve *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve = value;
  if (value) {
    value->ref();
    m_type = IFCEDGECURVE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEDGECURVE;
}

void IfcCurveOrEdgeCurve::set(Step::BaseObject *v) {
  if (v->isOfType(IfcBoundedCurve::getClassType())) {
    setIfcBoundedCurve(static_cast< IfcBoundedCurve* > (v));
  }
  else if (v->isOfType(IfcEdgeCurve::getClassType())) {
    setIfcEdgeCurve(static_cast< IfcEdgeCurve* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveOrEdgeCurve::s_type = new Step::ClassType_class("IfcCurveOrEdgeCurve");
