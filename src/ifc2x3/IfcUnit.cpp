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
#include <ifc2x3/IfcUnit.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcUnit::IfcUnit() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcUnit::IfcUnit(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcUnit::~IfcUnit() {
  deleteUnion();
}

bool IfcUnit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcUnit(this);
}

bool IfcUnit::init() {
  return false;
}

const char *IfcUnit::type() {
  return "IfcUnit";
}

Step::ClassType IfcUnit::getClassType() {
  return IfcUnit::s_type;
}

Step::ClassType IfcUnit::getType() const {
  return IfcUnit::s_type;
}

bool IfcUnit::isOfType(Step::ClassType t) {
  return IfcUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcUnit::currentTypeName() {
  switch(m_type) {
  case IFCDERIVEDUNIT:
    return "IfcDerivedUnit";
    break;
  case IFCNAMEDUNIT:
    return "IfcNamedUnit";
    break;
  case IFCMONETARYUNIT:
    return "IfcMonetaryUnit";
    break;
  default:
    return "UNSET";
  }
}

IfcUnit::IfcUnit_select IfcUnit::currentType() {
  return m_type;
}

void IfcUnit::deleteUnion() {
  switch(m_type) {
  case IFCDERIVEDUNIT:
    m_IfcUnit_union.m_IfcDerivedUnit->unref();
    break;
  case IFCNAMEDUNIT:
    m_IfcUnit_union.m_IfcNamedUnit->unref();
    break;
  case IFCMONETARYUNIT:
    m_IfcUnit_union.m_IfcMonetaryUnit->unref();
    break;
    }
  m_type = UNSET;
}

IfcDerivedUnit *IfcUnit::getIfcDerivedUnit() {
  return m_IfcUnit_union.m_IfcDerivedUnit;
}

void IfcUnit::setIfcDerivedUnit(IfcDerivedUnit *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcUnit_union.m_IfcDerivedUnit = value;
  if (value) {
    value->ref();
    m_type = IFCDERIVEDUNIT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCDERIVEDUNIT;
}

IfcNamedUnit *IfcUnit::getIfcNamedUnit() {
  return m_IfcUnit_union.m_IfcNamedUnit;
}

void IfcUnit::setIfcNamedUnit(IfcNamedUnit *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcUnit_union.m_IfcNamedUnit = value;
  if (value) {
    value->ref();
    m_type = IFCNAMEDUNIT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCNAMEDUNIT;
}

IfcMonetaryUnit *IfcUnit::getIfcMonetaryUnit() {
  return m_IfcUnit_union.m_IfcMonetaryUnit;
}

void IfcUnit::setIfcMonetaryUnit(IfcMonetaryUnit *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcUnit_union.m_IfcMonetaryUnit = value;
  if (value) {
    value->ref();
    m_type = IFCMONETARYUNIT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMONETARYUNIT;
}

void IfcUnit::set(Step::BaseObject *v) {
  if (v->isOfType(IfcDerivedUnit::getClassType())) {
    setIfcDerivedUnit(static_cast< IfcDerivedUnit* > (v));
  }
  else if (v->isOfType(IfcNamedUnit::getClassType())) {
    setIfcNamedUnit(static_cast< IfcNamedUnit* > (v));
  }
  else if (v->isOfType(IfcMonetaryUnit::getClassType())) {
    setIfcMonetaryUnit(static_cast< IfcMonetaryUnit* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcUnit::s_type = new Step::ClassType_class("IfcUnit");
