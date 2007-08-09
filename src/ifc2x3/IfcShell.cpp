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
#include <ifc2x3/IfcShell.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcOpenShell.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcShell::IfcShell() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcShell::IfcShell(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcShell::~IfcShell() {
  deleteUnion();
}

bool IfcShell::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcShell(this);
}

bool IfcShell::init() {
  return false;
}

const char *IfcShell::type() {
  return "IfcShell";
}

Step::ClassType IfcShell::getClassType() {
  return IfcShell::s_type;
}

Step::ClassType IfcShell::getType() const {
  return IfcShell::s_type;
}

bool IfcShell::isOfType(Step::ClassType t) {
  return IfcShell::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcShell::currentTypeName() {
  switch(m_type) {
  case IFCCLOSEDSHELL:
    return "IfcClosedShell";
    break;
  case IFCOPENSHELL:
    return "IfcOpenShell";
    break;
  default:
    return "UNSET";
  }
}

IfcShell::IfcShell_select IfcShell::currentType() {
  return m_type;
}

void IfcShell::deleteUnion() {
  switch(m_type) {
  case IFCCLOSEDSHELL:
    m_IfcShell_union.m_IfcClosedShell->unref();
    break;
  case IFCOPENSHELL:
    m_IfcShell_union.m_IfcOpenShell->unref();
    break;
    }
  m_type = UNSET;
}

IfcClosedShell *IfcShell::getIfcClosedShell() {
  return m_IfcShell_union.m_IfcClosedShell;
}

void IfcShell::setIfcClosedShell(IfcClosedShell *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcShell_union.m_IfcClosedShell = value;
  if (value) {
    value->ref();
    m_type = IFCCLOSEDSHELL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCLOSEDSHELL;
}

IfcOpenShell *IfcShell::getIfcOpenShell() {
  return m_IfcShell_union.m_IfcOpenShell;
}

void IfcShell::setIfcOpenShell(IfcOpenShell *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcShell_union.m_IfcOpenShell = value;
  if (value) {
    value->ref();
    m_type = IFCOPENSHELL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCOPENSHELL;
}

void IfcShell::set(Step::BaseObject *v) {
  if (v->isOfType(IfcClosedShell::getClassType())) {
    setIfcClosedShell(static_cast< IfcClosedShell* > (v));
  }
  else if (v->isOfType(IfcOpenShell::getClassType())) {
    setIfcOpenShell(static_cast< IfcOpenShell* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcShell::s_type = new Step::ClassType_class("IfcShell");
