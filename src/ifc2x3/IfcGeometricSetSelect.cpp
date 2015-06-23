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



#include <ifc2x3/IfcGeometricSetSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcGeometricSetSelect::IfcGeometricSetSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcGeometricSetSelect::IfcGeometricSetSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcGeometricSetSelect::~IfcGeometricSetSelect() {
    deleteUnion();
}

bool IfcGeometricSetSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricSetSelect(this);
}

bool IfcGeometricSetSelect::init() {
    return false;
}

const std::string &IfcGeometricSetSelect::type() const {
    return IfcGeometricSetSelect::s_type.getName();
}

const Step::ClassType &IfcGeometricSetSelect::getClassType() {
    return IfcGeometricSetSelect::s_type;
}

const Step::ClassType &IfcGeometricSetSelect::getType() const {
    return IfcGeometricSetSelect::s_type;
}

bool IfcGeometricSetSelect::isOfType(const Step::ClassType &t) const {
    return IfcGeometricSetSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcGeometricSetSelect::copy(const IfcGeometricSetSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPOINT:
        setIfcPoint((IfcPoint *) (copyop(obj.m_IfcGeometricSetSelect_union.m_IfcPoint)));
        break;
    case IFCCURVE:
        setIfcCurve((IfcCurve *) (copyop(obj.m_IfcGeometricSetSelect_union.m_IfcCurve)));
        break;
    case IFCSURFACE:
        setIfcSurface((IfcSurface *) (copyop(obj.m_IfcGeometricSetSelect_union.m_IfcSurface)));
        break;
    default:
        break;
    }
}

std::string IfcGeometricSetSelect::currentTypeName() const {
    switch(m_type) {
    case IFCPOINT:
        return "IfcPoint";
        break;
    case IFCCURVE:
        return "IfcCurve";
        break;
    case IFCSURFACE:
        return "IfcSurface";
        break;
    default:
        return "UNSET";
    }
}

IfcGeometricSetSelect::IfcGeometricSetSelect_select IfcGeometricSetSelect::currentType() const {
    return m_type;
}

void IfcGeometricSetSelect::deleteUnion() {
    switch(m_type) {
    case IFCPOINT:
        m_IfcGeometricSetSelect_union.m_IfcPoint->unref();
        break;
    case IFCCURVE:
        m_IfcGeometricSetSelect_union.m_IfcCurve->unref();
        break;
    case IFCSURFACE:
        m_IfcGeometricSetSelect_union.m_IfcSurface->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcPoint *IfcGeometricSetSelect::getIfcPoint() const {
    if (m_type == IFCPOINT) {
        return m_IfcGeometricSetSelect_union.m_IfcPoint;
    }
    else {
        return NULL;
    }
}

void IfcGeometricSetSelect::setIfcPoint(IfcPoint *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcGeometricSetSelect_union.m_IfcPoint = value;
    if (value) {
        value->ref();
        m_type = IFCPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPOINT;
}

IfcCurve *IfcGeometricSetSelect::getIfcCurve() const {
    if (m_type == IFCCURVE) {
        return m_IfcGeometricSetSelect_union.m_IfcCurve;
    }
    else {
        return NULL;
    }
}

void IfcGeometricSetSelect::setIfcCurve(IfcCurve *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcGeometricSetSelect_union.m_IfcCurve = value;
    if (value) {
        value->ref();
        m_type = IFCCURVE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCURVE;
}

IfcSurface *IfcGeometricSetSelect::getIfcSurface() const {
    if (m_type == IFCSURFACE) {
        return m_IfcGeometricSetSelect_union.m_IfcSurface;
    }
    else {
        return NULL;
    }
}

void IfcGeometricSetSelect::setIfcSurface(IfcSurface *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcGeometricSetSelect_union.m_IfcSurface = value;
    if (value) {
        value->ref();
        m_type = IFCSURFACE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCSURFACE;
}

void IfcGeometricSetSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcPoint::getClassType())) {
        setIfcPoint(static_cast< IfcPoint* > (v));
    }
    else if (v && v->isOfType(IfcCurve::getClassType())) {
        setIfcCurve(static_cast< IfcCurve* > (v));
    }
    else if (v && v->isOfType(IfcSurface::getClassType())) {
        setIfcSurface(static_cast< IfcSurface* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcGeometricSetSelect::s_type("IfcGeometricSetSelect");
