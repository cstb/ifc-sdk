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



#include <ifc2x3/IfcRectangularPyramid.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRectangularPyramid::IfcRectangularPyramid(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_xLength = Step::getUnset(m_xLength);
    m_yLength = Step::getUnset(m_yLength);
    m_height = Step::getUnset(m_height);
}

IfcRectangularPyramid::~IfcRectangularPyramid() {
}

bool IfcRectangularPyramid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRectangularPyramid(this);
}

const std::string &IfcRectangularPyramid::type() const {
    return IfcRectangularPyramid::s_type.getName();
}

const Step::ClassType &IfcRectangularPyramid::getClassType() {
    return IfcRectangularPyramid::s_type;
}

const Step::ClassType &IfcRectangularPyramid::getType() const {
    return IfcRectangularPyramid::s_type;
}

bool IfcRectangularPyramid::isOfType(const Step::ClassType &t) const {
    return IfcRectangularPyramid::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength() {
    if (Step::BaseObject::inited()) {
        return m_xLength;
    }
    else {
        return Step::getUnset(m_xLength);
    }
}

const IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength() const {
    IfcRectangularPyramid * deConstObject = const_cast< IfcRectangularPyramid * > (this);
    return deConstObject->getXLength();
}

void IfcRectangularPyramid::setXLength(IfcPositiveLengthMeasure value) {
    m_xLength = value;
}

void IfcRectangularPyramid::unsetXLength() {
    m_xLength = Step::getUnset(getXLength());
}

bool IfcRectangularPyramid::testXLength() const {
    return !Step::isUnset(getXLength());
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength() {
    if (Step::BaseObject::inited()) {
        return m_yLength;
    }
    else {
        return Step::getUnset(m_yLength);
    }
}

const IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength() const {
    IfcRectangularPyramid * deConstObject = const_cast< IfcRectangularPyramid * > (this);
    return deConstObject->getYLength();
}

void IfcRectangularPyramid::setYLength(IfcPositiveLengthMeasure value) {
    m_yLength = value;
}

void IfcRectangularPyramid::unsetYLength() {
    m_yLength = Step::getUnset(getYLength());
}

bool IfcRectangularPyramid::testYLength() const {
    return !Step::isUnset(getYLength());
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

const IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight() const {
    IfcRectangularPyramid * deConstObject = const_cast< IfcRectangularPyramid * > (this);
    return deConstObject->getHeight();
}

void IfcRectangularPyramid::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

void IfcRectangularPyramid::unsetHeight() {
    m_height = Step::getUnset(getHeight());
}

bool IfcRectangularPyramid::testHeight() const {
    return !Step::isUnset(getHeight());
}

bool IfcRectangularPyramid::init() {
    bool status = IfcCsgPrimitive3D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_xLength = Step::getUnset(m_xLength);
    }
    else {
        m_xLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yLength = Step::getUnset(m_yLength);
    }
    else {
        m_yLength = Step::spfToReal(arg);
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

void IfcRectangularPyramid::copy(const IfcRectangularPyramid &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setXLength(obj.m_xLength);
    setYLength(obj.m_yLength);
    setHeight(obj.m_height);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRectangularPyramid::s_type("IfcRectangularPyramid");
