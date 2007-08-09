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
#include <ifc2x3/IfcPoint.h>

#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcPoint::IfcPoint(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
}


IfcPoint::~IfcPoint() {
}

bool IfcPoint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPoint(this);
}

const char *IfcPoint::type() {
  return "IfcPoint";
}

Step::ClassType IfcPoint::getClassType() {
  return IfcPoint::s_type;
}

Step::ClassType IfcPoint::getType() const {
  return IfcPoint::s_type;
}

bool IfcPoint::isOfType(Step::ClassType t) {
  return IfcPoint::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

void IfcPoint::release() {
  IfcGeometricRepresentationItem::release();
}

bool IfcPoint::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPoint::s_type = new Step::ClassType_class("IfcPoint");
