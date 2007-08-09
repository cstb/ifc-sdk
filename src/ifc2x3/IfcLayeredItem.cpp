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
#include <ifc2x3/IfcLayeredItem.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcLayeredItem::IfcLayeredItem() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcLayeredItem::IfcLayeredItem(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcLayeredItem::~IfcLayeredItem() {
  deleteUnion();
}

bool IfcLayeredItem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLayeredItem(this);
}

bool IfcLayeredItem::init() {
  return false;
}

const char *IfcLayeredItem::type() {
  return "IfcLayeredItem";
}

Step::ClassType IfcLayeredItem::getClassType() {
  return IfcLayeredItem::s_type;
}

Step::ClassType IfcLayeredItem::getType() const {
  return IfcLayeredItem::s_type;
}

bool IfcLayeredItem::isOfType(Step::ClassType t) {
  return IfcLayeredItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcLayeredItem::currentTypeName() {
  switch(m_type) {
  case IFCREPRESENTATIONITEM:
    return "IfcRepresentationItem";
    break;
  case IFCREPRESENTATION:
    return "IfcRepresentation";
    break;
  default:
    return "UNSET";
  }
}

IfcLayeredItem::IfcLayeredItem_select IfcLayeredItem::currentType() {
  return m_type;
}

void IfcLayeredItem::deleteUnion() {
  switch(m_type) {
  case IFCREPRESENTATIONITEM:
    m_IfcLayeredItem_union.m_IfcRepresentationItem->unref();
    break;
  case IFCREPRESENTATION:
    m_IfcLayeredItem_union.m_IfcRepresentation->unref();
    break;
    }
  m_type = UNSET;
}

IfcRepresentationItem *IfcLayeredItem::getIfcRepresentationItem() {
  return m_IfcLayeredItem_union.m_IfcRepresentationItem;
}

void IfcLayeredItem::setIfcRepresentationItem(IfcRepresentationItem *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcLayeredItem_union.m_IfcRepresentationItem = value;
  if (value) {
    value->ref();
    m_type = IFCREPRESENTATIONITEM;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCREPRESENTATIONITEM;
}

IfcRepresentation *IfcLayeredItem::getIfcRepresentation() {
  return m_IfcLayeredItem_union.m_IfcRepresentation;
}

void IfcLayeredItem::setIfcRepresentation(IfcRepresentation *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcLayeredItem_union.m_IfcRepresentation = value;
  if (value) {
    value->ref();
    m_type = IFCREPRESENTATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCREPRESENTATION;
}

void IfcLayeredItem::set(Step::BaseObject *v) {
  if (v->isOfType(IfcRepresentationItem::getClassType())) {
    setIfcRepresentationItem(static_cast< IfcRepresentationItem* > (v));
  }
  else if (v->isOfType(IfcRepresentation::getClassType())) {
    setIfcRepresentation(static_cast< IfcRepresentation* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcLayeredItem::s_type = new Step::ClassType_class("IfcLayeredItem");
