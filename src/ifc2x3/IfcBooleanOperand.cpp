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
#include <ifc2x3/IfcBooleanOperand.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcBooleanOperand::IfcBooleanOperand() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcBooleanOperand::IfcBooleanOperand(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcBooleanOperand::~IfcBooleanOperand() {
  deleteUnion();
}

bool IfcBooleanOperand::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBooleanOperand(this);
}

bool IfcBooleanOperand::init() {
  return false;
}

const char *IfcBooleanOperand::type() {
  return "IfcBooleanOperand";
}

Step::ClassType IfcBooleanOperand::getClassType() {
  return IfcBooleanOperand::s_type;
}

Step::ClassType IfcBooleanOperand::getType() const {
  return IfcBooleanOperand::s_type;
}

bool IfcBooleanOperand::isOfType(Step::ClassType t) {
  return IfcBooleanOperand::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcBooleanOperand::currentTypeName() {
  switch(m_type) {
  case IFCSOLIDMODEL:
    return "IfcSolidModel";
    break;
  case IFCHALFSPACESOLID:
    return "IfcHalfSpaceSolid";
    break;
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

IfcBooleanOperand::IfcBooleanOperand_select IfcBooleanOperand::currentType() {
  return m_type;
}

void IfcBooleanOperand::deleteUnion() {
  switch(m_type) {
  case IFCSOLIDMODEL:
    m_IfcBooleanOperand_union.m_IfcSolidModel->unref();
    break;
  case IFCHALFSPACESOLID:
    m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid->unref();
    break;
  case IFCBOOLEANRESULT:
    m_IfcBooleanOperand_union.m_IfcBooleanResult->unref();
    break;
  case IFCCSGPRIMITIVE3D:
    m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D->unref();
    break;
    }
  m_type = UNSET;
}

IfcSolidModel *IfcBooleanOperand::getIfcSolidModel() {
  return m_IfcBooleanOperand_union.m_IfcSolidModel;
}

void IfcBooleanOperand::setIfcSolidModel(IfcSolidModel *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcBooleanOperand_union.m_IfcSolidModel = value;
  if (value) {
    value->ref();
    m_type = IFCSOLIDMODEL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSOLIDMODEL;
}

IfcHalfSpaceSolid *IfcBooleanOperand::getIfcHalfSpaceSolid() {
  return m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid;
}

void IfcBooleanOperand::setIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid = value;
  if (value) {
    value->ref();
    m_type = IFCHALFSPACESOLID;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCHALFSPACESOLID;
}

IfcBooleanResult *IfcBooleanOperand::getIfcBooleanResult() {
  return m_IfcBooleanOperand_union.m_IfcBooleanResult;
}

void IfcBooleanOperand::setIfcBooleanResult(IfcBooleanResult *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcBooleanOperand_union.m_IfcBooleanResult = value;
  if (value) {
    value->ref();
    m_type = IFCBOOLEANRESULT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCBOOLEANRESULT;
}

IfcCsgPrimitive3D *IfcBooleanOperand::getIfcCsgPrimitive3D() {
  return m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D;
}

void IfcBooleanOperand::setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D = value;
  if (value) {
    value->ref();
    m_type = IFCCSGPRIMITIVE3D;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCSGPRIMITIVE3D;
}

void IfcBooleanOperand::set(Step::BaseObject *v) {
  if (v->isOfType(IfcSolidModel::getClassType())) {
    setIfcSolidModel(static_cast< IfcSolidModel* > (v));
  }
  else if (v->isOfType(IfcHalfSpaceSolid::getClassType())) {
    setIfcHalfSpaceSolid(static_cast< IfcHalfSpaceSolid* > (v));
  }
  else if (v->isOfType(IfcBooleanResult::getClassType())) {
    setIfcBooleanResult(static_cast< IfcBooleanResult* > (v));
  }
  else if (v->isOfType(IfcCsgPrimitive3D::getClassType())) {
    setIfcCsgPrimitive3D(static_cast< IfcCsgPrimitive3D* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcBooleanOperand::s_type = new Step::ClassType_class("IfcBooleanOperand");
