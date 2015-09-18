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



#include <ifc2x3/IfcTrapeziumProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTrapeziumProfileDef::IfcTrapeziumProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_bottomXDim = Step::getUnset(m_bottomXDim);
    m_topXDim = Step::getUnset(m_topXDim);
    m_yDim = Step::getUnset(m_yDim);
    m_topXOffset = Step::getUnset(m_topXOffset);
}

IfcTrapeziumProfileDef::~IfcTrapeziumProfileDef() {
}

bool IfcTrapeziumProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTrapeziumProfileDef(this);
}

const std::string &IfcTrapeziumProfileDef::type() const {
    return IfcTrapeziumProfileDef::s_type.getName();
}

const Step::ClassType &IfcTrapeziumProfileDef::getClassType() {
    return IfcTrapeziumProfileDef::s_type;
}

const Step::ClassType &IfcTrapeziumProfileDef::getType() const {
    return IfcTrapeziumProfileDef::s_type;
}

bool IfcTrapeziumProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcTrapeziumProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getBottomXDim() {
    if (Step::BaseObject::inited()) {
        return m_bottomXDim;
    }
    else {
        return Step::getUnset(m_bottomXDim);
    }
}

const IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getBottomXDim() const {
    IfcTrapeziumProfileDef * deConstObject = const_cast< IfcTrapeziumProfileDef * > (this);
    return deConstObject->getBottomXDim();
}

void IfcTrapeziumProfileDef::setBottomXDim(IfcPositiveLengthMeasure value) {
    m_bottomXDim = value;
}

void IfcTrapeziumProfileDef::unsetBottomXDim() {
    m_bottomXDim = Step::getUnset(getBottomXDim());
}

bool IfcTrapeziumProfileDef::testBottomXDim() const {
    return !Step::isUnset(getBottomXDim());
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getTopXDim() {
    if (Step::BaseObject::inited()) {
        return m_topXDim;
    }
    else {
        return Step::getUnset(m_topXDim);
    }
}

const IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getTopXDim() const {
    IfcTrapeziumProfileDef * deConstObject = const_cast< IfcTrapeziumProfileDef * > (this);
    return deConstObject->getTopXDim();
}

void IfcTrapeziumProfileDef::setTopXDim(IfcPositiveLengthMeasure value) {
    m_topXDim = value;
}

void IfcTrapeziumProfileDef::unsetTopXDim() {
    m_topXDim = Step::getUnset(getTopXDim());
}

bool IfcTrapeziumProfileDef::testTopXDim() const {
    return !Step::isUnset(getTopXDim());
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getYDim() {
    if (Step::BaseObject::inited()) {
        return m_yDim;
    }
    else {
        return Step::getUnset(m_yDim);
    }
}

const IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getYDim() const {
    IfcTrapeziumProfileDef * deConstObject = const_cast< IfcTrapeziumProfileDef * > (this);
    return deConstObject->getYDim();
}

void IfcTrapeziumProfileDef::setYDim(IfcPositiveLengthMeasure value) {
    m_yDim = value;
}

void IfcTrapeziumProfileDef::unsetYDim() {
    m_yDim = Step::getUnset(getYDim());
}

bool IfcTrapeziumProfileDef::testYDim() const {
    return !Step::isUnset(getYDim());
}

IfcLengthMeasure IfcTrapeziumProfileDef::getTopXOffset() {
    if (Step::BaseObject::inited()) {
        return m_topXOffset;
    }
    else {
        return Step::getUnset(m_topXOffset);
    }
}

const IfcLengthMeasure IfcTrapeziumProfileDef::getTopXOffset() const {
    IfcTrapeziumProfileDef * deConstObject = const_cast< IfcTrapeziumProfileDef * > (this);
    return deConstObject->getTopXOffset();
}

void IfcTrapeziumProfileDef::setTopXOffset(IfcLengthMeasure value) {
    m_topXOffset = value;
}

void IfcTrapeziumProfileDef::unsetTopXOffset() {
    m_topXOffset = Step::getUnset(getTopXOffset());
}

bool IfcTrapeziumProfileDef::testTopXOffset() const {
    return !Step::isUnset(getTopXOffset());
}

bool IfcTrapeziumProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_bottomXDim = Step::getUnset(m_bottomXDim);
    }
    else {
        m_bottomXDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topXDim = Step::getUnset(m_topXDim);
    }
    else {
        m_topXDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yDim = Step::getUnset(m_yDim);
    }
    else {
        m_yDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_topXOffset = Step::getUnset(m_topXOffset);
    }
    else {
        m_topXOffset = Step::spfToReal(arg);
    }
    return true;
}

void IfcTrapeziumProfileDef::copy(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setBottomXDim(obj.m_bottomXDim);
    setTopXDim(obj.m_topXDim);
    setYDim(obj.m_yDim);
    setTopXOffset(obj.m_topXOffset);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTrapeziumProfileDef::s_type("IfcTrapeziumProfileDef");
