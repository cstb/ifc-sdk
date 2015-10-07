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



#include <ifc2x3/IfcZShapeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcZShapeProfileDef::IfcZShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_depth = Step::getUnset(m_depth);
    m_flangeWidth = Step::getUnset(m_flangeWidth);
    m_webThickness = Step::getUnset(m_webThickness);
    m_flangeThickness = Step::getUnset(m_flangeThickness);
    m_filletRadius = Step::getUnset(m_filletRadius);
    m_edgeRadius = Step::getUnset(m_edgeRadius);
}

IfcZShapeProfileDef::~IfcZShapeProfileDef() {
}

bool IfcZShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcZShapeProfileDef(this);
}

const std::string &IfcZShapeProfileDef::type() const {
    return IfcZShapeProfileDef::s_type.getName();
}

const Step::ClassType &IfcZShapeProfileDef::getClassType() {
    return IfcZShapeProfileDef::s_type;
}

const Step::ClassType &IfcZShapeProfileDef::getType() const {
    return IfcZShapeProfileDef::s_type;
}

bool IfcZShapeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcZShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcPositiveLengthMeasure IfcZShapeProfileDef::getDepth() const {
    IfcZShapeProfileDef * deConstObject = const_cast< IfcZShapeProfileDef * > (this);
    return deConstObject->getDepth();
}

void IfcZShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

void IfcZShapeProfileDef::unsetDepth() {
    m_depth = Step::getUnset(getDepth());
}

bool IfcZShapeProfileDef::testDepth() const {
    return !Step::isUnset(getDepth());
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_flangeWidth;
    }
    else {
        return Step::getUnset(m_flangeWidth);
    }
}

const IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeWidth() const {
    IfcZShapeProfileDef * deConstObject = const_cast< IfcZShapeProfileDef * > (this);
    return deConstObject->getFlangeWidth();
}

void IfcZShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
    m_flangeWidth = value;
}

void IfcZShapeProfileDef::unsetFlangeWidth() {
    m_flangeWidth = Step::getUnset(getFlangeWidth());
}

bool IfcZShapeProfileDef::testFlangeWidth() const {
    return !Step::isUnset(getFlangeWidth());
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

const IfcPositiveLengthMeasure IfcZShapeProfileDef::getWebThickness() const {
    IfcZShapeProfileDef * deConstObject = const_cast< IfcZShapeProfileDef * > (this);
    return deConstObject->getWebThickness();
}

void IfcZShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

void IfcZShapeProfileDef::unsetWebThickness() {
    m_webThickness = Step::getUnset(getWebThickness());
}

bool IfcZShapeProfileDef::testWebThickness() const {
    return !Step::isUnset(getWebThickness());
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_flangeThickness;
    }
    else {
        return Step::getUnset(m_flangeThickness);
    }
}

const IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeThickness() const {
    IfcZShapeProfileDef * deConstObject = const_cast< IfcZShapeProfileDef * > (this);
    return deConstObject->getFlangeThickness();
}

void IfcZShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
    m_flangeThickness = value;
}

void IfcZShapeProfileDef::unsetFlangeThickness() {
    m_flangeThickness = Step::getUnset(getFlangeThickness());
}

bool IfcZShapeProfileDef::testFlangeThickness() const {
    return !Step::isUnset(getFlangeThickness());
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

const IfcPositiveLengthMeasure IfcZShapeProfileDef::getFilletRadius() const {
    IfcZShapeProfileDef * deConstObject = const_cast< IfcZShapeProfileDef * > (this);
    return deConstObject->getFilletRadius();
}

void IfcZShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

void IfcZShapeProfileDef::unsetFilletRadius() {
    m_filletRadius = Step::getUnset(getFilletRadius());
}

bool IfcZShapeProfileDef::testFilletRadius() const {
    return !Step::isUnset(getFilletRadius());
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_edgeRadius;
    }
    else {
        return Step::getUnset(m_edgeRadius);
    }
}

const IfcPositiveLengthMeasure IfcZShapeProfileDef::getEdgeRadius() const {
    IfcZShapeProfileDef * deConstObject = const_cast< IfcZShapeProfileDef * > (this);
    return deConstObject->getEdgeRadius();
}

void IfcZShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
    m_edgeRadius = value;
}

void IfcZShapeProfileDef::unsetEdgeRadius() {
    m_edgeRadius = Step::getUnset(getEdgeRadius());
}

bool IfcZShapeProfileDef::testEdgeRadius() const {
    return !Step::isUnset(getEdgeRadius());
}

bool IfcZShapeProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeWidth = Step::getUnset(m_flangeWidth);
    }
    else {
        m_flangeWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_webThickness = Step::getUnset(m_webThickness);
    }
    else {
        m_webThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeThickness = Step::getUnset(m_flangeThickness);
    }
    else {
        m_flangeThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_filletRadius = Step::getUnset(m_filletRadius);
    }
    else {
        m_filletRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeRadius = Step::getUnset(m_edgeRadius);
    }
    else {
        m_edgeRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcZShapeProfileDef::copy(const IfcZShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_depth);
    setFlangeWidth(obj.m_flangeWidth);
    setWebThickness(obj.m_webThickness);
    setFlangeThickness(obj.m_flangeThickness);
    setFilletRadius(obj.m_filletRadius);
    setEdgeRadius(obj.m_edgeRadius);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcZShapeProfileDef::s_type("IfcZShapeProfileDef");
