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



#include <ifc2x3/IfcCurveStyleFontSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcPreDefinedCurveFont.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcCurveStyleFontSelect::IfcCurveStyleFontSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcCurveStyleFontSelect::IfcCurveStyleFontSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcCurveStyleFontSelect::~IfcCurveStyleFontSelect() {
    deleteUnion();
}

bool IfcCurveStyleFontSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveStyleFontSelect(this);
}

bool IfcCurveStyleFontSelect::init() {
    return false;
}

const std::string &IfcCurveStyleFontSelect::type() const {
    return IfcCurveStyleFontSelect::s_type.getName();
}

const Step::ClassType &IfcCurveStyleFontSelect::getClassType() {
    return IfcCurveStyleFontSelect::s_type;
}

const Step::ClassType &IfcCurveStyleFontSelect::getType() const {
    return IfcCurveStyleFontSelect::s_type;
}

bool IfcCurveStyleFontSelect::isOfType(const Step::ClassType &t) const {
    return IfcCurveStyleFontSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcCurveStyleFontSelect::copy(const IfcCurveStyleFontSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPREDEFINEDCURVEFONT:
        setIfcPreDefinedCurveFont((IfcPreDefinedCurveFont *) (copyop(obj.m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont)));
        break;
    case IFCCURVESTYLEFONT:
        setIfcCurveStyleFont((IfcCurveStyleFont *) (copyop(obj.m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont)));
        break;
    default:
        break;
    }
}

std::string IfcCurveStyleFontSelect::currentTypeName() const {
    switch(m_type) {
    case IFCPREDEFINEDCURVEFONT:
        return "IfcPreDefinedCurveFont";
        break;
    case IFCCURVESTYLEFONT:
        return "IfcCurveStyleFont";
        break;
    default:
        return "UNSET";
    }
}

IfcCurveStyleFontSelect::IfcCurveStyleFontSelect_select IfcCurveStyleFontSelect::currentType() const {
    return m_type;
}

void IfcCurveStyleFontSelect::deleteUnion() {
    switch(m_type) {
    case IFCPREDEFINEDCURVEFONT:
        m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont->unref();
        break;
    case IFCCURVESTYLEFONT:
        m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcPreDefinedCurveFont *IfcCurveStyleFontSelect::getIfcPreDefinedCurveFont() const {
    if (m_type == IFCPREDEFINEDCURVEFONT) {
        return m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont;
    }
    else {
        return NULL;
    }
}

void IfcCurveStyleFontSelect::setIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDCURVEFONT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDCURVEFONT;
}

IfcCurveStyleFont *IfcCurveStyleFontSelect::getIfcCurveStyleFont() const {
    if (m_type == IFCCURVESTYLEFONT) {
        return m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont;
    }
    else {
        return NULL;
    }
}

void IfcCurveStyleFontSelect::setIfcCurveStyleFont(IfcCurveStyleFont *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont = value;
    if (value) {
        value->ref();
        m_type = IFCCURVESTYLEFONT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCURVESTYLEFONT;
}

void IfcCurveStyleFontSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcPreDefinedCurveFont::getClassType())) {
        setIfcPreDefinedCurveFont(static_cast< IfcPreDefinedCurveFont* > (v));
    }
    else if (v && v->isOfType(IfcCurveStyleFont::getClassType())) {
        setIfcCurveStyleFont(static_cast< IfcCurveStyleFont* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcCurveStyleFontSelect::s_type("IfcCurveStyleFontSelect");
