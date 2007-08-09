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
#include <ifc2x3/IfcColour.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcColour::IfcColour() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcColour::IfcColour(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcColour::~IfcColour() {
  deleteUnion();
}

bool IfcColour::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcColour(this);
}

bool IfcColour::init() {
  return false;
}

const char *IfcColour::type() {
  return "IfcColour";
}

Step::ClassType IfcColour::getClassType() {
  return IfcColour::s_type;
}

Step::ClassType IfcColour::getType() const {
  return IfcColour::s_type;
}

bool IfcColour::isOfType(Step::ClassType t) {
  return IfcColour::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcColour::currentTypeName() {
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

IfcColour::IfcColour_select IfcColour::currentType() {
  return m_type;
}

void IfcColour::deleteUnion() {
  switch(m_type) {
  case IFCCOLOURSPECIFICATION:
    m_IfcColour_union.m_IfcColourSpecification->unref();
    break;
  case IFCPREDEFINEDCOLOUR:
    m_IfcColour_union.m_IfcPreDefinedColour->unref();
    break;
    }
  m_type = UNSET;
}

IfcColourSpecification *IfcColour::getIfcColourSpecification() {
  return m_IfcColour_union.m_IfcColourSpecification;
}

void IfcColour::setIfcColourSpecification(IfcColourSpecification *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcColour_union.m_IfcColourSpecification = value;
  if (value) {
    value->ref();
    m_type = IFCCOLOURSPECIFICATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcColour::getIfcPreDefinedColour() {
  return m_IfcColour_union.m_IfcPreDefinedColour;
}

void IfcColour::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcColour_union.m_IfcPreDefinedColour = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDCOLOUR;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDCOLOUR;
}

void IfcColour::set(Step::BaseObject *v) {
  if (v->isOfType(IfcColourSpecification::getClassType())) {
    setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
  }
  else if (v->isOfType(IfcPreDefinedColour::getClassType())) {
    setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcColour::s_type = new Step::ClassType_class("IfcColour");
