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



#include <ifc2x3/IfcLightSource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLightSource::IfcLightSource(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_name = Step::getUnset(m_name);
    m_lightColour = NULL;
    m_ambientIntensity = Step::getUnset(m_ambientIntensity);
    m_intensity = Step::getUnset(m_intensity);
}

IfcLightSource::~IfcLightSource() {
}

bool IfcLightSource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightSource(this);
}

const std::string &IfcLightSource::type() const {
    return IfcLightSource::s_type.getName();
}

const Step::ClassType &IfcLightSource::getClassType() {
    return IfcLightSource::s_type;
}

const Step::ClassType &IfcLightSource::getType() const {
    return IfcLightSource::s_type;
}

bool IfcLightSource::isOfType(const Step::ClassType &t) const {
    return IfcLightSource::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcLabel IfcLightSource::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcLightSource::getName() const {
    IfcLightSource * deConstObject = const_cast< IfcLightSource * > (this);
    return deConstObject->getName();
}

void IfcLightSource::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcLightSource::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcLightSource::testName() const {
    return !Step::isUnset(getName());
}

IfcColourRgb *IfcLightSource::getLightColour() {
    if (Step::BaseObject::inited()) {
        return m_lightColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcLightSource::getLightColour() const {
    IfcLightSource * deConstObject = const_cast< IfcLightSource * > (this);
    return deConstObject->getLightColour();
}

void IfcLightSource::setLightColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_lightColour = value;
}

void IfcLightSource::unsetLightColour() {
    m_lightColour = Step::getUnset(getLightColour());
}

bool IfcLightSource::testLightColour() const {
    return !Step::isUnset(getLightColour());
}

IfcNormalisedRatioMeasure IfcLightSource::getAmbientIntensity() {
    if (Step::BaseObject::inited()) {
        return m_ambientIntensity;
    }
    else {
        return Step::getUnset(m_ambientIntensity);
    }
}

const IfcNormalisedRatioMeasure IfcLightSource::getAmbientIntensity() const {
    IfcLightSource * deConstObject = const_cast< IfcLightSource * > (this);
    return deConstObject->getAmbientIntensity();
}

void IfcLightSource::setAmbientIntensity(IfcNormalisedRatioMeasure value) {
    m_ambientIntensity = value;
}

void IfcLightSource::unsetAmbientIntensity() {
    m_ambientIntensity = Step::getUnset(getAmbientIntensity());
}

bool IfcLightSource::testAmbientIntensity() const {
    return !Step::isUnset(getAmbientIntensity());
}

IfcNormalisedRatioMeasure IfcLightSource::getIntensity() {
    if (Step::BaseObject::inited()) {
        return m_intensity;
    }
    else {
        return Step::getUnset(m_intensity);
    }
}

const IfcNormalisedRatioMeasure IfcLightSource::getIntensity() const {
    IfcLightSource * deConstObject = const_cast< IfcLightSource * > (this);
    return deConstObject->getIntensity();
}

void IfcLightSource::setIntensity(IfcNormalisedRatioMeasure value) {
    m_intensity = value;
}

void IfcLightSource::unsetIntensity() {
    m_intensity = Step::getUnset(getIntensity());
}

bool IfcLightSource::testIntensity() const {
    return !Step::isUnset(getIntensity());
}

bool IfcLightSource::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lightColour = NULL;
    }
    else {
        m_lightColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ambientIntensity = Step::getUnset(m_ambientIntensity);
    }
    else {
        m_ambientIntensity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intensity = Step::getUnset(m_intensity);
    }
    else {
        m_intensity = Step::spfToReal(arg);
    }
    return true;
}

void IfcLightSource::copy(const IfcLightSource &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setName(obj.m_name);
    setLightColour((IfcColourRgb*)copyop(obj.m_lightColour.get()));
    setAmbientIntensity(obj.m_ambientIntensity);
    setIntensity(obj.m_intensity);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLightSource::s_type("IfcLightSource");
