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
#include <ifc2x3/IfcPresentationStyleSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcFillAreaStyle.h>
#include <ifc2x3/IfcSurfaceStyle.h>
#include <ifc2x3/IfcSymbolStyle.h>
#include <ifc2x3/IfcTextStyle.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcPresentationStyleSelect::IfcPresentationStyleSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcPresentationStyleSelect::IfcPresentationStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcPresentationStyleSelect::~IfcPresentationStyleSelect() {
  deleteUnion();
}

bool IfcPresentationStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPresentationStyleSelect(this);
}

bool IfcPresentationStyleSelect::init() {
  return false;
}

const char *IfcPresentationStyleSelect::type() {
  return "IfcPresentationStyleSelect";
}

Step::ClassType IfcPresentationStyleSelect::getClassType() {
  return IfcPresentationStyleSelect::s_type;
}

Step::ClassType IfcPresentationStyleSelect::getType() const {
  return IfcPresentationStyleSelect::s_type;
}

bool IfcPresentationStyleSelect::isOfType(Step::ClassType t) {
  return IfcPresentationStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcPresentationStyleSelect::currentTypeName() {
  switch(m_type) {
  case IFCNULLSTYLE:
    return "IfcNullStyle";
    break;
  case IFCCURVESTYLE:
    return "IfcCurveStyle";
    break;
  case IFCSYMBOLSTYLE:
    return "IfcSymbolStyle";
    break;
  case IFCFILLAREASTYLE:
    return "IfcFillAreaStyle";
    break;
  case IFCTEXTSTYLE:
    return "IfcTextStyle";
    break;
  case IFCSURFACESTYLE:
    return "IfcSurfaceStyle";
    break;
  default:
    return "UNSET";
  }
}

IfcPresentationStyleSelect::IfcPresentationStyleSelect_select IfcPresentationStyleSelect::currentType() {
  return m_type;
}

void IfcPresentationStyleSelect::deleteUnion() {
  switch(m_type) {
  case IFCCURVESTYLE:
    m_IfcPresentationStyleSelect_union.m_IfcCurveStyle->unref();
    break;
  case IFCSYMBOLSTYLE:
    m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle->unref();
    break;
  case IFCFILLAREASTYLE:
    m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle->unref();
    break;
  case IFCTEXTSTYLE:
    m_IfcPresentationStyleSelect_union.m_IfcTextStyle->unref();
    break;
  case IFCSURFACESTYLE:
    m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle->unref();
    break;
    }
  m_type = UNSET;
}

IfcNullStyle IfcPresentationStyleSelect::getIfcNullStyle() {
  return m_IfcPresentationStyleSelect_union.m_IfcNullStyle;
}

void IfcPresentationStyleSelect::setIfcNullStyle(IfcNullStyle value) {
  deleteUnion();
  m_IfcPresentationStyleSelect_union.m_IfcNullStyle = value;
  m_type = IFCNULLSTYLE;
}

IfcCurveStyle *IfcPresentationStyleSelect::getIfcCurveStyle() {
  return m_IfcPresentationStyleSelect_union.m_IfcCurveStyle;
}

void IfcPresentationStyleSelect::setIfcCurveStyle(IfcCurveStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPresentationStyleSelect_union.m_IfcCurveStyle = value;
  if (value) {
    value->ref();
    m_type = IFCCURVESTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCURVESTYLE;
}

IfcSymbolStyle *IfcPresentationStyleSelect::getIfcSymbolStyle() {
  return m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle;
}

void IfcPresentationStyleSelect::setIfcSymbolStyle(IfcSymbolStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle = value;
  if (value) {
    value->ref();
    m_type = IFCSYMBOLSTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSYMBOLSTYLE;
}

IfcFillAreaStyle *IfcPresentationStyleSelect::getIfcFillAreaStyle() {
  return m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle;
}

void IfcPresentationStyleSelect::setIfcFillAreaStyle(IfcFillAreaStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle = value;
  if (value) {
    value->ref();
    m_type = IFCFILLAREASTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCFILLAREASTYLE;
}

IfcTextStyle *IfcPresentationStyleSelect::getIfcTextStyle() {
  return m_IfcPresentationStyleSelect_union.m_IfcTextStyle;
}

void IfcPresentationStyleSelect::setIfcTextStyle(IfcTextStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPresentationStyleSelect_union.m_IfcTextStyle = value;
  if (value) {
    value->ref();
    m_type = IFCTEXTSTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTEXTSTYLE;
}

IfcSurfaceStyle *IfcPresentationStyleSelect::getIfcSurfaceStyle() {
  return m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle;
}

void IfcPresentationStyleSelect::setIfcSurfaceStyle(IfcSurfaceStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle = value;
  if (value) {
    value->ref();
    m_type = IFCSURFACESTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSURFACESTYLE;
}

void IfcPresentationStyleSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcCurveStyle::getClassType())) {
    setIfcCurveStyle(static_cast< IfcCurveStyle* > (v));
  }
  else if (v->isOfType(IfcSymbolStyle::getClassType())) {
    setIfcSymbolStyle(static_cast< IfcSymbolStyle* > (v));
  }
  else if (v->isOfType(IfcFillAreaStyle::getClassType())) {
    setIfcFillAreaStyle(static_cast< IfcFillAreaStyle* > (v));
  }
  else if (v->isOfType(IfcTextStyle::getClassType())) {
    setIfcTextStyle(static_cast< IfcTextStyle* > (v));
  }
  else if (v->isOfType(IfcSurfaceStyle::getClassType())) {
    setIfcSurfaceStyle(static_cast< IfcSurfaceStyle* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationStyleSelect::s_type = new Step::ClassType_class("IfcPresentationStyleSelect");
