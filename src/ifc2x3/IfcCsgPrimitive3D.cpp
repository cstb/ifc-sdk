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
#include <ifc2x3/IfcCsgPrimitive3D.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcCsgPrimitive3D::IfcCsgPrimitive3D(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_position = NULL;
}


IfcCsgPrimitive3D::~IfcCsgPrimitive3D() {
}

bool IfcCsgPrimitive3D::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCsgPrimitive3D(this);
}

const char *IfcCsgPrimitive3D::type() {
  return "IfcCsgPrimitive3D";
}

Step::ClassType IfcCsgPrimitive3D::getClassType() {
  return IfcCsgPrimitive3D::s_type;
}

Step::ClassType IfcCsgPrimitive3D::getType() const {
  return IfcCsgPrimitive3D::s_type;
}

bool IfcCsgPrimitive3D::isOfType(Step::ClassType t) {
  return IfcCsgPrimitive3D::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcAxis2Placement3D *IfcCsgPrimitive3D::getPosition() {
  if (Step::BaseObject::inited()) {
    return m_position.get();
  }
  else {
    return NULL;
  }
}

void IfcCsgPrimitive3D::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
  m_position = value;
}

void IfcCsgPrimitive3D::release() {
  IfcGeometricRepresentationItem::release();
  m_position.release();
}

bool IfcCsgPrimitive3D::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_position = NULL;
  }
  else {
    m_position = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCsgPrimitive3D::s_type = new Step::ClassType_class("IfcCsgPrimitive3D");
