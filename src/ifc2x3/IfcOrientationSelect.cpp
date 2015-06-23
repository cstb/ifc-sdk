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



#include <ifc2x3/IfcOrientationSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcOrientationSelect::IfcOrientationSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcOrientationSelect::IfcOrientationSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcOrientationSelect::~IfcOrientationSelect() {
    deleteUnion();
}

bool IfcOrientationSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOrientationSelect(this);
}

bool IfcOrientationSelect::init() {
    return false;
}

const std::string &IfcOrientationSelect::type() const {
    return IfcOrientationSelect::s_type.getName();
}

const Step::ClassType &IfcOrientationSelect::getClassType() {
    return IfcOrientationSelect::s_type;
}

const Step::ClassType &IfcOrientationSelect::getType() const {
    return IfcOrientationSelect::s_type;
}

bool IfcOrientationSelect::isOfType(const Step::ClassType &t) const {
    return IfcOrientationSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcOrientationSelect::copy(const IfcOrientationSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPLANEANGLEMEASURE:
        setIfcPlaneAngleMeasure(obj.m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure);
        break;
    case IFCDIRECTION:
        setIfcDirection((IfcDirection *) (copyop(obj.m_IfcOrientationSelect_union.m_IfcDirection)));
        break;
    default:
        break;
    }
}

std::string IfcOrientationSelect::currentTypeName() const {
    switch(m_type) {
    case IFCPLANEANGLEMEASURE:
        return "IfcPlaneAngleMeasure";
        break;
    case IFCDIRECTION:
        return "IfcDirection";
        break;
    default:
        return "UNSET";
    }
}

IfcOrientationSelect::IfcOrientationSelect_select IfcOrientationSelect::currentType() const {
    return m_type;
}

void IfcOrientationSelect::deleteUnion() {
    switch(m_type) {
    case IFCDIRECTION:
        m_IfcOrientationSelect_union.m_IfcDirection->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcPlaneAngleMeasure IfcOrientationSelect::getIfcPlaneAngleMeasure() const {
    if (m_type == IFCPLANEANGLEMEASURE) {
        return m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure);
    }
}

void IfcOrientationSelect::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
    m_IfcOrientationSelect_union.m_IfcPlaneAngleMeasure = value;
    m_type = IFCPLANEANGLEMEASURE;
}

IfcDirection *IfcOrientationSelect::getIfcDirection() const {
    if (m_type == IFCDIRECTION) {
        return m_IfcOrientationSelect_union.m_IfcDirection;
    }
    else {
        return NULL;
    }
}

void IfcOrientationSelect::setIfcDirection(IfcDirection *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcOrientationSelect_union.m_IfcDirection = value;
    if (value) {
        value->ref();
        m_type = IFCDIRECTION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDIRECTION;
}

void IfcOrientationSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcDirection::getClassType())) {
        setIfcDirection(static_cast< IfcDirection* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcOrientationSelect::s_type("IfcOrientationSelect");
