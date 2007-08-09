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
#include <ifc2x3/IfcColourOrFactor.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcColourOrFactor::IfcColourOrFactor() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcColourOrFactor::IfcColourOrFactor(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcColourOrFactor::~IfcColourOrFactor() {
  deleteUnion();
}

bool IfcColourOrFactor::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcColourOrFactor(this);
}

bool IfcColourOrFactor::init() {
  return false;
}

const char *IfcColourOrFactor::type() {
  return "IfcColourOrFactor";
}

Step::ClassType IfcColourOrFactor::getClassType() {
  return IfcColourOrFactor::s_type;
}

Step::ClassType IfcColourOrFactor::getType() const {
  return IfcColourOrFactor::s_type;
}

bool IfcColourOrFactor::isOfType(Step::ClassType t) {
  return IfcColourOrFactor::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcColourOrFactor::currentTypeName() {
  switch(m_type) {
  case IFCCOLOURRGB:
    return "IfcColourRgb";
    break;
  case IFCNORMALISEDRATIOMEASURE:
    return "IfcNormalisedRatioMeasure";
    break;
  default:
    return "UNSET";
  }
}

IfcColourOrFactor::IfcColourOrFactor_select IfcColourOrFactor::currentType() {
  return m_type;
}

void IfcColourOrFactor::deleteUnion() {
  switch(m_type) {
  case IFCCOLOURRGB:
    m_IfcColourOrFactor_union.m_IfcColourRgb->unref();
    break;
    }
  m_type = UNSET;
}

IfcColourRgb *IfcColourOrFactor::getIfcColourRgb() {
  return m_IfcColourOrFactor_union.m_IfcColourRgb;
}

void IfcColourOrFactor::setIfcColourRgb(IfcColourRgb *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcColourOrFactor_union.m_IfcColourRgb = value;
  if (value) {
    value->ref();
    m_type = IFCCOLOURRGB;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCOLOURRGB;
}

IfcNormalisedRatioMeasure IfcColourOrFactor::getIfcNormalisedRatioMeasure() {
  return m_IfcColourOrFactor_union.m_IfcNormalisedRatioMeasure;
}

void IfcColourOrFactor::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
  deleteUnion();
  m_IfcColourOrFactor_union.m_IfcNormalisedRatioMeasure = value;
  m_type = IFCNORMALISEDRATIOMEASURE;
}

void IfcColourOrFactor::set(Step::BaseObject *v) {
  if (v->isOfType(IfcColourRgb::getClassType())) {
    setIfcColourRgb(static_cast< IfcColourRgb* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcColourOrFactor::s_type = new Step::ClassType_class("IfcColourOrFactor");
