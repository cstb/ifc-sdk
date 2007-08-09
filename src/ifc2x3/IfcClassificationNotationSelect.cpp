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
#include <ifc2x3/IfcClassificationNotationSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcClassificationNotation.h>
#include <ifc2x3/IfcClassificationReference.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcClassificationNotationSelect::IfcClassificationNotationSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcClassificationNotationSelect::IfcClassificationNotationSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcClassificationNotationSelect::~IfcClassificationNotationSelect() {
  deleteUnion();
}

bool IfcClassificationNotationSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassificationNotationSelect(this);
}

bool IfcClassificationNotationSelect::init() {
  return false;
}

const char *IfcClassificationNotationSelect::type() {
  return "IfcClassificationNotationSelect";
}

Step::ClassType IfcClassificationNotationSelect::getClassType() {
  return IfcClassificationNotationSelect::s_type;
}

Step::ClassType IfcClassificationNotationSelect::getType() const {
  return IfcClassificationNotationSelect::s_type;
}

bool IfcClassificationNotationSelect::isOfType(Step::ClassType t) {
  return IfcClassificationNotationSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcClassificationNotationSelect::currentTypeName() {
  switch(m_type) {
  case IFCCLASSIFICATIONNOTATION:
    return "IfcClassificationNotation";
    break;
  case IFCCLASSIFICATIONREFERENCE:
    return "IfcClassificationReference";
    break;
  default:
    return "UNSET";
  }
}

IfcClassificationNotationSelect::IfcClassificationNotationSelect_select IfcClassificationNotationSelect::currentType() {
  return m_type;
}

void IfcClassificationNotationSelect::deleteUnion() {
  switch(m_type) {
  case IFCCLASSIFICATIONNOTATION:
    m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation->unref();
    break;
  case IFCCLASSIFICATIONREFERENCE:
    m_IfcClassificationNotationSelect_union.m_IfcClassificationReference->unref();
    break;
    }
  m_type = UNSET;
}

IfcClassificationNotation *IfcClassificationNotationSelect::getIfcClassificationNotation() {
  return m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation;
}

void IfcClassificationNotationSelect::setIfcClassificationNotation(IfcClassificationNotation *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcClassificationNotationSelect_union.m_IfcClassificationNotation = value;
  if (value) {
    value->ref();
    m_type = IFCCLASSIFICATIONNOTATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCLASSIFICATIONNOTATION;
}

IfcClassificationReference *IfcClassificationNotationSelect::getIfcClassificationReference() {
  return m_IfcClassificationNotationSelect_union.m_IfcClassificationReference;
}

void IfcClassificationNotationSelect::setIfcClassificationReference(IfcClassificationReference *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcClassificationNotationSelect_union.m_IfcClassificationReference = value;
  if (value) {
    value->ref();
    m_type = IFCCLASSIFICATIONREFERENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCLASSIFICATIONREFERENCE;
}

void IfcClassificationNotationSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcClassificationNotation::getClassType())) {
    setIfcClassificationNotation(static_cast< IfcClassificationNotation* > (v));
  }
  else if (v->isOfType(IfcClassificationReference::getClassType())) {
    setIfcClassificationReference(static_cast< IfcClassificationReference* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotationSelect::s_type = new Step::ClassType_class("IfcClassificationNotationSelect");
