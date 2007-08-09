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
#include <ifc2x3/IfcBuildingElementType.h>

#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcBuildingElementType::IfcBuildingElementType(Step::SPFData *args) : IfcElementType(args) {
}


IfcBuildingElementType::~IfcBuildingElementType() {
}

bool IfcBuildingElementType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBuildingElementType(this);
}

const char *IfcBuildingElementType::type() {
  return "IfcBuildingElementType";
}

Step::ClassType IfcBuildingElementType::getClassType() {
  return IfcBuildingElementType::s_type;
}

Step::ClassType IfcBuildingElementType::getType() const {
  return IfcBuildingElementType::s_type;
}

bool IfcBuildingElementType::isOfType(Step::ClassType t) {
  return IfcBuildingElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

void IfcBuildingElementType::release() {
  IfcElementType::release();
}

bool IfcBuildingElementType::init() {
  bool status = IfcElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementType::s_type = new Step::ClassType_class("IfcBuildingElementType");
