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
#include <ifc2x3/IfcDraughtingCalloutElement.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcAnnotationTextOccurrence.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcDraughtingCalloutElement::~IfcDraughtingCalloutElement() {
  deleteUnion();
}

bool IfcDraughtingCalloutElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDraughtingCalloutElement(this);
}

bool IfcDraughtingCalloutElement::init() {
  return false;
}

const char *IfcDraughtingCalloutElement::type() {
  return "IfcDraughtingCalloutElement";
}

Step::ClassType IfcDraughtingCalloutElement::getClassType() {
  return IfcDraughtingCalloutElement::s_type;
}

Step::ClassType IfcDraughtingCalloutElement::getType() const {
  return IfcDraughtingCalloutElement::s_type;
}

bool IfcDraughtingCalloutElement::isOfType(Step::ClassType t) {
  return IfcDraughtingCalloutElement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcDraughtingCalloutElement::currentTypeName() {
  switch(m_type) {
  case IFCANNOTATIONCURVEOCCURRENCE:
    return "IfcAnnotationCurveOccurrence";
    break;
  case IFCANNOTATIONTEXTOCCURRENCE:
    return "IfcAnnotationTextOccurrence";
    break;
  case IFCANNOTATIONSYMBOLOCCURRENCE:
    return "IfcAnnotationSymbolOccurrence";
    break;
  default:
    return "UNSET";
  }
}

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement_select IfcDraughtingCalloutElement::currentType() {
  return m_type;
}

void IfcDraughtingCalloutElement::deleteUnion() {
  switch(m_type) {
  case IFCANNOTATIONCURVEOCCURRENCE:
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence->unref();
    break;
  case IFCANNOTATIONTEXTOCCURRENCE:
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence->unref();
    break;
  case IFCANNOTATIONSYMBOLOCCURRENCE:
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence->unref();
    break;
    }
  m_type = UNSET;
}

IfcAnnotationCurveOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationCurveOccurrence() {
  return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence;
}

void IfcDraughtingCalloutElement::setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence = value;
  if (value) {
    value->ref();
    m_type = IFCANNOTATIONCURVEOCCURRENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCANNOTATIONCURVEOCCURRENCE;
}

IfcAnnotationTextOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationTextOccurrence() {
  return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence;
}

void IfcDraughtingCalloutElement::setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence = value;
  if (value) {
    value->ref();
    m_type = IFCANNOTATIONTEXTOCCURRENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCANNOTATIONTEXTOCCURRENCE;
}

IfcAnnotationSymbolOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationSymbolOccurrence() {
  return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence;
}

void IfcDraughtingCalloutElement::setIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence = value;
  if (value) {
    value->ref();
    m_type = IFCANNOTATIONSYMBOLOCCURRENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCANNOTATIONSYMBOLOCCURRENCE;
}

void IfcDraughtingCalloutElement::set(Step::BaseObject *v) {
  if (v->isOfType(IfcAnnotationCurveOccurrence::getClassType())) {
    setIfcAnnotationCurveOccurrence(static_cast< IfcAnnotationCurveOccurrence* > (v));
  }
  else if (v->isOfType(IfcAnnotationTextOccurrence::getClassType())) {
    setIfcAnnotationTextOccurrence(static_cast< IfcAnnotationTextOccurrence* > (v));
  }
  else if (v->isOfType(IfcAnnotationSymbolOccurrence::getClassType())) {
    setIfcAnnotationSymbolOccurrence(static_cast< IfcAnnotationSymbolOccurrence* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingCalloutElement::s_type = new Step::ClassType_class("IfcDraughtingCalloutElement");
