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



#include <ifc2x3/IfcCurveStyleFontPattern.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCurveStyleFontPattern::IfcCurveStyleFontPattern(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_visibleSegmentLength = Step::getUnset(m_visibleSegmentLength);
    m_invisibleSegmentLength = Step::getUnset(m_invisibleSegmentLength);
}

IfcCurveStyleFontPattern::~IfcCurveStyleFontPattern() {
}

bool IfcCurveStyleFontPattern::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveStyleFontPattern(this);
}

const std::string &IfcCurveStyleFontPattern::type() const {
    return IfcCurveStyleFontPattern::s_type.getName();
}

const Step::ClassType &IfcCurveStyleFontPattern::getClassType() {
    return IfcCurveStyleFontPattern::s_type;
}

const Step::ClassType &IfcCurveStyleFontPattern::getType() const {
    return IfcCurveStyleFontPattern::s_type;
}

bool IfcCurveStyleFontPattern::isOfType(const Step::ClassType &t) const {
    return IfcCurveStyleFontPattern::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLengthMeasure IfcCurveStyleFontPattern::getVisibleSegmentLength() {
    if (Step::BaseObject::inited()) {
        return m_visibleSegmentLength;
    }
    else {
        return Step::getUnset(m_visibleSegmentLength);
    }
}

const IfcLengthMeasure IfcCurveStyleFontPattern::getVisibleSegmentLength() const {
    IfcCurveStyleFontPattern * deConstObject = const_cast< IfcCurveStyleFontPattern * > (this);
    return deConstObject->getVisibleSegmentLength();
}

void IfcCurveStyleFontPattern::setVisibleSegmentLength(IfcLengthMeasure value) {
    m_visibleSegmentLength = value;
}

void IfcCurveStyleFontPattern::unsetVisibleSegmentLength() {
    m_visibleSegmentLength = Step::getUnset(getVisibleSegmentLength());
}

bool IfcCurveStyleFontPattern::testVisibleSegmentLength() const {
    return !Step::isUnset(getVisibleSegmentLength());
}

IfcPositiveLengthMeasure IfcCurveStyleFontPattern::getInvisibleSegmentLength() {
    if (Step::BaseObject::inited()) {
        return m_invisibleSegmentLength;
    }
    else {
        return Step::getUnset(m_invisibleSegmentLength);
    }
}

const IfcPositiveLengthMeasure IfcCurveStyleFontPattern::getInvisibleSegmentLength() const {
    IfcCurveStyleFontPattern * deConstObject = const_cast< IfcCurveStyleFontPattern * > (this);
    return deConstObject->getInvisibleSegmentLength();
}

void IfcCurveStyleFontPattern::setInvisibleSegmentLength(IfcPositiveLengthMeasure value) {
    m_invisibleSegmentLength = value;
}

void IfcCurveStyleFontPattern::unsetInvisibleSegmentLength() {
    m_invisibleSegmentLength = Step::getUnset(getInvisibleSegmentLength());
}

bool IfcCurveStyleFontPattern::testInvisibleSegmentLength() const {
    return !Step::isUnset(getInvisibleSegmentLength());
}

bool IfcCurveStyleFontPattern::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleSegmentLength = Step::getUnset(m_visibleSegmentLength);
    }
    else {
        m_visibleSegmentLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_invisibleSegmentLength = Step::getUnset(m_invisibleSegmentLength);
    }
    else {
        m_invisibleSegmentLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcCurveStyleFontPattern::copy(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setVisibleSegmentLength(obj.m_visibleSegmentLength);
    setInvisibleSegmentLength(obj.m_invisibleSegmentLength);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurveStyleFontPattern::s_type("IfcCurveStyleFontPattern");
