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



#include <ifc2x3/IfcHygroscopicMaterialProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcHygroscopicMaterialProperties::IfcHygroscopicMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_upperVaporResistanceFactor = Step::getUnset(m_upperVaporResistanceFactor);
    m_lowerVaporResistanceFactor = Step::getUnset(m_lowerVaporResistanceFactor);
    m_isothermalMoistureCapacity = Step::getUnset(m_isothermalMoistureCapacity);
    m_vaporPermeability = Step::getUnset(m_vaporPermeability);
    m_moistureDiffusivity = Step::getUnset(m_moistureDiffusivity);
}

IfcHygroscopicMaterialProperties::~IfcHygroscopicMaterialProperties() {
}

bool IfcHygroscopicMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcHygroscopicMaterialProperties(this);
}

const std::string &IfcHygroscopicMaterialProperties::type() const {
    return IfcHygroscopicMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcHygroscopicMaterialProperties::getClassType() {
    return IfcHygroscopicMaterialProperties::s_type;
}

const Step::ClassType &IfcHygroscopicMaterialProperties::getType() const {
    return IfcHygroscopicMaterialProperties::s_type;
}

bool IfcHygroscopicMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcHygroscopicMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getUpperVaporResistanceFactor() {
    if (Step::BaseObject::inited()) {
        return m_upperVaporResistanceFactor;
    }
    else {
        return Step::getUnset(m_upperVaporResistanceFactor);
    }
}

const IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getUpperVaporResistanceFactor() const {
    IfcHygroscopicMaterialProperties * deConstObject = const_cast< IfcHygroscopicMaterialProperties * > (this);
    return deConstObject->getUpperVaporResistanceFactor();
}

void IfcHygroscopicMaterialProperties::setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value) {
    m_upperVaporResistanceFactor = value;
}

void IfcHygroscopicMaterialProperties::unsetUpperVaporResistanceFactor() {
    m_upperVaporResistanceFactor = Step::getUnset(getUpperVaporResistanceFactor());
}

bool IfcHygroscopicMaterialProperties::testUpperVaporResistanceFactor() const {
    return !Step::isUnset(getUpperVaporResistanceFactor());
}

IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getLowerVaporResistanceFactor() {
    if (Step::BaseObject::inited()) {
        return m_lowerVaporResistanceFactor;
    }
    else {
        return Step::getUnset(m_lowerVaporResistanceFactor);
    }
}

const IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getLowerVaporResistanceFactor() const {
    IfcHygroscopicMaterialProperties * deConstObject = const_cast< IfcHygroscopicMaterialProperties * > (this);
    return deConstObject->getLowerVaporResistanceFactor();
}

void IfcHygroscopicMaterialProperties::setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value) {
    m_lowerVaporResistanceFactor = value;
}

void IfcHygroscopicMaterialProperties::unsetLowerVaporResistanceFactor() {
    m_lowerVaporResistanceFactor = Step::getUnset(getLowerVaporResistanceFactor());
}

bool IfcHygroscopicMaterialProperties::testLowerVaporResistanceFactor() const {
    return !Step::isUnset(getLowerVaporResistanceFactor());
}

IfcIsothermalMoistureCapacityMeasure IfcHygroscopicMaterialProperties::getIsothermalMoistureCapacity() {
    if (Step::BaseObject::inited()) {
        return m_isothermalMoistureCapacity;
    }
    else {
        return Step::getUnset(m_isothermalMoistureCapacity);
    }
}

const IfcIsothermalMoistureCapacityMeasure IfcHygroscopicMaterialProperties::getIsothermalMoistureCapacity() const {
    IfcHygroscopicMaterialProperties * deConstObject = const_cast< IfcHygroscopicMaterialProperties * > (this);
    return deConstObject->getIsothermalMoistureCapacity();
}

void IfcHygroscopicMaterialProperties::setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value) {
    m_isothermalMoistureCapacity = value;
}

void IfcHygroscopicMaterialProperties::unsetIsothermalMoistureCapacity() {
    m_isothermalMoistureCapacity = Step::getUnset(getIsothermalMoistureCapacity());
}

bool IfcHygroscopicMaterialProperties::testIsothermalMoistureCapacity() const {
    return !Step::isUnset(getIsothermalMoistureCapacity());
}

IfcVaporPermeabilityMeasure IfcHygroscopicMaterialProperties::getVaporPermeability() {
    if (Step::BaseObject::inited()) {
        return m_vaporPermeability;
    }
    else {
        return Step::getUnset(m_vaporPermeability);
    }
}

const IfcVaporPermeabilityMeasure IfcHygroscopicMaterialProperties::getVaporPermeability() const {
    IfcHygroscopicMaterialProperties * deConstObject = const_cast< IfcHygroscopicMaterialProperties * > (this);
    return deConstObject->getVaporPermeability();
}

void IfcHygroscopicMaterialProperties::setVaporPermeability(IfcVaporPermeabilityMeasure value) {
    m_vaporPermeability = value;
}

void IfcHygroscopicMaterialProperties::unsetVaporPermeability() {
    m_vaporPermeability = Step::getUnset(getVaporPermeability());
}

bool IfcHygroscopicMaterialProperties::testVaporPermeability() const {
    return !Step::isUnset(getVaporPermeability());
}

IfcMoistureDiffusivityMeasure IfcHygroscopicMaterialProperties::getMoistureDiffusivity() {
    if (Step::BaseObject::inited()) {
        return m_moistureDiffusivity;
    }
    else {
        return Step::getUnset(m_moistureDiffusivity);
    }
}

const IfcMoistureDiffusivityMeasure IfcHygroscopicMaterialProperties::getMoistureDiffusivity() const {
    IfcHygroscopicMaterialProperties * deConstObject = const_cast< IfcHygroscopicMaterialProperties * > (this);
    return deConstObject->getMoistureDiffusivity();
}

void IfcHygroscopicMaterialProperties::setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value) {
    m_moistureDiffusivity = value;
}

void IfcHygroscopicMaterialProperties::unsetMoistureDiffusivity() {
    m_moistureDiffusivity = Step::getUnset(getMoistureDiffusivity());
}

bool IfcHygroscopicMaterialProperties::testMoistureDiffusivity() const {
    return !Step::isUnset(getMoistureDiffusivity());
}

bool IfcHygroscopicMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_upperVaporResistanceFactor = Step::getUnset(m_upperVaporResistanceFactor);
    }
    else {
        m_upperVaporResistanceFactor = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lowerVaporResistanceFactor = Step::getUnset(m_lowerVaporResistanceFactor);
    }
    else {
        m_lowerVaporResistanceFactor = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isothermalMoistureCapacity = Step::getUnset(m_isothermalMoistureCapacity);
    }
    else {
        m_isothermalMoistureCapacity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vaporPermeability = Step::getUnset(m_vaporPermeability);
    }
    else {
        m_vaporPermeability = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_moistureDiffusivity = Step::getUnset(m_moistureDiffusivity);
    }
    else {
        m_moistureDiffusivity = Step::spfToReal(arg);
    }
    return true;
}

void IfcHygroscopicMaterialProperties::copy(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setUpperVaporResistanceFactor(obj.m_upperVaporResistanceFactor);
    setLowerVaporResistanceFactor(obj.m_lowerVaporResistanceFactor);
    setIsothermalMoistureCapacity(obj.m_isothermalMoistureCapacity);
    setVaporPermeability(obj.m_vaporPermeability);
    setMoistureDiffusivity(obj.m_moistureDiffusivity);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcHygroscopicMaterialProperties::s_type("IfcHygroscopicMaterialProperties");
