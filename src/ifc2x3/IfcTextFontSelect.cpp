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
#include <ifc2x3/IfcTextFontSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcExternallyDefinedTextFont.h>
#include <ifc2x3/IfcPreDefinedTextFont.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcTextFontSelect::IfcTextFontSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcTextFontSelect::IfcTextFontSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcTextFontSelect::~IfcTextFontSelect() {
  deleteUnion();
}

bool IfcTextFontSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextFontSelect(this);
}

bool IfcTextFontSelect::init() {
  return false;
}

const char *IfcTextFontSelect::type() {
  return "IfcTextFontSelect";
}

Step::ClassType IfcTextFontSelect::getClassType() {
  return IfcTextFontSelect::s_type;
}

Step::ClassType IfcTextFontSelect::getType() const {
  return IfcTextFontSelect::s_type;
}

bool IfcTextFontSelect::isOfType(Step::ClassType t) {
  return IfcTextFontSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcTextFontSelect::currentTypeName() {
  switch(m_type) {
  case IFCPREDEFINEDTEXTFONT:
    return "IfcPreDefinedTextFont";
    break;
  case IFCEXTERNALLYDEFINEDTEXTFONT:
    return "IfcExternallyDefinedTextFont";
    break;
  default:
    return "UNSET";
  }
}

IfcTextFontSelect::IfcTextFontSelect_select IfcTextFontSelect::currentType() {
  return m_type;
}

void IfcTextFontSelect::deleteUnion() {
  switch(m_type) {
  case IFCPREDEFINEDTEXTFONT:
    m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont->unref();
    break;
  case IFCEXTERNALLYDEFINEDTEXTFONT:
    m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont->unref();
    break;
    }
  m_type = UNSET;
}

IfcPreDefinedTextFont *IfcTextFontSelect::getIfcPreDefinedTextFont() {
  return m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont;
}

void IfcTextFontSelect::setIfcPreDefinedTextFont(IfcPreDefinedTextFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcTextFontSelect_union.m_IfcPreDefinedTextFont = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDTEXTFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDTEXTFONT;
}

IfcExternallyDefinedTextFont *IfcTextFontSelect::getIfcExternallyDefinedTextFont() {
  return m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont;
}

void IfcTextFontSelect::setIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcTextFontSelect_union.m_IfcExternallyDefinedTextFont = value;
  if (value) {
    value->ref();
    m_type = IFCEXTERNALLYDEFINEDTEXTFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEXTERNALLYDEFINEDTEXTFONT;
}

void IfcTextFontSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcPreDefinedTextFont::getClassType())) {
    setIfcPreDefinedTextFont(static_cast< IfcPreDefinedTextFont* > (v));
  }
  else if (v->isOfType(IfcExternallyDefinedTextFont::getClassType())) {
    setIfcExternallyDefinedTextFont(static_cast< IfcExternallyDefinedTextFont* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcTextFontSelect::s_type = new Step::ClassType_class("IfcTextFontSelect");
