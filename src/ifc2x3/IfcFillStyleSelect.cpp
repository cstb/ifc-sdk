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



#include <ifc2x3/IfcFillStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcExternallyDefinedHatchStyle.h>
#include <ifc2x3/IfcFillAreaStyleHatching.h>
#include <ifc2x3/IfcFillAreaStyleTiles.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcFillStyleSelect::IfcFillStyleSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcFillStyleSelect::IfcFillStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcFillStyleSelect::~IfcFillStyleSelect() {
    deleteUnion();
}

bool IfcFillStyleSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillStyleSelect(this);
}

bool IfcFillStyleSelect::init() {
    return false;
}

const std::string &IfcFillStyleSelect::type() const {
    return IfcFillStyleSelect::s_type.getName();
}

const Step::ClassType &IfcFillStyleSelect::getClassType() {
    return IfcFillStyleSelect::s_type;
}

const Step::ClassType &IfcFillStyleSelect::getType() const {
    return IfcFillStyleSelect::s_type;
}

bool IfcFillStyleSelect::isOfType(const Step::ClassType &t) const {
    return IfcFillStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcFillStyleSelect::copy(const IfcFillStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCFILLAREASTYLEHATCHING:
        setIfcFillAreaStyleHatching((IfcFillAreaStyleHatching *) (copyop(obj.m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching)));
        break;
    case IFCFILLAREASTYLETILES:
        setIfcFillAreaStyleTiles((IfcFillAreaStyleTiles *) (copyop(obj.m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles)));
        break;
    case IFCCOLOURSPECIFICATION:
        setIfcColourSpecification((IfcColourSpecification *) (copyop(obj.m_IfcFillStyleSelect_union.m_IfcColourSpecification)));
        break;
    case IFCPREDEFINEDCOLOUR:
        setIfcPreDefinedColour((IfcPreDefinedColour *) (copyop(obj.m_IfcFillStyleSelect_union.m_IfcPreDefinedColour)));
        break;
    case IFCEXTERNALLYDEFINEDHATCHSTYLE:
        setIfcExternallyDefinedHatchStyle((IfcExternallyDefinedHatchStyle *) (copyop(obj.m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle)));
        break;
    default:
        break;
    }
}

std::string IfcFillStyleSelect::currentTypeName() const {
    switch(m_type) {
    case IFCFILLAREASTYLEHATCHING:
        return "IfcFillAreaStyleHatching";
        break;
    case IFCFILLAREASTYLETILES:
        return "IfcFillAreaStyleTiles";
        break;
    case IFCCOLOURSPECIFICATION:
        return "IfcColourSpecification";
        break;
    case IFCPREDEFINEDCOLOUR:
        return "IfcPreDefinedColour";
        break;
    case IFCEXTERNALLYDEFINEDHATCHSTYLE:
        return "IfcExternallyDefinedHatchStyle";
        break;
    default:
        return "UNSET";
    }
}

IfcFillStyleSelect::IfcFillStyleSelect_select IfcFillStyleSelect::currentType() const {
    return m_type;
}

void IfcFillStyleSelect::deleteUnion() {
    switch(m_type) {
    case IFCFILLAREASTYLEHATCHING:
        m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching->unref();
        break;
    case IFCFILLAREASTYLETILES:
        m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles->unref();
        break;
    case IFCCOLOURSPECIFICATION:
        m_IfcFillStyleSelect_union.m_IfcColourSpecification->unref();
        break;
    case IFCPREDEFINEDCOLOUR:
        m_IfcFillStyleSelect_union.m_IfcPreDefinedColour->unref();
        break;
    case IFCEXTERNALLYDEFINEDHATCHSTYLE:
        m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcFillAreaStyleHatching *IfcFillStyleSelect::getIfcFillAreaStyleHatching() const {
    if (m_type == IFCFILLAREASTYLEHATCHING) {
        return m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching;
    }
    else {
        return NULL;
    }
}

void IfcFillStyleSelect::setIfcFillAreaStyleHatching(IfcFillAreaStyleHatching *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcFillStyleSelect_union.m_IfcFillAreaStyleHatching = value;
    if (value) {
        value->ref();
        m_type = IFCFILLAREASTYLEHATCHING;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCFILLAREASTYLEHATCHING;
}

IfcFillAreaStyleTiles *IfcFillStyleSelect::getIfcFillAreaStyleTiles() const {
    if (m_type == IFCFILLAREASTYLETILES) {
        return m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles;
    }
    else {
        return NULL;
    }
}

void IfcFillStyleSelect::setIfcFillAreaStyleTiles(IfcFillAreaStyleTiles *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcFillStyleSelect_union.m_IfcFillAreaStyleTiles = value;
    if (value) {
        value->ref();
        m_type = IFCFILLAREASTYLETILES;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCFILLAREASTYLETILES;
}

IfcColourSpecification *IfcFillStyleSelect::getIfcColourSpecification() const {
    if (m_type == IFCCOLOURSPECIFICATION) {
        return m_IfcFillStyleSelect_union.m_IfcColourSpecification;
    }
    else {
        return NULL;
    }
}

void IfcFillStyleSelect::setIfcColourSpecification(IfcColourSpecification *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcFillStyleSelect_union.m_IfcColourSpecification = value;
    if (value) {
        value->ref();
        m_type = IFCCOLOURSPECIFICATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcFillStyleSelect::getIfcPreDefinedColour() const {
    if (m_type == IFCPREDEFINEDCOLOUR) {
        return m_IfcFillStyleSelect_union.m_IfcPreDefinedColour;
    }
    else {
        return NULL;
    }
}

void IfcFillStyleSelect::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcFillStyleSelect_union.m_IfcPreDefinedColour = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDCOLOUR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDCOLOUR;
}

IfcExternallyDefinedHatchStyle *IfcFillStyleSelect::getIfcExternallyDefinedHatchStyle() const {
    if (m_type == IFCEXTERNALLYDEFINEDHATCHSTYLE) {
        return m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle;
    }
    else {
        return NULL;
    }
}

void IfcFillStyleSelect::setIfcExternallyDefinedHatchStyle(IfcExternallyDefinedHatchStyle *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcFillStyleSelect_union.m_IfcExternallyDefinedHatchStyle = value;
    if (value) {
        value->ref();
        m_type = IFCEXTERNALLYDEFINEDHATCHSTYLE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEXTERNALLYDEFINEDHATCHSTYLE;
}

void IfcFillStyleSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcFillAreaStyleHatching::getClassType())) {
        setIfcFillAreaStyleHatching(static_cast< IfcFillAreaStyleHatching* > (v));
    }
    else if (v && v->isOfType(IfcFillAreaStyleTiles::getClassType())) {
        setIfcFillAreaStyleTiles(static_cast< IfcFillAreaStyleTiles* > (v));
    }
    else if (v && v->isOfType(IfcColourSpecification::getClassType())) {
        setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
    }
    else if (v && v->isOfType(IfcPreDefinedColour::getClassType())) {
        setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
    }
    else if (v && v->isOfType(IfcExternallyDefinedHatchStyle::getClassType())) {
        setIfcExternallyDefinedHatchStyle(static_cast< IfcExternallyDefinedHatchStyle* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcFillStyleSelect::s_type("IfcFillStyleSelect");
