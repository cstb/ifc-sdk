// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcSurfaceStyleElementSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcExternallyDefinedSurfaceStyle.h>
#include <ifc2x3/IfcSurfaceStyleLighting.h>
#include <ifc2x3/IfcSurfaceStyleRefraction.h>
#include <ifc2x3/IfcSurfaceStyleShading.h>
#include <ifc2x3/IfcSurfaceStyleWithTextures.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

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

bool IfcSurfaceStyleElementSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleElementSelect(this);
}

bool IfcSurfaceStyleElementSelect::init() {
    return false;
}

const std::string &IfcSurfaceStyleElementSelect::type() const {
    return IfcSurfaceStyleElementSelect::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleElementSelect::getClassType() {
    return IfcSurfaceStyleElementSelect::s_type;
}

const Step::ClassType &IfcSurfaceStyleElementSelect::getType() const {
    return IfcSurfaceStyleElementSelect::s_type;
}

bool IfcSurfaceStyleElementSelect::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleElementSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSurfaceStyleElementSelect::copy(const IfcSurfaceStyleElementSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCSURFACESTYLESHADING:
        setIfcSurfaceStyleShading((IfcSurfaceStyleShading *) (copyop(obj.m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleShading)));
        break;
    case IFCSURFACESTYLELIGHTING:
        setIfcSurfaceStyleLighting((IfcSurfaceStyleLighting *) (copyop(obj.m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleLighting)));
        break;
    case IFCSURFACESTYLEWITHTEXTURES:
        setIfcSurfaceStyleWithTextures((IfcSurfaceStyleWithTextures *) (copyop(obj.m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleWithTextures)));
        break;
    case IFCEXTERNALLYDEFINEDSURFACESTYLE:
        setIfcExternallyDefinedSurfaceStyle((IfcExternallyDefinedSurfaceStyle *) (copyop(obj.m_IfcSurfaceStyleElementSelect_union.m_IfcExternallyDefinedSurfaceStyle)));
        break;
    case IFCSURFACESTYLEREFRACTION:
        setIfcSurfaceStyleRefraction((IfcSurfaceStyleRefraction *) (copyop(obj.m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleRefraction)));
        break;
    default:
        break;
    }
}

std::string IfcSurfaceStyleElementSelect::currentTypeName() const {
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

IfcSurfaceStyleElementSelect::IfcSurfaceStyleElementSelect_select IfcSurfaceStyleElementSelect::currentType() const {
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
    default:
        break;
    }
    m_type = UNSET;
}

IfcSurfaceStyleShading *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleShading() const {
    if (m_type == IFCSURFACESTYLESHADING) {
        return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleShading;
    }
    else {
        return NULL;
    }
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleShading(IfcSurfaceStyleShading *value) {
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

IfcSurfaceStyleLighting *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleLighting() const {
    if (m_type == IFCSURFACESTYLELIGHTING) {
        return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleLighting;
    }
    else {
        return NULL;
    }
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleLighting(IfcSurfaceStyleLighting *value) {
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

IfcSurfaceStyleWithTextures *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleWithTextures() const {
    if (m_type == IFCSURFACESTYLEWITHTEXTURES) {
        return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleWithTextures;
    }
    else {
        return NULL;
    }
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleWithTextures(IfcSurfaceStyleWithTextures *value) {
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

IfcExternallyDefinedSurfaceStyle *IfcSurfaceStyleElementSelect::getIfcExternallyDefinedSurfaceStyle() const {
    if (m_type == IFCEXTERNALLYDEFINEDSURFACESTYLE) {
        return m_IfcSurfaceStyleElementSelect_union.m_IfcExternallyDefinedSurfaceStyle;
    }
    else {
        return NULL;
    }
}

void IfcSurfaceStyleElementSelect::setIfcExternallyDefinedSurfaceStyle(IfcExternallyDefinedSurfaceStyle *value) {
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

IfcSurfaceStyleRefraction *IfcSurfaceStyleElementSelect::getIfcSurfaceStyleRefraction() const {
    if (m_type == IFCSURFACESTYLEREFRACTION) {
        return m_IfcSurfaceStyleElementSelect_union.m_IfcSurfaceStyleRefraction;
    }
    else {
        return NULL;
    }
}

void IfcSurfaceStyleElementSelect::setIfcSurfaceStyleRefraction(IfcSurfaceStyleRefraction *value) {
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
    if (v && v->isOfType(IfcSurfaceStyleShading::getClassType())) {
        setIfcSurfaceStyleShading(static_cast< IfcSurfaceStyleShading* > (v));
    }
    else if (v && v->isOfType(IfcSurfaceStyleLighting::getClassType())) {
        setIfcSurfaceStyleLighting(static_cast< IfcSurfaceStyleLighting* > (v));
    }
    else if (v && v->isOfType(IfcSurfaceStyleWithTextures::getClassType())) {
        setIfcSurfaceStyleWithTextures(static_cast< IfcSurfaceStyleWithTextures* > (v));
    }
    else if (v && v->isOfType(IfcExternallyDefinedSurfaceStyle::getClassType())) {
        setIfcExternallyDefinedSurfaceStyle(static_cast< IfcExternallyDefinedSurfaceStyle* > (v));
    }
    else if (v && v->isOfType(IfcSurfaceStyleRefraction::getClassType())) {
        setIfcSurfaceStyleRefraction(static_cast< IfcSurfaceStyleRefraction* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceStyleElementSelect::s_type("IfcSurfaceStyleElementSelect");
