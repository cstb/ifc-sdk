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
#include <ifc2x3/IfcDefinedSymbolSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcExternallyDefinedSymbol.h>
#include <ifc2x3/IfcPreDefinedSymbol.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcDefinedSymbolSelect::IfcDefinedSymbolSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcDefinedSymbolSelect::IfcDefinedSymbolSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcDefinedSymbolSelect::~IfcDefinedSymbolSelect() {
  deleteUnion();
}

bool IfcDefinedSymbolSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDefinedSymbolSelect(this);
}

bool IfcDefinedSymbolSelect::init() {
  return false;
}

const char *IfcDefinedSymbolSelect::type() {
  return "IfcDefinedSymbolSelect";
}

Step::ClassType IfcDefinedSymbolSelect::getClassType() {
  return IfcDefinedSymbolSelect::s_type;
}

Step::ClassType IfcDefinedSymbolSelect::getType() const {
  return IfcDefinedSymbolSelect::s_type;
}

bool IfcDefinedSymbolSelect::isOfType(Step::ClassType t) {
  return IfcDefinedSymbolSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcDefinedSymbolSelect::currentTypeName() {
  switch(m_type) {
  case IFCPREDEFINEDSYMBOL:
    return "IfcPreDefinedSymbol";
    break;
  case IFCEXTERNALLYDEFINEDSYMBOL:
    return "IfcExternallyDefinedSymbol";
    break;
  default:
    return "UNSET";
  }
}

IfcDefinedSymbolSelect::IfcDefinedSymbolSelect_select IfcDefinedSymbolSelect::currentType() {
  return m_type;
}

void IfcDefinedSymbolSelect::deleteUnion() {
  switch(m_type) {
  case IFCPREDEFINEDSYMBOL:
    m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol->unref();
    break;
  case IFCEXTERNALLYDEFINEDSYMBOL:
    m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol->unref();
    break;
    }
  m_type = UNSET;
}

IfcPreDefinedSymbol *IfcDefinedSymbolSelect::getIfcPreDefinedSymbol() {
  return m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol;
}

void IfcDefinedSymbolSelect::setIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDSYMBOL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDSYMBOL;
}

IfcExternallyDefinedSymbol *IfcDefinedSymbolSelect::getIfcExternallyDefinedSymbol() {
  return m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol;
}

void IfcDefinedSymbolSelect::setIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol = value;
  if (value) {
    value->ref();
    m_type = IFCEXTERNALLYDEFINEDSYMBOL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEXTERNALLYDEFINEDSYMBOL;
}

void IfcDefinedSymbolSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcPreDefinedSymbol::getClassType())) {
    setIfcPreDefinedSymbol(static_cast< IfcPreDefinedSymbol* > (v));
  }
  else if (v->isOfType(IfcExternallyDefinedSymbol::getClassType())) {
    setIfcExternallyDefinedSymbol(static_cast< IfcExternallyDefinedSymbol* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcDefinedSymbolSelect::s_type = new Step::ClassType_class("IfcDefinedSymbolSelect");
