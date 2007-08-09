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
#include <ifc2x3/IfcSurfaceStyleElementSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcExternallyDefinedSurfaceStyle.h>
#include <ifc2x3/IfcSurfaceStyleLighting.h>
#include <ifc2x3/IfcSurfaceStyleRefraction.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <ifc2x3/IfcSurfaceStyleWithTextures.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcSurfaceStyleElementSelect::IfcSurfaceStyleElementSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcSurfaceStyleElementSelect::IfcSurfaceStyleElementSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcSurfaceStyleElementSelect::~IfcSurfaceStyleElementSelect() {
  deleteUnion();
}

bool IfcSurfaceStyleElementSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyleElementSelect(this);
}

bool IfcSurfaceStyleElementSelect::init() {
  return false;
}

const char *IfcSurfaceStyleElementSelect::type() {
  return "IfcSurfaceStyleElementSelect";
}

Step::ClassType IfcSurfaceStyleElementSelect::getClassType() {
  return IfcSurfaceStyleElementSelect::s_type;
}

Step::ClassType IfcSurfaceStyleElementSelect::getType() const {
  return IfcSurfaceStyleElementSelect::s_type;
}

bool IfcSurfaceStyleElementSelect::isOfType(Step::ClassType t) {
  return IfcSurfaceStyleElementSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcSurfaceStyleElementSelect::currentTypeName() {
  switch(m_type) {
  case IFCSURFACESTYLESHADING:
    return "IfcSurfaceStyleShading";
    break;
  case IFCSURFACESTYLELIGHTING:
    return "IfcSurfaceStyleLighting";
    break;
  case IFCSURFACESTYLEWITHTEXTURES:
    return "IfcSurfaceStyleWithTextures";
    break;
  case IFCEXTERNALLYDEFINEDSURFACESTYLE:
    return "IfcExternallyDefinedSurfaceStyle";
    break;
  case IFCSURFACESTYLEREFRACTION:
    return "IfcSurfaceStyleRefraction";
    break;
  default:
    return "UNSET";
  }
}

IfcSurfaceStyleElementSelect::IfcSurfaceStyleElementSelect_select IfcSurfaceStyleElementSelect::currentType() {
  return m_type;
}

void IfcSurfaceStyleElementSelect::deleteUnion() {
  switch(m_type) {
  case IFCSURFACESTYLESHADING:
    m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleShading->unref();
    break;
  case IFCSURFACESTYLELIGHTING:
    m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleLighting->unref();
    break;
  case IFCSURFACESTYLEWITHTEXTURES:
    m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleWithTextures->unref();
    break;
  case IFCEXTERNALLYDEFINEDSURFACESTYLE:
    m_IfcSurfaceStyleElementSelect_union.m_IfcExternallyDefinedSurfaceStyle->unref();
    break;
  case IFCSURFACESTYLEREFRACTION:
    m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleRefraction->unref();
    break;
    }
  m_type = UNSET;
}

IfcSurfaceStyleShading *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleShading() {
  return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleShading;
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleShading = value;
  if (value) {
    value->ref();
    m_type = IFCSURFACESTYLESHADING;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSURFACESTYLESHADING;
}

IfcSurfaceStyleLighting *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleLighting() {
  return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleLighting;
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleLighting = value;
  if (value) {
    value->ref();
    m_type = IFCSURFACESTYLELIGHTING;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSURFACESTYLELIGHTING;
}

IfcSurfaceStyleWithTextures *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleWithTextures() {
  return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleWithTextures;
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleWithTextures = value;
  if (value) {
    value->ref();
    m_type = IFCSURFACESTYLEWITHTEXTURES;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSURFACESTYLEWITHTEXTURES;
}

IfcExternallyDefinedSurfaceStyle *IfcSurfaceStyleElementSelect::getIfcExternallyDefinedSurfaceStyle() {
  return m_IfcSurfaceStyleElementSelect_union.m_IfcExternallyDefinedSurfaceStyle;
}

void IfcSurfaceStyleElementSelect::setIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceStyleElementSelect_union.m_IfcExternallyDefinedSurfaceStyle = value;
  if (value) {
    value->ref();
    m_type = IFCEXTERNALLYDEFINEDSURFACESTYLE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEXTERNALLYDEFINEDSURFACESTYLE;
}

IfcSurfaceStyleRefraction *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleRefraction() {
  return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleRefraction;
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleRefraction = value;
  if (value) {
    value->ref();
    m_type = IFCSURFACESTYLEREFRACTION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCSURFACESTYLEREFRACTION;
}

void IfcSurfaceStyleElementSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcSurfaceStyleShading::getClassType())) {
    setIfcSurfaceStyleShading(static_cast< IfcSurfaceStyleShading* > (v));
  }
  else if (v->isOfType(IfcSurfaceStyleLighting::getClassType())) {
    setIfcSurfaceStyleLighting(static_cast< IfcSurfaceStyleLighting* > (v));
  }
  else if (v->isOfType(IfcSurfaceStyleWithTextures::getClassType())) {
    setIfcSurfaceStyleWithTextures(static_cast< IfcSurfaceStyleWithTextures* > (v));
  }
  else if (v->isOfType(IfcExternallyDefinedSurfaceStyle::getClassType())) {
    setIfcExternallyDefinedSurfaceStyle(static_cast< IfcExternallyDefinedSurfaceStyle* > (v));
  }
  else if (v->isOfType(IfcSurfaceStyleRefraction::getClassType())) {
    setIfcSurfaceStyleRefraction(static_cast< IfcSurfaceStyleRefraction* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleElementSelect::s_type = new Step::ClassType_class("IfcSurfaceStyleElementSelect");
