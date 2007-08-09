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
#include <ifc2x3/IfcStructuralActivityAssignmentSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcStructuralActivityAssignmentSelect::~IfcStructuralActivityAssignmentSelect() {
  deleteUnion();
}

bool IfcStructuralActivityAssignmentSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralActivityAssignmentSelect(this);
}

bool IfcStructuralActivityAssignmentSelect::init() {
  return false;
}

const char *IfcStructuralActivityAssignmentSelect::type() {
  return "IfcStructuralActivityAssignmentSelect";
}

Step::ClassType IfcStructuralActivityAssignmentSelect::getClassType() {
  return IfcStructuralActivityAssignmentSelect::s_type;
}

Step::ClassType IfcStructuralActivityAssignmentSelect::getType() const {
  return IfcStructuralActivityAssignmentSelect::s_type;
}

bool IfcStructuralActivityAssignmentSelect::isOfType(Step::ClassType t) {
  return IfcStructuralActivityAssignmentSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcStructuralActivityAssignmentSelect::currentTypeName() {
  switch(m_type) {
  case IFCSTRUCTURALITEM:
    return "IfcStructuralItem";
    break;
  case IFCELEMENT:
    return "IfcElement";
    break;
  default:
    return "UNSET";
  }
}

IfcStructuralActivityAssignmentSelect::IfcStructuralActivityAssignmentSelect_select IfcStructuralActivityAssignmentSelect::currentType() {
  return m_type;
}

void IfcStructuralActivityAssignmentSelect::deleteUnion() {
  switch(m_type) {
  case IFCSTRUCTURALITEM:
    m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem->unref();
    break;
  case IFCELEMENT:
    m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement->unref();
    break;
    }
  m_type = UNSET;
}

IfcStructuralItem *IfcStructuralActivityAssignmentSelect::getIfcStructuralItem() {
  return m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem;
}

void IfcStructuralActivityAssignmentSelect::setIfcStructuralItem(IfcStructuralItem *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcStructuralActivityAssignmentSelect_union.m_IfcStructuralItem = value;
  if (value) {
    value->ref();
    m_type = IFCSTRUCTURALITEM;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSTRUCTURALITEM;
}

IfcElement *IfcStructuralActivityAssignmentSelect::getIfcElement() {
  return m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement;
}

void IfcStructuralActivityAssignmentSelect::setIfcElement(IfcElement *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcStructuralActivityAssignmentSelect_union.m_IfcElement = value;
  if (value) {
    value->ref();
    m_type = IFCELEMENT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCELEMENT;
}

void IfcStructuralActivityAssignmentSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcStructuralItem::getClassType())) {
    setIfcStructuralItem(static_cast< IfcStructuralItem* > (v));
  }
  else if (v->isOfType(IfcElement::getClassType())) {
    setIfcElement(static_cast< IfcElement* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralActivityAssignmentSelect::s_type = new Step::ClassType_class("IfcStructuralActivityAssignmentSelect");
