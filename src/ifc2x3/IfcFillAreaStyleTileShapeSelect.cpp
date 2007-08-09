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
#include <ifc2x3/IfcFillAreaStyleTileShapeSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcFillAreaStyleTileShapeSelect::~IfcFillAreaStyleTileShapeSelect() {
  deleteUnion();
}

bool IfcFillAreaStyleTileShapeSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFillAreaStyleTileShapeSelect(this);
}

bool IfcFillAreaStyleTileShapeSelect::init() {
  return false;
}

const char *IfcFillAreaStyleTileShapeSelect::type() {
  return "IfcFillAreaStyleTileShapeSelect";
}

Step::ClassType IfcFillAreaStyleTileShapeSelect::getClassType() {
  return IfcFillAreaStyleTileShapeSelect::s_type;
}

Step::ClassType IfcFillAreaStyleTileShapeSelect::getType() const {
  return IfcFillAreaStyleTileShapeSelect::s_type;
}

bool IfcFillAreaStyleTileShapeSelect::isOfType(Step::ClassType t) {
  return IfcFillAreaStyleTileShapeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcFillAreaStyleTileShapeSelect::currentTypeName() {
  switch(m_type) {
  case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
    return "IfcFillAreaStyleTileSymbolWithStyle";
    break;
  default:
    return "UNSET";
  }
}

IfcFillAreaStyleTileShapeSelect::IfcFillAreaStyleTileShapeSelect_select IfcFillAreaStyleTileShapeSelect::currentType() {
  return m_type;
}

void IfcFillAreaStyleTileShapeSelect::deleteUnion() {
  switch(m_type) {
  case IFCFILLAREASTYLETILESYMBOLWITHSTYLE:
    m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle->unref();
    break;
    }
  m_type = UNSET;
}

IfcFillAreaStyleTileSymbolWithStyle *IfcFillAreaStyleTileShapeSelect::getIfcFillAreaStyleTileSymbolWithStyle() {
  return m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle;
}

void IfcFillAreaStyleTileShapeSelect::setIfcFillAreaStyleTileSymbolWithStyle(IfcFillAreaStyleTileSymbolWithStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcFillAreaStyleTileShapeSelect_union.m_IfcFillAreaStyleTileSymbolWithStyle = value;
  if (value) {
    value->ref();
    m_type = IFCFILLAREASTYLETILESYMBOLWITHSTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCFILLAREASTYLETILESYMBOLWITHSTYLE;
}

void IfcFillAreaStyleTileShapeSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcFillAreaStyleTileSymbolWithStyle::getClassType())) {
    setIfcFillAreaStyleTileSymbolWithStyle(static_cast< IfcFillAreaStyleTileSymbolWithStyle* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcFillAreaStyleTileShapeSelect::s_type = new Step::ClassType_class("IfcFillAreaStyleTileShapeSelect");
