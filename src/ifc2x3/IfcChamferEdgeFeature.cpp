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



#include <ifc2x3/IfcChamferEdgeFeature.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEdgeFeature.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcChamferEdgeFeature::IfcChamferEdgeFeature(Step::Id id, Step::SPFData *args) : IfcEdgeFeature(id, args) {
    m_width = Step::getUnset(m_width);
    m_height = Step::getUnset(m_height);
}

IfcChamferEdgeFeature::~IfcChamferEdgeFeature() {
}

bool IfcChamferEdgeFeature::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcChamferEdgeFeature(this);
}

const std::string &IfcChamferEdgeFeature::type() const {
    return IfcChamferEdgeFeature::s_type.getName();
}

const Step::ClassType &IfcChamferEdgeFeature::getClassType() {
    return IfcChamferEdgeFeature::s_type;
}

const Step::ClassType &IfcChamferEdgeFeature::getType() const {
    return IfcChamferEdgeFeature::s_type;
}

bool IfcChamferEdgeFeature::isOfType(const Step::ClassType &t) const {
    return IfcChamferEdgeFeature::s_type == t ? true : IfcEdgeFeature::isOfType(t);
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

const IfcPositiveLengthMeasure IfcChamferEdgeFeature::getWidth() const {
    IfcChamferEdgeFeature * deConstObject = const_cast< IfcChamferEdgeFeature * > (this);
    return deConstObject->getWidth();
}

void IfcChamferEdgeFeature::setWidth(IfcPositiveLengthMeasure value) {
    m_width = value;
}

void IfcChamferEdgeFeature::unsetWidth() {
    m_width = Step::getUnset(getWidth());
}

bool IfcChamferEdgeFeature::testWidth() const {
    return !Step::isUnset(getWidth());
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

const IfcPositiveLengthMeasure IfcChamferEdgeFeature::getHeight() const {
    IfcChamferEdgeFeature * deConstObject = const_cast< IfcChamferEdgeFeature * > (this);
    return deConstObject->getHeight();
}

void IfcChamferEdgeFeature::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

void IfcChamferEdgeFeature::unsetHeight() {
    m_height = Step::getUnset(getHeight());
}

bool IfcChamferEdgeFeature::testHeight() const {
    return !Step::isUnset(getHeight());
}

bool IfcChamferEdgeFeature::init() {
    bool status = IfcEdgeFeature::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_width = Step::getUnset(m_width);
    }
    else {
        m_width = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToReal(arg);
    }
    return true;
}

void IfcChamferEdgeFeature::copy(const IfcChamferEdgeFeature &obj, const CopyOp &copyop) {
    IfcEdgeFeature::copy(obj, copyop);
    setWidth(obj.m_width);
    setHeight(obj.m_height);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcChamferEdgeFeature::s_type("IfcChamferEdgeFeature");
