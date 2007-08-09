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
#include <ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcCurveStyleFontAndScaling.h>
#include <ifc2x3/IfcPreDefinedCurveFont.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcCurveFontOrScaledCurveFontSelect::IfcCurveFontOrScaledCurveFontSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcCurveFontOrScaledCurveFontSelect::IfcCurveFontOrScaledCurveFontSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcCurveFontOrScaledCurveFontSelect::~IfcCurveFontOrScaledCurveFontSelect() {
  deleteUnion();
}

bool IfcCurveFontOrScaledCurveFontSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveFontOrScaledCurveFontSelect(this);
}

bool IfcCurveFontOrScaledCurveFontSelect::init() {
  return false;
}

const char *IfcCurveFontOrScaledCurveFontSelect::type() {
  return "IfcCurveFontOrScaledCurveFontSelect";
}

Step::ClassType IfcCurveFontOrScaledCurveFontSelect::getClassType() {
  return IfcCurveFontOrScaledCurveFontSelect::s_type;
}

Step::ClassType IfcCurveFontOrScaledCurveFontSelect::getType() const {
  return IfcCurveFontOrScaledCurveFontSelect::s_type;
}

bool IfcCurveFontOrScaledCurveFontSelect::isOfType(Step::ClassType t) {
  return IfcCurveFontOrScaledCurveFontSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcCurveFontOrScaledCurveFontSelect::currentTypeName() {
  switch(m_type) {
  case IFCPREDEFINEDCURVEFONT:
    return "IfcPreDefinedCurveFont";
    break;
  case IFCCURVESTYLEFONT:
    return "IfcCurveStyleFont";
    break;
  case IFCCURVESTYLEFONTANDSCALING:
    return "IfcCurveStyleFontAndScaling";
    break;
  default:
    return "UNSET";
  }
}

IfcCurveFontOrScaledCurveFontSelect::IfcCurveFontOrScaledCurveFontSelect_select IfcCurveFontOrScaledCurveFontSelect::currentType() {
  return m_type;
}

void IfcCurveFontOrScaledCurveFontSelect::deleteUnion() {
  switch(m_type) {
  case IFCPREDEFINEDCURVEFONT:
    m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcPreDefinedCurveFont->unref();
    break;
  case IFCCURVESTYLEFONT:
    m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFont->unref();
    break;
  case IFCCURVESTYLEFONTANDSCALING:
    m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFontAndScaling->unref();
    break;
    }
  m_type = UNSET;
}

IfcPreDefinedCurveFont *IfcCurveFontOrScaledCurveFontSelect::getIfcPreDefinedCurveFont() {
  return m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcPreDefinedCurveFont;
}

void IfcCurveFontOrScaledCurveFontSelect::setIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcPreDefinedCurveFont = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDCURVEFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDCURVEFONT;
}

IfcCurveStyleFont *IfcCurveFontOrScaledCurveFontSelect::getIfcCurveStyleFont() {
  return m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFont;
}

void IfcCurveFontOrScaledCurveFontSelect::setIfcCurveStyleFont(IfcCurveStyleFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFont = value;
  if (value) {
    value->ref();
    m_type = IFCCURVESTYLEFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCURVESTYLEFONT;
}

IfcCurveStyleFontAndScaling *IfcCurveFontOrScaledCurveFontSelect::getIfcCurveStyleFontAndScaling() {
  return m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFontAndScaling;
}

void IfcCurveFontOrScaledCurveFontSelect::setIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFontAndScaling = value;
  if (value) {
    value->ref();
    m_type = IFCCURVESTYLEFONTANDSCALING;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCURVESTYLEFONTANDSCALING;
}

void IfcCurveFontOrScaledCurveFontSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcPreDefinedCurveFont::getClassType())) {
    setIfcPreDefinedCurveFont(static_cast< IfcPreDefinedCurveFont* > (v));
  }
  else if (v->isOfType(IfcCurveStyleFont::getClassType())) {
    setIfcCurveStyleFont(static_cast< IfcCurveStyleFont* > (v));
  }
  else if (v->isOfType(IfcCurveStyleFontAndScaling::getClassType())) {
    setIfcCurveStyleFontAndScaling(static_cast< IfcCurveStyleFontAndScaling* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveFontOrScaledCurveFontSelect::s_type = new Step::ClassType_class("IfcCurveFontOrScaledCurveFontSelect");
