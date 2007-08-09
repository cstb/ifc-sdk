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
#include <ifc2x3/IfcSymbolStyleSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcSymbolStyleSelect::IfcSymbolStyleSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcSymbolStyleSelect::IfcSymbolStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcSymbolStyleSelect::~IfcSymbolStyleSelect() {
  deleteUnion();
}

bool IfcSymbolStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSymbolStyleSelect(this);
}

bool IfcSymbolStyleSelect::init() {
  return false;
}

const char *IfcSymbolStyleSelect::type() {
  return "IfcSymbolStyleSelect";
}

Step::ClassType IfcSymbolStyleSelect::getClassType() {
  return IfcSymbolStyleSelect::s_type;
}

Step::ClassType IfcSymbolStyleSelect::getType() const {
  return IfcSymbolStyleSelect::s_type;
}

bool IfcSymbolStyleSelect::isOfType(Step::ClassType t) {
  return IfcSymbolStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcSymbolStyleSelect::currentTypeName() {
  switch(m_type) {
  case IFCCOLOURSPECIFICATION:
    return "IfcColourSpecification";
    break;
  case IFCPREDEFINEDCOLOUR:
    return "IfcPreDefinedColour";
    break;
  default:
    return "UNSET";
  }
}

IfcSymbolStyleSelect::IfcSymbolStyleSelect_select IfcSymbolStyleSelect::currentType() {
  return m_type;
}

void IfcSymbolStyleSelect::deleteUnion() {
  switch(m_type) {
  case IFCCOLOURSPECIFICATION:
    m_IfcSymbolStyleSelect_union.m_IfcColourSpecification->unref();
    break;
  case IFCPREDEFINEDCOLOUR:
    m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour->unref();
    break;
    }
  m_type = UNSET;
}

IfcColourSpecification *IfcSymbolStyleSelect::getIfcColourSpecification() {
  return m_IfcSymbolStyleSelect_union.m_IfcColourSpecification;
}

void IfcSymbolStyleSelect::setIfcColourSpecification(IfcColourSpecification *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSymbolStyleSelect_union.m_IfcColourSpecification = value;
  if (value) {
    value->ref();
    m_type = IFCCOLOURSPECIFICATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcSymbolStyleSelect::getIfcPreDefinedColour() {
  return m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour;
}

void IfcSymbolStyleSelect::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDCOLOUR;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDCOLOUR;
}

void IfcSymbolStyleSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcColourSpecification::getClassType())) {
    setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
  }
  else if (v->isOfType(IfcPreDefinedColour::getClassType())) {
    setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcSymbolStyleSelect::s_type = new Step::ClassType_class("IfcSymbolStyleSelect");
