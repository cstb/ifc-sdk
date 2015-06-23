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



#include <ifc2x3/IfcPresentationStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurveStyle.h>
#include <ifc2x3/IfcFillAreaStyle.h>
#include <ifc2x3/IfcSurfaceStyle.h>
#include <ifc2x3/IfcSymbolStyle.h>
#include <ifc2x3/IfcTextStyle.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

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

bool IfcPresentationStyleSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPresentationStyleSelect(this);
}

bool IfcPresentationStyleSelect::init() {
    return false;
}

const std::string &IfcPresentationStyleSelect::type() const {
    return IfcPresentationStyleSelect::s_type.getName();
}

const Step::ClassType &IfcPresentationStyleSelect::getClassType() {
    return IfcPresentationStyleSelect::s_type;
}

const Step::ClassType &IfcPresentationStyleSelect::getType() const {
    return IfcPresentationStyleSelect::s_type;
}

bool IfcPresentationStyleSelect::isOfType(const Step::ClassType &t) const {
    return IfcPresentationStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcPresentationStyleSelect::copy(const IfcPresentationStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCNULLSTYLE:
        setIfcNullStyle(obj.m_IfcPresentationStyleSelect_union.m_IfcNullStyle);
        break;
    case IFCCURVESTYLE:
        setIfcCurveStyle((IfcCurveStyle *) (copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcCurveStyle)));
        break;
    case IFCSYMBOLSTYLE:
        setIfcSymbolStyle((IfcSymbolStyle *) (copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle)));
        break;
    case IFCFILLAREASTYLE:
        setIfcFillAreaStyle((IfcFillAreaStyle *) (copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle)));
        break;
    case IFCTEXTSTYLE:
        setIfcTextStyle((IfcTextStyle *) (copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcTextStyle)));
        break;
    case IFCSURFACESTYLE:
        setIfcSurfaceStyle((IfcSurfaceStyle *) (copyop(obj.m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle)));
        break;
    default:
        break;
    }
}

std::string IfcPresentationStyleSelect::currentTypeName() const {
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

IfcPresentationStyleSelect::IfcPresentationStyleSelect_select IfcPresentationStyleSelect::currentType() const {
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
    default:
        break;
    }
    m_type = UNSET;
}

IfcNullStyle IfcPresentationStyleSelect::getIfcNullStyle() const {
    if (m_type == IFCNULLSTYLE) {
        return m_IfcPresentationStyleSelect_union.m_IfcNullStyle;
    }
    else {
        return IfcNullStyle_UNSET;
    }
}

void IfcPresentationStyleSelect::setIfcNullStyle(IfcNullStyle value) {
    m_IfcPresentationStyleSelect_union.m_IfcNullStyle = value;
    m_type = IFCNULLSTYLE;
}

IfcCurveStyle *IfcPresentationStyleSelect::getIfcCurveStyle() const {
    if (m_type == IFCCURVESTYLE) {
        return m_IfcPresentationStyleSelect_union.m_IfcCurveStyle;
    }
    else {
        return NULL;
    }
}

void IfcPresentationStyleSelect::setIfcCurveStyle(IfcCurveStyle *value) {
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

IfcSymbolStyle *IfcPresentationStyleSelect::getIfcSymbolStyle() const {
    if (m_type == IFCSYMBOLSTYLE) {
        return m_IfcPresentationStyleSelect_union.m_IfcSymbolStyle;
    }
    else {
        return NULL;
    }
}

void IfcPresentationStyleSelect::setIfcSymbolStyle(IfcSymbolStyle *value) {
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

IfcFillAreaStyle *IfcPresentationStyleSelect::getIfcFillAreaStyle() const {
    if (m_type == IFCFILLAREASTYLE) {
        return m_IfcPresentationStyleSelect_union.m_IfcFillAreaStyle;
    }
    else {
        return NULL;
    }
}

void IfcPresentationStyleSelect::setIfcFillAreaStyle(IfcFillAreaStyle *value) {
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

IfcTextStyle *IfcPresentationStyleSelect::getIfcTextStyle() const {
    if (m_type == IFCTEXTSTYLE) {
        return m_IfcPresentationStyleSelect_union.m_IfcTextStyle;
    }
    else {
        return NULL;
    }
}

void IfcPresentationStyleSelect::setIfcTextStyle(IfcTextStyle *value) {
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

IfcSurfaceStyle *IfcPresentationStyleSelect::getIfcSurfaceStyle() const {
    if (m_type == IFCSURFACESTYLE) {
        return m_IfcPresentationStyleSelect_union.m_IfcSurfaceStyle;
    }
    else {
        return NULL;
    }
}

void IfcPresentationStyleSelect::setIfcSurfaceStyle(IfcSurfaceStyle *value) {
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
    if (v && v->isOfType(IfcCurveStyle::getClassType())) {
        setIfcCurveStyle(static_cast< IfcCurveStyle* > (v));
    }
    else if (v && v->isOfType(IfcSymbolStyle::getClassType())) {
        setIfcSymbolStyle(static_cast< IfcSymbolStyle* > (v));
    }
    else if (v && v->isOfType(IfcFillAreaStyle::getClassType())) {
        setIfcFillAreaStyle(static_cast< IfcFillAreaStyle* > (v));
    }
    else if (v && v->isOfType(IfcTextStyle::getClassType())) {
        setIfcTextStyle(static_cast< IfcTextStyle* > (v));
    }
    else if (v && v->isOfType(IfcSurfaceStyle::getClassType())) {
        setIfcSurfaceStyle(static_cast< IfcSurfaceStyle* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcPresentationStyleSelect::s_type("IfcPresentationStyleSelect");
