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



#include <ifc2x3/IfcPointOrVertexPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/IfcVertexPoint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcPointOrVertexPoint::IfcPointOrVertexPoint() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcPointOrVertexPoint::IfcPointOrVertexPoint(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcPointOrVertexPoint::~IfcPointOrVertexPoint() {
    deleteUnion();
}

bool IfcPointOrVertexPoint::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPointOrVertexPoint(this);
}

bool IfcPointOrVertexPoint::init() {
    return false;
}

const std::string &IfcPointOrVertexPoint::type() const {
    return IfcPointOrVertexPoint::s_type.getName();
}

const Step::ClassType &IfcPointOrVertexPoint::getClassType() {
    return IfcPointOrVertexPoint::s_type;
}

const Step::ClassType &IfcPointOrVertexPoint::getType() const {
    return IfcPointOrVertexPoint::s_type;
}

bool IfcPointOrVertexPoint::isOfType(const Step::ClassType &t) const {
    return IfcPointOrVertexPoint::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcPointOrVertexPoint::copy(const IfcPointOrVertexPoint &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPOINT:
        setIfcPoint((IfcPoint *) (copyop(obj.m_IfcPointOrVertexPoint_union.m_IfcPoint)));
        break;
    case IFCVERTEXPOINT:
        setIfcVertexPoint((IfcVertexPoint *) (copyop(obj.m_IfcPointOrVertexPoint_union.m_IfcVertexPoint)));
        break;
    default:
        break;
    }
}

std::string IfcPointOrVertexPoint::currentTypeName() const {
    switch(m_type) {
    case IFCPOINT:
        return "IfcPoint";
        break;
    case IFCVERTEXPOINT:
        return "IfcVertexPoint";
        break;
    default:
        return "UNSET";
    }
}

IfcPointOrVertexPoint::IfcPointOrVertexPoint_select IfcPointOrVertexPoint::currentType() const {
    return m_type;
}

void IfcPointOrVertexPoint::deleteUnion() {
    switch(m_type) {
    case IFCPOINT:
        m_IfcPointOrVertexPoint_union.m_IfcPoint->unref();
        break;
    case IFCVERTEXPOINT:
        m_IfcPointOrVertexPoint_union.m_IfcVertexPoint->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcPoint *IfcPointOrVertexPoint::getIfcPoint() const {
    if (m_type == IFCPOINT) {
        return m_IfcPointOrVertexPoint_union.m_IfcPoint;
    }
    else {
        return NULL;
    }
}

void IfcPointOrVertexPoint::setIfcPoint(IfcPoint *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPointOrVertexPoint_union.m_IfcPoint = value;
    if (value) {
        value->ref();
        m_type = IFCPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPOINT;
}

IfcVertexPoint *IfcPointOrVertexPoint::getIfcVertexPoint() const {
    if (m_type == IFCVERTEXPOINT) {
        return m_IfcPointOrVertexPoint_union.m_IfcVertexPoint;
    }
    else {
        return NULL;
    }
}

void IfcPointOrVertexPoint::setIfcVertexPoint(IfcVertexPoint *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcPointOrVertexPoint_union.m_IfcVertexPoint = value;
    if (value) {
        value->ref();
        m_type = IFCVERTEXPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCVERTEXPOINT;
}

void IfcPointOrVertexPoint::set(Step::BaseObject *v) {
    if (v->isOfType(IfcPoint::getClassType())) {
        setIfcPoint(static_cast< IfcPoint* > (v));
    }
    else if (v->isOfType(IfcVertexPoint::getClassType())) {
        setIfcVertexPoint(static_cast< IfcVertexPoint* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcPointOrVertexPoint::s_type("IfcPointOrVertexPoint");
