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
#include <ifc2x3/IfcBoundedCurve.h>

#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcBoundedCurve::IfcBoundedCurve(Step::SPFData *args) : IfcCurve(args) {
}


IfcBoundedCurve::~IfcBoundedCurve() {
}

bool IfcBoundedCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoundedCurve(this);
}

const char *IfcBoundedCurve::type() {
  return "IfcBoundedCurve";
}

Step::ClassType IfcBoundedCurve::getClassType() {
  return IfcBoundedCurve::s_type;
}

Step::ClassType IfcBoundedCurve::getType() const {
  return IfcBoundedCurve::s_type;
}

bool IfcBoundedCurve::isOfType(Step::ClassType t) {
  return IfcBoundedCurve::s_type == t ? true : IfcCurve::isOfType(t);
}

void IfcBoundedCurve::release() {
  IfcCurve::release();
}

bool IfcBoundedCurve::init() {
  bool status = IfcCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundedCurve::s_type = new Step::ClassType_class("IfcBoundedCurve");
