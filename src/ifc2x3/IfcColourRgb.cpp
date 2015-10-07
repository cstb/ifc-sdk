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



#include <ifc2x3/IfcColourRgb.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcColourRgb::IfcColourRgb(Step::Id id, Step::SPFData *args) : IfcColourSpecification(id, args) {
    m_red = Step::getUnset(m_red);
    m_green = Step::getUnset(m_green);
    m_blue = Step::getUnset(m_blue);
}

IfcColourRgb::~IfcColourRgb() {
}

bool IfcColourRgb::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColourRgb(this);
}

const std::string &IfcColourRgb::type() const {
    return IfcColourRgb::s_type.getName();
}

const Step::ClassType &IfcColourRgb::getClassType() {
    return IfcColourRgb::s_type;
}

const Step::ClassType &IfcColourRgb::getType() const {
    return IfcColourRgb::s_type;
}

bool IfcColourRgb::isOfType(const Step::ClassType &t) const {
    return IfcColourRgb::s_type == t ? true : IfcColourSpecification::isOfType(t);
}

IfcNormalisedRatioMeasure IfcColourRgb::getRed() {
    if (Step::BaseObject::inited()) {
        return m_red;
    }
    else {
        return Step::getUnset(m_red);
    }
}

const IfcNormalisedRatioMeasure IfcColourRgb::getRed() const {
    IfcColourRgb * deConstObject = const_cast< IfcColourRgb * > (this);
    return deConstObject->getRed();
}

void IfcColourRgb::setRed(IfcNormalisedRatioMeasure value) {
    m_red = value;
}

void IfcColourRgb::unsetRed() {
    m_red = Step::getUnset(getRed());
}

bool IfcColourRgb::testRed() const {
    return !Step::isUnset(getRed());
}

IfcNormalisedRatioMeasure IfcColourRgb::getGreen() {
    if (Step::BaseObject::inited()) {
        return m_green;
    }
    else {
        return Step::getUnset(m_green);
    }
}

const IfcNormalisedRatioMeasure IfcColourRgb::getGreen() const {
    IfcColourRgb * deConstObject = const_cast< IfcColourRgb * > (this);
    return deConstObject->getGreen();
}

void IfcColourRgb::setGreen(IfcNormalisedRatioMeasure value) {
    m_green = value;
}

void IfcColourRgb::unsetGreen() {
    m_green = Step::getUnset(getGreen());
}

bool IfcColourRgb::testGreen() const {
    return !Step::isUnset(getGreen());
}

IfcNormalisedRatioMeasure IfcColourRgb::getBlue() {
    if (Step::BaseObject::inited()) {
        return m_blue;
    }
    else {
        return Step::getUnset(m_blue);
    }
}

const IfcNormalisedRatioMeasure IfcColourRgb::getBlue() const {
    IfcColourRgb * deConstObject = const_cast< IfcColourRgb * > (this);
    return deConstObject->getBlue();
}

void IfcColourRgb::setBlue(IfcNormalisedRatioMeasure value) {
    m_blue = value;
}

void IfcColourRgb::unsetBlue() {
    m_blue = Step::getUnset(getBlue());
}

bool IfcColourRgb::testBlue() const {
    return !Step::isUnset(getBlue());
}

bool IfcColourRgb::init() {
    bool status = IfcColourSpecification::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_red = Step::getUnset(m_red);
    }
    else {
        m_red = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_green = Step::getUnset(m_green);
    }
    else {
        m_green = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_blue = Step::getUnset(m_blue);
    }
    else {
        m_blue = Step::spfToReal(arg);
    }
    return true;
}

void IfcColourRgb::copy(const IfcColourRgb &obj, const CopyOp &copyop) {
    IfcColourSpecification::copy(obj, copyop);
    setRed(obj.m_red);
    setGreen(obj.m_green);
    setBlue(obj.m_blue);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcColourRgb::s_type("IfcColourRgb");
