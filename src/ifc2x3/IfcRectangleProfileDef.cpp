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



#include <ifc2x3/IfcRectangleProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRectangleProfileDef::IfcRectangleProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_xDim = Step::getUnset(m_xDim);
    m_yDim = Step::getUnset(m_yDim);
}

IfcRectangleProfileDef::~IfcRectangleProfileDef() {
}

bool IfcRectangleProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRectangleProfileDef(this);
}

const std::string &IfcRectangleProfileDef::type() const {
    return IfcRectangleProfileDef::s_type.getName();
}

const Step::ClassType &IfcRectangleProfileDef::getClassType() {
    return IfcRectangleProfileDef::s_type;
}

const Step::ClassType &IfcRectangleProfileDef::getType() const {
    return IfcRectangleProfileDef::s_type;
}

bool IfcRectangleProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcRectangleProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getXDim() {
    if (Step::BaseObject::inited()) {
        return m_xDim;
    }
    else {
        return Step::getUnset(m_xDim);
    }
}

const IfcPositiveLengthMeasure IfcRectangleProfileDef::getXDim() const {
    IfcRectangleProfileDef * deConstObject = const_cast< IfcRectangleProfileDef * > (this);
    return deConstObject->getXDim();
}

void IfcRectangleProfileDef::setXDim(IfcPositiveLengthMeasure value) {
    m_xDim = value;
}

void IfcRectangleProfileDef::unsetXDim() {
    m_xDim = Step::getUnset(getXDim());
}

bool IfcRectangleProfileDef::testXDim() const {
    return !Step::isUnset(getXDim());
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getYDim() {
    if (Step::BaseObject::inited()) {
        return m_yDim;
    }
    else {
        return Step::getUnset(m_yDim);
    }
}

const IfcPositiveLengthMeasure IfcRectangleProfileDef::getYDim() const {
    IfcRectangleProfileDef * deConstObject = const_cast< IfcRectangleProfileDef * > (this);
    return deConstObject->getYDim();
}

void IfcRectangleProfileDef::setYDim(IfcPositiveLengthMeasure value) {
    m_yDim = value;
}

void IfcRectangleProfileDef::unsetYDim() {
    m_yDim = Step::getUnset(getYDim());
}

bool IfcRectangleProfileDef::testYDim() const {
    return !Step::isUnset(getYDim());
}

bool IfcRectangleProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_xDim = Step::getUnset(m_xDim);
    }
    else {
        m_xDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yDim = Step::getUnset(m_yDim);
    }
    else {
        m_yDim = Step::spfToReal(arg);
    }
    return true;
}

void IfcRectangleProfileDef::copy(const IfcRectangleProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setXDim(obj.m_xDim);
    setYDim(obj.m_yDim);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRectangleProfileDef::s_type("IfcRectangleProfileDef");
