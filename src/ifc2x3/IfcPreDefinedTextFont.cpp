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
#include <ifc2x3/IfcPreDefinedTextFont.h>

#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPreDefinedItem.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcPreDefinedTextFont::IfcPreDefinedTextFont(Step::SPFData *args) : IfcPreDefinedItem(args) {
}


IfcPreDefinedTextFont::~IfcPreDefinedTextFont() {
}

bool IfcPreDefinedTextFont::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPreDefinedTextFont(this);
}

const char *IfcPreDefinedTextFont::type() {
  return "IfcPreDefinedTextFont";
}

Step::ClassType IfcPreDefinedTextFont::getClassType() {
  return IfcPreDefinedTextFont::s_type;
}

Step::ClassType IfcPreDefinedTextFont::getType() const {
  return IfcPreDefinedTextFont::s_type;
}

bool IfcPreDefinedTextFont::isOfType(Step::ClassType t) {
  return IfcPreDefinedTextFont::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

void IfcPreDefinedTextFont::release() {
  IfcPreDefinedItem::release();
}

bool IfcPreDefinedTextFont::init() {
  bool status = IfcPreDefinedItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedTextFont::s_type = new Step::ClassType_class("IfcPreDefinedTextFont");
