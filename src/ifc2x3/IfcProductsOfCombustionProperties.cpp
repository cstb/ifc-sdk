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



#include <ifc2x3/IfcProductsOfCombustionProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcProductsOfCombustionProperties::IfcProductsOfCombustionProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_specificHeatCapacity = Step::getUnset(m_specificHeatCapacity);
    m_n20Content = Step::getUnset(m_n20Content);
    m_cOContent = Step::getUnset(m_cOContent);
    m_cO2Content = Step::getUnset(m_cO2Content);
}

IfcProductsOfCombustionProperties::~IfcProductsOfCombustionProperties() {
}

bool IfcProductsOfCombustionProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProductsOfCombustionProperties(this);
}

const std::string &IfcProductsOfCombustionProperties::type() const {
    return IfcProductsOfCombustionProperties::s_type.getName();
}

const Step::ClassType &IfcProductsOfCombustionProperties::getClassType() {
    return IfcProductsOfCombustionProperties::s_type;
}

const Step::ClassType &IfcProductsOfCombustionProperties::getType() const {
    return IfcProductsOfCombustionProperties::s_type;
}

bool IfcProductsOfCombustionProperties::isOfType(const Step::ClassType &t) const {
    return IfcProductsOfCombustionProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcSpecificHeatCapacityMeasure IfcProductsOfCombustionProperties::getSpecificHeatCapacity() {
    if (Step::BaseObject::inited()) {
        return m_specificHeatCapacity;
    }
    else {
        return Step::getUnset(m_specificHeatCapacity);
    }
}

const IfcSpecificHeatCapacityMeasure IfcProductsOfCombustionProperties::getSpecificHeatCapacity() const {
    IfcProductsOfCombustionProperties * deConstObject = const_cast< IfcProductsOfCombustionProperties * > (this);
    return deConstObject->getSpecificHeatCapacity();
}

void IfcProductsOfCombustionProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value) {
    m_specificHeatCapacity = value;
}

void IfcProductsOfCombustionProperties::unsetSpecificHeatCapacity() {
    m_specificHeatCapacity = Step::getUnset(getSpecificHeatCapacity());
}

bool IfcProductsOfCombustionProperties::testSpecificHeatCapacity() const {
    return !Step::isUnset(getSpecificHeatCapacity());
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getN20Content() {
    if (Step::BaseObject::inited()) {
        return m_n20Content;
    }
    else {
        return Step::getUnset(m_n20Content);
    }
}

const IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getN20Content() const {
    IfcProductsOfCombustionProperties * deConstObject = const_cast< IfcProductsOfCombustionProperties * > (this);
    return deConstObject->getN20Content();
}

void IfcProductsOfCombustionProperties::setN20Content(IfcPositiveRatioMeasure value) {
    m_n20Content = value;
}

void IfcProductsOfCombustionProperties::unsetN20Content() {
    m_n20Content = Step::getUnset(getN20Content());
}

bool IfcProductsOfCombustionProperties::testN20Content() const {
    return !Step::isUnset(getN20Content());
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCOContent() {
    if (Step::BaseObject::inited()) {
        return m_cOContent;
    }
    else {
        return Step::getUnset(m_cOContent);
    }
}

const IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCOContent() const {
    IfcProductsOfCombustionProperties * deConstObject = const_cast< IfcProductsOfCombustionProperties * > (this);
    return deConstObject->getCOContent();
}

void IfcProductsOfCombustionProperties::setCOContent(IfcPositiveRatioMeasure value) {
    m_cOContent = value;
}

void IfcProductsOfCombustionProperties::unsetCOContent() {
    m_cOContent = Step::getUnset(getCOContent());
}

bool IfcProductsOfCombustionProperties::testCOContent() const {
    return !Step::isUnset(getCOContent());
}

IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCO2Content() {
    if (Step::BaseObject::inited()) {
        return m_cO2Content;
    }
    else {
        return Step::getUnset(m_cO2Content);
    }
}

const IfcPositiveRatioMeasure IfcProductsOfCombustionProperties::getCO2Content() const {
    IfcProductsOfCombustionProperties * deConstObject = const_cast< IfcProductsOfCombustionProperties * > (this);
    return deConstObject->getCO2Content();
}

void IfcProductsOfCombustionProperties::setCO2Content(IfcPositiveRatioMeasure value) {
    m_cO2Content = value;
}

void IfcProductsOfCombustionProperties::unsetCO2Content() {
    m_cO2Content = Step::getUnset(getCO2Content());
}

bool IfcProductsOfCombustionProperties::testCO2Content() const {
    return !Step::isUnset(getCO2Content());
}

bool IfcProductsOfCombustionProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_specificHeatCapacity = Step::getUnset(m_specificHeatCapacity);
    }
    else {
        m_specificHeatCapacity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_n20Content = Step::getUnset(m_n20Content);
    }
    else {
        m_n20Content = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_cOContent = Step::getUnset(m_cOContent);
    }
    else {
        m_cOContent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_cO2Content = Step::getUnset(m_cO2Content);
    }
    else {
        m_cO2Content = Step::spfToReal(arg);
    }
    return true;
}

void IfcProductsOfCombustionProperties::copy(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setSpecificHeatCapacity(obj.m_specificHeatCapacity);
    setN20Content(obj.m_n20Content);
    setCOContent(obj.m_cOContent);
    setCO2Content(obj.m_cO2Content);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProductsOfCombustionProperties::s_type("IfcProductsOfCombustionProperties");
