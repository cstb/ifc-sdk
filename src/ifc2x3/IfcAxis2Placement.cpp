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
#include <ifc2x3/IfcAxis2Placement.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcAxis2Placement::IfcAxis2Placement() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcAxis2Placement::IfcAxis2Placement(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcAxis2Placement::~IfcAxis2Placement() {
  deleteUnion();
}

bool IfcAxis2Placement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAxis2Placement(this);
}

bool IfcAxis2Placement::init() {
  return false;
}

const char *IfcAxis2Placement::type() {
  return "IfcAxis2Placement";
}

Step::ClassType IfcAxis2Placement::getClassType() {
  return IfcAxis2Placement::s_type;
}

Step::ClassType IfcAxis2Placement::getType() const {
  return IfcAxis2Placement::s_type;
}

bool IfcAxis2Placement::isOfType(Step::ClassType t) {
  return IfcAxis2Placement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcAxis2Placement::currentTypeName() {
  switch(m_type) {
  case IFCAXIS2PLACEMENT2D:
    return "IfcAxis2Placement2D";
    break;
  case IFCAXIS2PLACEMENT3D:
    return "IfcAxis2Placement3D";
    break;
  default:
    return "UNSET";
  }
}

IfcAxis2Placement::IfcAxis2Placement_select IfcAxis2Placement::currentType() {
  return m_type;
}

void IfcAxis2Placement::deleteUnion() {
  switch(m_type) {
  case IFCAXIS2PLACEMENT2D:
    m_IfcAxis2Placement_union.m_IfcAxis2Placement2D->unref();
    break;
  case IFCAXIS2PLACEMENT3D:
    m_IfcAxis2Placement_union.m_IfcAxis2Placement3D->unref();
    break;
    }
  m_type = UNSET;
}

IfcAxis2Placement2D *IfcAxis2Placement::getIfcAxis2Placement2D() {
  return m_IfcAxis2Placement_union.m_IfcAxis2Placement2D;
}

void IfcAxis2Placement::setIfcAxis2Placement2D(IfcAxis2Placement2D *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcAxis2Placement_union.m_IfcAxis2Placement2D = value;
  if (value) {
    value->ref();
    m_type = IFCAXIS2PLACEMENT2D;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCAXIS2PLACEMENT2D;
}

IfcAxis2Placement3D *IfcAxis2Placement::getIfcAxis2Placement3D() {
  return m_IfcAxis2Placement_union.m_IfcAxis2Placement3D;
}

void IfcAxis2Placement::setIfcAxis2Placement3D(IfcAxis2Placement3D *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcAxis2Placement_union.m_IfcAxis2Placement3D = value;
  if (value) {
    value->ref();
    m_type = IFCAXIS2PLACEMENT3D;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCAXIS2PLACEMENT3D;
}

void IfcAxis2Placement::set(Step::BaseObject *v) {
  if (v->isOfType(IfcAxis2Placement2D::getClassType())) {
    setIfcAxis2Placement2D(static_cast< IfcAxis2Placement2D* > (v));
  }
  else if (v->isOfType(IfcAxis2Placement3D::getClassType())) {
    setIfcAxis2Placement3D(static_cast< IfcAxis2Placement3D* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcAxis2Placement::s_type = new Step::ClassType_class("IfcAxis2Placement");
