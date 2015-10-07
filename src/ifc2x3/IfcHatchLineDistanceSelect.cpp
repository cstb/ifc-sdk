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



#include <ifc2x3/IfcHatchLineDistanceSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcHatchLineDistanceSelect::~IfcHatchLineDistanceSelect() {
    deleteUnion();
}

bool IfcHatchLineDistanceSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcHatchLineDistanceSelect(this);
}

bool IfcHatchLineDistanceSelect::init() {
    return false;
}

const std::string &IfcHatchLineDistanceSelect::type() const {
    return IfcHatchLineDistanceSelect::s_type.getName();
}

const Step::ClassType &IfcHatchLineDistanceSelect::getClassType() {
    return IfcHatchLineDistanceSelect::s_type;
}

const Step::ClassType &IfcHatchLineDistanceSelect::getType() const {
    return IfcHatchLineDistanceSelect::s_type;
}

bool IfcHatchLineDistanceSelect::isOfType(const Step::ClassType &t) const {
    return IfcHatchLineDistanceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcHatchLineDistanceSelect::copy(const IfcHatchLineDistanceSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCONEDIRECTIONREPEATFACTOR:
        setIfcOneDirectionRepeatFactor((IfcOneDirectionRepeatFactor *) (copyop(obj.m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor)));
        break;
    case IFCPOSITIVELENGTHMEASURE:
        setIfcPositiveLengthMeasure(obj.m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure);
        break;
    default:
        break;
    }
}

std::string IfcHatchLineDistanceSelect::currentTypeName() const {
    switch(m_type) {
    case IFCONEDIRECTIONREPEATFACTOR:
        return "IfcOneDirectionRepeatFactor";
        break;
    case IFCPOSITIVELENGTHMEASURE:
        return "IfcPositiveLengthMeasure";
        break;
    default:
        return "UNSET";
    }
}

IfcHatchLineDistanceSelect::IfcHatchLineDistanceSelect_select IfcHatchLineDistanceSelect::currentType() const {
    return m_type;
}

void IfcHatchLineDistanceSelect::deleteUnion() {
    switch(m_type) {
    case IFCONEDIRECTIONREPEATFACTOR:
        m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcOneDirectionRepeatFactor *IfcHatchLineDistanceSelect::getIfcOneDirectionRepeatFactor() const {
    if (m_type == IFCONEDIRECTIONREPEATFACTOR) {
        return m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor;
    }
    else {
        return NULL;
    }
}

void IfcHatchLineDistanceSelect::setIfcOneDirectionRepeatFactor(IfcOneDirectionRepeatFactor *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcHatchLineDistanceSelect_union.m_IfcOneDirectionRepeatFactor = value;
    if (value) {
        value->ref();
        m_type = IFCONEDIRECTIONREPEATFACTOR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCONEDIRECTIONREPEATFACTOR;
}

IfcPositiveLengthMeasure IfcHatchLineDistanceSelect::getIfcPositiveLengthMeasure() const {
    if (m_type == IFCPOSITIVELENGTHMEASURE) {
        return m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure;
    }
    else {
        return Step::getUnset(m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure);
    }
}

void IfcHatchLineDistanceSelect::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
    m_IfcHatchLineDistanceSelect_union.m_IfcPositiveLengthMeasure = value;
    m_type = IFCPOSITIVELENGTHMEASURE;
}

void IfcHatchLineDistanceSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcOneDirectionRepeatFactor::getClassType())) {
        setIfcOneDirectionRepeatFactor(static_cast< IfcOneDirectionRepeatFactor* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcHatchLineDistanceSelect::s_type("IfcHatchLineDistanceSelect");
