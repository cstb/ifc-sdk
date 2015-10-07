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



#include <ifc2x3/IfcTrimmingSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcTrimmingSelect::IfcTrimmingSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcTrimmingSelect::IfcTrimmingSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcTrimmingSelect::~IfcTrimmingSelect() {
    deleteUnion();
}

bool IfcTrimmingSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTrimmingSelect(this);
}

bool IfcTrimmingSelect::init() {
    return false;
}

const std::string &IfcTrimmingSelect::type() const {
    return IfcTrimmingSelect::s_type.getName();
}

const Step::ClassType &IfcTrimmingSelect::getClassType() {
    return IfcTrimmingSelect::s_type;
}

const Step::ClassType &IfcTrimmingSelect::getType() const {
    return IfcTrimmingSelect::s_type;
}

bool IfcTrimmingSelect::isOfType(const Step::ClassType &t) const {
    return IfcTrimmingSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcTrimmingSelect::copy(const IfcTrimmingSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCARTESIANPOINT:
        setIfcCartesianPoint((IfcCartesianPoint *) (copyop(obj.m_IfcTrimmingSelect_union.m_IfcCartesianPoint)));
        break;
    case IFCPARAMETERVALUE:
        setIfcParameterValue(obj.m_IfcTrimmingSelect_union.m_IfcParameterValue);
        break;
    default:
        break;
    }
}

std::string IfcTrimmingSelect::currentTypeName() const {
    switch(m_type) {
    case IFCCARTESIANPOINT:
        return "IfcCartesianPoint";
        break;
    case IFCPARAMETERVALUE:
        return "IfcParameterValue";
        break;
    default:
        return "UNSET";
    }
}

IfcTrimmingSelect::IfcTrimmingSelect_select IfcTrimmingSelect::currentType() const {
    return m_type;
}

void IfcTrimmingSelect::deleteUnion() {
    switch(m_type) {
    case IFCCARTESIANPOINT:
        m_IfcTrimmingSelect_union.m_IfcCartesianPoint->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcCartesianPoint *IfcTrimmingSelect::getIfcCartesianPoint() const {
    if (m_type == IFCCARTESIANPOINT) {
        return m_IfcTrimmingSelect_union.m_IfcCartesianPoint;
    }
    else {
        return NULL;
    }
}

void IfcTrimmingSelect::setIfcCartesianPoint(IfcCartesianPoint *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcTrimmingSelect_union.m_IfcCartesianPoint = value;
    if (value) {
        value->ref();
        m_type = IFCCARTESIANPOINT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCARTESIANPOINT;
}

IfcParameterValue IfcTrimmingSelect::getIfcParameterValue() const {
    if (m_type == IFCPARAMETERVALUE) {
        return m_IfcTrimmingSelect_union.m_IfcParameterValue;
    }
    else {
        return Step::getUnset(m_IfcTrimmingSelect_union.m_IfcParameterValue);
    }
}

void IfcTrimmingSelect::setIfcParameterValue(IfcParameterValue value) {
    m_IfcTrimmingSelect_union.m_IfcParameterValue = value;
    m_type = IFCPARAMETERVALUE;
}

void IfcTrimmingSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcCartesianPoint::getClassType())) {
        setIfcCartesianPoint(static_cast< IfcCartesianPoint* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcTrimmingSelect::s_type("IfcTrimmingSelect");
