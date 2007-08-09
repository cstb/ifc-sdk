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
#include <ifc2x3/IfcLibrarySelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcLibrarySelect::IfcLibrarySelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcLibrarySelect::IfcLibrarySelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcLibrarySelect::~IfcLibrarySelect() {
  deleteUnion();
}

bool IfcLibrarySelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLibrarySelect(this);
}

bool IfcLibrarySelect::init() {
  return false;
}

const char *IfcLibrarySelect::type() {
  return "IfcLibrarySelect";
}

Step::ClassType IfcLibrarySelect::getClassType() {
  return IfcLibrarySelect::s_type;
}

Step::ClassType IfcLibrarySelect::getType() const {
  return IfcLibrarySelect::s_type;
}

bool IfcLibrarySelect::isOfType(Step::ClassType t) {
  return IfcLibrarySelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcLibrarySelect::currentTypeName() {
  switch(m_type) {
  case IFCLIBRARYREFERENCE:
    return "IfcLibraryReference";
    break;
  case IFCLIBRARYINFORMATION:
    return "IfcLibraryInformation";
    break;
  default:
    return "UNSET";
  }
}

IfcLibrarySelect::IfcLibrarySelect_select IfcLibrarySelect::currentType() {
  return m_type;
}

void IfcLibrarySelect::deleteUnion() {
  switch(m_type) {
  case IFCLIBRARYREFERENCE:
    m_IfcLibrarySelect_union.m_IfcLibraryReference->unref();
    break;
  case IFCLIBRARYINFORMATION:
    m_IfcLibrarySelect_union.m_IfcLibraryInformation->unref();
    break;
    }
  m_type = UNSET;
}

IfcLibraryReference *IfcLibrarySelect::getIfcLibraryReference() {
  return m_IfcLibrarySelect_union.m_IfcLibraryReference;
}

void IfcLibrarySelect::setIfcLibraryReference(IfcLibraryReference *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcLibrarySelect_union.m_IfcLibraryReference = value;
  if (value) {
    value->ref();
    m_type = IFCLIBRARYREFERENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCLIBRARYREFERENCE;
}

IfcLibraryInformation *IfcLibrarySelect::getIfcLibraryInformation() {
  return m_IfcLibrarySelect_union.m_IfcLibraryInformation;
}

void IfcLibrarySelect::setIfcLibraryInformation(IfcLibraryInformation *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcLibrarySelect_union.m_IfcLibraryInformation = value;
  if (value) {
    value->ref();
    m_type = IFCLIBRARYINFORMATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCLIBRARYINFORMATION;
}

void IfcLibrarySelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcLibraryReference::getClassType())) {
    setIfcLibraryReference(static_cast< IfcLibraryReference* > (v));
  }
  else if (v->isOfType(IfcLibraryInformation::getClassType())) {
    setIfcLibraryInformation(static_cast< IfcLibraryInformation* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcLibrarySelect::s_type = new Step::ClassType_class("IfcLibrarySelect");
