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
#include <ifc2x3/IfcFillStyleSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcExternallyDefinedHatchStyle.h>
#include <ifc2x3/IfcFillAreaStyleHatching.h>
#include <ifc2x3/IfcFillAreaStyleTiles.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcFillStyleSelect::IfcFillStyleSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcFillStyleSelect::IfcFillStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcFillStyleSelect::~IfcFillStyleSelect() {
  deleteUnion();
}

bool IfcFillStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFillStyleSelect(this);
}

bool IfcFillStyleSelect::init() {
  return false;
}

const char *IfcFillStyleSelect::type() {
  return "IfcFillStyleSelect";
}

Step::ClassType IfcFillStyleSelect::getClassType() {
  return IfcFillStyleSelect::s_type;
}

Step::ClassType IfcFillStyleSelect::getType() const {
  return IfcFillStyleSelect::s_type;
}

bool IfcFillStyleSelect::isOfType(Step::ClassType t) {
  return IfcFillStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcFillStyleSelect::currentTypeName() {
  switch(m_type) {
  case IFCFILLAREASTYLEHATCHING:
    return "IfcFillAreaStyleHatching";
    break;
  case IFCFILLAREASTYLETILES:
    return "IfcFillAreaStyleTiles";
    break;
  case IFCCOLOURSPECIFICATION:
    return "IfcColourSpecification";
    break;
  case IFCPREDEFINEDCOLOUR:
    return "IfcPreDefinedColour";
    break;
  case IFCEXTERNALLYDEFINEDHATCHSTYLE:
    return "IfcExternallyDefinedHatchStyle";
    break;
  default:
    return "UNSET";
  }
}

IfcFillStyleSelect::IfcFillStyleSelect_select IfcFillStyleSelect::currentType() {
  return m_type;
}

void IfcFillStyleSelect::deleteUnion() {
  switch(m_type) {
  case IFCFILLAREASTYLEHATCHING:
    m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching->unref();
    break;
  case IFCFILLAREASTYLETILES:
    m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles->unref();
    break;
  case IFCCOLOURSPECIFICATION:
    m_IfcFillStyleSelect_union.m_IfcColourSpecification->unref();
    break;
  case IFCPREDEFINEDCOLOUR:
    m_IfcFillStyleSelect_union.m_IfcPreDefinedColour->unref();
    break;
  case IFCEXTERNALLYDEFINEDHATCHSTYLE:
    m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle->unref();
    break;
    }
  m_type = UNSET;
}

IfcFillAreaStyleHatching *IfcFillStyleSelect::getIfcFillAreaStyleHatching() {
  return m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching;
}

void IfcFillStyleSelect::setIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching = value;
  if (value) {
    value->ref();
    m_type = IFCFILLAREASTYLEHATCHING;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCFILLAREASTYLEHATCHING;
}

IfcFillAreaStyleTiles *IfcFillStyleSelect::getIfcFillAreaStyleTiles() {
  return m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles;
}

void IfcFillStyleSelect::setIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles = value;
  if (value) {
    value->ref();
    m_type = IFCFILLAREASTYLETILES;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCFILLAREASTYLETILES;
}

IfcColourSpecification *IfcFillStyleSelect::getIfcColourSpecification() {
  return m_IfcFillStyleSelect_union.m_IfcColourSpecification;
}

void IfcFillStyleSelect::setIfcColourSpecification(IfcColourSpecification *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcFillStyleSelect_union.m_IfcColourSpecification = value;
  if (value) {
    value->ref();
    m_type = IFCCOLOURSPECIFICATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcFillStyleSelect::getIfcPreDefinedColour() {
  return m_IfcFillStyleSelect_union.m_IfcPreDefinedColour;
}

void IfcFillStyleSelect::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcFillStyleSelect_union.m_IfcPreDefinedColour = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDCOLOUR;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDCOLOUR;
}

IfcExternallyDefinedHatchStyle *IfcFillStyleSelect::getIfcExternallyDefinedHatchStyle() {
  return m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle;
}

void IfcFillStyleSelect::setIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle = value;
  if (value) {
    value->ref();
    m_type = IFCEXTERNALLYDEFINEDHATCHSTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEXTERNALLYDEFINEDHATCHSTYLE;
}

void IfcFillStyleSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcFillAreaStyleHatching::getClassType())) {
    setIfcFillAreaStyleHatching(static_cast< IfcFillAreaStyleHatching* > (v));
  }
  else if (v->isOfType(IfcFillAreaStyleTiles::getClassType())) {
    setIfcFillAreaStyleTiles(static_cast< IfcFillAreaStyleTiles* > (v));
  }
  else if (v->isOfType(IfcColourSpecification::getClassType())) {
    setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
  }
  else if (v->isOfType(IfcPreDefinedColour::getClassType())) {
    setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
  }
  else if (v->isOfType(IfcExternallyDefinedHatchStyle::getClassType())) {
    setIfcExternallyDefinedHatchStyle(static_cast< IfcExternallyDefinedHatchStyle* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcFillStyleSelect::s_type = new Step::ClassType_class("IfcFillStyleSelect");
