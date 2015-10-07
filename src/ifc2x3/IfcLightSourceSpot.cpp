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



#include <ifc2x3/IfcLightSourceSpot.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcLightSourcePositional.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLightSourceSpot::IfcLightSourceSpot(Step::Id id, Step::SPFData *args) : IfcLightSourcePositional(id, args) {
    m_orientation = NULL;
    m_concentrationExponent = Step::getUnset(m_concentrationExponent);
    m_spreadAngle = Step::getUnset(m_spreadAngle);
    m_beamWidthAngle = Step::getUnset(m_beamWidthAngle);
}

IfcLightSourceSpot::~IfcLightSourceSpot() {
}

bool IfcLightSourceSpot::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightSourceSpot(this);
}

const std::string &IfcLightSourceSpot::type() const {
    return IfcLightSourceSpot::s_type.getName();
}

const Step::ClassType &IfcLightSourceSpot::getClassType() {
    return IfcLightSourceSpot::s_type;
}

const Step::ClassType &IfcLightSourceSpot::getType() const {
    return IfcLightSourceSpot::s_type;
}

bool IfcLightSourceSpot::isOfType(const Step::ClassType &t) const {
    return IfcLightSourceSpot::s_type == t ? true : IfcLightSourcePositional::isOfType(t);
}

IfcDirection *IfcLightSourceSpot::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcLightSourceSpot::getOrientation() const {
    IfcLightSourceSpot * deConstObject = const_cast< IfcLightSourceSpot * > (this);
    return deConstObject->getOrientation();
}

void IfcLightSourceSpot::setOrientation(const Step::RefPtr< IfcDirection > &value) {
    m_orientation = value;
}

void IfcLightSourceSpot::unsetOrientation() {
    m_orientation = Step::getUnset(getOrientation());
}

bool IfcLightSourceSpot::testOrientation() const {
    return !Step::isUnset(getOrientation());
}

IfcReal IfcLightSourceSpot::getConcentrationExponent() {
    if (Step::BaseObject::inited()) {
        return m_concentrationExponent;
    }
    else {
        return Step::getUnset(m_concentrationExponent);
    }
}

const IfcReal IfcLightSourceSpot::getConcentrationExponent() const {
    IfcLightSourceSpot * deConstObject = const_cast< IfcLightSourceSpot * > (this);
    return deConstObject->getConcentrationExponent();
}

void IfcLightSourceSpot::setConcentrationExponent(IfcReal value) {
    m_concentrationExponent = value;
}

void IfcLightSourceSpot::unsetConcentrationExponent() {
    m_concentrationExponent = Step::getUnset(getConcentrationExponent());
}

bool IfcLightSourceSpot::testConcentrationExponent() const {
    return !Step::isUnset(getConcentrationExponent());
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getSpreadAngle() {
    if (Step::BaseObject::inited()) {
        return m_spreadAngle;
    }
    else {
        return Step::getUnset(m_spreadAngle);
    }
}

const IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getSpreadAngle() const {
    IfcLightSourceSpot * deConstObject = const_cast< IfcLightSourceSpot * > (this);
    return deConstObject->getSpreadAngle();
}

void IfcLightSourceSpot::setSpreadAngle(IfcPositivePlaneAngleMeasure value) {
    m_spreadAngle = value;
}

void IfcLightSourceSpot::unsetSpreadAngle() {
    m_spreadAngle = Step::getUnset(getSpreadAngle());
}

bool IfcLightSourceSpot::testSpreadAngle() const {
    return !Step::isUnset(getSpreadAngle());
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getBeamWidthAngle() {
    if (Step::BaseObject::inited()) {
        return m_beamWidthAngle;
    }
    else {
        return Step::getUnset(m_beamWidthAngle);
    }
}

const IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getBeamWidthAngle() const {
    IfcLightSourceSpot * deConstObject = const_cast< IfcLightSourceSpot * > (this);
    return deConstObject->getBeamWidthAngle();
}

void IfcLightSourceSpot::setBeamWidthAngle(IfcPositivePlaneAngleMeasure value) {
    m_beamWidthAngle = value;
}

void IfcLightSourceSpot::unsetBeamWidthAngle() {
    m_beamWidthAngle = Step::getUnset(getBeamWidthAngle());
}

bool IfcLightSourceSpot::testBeamWidthAngle() const {
    return !Step::isUnset(getBeamWidthAngle());
}

bool IfcLightSourceSpot::init() {
    bool status = IfcLightSourcePositional::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = NULL;
    }
    else {
        m_orientation = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_concentrationExponent = Step::getUnset(m_concentrationExponent);
    }
    else {
        m_concentrationExponent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_spreadAngle = Step::getUnset(m_spreadAngle);
    }
    else {
        m_spreadAngle = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_beamWidthAngle = Step::getUnset(m_beamWidthAngle);
    }
    else {
        m_beamWidthAngle = Step::spfToReal(arg);
    }
    return true;
}

void IfcLightSourceSpot::copy(const IfcLightSourceSpot &obj, const CopyOp &copyop) {
    IfcLightSourcePositional::copy(obj, copyop);
    setOrientation((IfcDirection*)copyop(obj.m_orientation.get()));
    setConcentrationExponent(obj.m_concentrationExponent);
    setSpreadAngle(obj.m_spreadAngle);
    setBeamWidthAngle(obj.m_beamWidthAngle);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLightSourceSpot::s_type("IfcLightSourceSpot");
