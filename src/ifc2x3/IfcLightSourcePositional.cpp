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



#include <ifc2x3/IfcLightSourcePositional.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcLightSource.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLightSourcePositional::IfcLightSourcePositional(Step::Id id, Step::SPFData *args) : IfcLightSource(id, args) {
    m_position = NULL;
    m_radius = Step::getUnset(m_radius);
    m_constantAttenuation = Step::getUnset(m_constantAttenuation);
    m_distanceAttenuation = Step::getUnset(m_distanceAttenuation);
    m_quadricAttenuation = Step::getUnset(m_quadricAttenuation);
}

IfcLightSourcePositional::~IfcLightSourcePositional() {
}

bool IfcLightSourcePositional::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightSourcePositional(this);
}

const std::string &IfcLightSourcePositional::type() const {
    return IfcLightSourcePositional::s_type.getName();
}

const Step::ClassType &IfcLightSourcePositional::getClassType() {
    return IfcLightSourcePositional::s_type;
}

const Step::ClassType &IfcLightSourcePositional::getType() const {
    return IfcLightSourcePositional::s_type;
}

bool IfcLightSourcePositional::isOfType(const Step::ClassType &t) const {
    return IfcLightSourcePositional::s_type == t ? true : IfcLightSource::isOfType(t);
}

IfcCartesianPoint *IfcLightSourcePositional::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcLightSourcePositional::getPosition() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getPosition();
}

void IfcLightSourcePositional::setPosition(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_position = value;
}

void IfcLightSourcePositional::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcLightSourcePositional::testPosition() const {
    return !Step::isUnset(getPosition());
}

IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getRadius();
}

void IfcLightSourcePositional::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcLightSourcePositional::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcLightSourcePositional::testRadius() const {
    return !Step::isUnset(getRadius());
}

IfcReal IfcLightSourcePositional::getConstantAttenuation() {
    if (Step::BaseObject::inited()) {
        return m_constantAttenuation;
    }
    else {
        return Step::getUnset(m_constantAttenuation);
    }
}

const IfcReal IfcLightSourcePositional::getConstantAttenuation() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getConstantAttenuation();
}

void IfcLightSourcePositional::setConstantAttenuation(IfcReal value) {
    m_constantAttenuation = value;
}

void IfcLightSourcePositional::unsetConstantAttenuation() {
    m_constantAttenuation = Step::getUnset(getConstantAttenuation());
}

bool IfcLightSourcePositional::testConstantAttenuation() const {
    return !Step::isUnset(getConstantAttenuation());
}

IfcReal IfcLightSourcePositional::getDistanceAttenuation() {
    if (Step::BaseObject::inited()) {
        return m_distanceAttenuation;
    }
    else {
        return Step::getUnset(m_distanceAttenuation);
    }
}

const IfcReal IfcLightSourcePositional::getDistanceAttenuation() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getDistanceAttenuation();
}

void IfcLightSourcePositional::setDistanceAttenuation(IfcReal value) {
    m_distanceAttenuation = value;
}

void IfcLightSourcePositional::unsetDistanceAttenuation() {
    m_distanceAttenuation = Step::getUnset(getDistanceAttenuation());
}

bool IfcLightSourcePositional::testDistanceAttenuation() const {
    return !Step::isUnset(getDistanceAttenuation());
}

IfcReal IfcLightSourcePositional::getQuadricAttenuation() {
    if (Step::BaseObject::inited()) {
        return m_quadricAttenuation;
    }
    else {
        return Step::getUnset(m_quadricAttenuation);
    }
}

const IfcReal IfcLightSourcePositional::getQuadricAttenuation() const {
    IfcLightSourcePositional * deConstObject = const_cast< IfcLightSourcePositional * > (this);
    return deConstObject->getQuadricAttenuation();
}

void IfcLightSourcePositional::setQuadricAttenuation(IfcReal value) {
    m_quadricAttenuation = value;
}

void IfcLightSourcePositional::unsetQuadricAttenuation() {
    m_quadricAttenuation = Step::getUnset(getQuadricAttenuation());
}

bool IfcLightSourcePositional::testQuadricAttenuation() const {
    return !Step::isUnset(getQuadricAttenuation());
}

bool IfcLightSourcePositional::init() {
    bool status = IfcLightSource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constantAttenuation = Step::getUnset(m_constantAttenuation);
    }
    else {
        m_constantAttenuation = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distanceAttenuation = Step::getUnset(m_distanceAttenuation);
    }
    else {
        m_distanceAttenuation = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quadricAttenuation = Step::getUnset(m_quadricAttenuation);
    }
    else {
        m_quadricAttenuation = Step::spfToReal(arg);
    }
    return true;
}

void IfcLightSourcePositional::copy(const IfcLightSourcePositional &obj, const CopyOp &copyop) {
    IfcLightSource::copy(obj, copyop);
    setPosition((IfcCartesianPoint*)copyop(obj.m_position.get()));
    setRadius(obj.m_radius);
    setConstantAttenuation(obj.m_constantAttenuation);
    setDistanceAttenuation(obj.m_distanceAttenuation);
    setQuadricAttenuation(obj.m_quadricAttenuation);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLightSourcePositional::s_type("IfcLightSourcePositional");
