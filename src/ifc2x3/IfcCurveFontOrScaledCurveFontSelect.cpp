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



#include <ifc2x3/IfcCurveFontOrScaledCurveFontSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcCurveStyleFontAndScaling.h>
#include <ifc2x3/IfcPreDefinedCurveFont.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

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

bool IfcCurveFontOrScaledCurveFontSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveFontOrScaledCurveFontSelect(this);
}

bool IfcCurveFontOrScaledCurveFontSelect::init() {
    return false;
}

const std::string &IfcCurveFontOrScaledCurveFontSelect::type() const {
    return IfcCurveFontOrScaledCurveFontSelect::s_type.getName();
}

const Step::ClassType &IfcCurveFontOrScaledCurveFontSelect::getClassType() {
    return IfcCurveFontOrScaledCurveFontSelect::s_type;
}

const Step::ClassType &IfcCurveFontOrScaledCurveFontSelect::getType() const {
    return IfcCurveFontOrScaledCurveFontSelect::s_type;
}

bool IfcCurveFontOrScaledCurveFontSelect::isOfType(const Step::ClassType &t) const {
    return IfcCurveFontOrScaledCurveFontSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcCurveFontOrScaledCurveFontSelect::copy(const IfcCurveFontOrScaledCurveFontSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPREDEFINEDCURVEFONT:
        setIfcPreDefinedCurveFont((IfcPreDefinedCurveFont *) (copyop(obj.m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcPreDefinedCurveFont)));
        break;
    case IFCCURVESTYLEFONT:
        setIfcCurveStyleFont((IfcCurveStyleFont *) (copyop(obj.m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFont)));
        break;
    case IFCCURVESTYLEFONTANDSCALING:
        setIfcCurveStyleFontAndScaling((IfcCurveStyleFontAndScaling *) (copyop(obj.m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFontAndScaling)));
        break;
    default:
        break;
    }
}

std::string IfcCurveFontOrScaledCurveFontSelect::currentTypeName() const {
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

IfcCurveFontOrScaledCurveFontSelect::IfcCurveFontOrScaledCurveFontSelect_select IfcCurveFontOrScaledCurveFontSelect::currentType() const {
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
    default:
        break;
    }
    m_type = UNSET;
}

IfcPreDefinedCurveFont *IfcCurveFontOrScaledCurveFontSelect::getIfcPreDefinedCurveFont() const {
    if (m_type == IFCPREDEFINEDCURVEFONT) {
        return m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcPreDefinedCurveFont;
    }
    else {
        return NULL;
    }
}

void IfcCurveFontOrScaledCurveFontSelect::setIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
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

IfcCurveStyleFont *IfcCurveFontOrScaledCurveFontSelect::getIfcCurveStyleFont() const {
    if (m_type == IFCCURVESTYLEFONT) {
        return m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFont;
    }
    else {
        return NULL;
    }
}

void IfcCurveFontOrScaledCurveFontSelect::setIfcCurveStyleFont(IfcCurveStyleFont *value) {
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

IfcCurveStyleFontAndScaling *IfcCurveFontOrScaledCurveFontSelect::getIfcCurveStyleFontAndScaling() const {
    if (m_type == IFCCURVESTYLEFONTANDSCALING) {
        return m_IfcCurveFontOrScaledCurveFontSelect_union.m_IfcCurveStyleFontAndScaling;
    }
    else {
        return NULL;
    }
}

void IfcCurveFontOrScaledCurveFontSelect::setIfcCurveStyleFontAndScaling(IfcCurveStyleFontAndScaling *value) {
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
    if (v && v->isOfType(IfcPreDefinedCurveFont::getClassType())) {
        setIfcPreDefinedCurveFont(static_cast< IfcPreDefinedCurveFont* > (v));
    }
    else if (v && v->isOfType(IfcCurveStyleFont::getClassType())) {
        setIfcCurveStyleFont(static_cast< IfcCurveStyleFont* > (v));
    }
    else if (v && v->isOfType(IfcCurveStyleFontAndScaling::getClassType())) {
        setIfcCurveStyleFontAndScaling(static_cast< IfcCurveStyleFontAndScaling* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcCurveFontOrScaledCurveFontSelect::s_type("IfcCurveFontOrScaledCurveFontSelect");
