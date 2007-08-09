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
#include <ifc2x3/IfcSpecularHighlightSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcSpecularHighlightSelect::~IfcSpecularHighlightSelect() {
  deleteUnion();
}

bool IfcSpecularHighlightSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpecularHighlightSelect(this);
}

bool IfcSpecularHighlightSelect::init() {
  return false;
}

const char *IfcSpecularHighlightSelect::type() {
  return "IfcSpecularHighlightSelect";
}

Step::ClassType IfcSpecularHighlightSelect::getClassType() {
  return IfcSpecularHighlightSelect::s_type;
}

Step::ClassType IfcSpecularHighlightSelect::getType() const {
  return IfcSpecularHighlightSelect::s_type;
}

bool IfcSpecularHighlightSelect::isOfType(Step::ClassType t) {
  return IfcSpecularHighlightSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcSpecularHighlightSelect::currentTypeName() {
  switch(m_type) {
  case IFCSPECULAREXPONENT:
    return "IfcSpecularExponent";
    break;
  case IFCSPECULARROUGHNESS:
    return "IfcSpecularRoughness";
    break;
  default:
    return "UNSET";
  }
}

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect_select IfcSpecularHighlightSelect::currentType() {
  return m_type;
}

void IfcSpecularHighlightSelect::deleteUnion() {
  m_type = UNSET;
}

IfcSpecularExponent IfcSpecularHighlightSelect::getIfcSpecularExponent() {
  return m_IfcSpecularHighlightSelect_union.m_IfcSpecularExponent;
}

void IfcSpecularHighlightSelect::setIfcSpecularExponent(IfcSpecularExponent value) {
  deleteUnion();
  m_IfcSpecularHighlightSelect_union.m_IfcSpecularExponent = value;
  m_type = IFCSPECULAREXPONENT;
}

IfcSpecularRoughness IfcSpecularHighlightSelect::getIfcSpecularRoughness() {
  return m_IfcSpecularHighlightSelect_union.m_IfcSpecularRoughness;
}

void IfcSpecularHighlightSelect::setIfcSpecularRoughness(IfcSpecularRoughness value) {
  deleteUnion();
  m_IfcSpecularHighlightSelect_union.m_IfcSpecularRoughness = value;
  m_type = IFCSPECULARROUGHNESS;
}

void IfcSpecularHighlightSelect::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcSpecularHighlightSelect::s_type = new Step::ClassType_class("IfcSpecularHighlightSelect");
