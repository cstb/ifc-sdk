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



#include <ifc2x3/IfcDimensionalExponents.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDimensionalExponents::IfcDimensionalExponents(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_lengthExponent = Step::getUnset(m_lengthExponent);
    m_massExponent = Step::getUnset(m_massExponent);
    m_timeExponent = Step::getUnset(m_timeExponent);
    m_electricCurrentExponent = Step::getUnset(m_electricCurrentExponent);
    m_thermodynamicTemperatureExponent = Step::getUnset(m_thermodynamicTemperatureExponent);
    m_amountOfSubstanceExponent = Step::getUnset(m_amountOfSubstanceExponent);
    m_luminousIntensityExponent = Step::getUnset(m_luminousIntensityExponent);
}

IfcDimensionalExponents::~IfcDimensionalExponents() {
}

bool IfcDimensionalExponents::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDimensionalExponents(this);
}

const std::string &IfcDimensionalExponents::type() const {
    return IfcDimensionalExponents::s_type.getName();
}

const Step::ClassType &IfcDimensionalExponents::getClassType() {
    return IfcDimensionalExponents::s_type;
}

const Step::ClassType &IfcDimensionalExponents::getType() const {
    return IfcDimensionalExponents::s_type;
}

bool IfcDimensionalExponents::isOfType(const Step::ClassType &t) const {
    return IfcDimensionalExponents::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Integer IfcDimensionalExponents::getLengthExponent() {
    if (Step::BaseObject::inited()) {
        return m_lengthExponent;
    }
    else {
        return Step::getUnset(m_lengthExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getLengthExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getLengthExponent();
}

void IfcDimensionalExponents::setLengthExponent(Step::Integer value) {
    m_lengthExponent = value;
}

void IfcDimensionalExponents::unsetLengthExponent() {
    m_lengthExponent = Step::getUnset(getLengthExponent());
}

bool IfcDimensionalExponents::testLengthExponent() const {
    return !Step::isUnset(getLengthExponent());
}

Step::Integer IfcDimensionalExponents::getMassExponent() {
    if (Step::BaseObject::inited()) {
        return m_massExponent;
    }
    else {
        return Step::getUnset(m_massExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getMassExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getMassExponent();
}

void IfcDimensionalExponents::setMassExponent(Step::Integer value) {
    m_massExponent = value;
}

void IfcDimensionalExponents::unsetMassExponent() {
    m_massExponent = Step::getUnset(getMassExponent());
}

bool IfcDimensionalExponents::testMassExponent() const {
    return !Step::isUnset(getMassExponent());
}

Step::Integer IfcDimensionalExponents::getTimeExponent() {
    if (Step::BaseObject::inited()) {
        return m_timeExponent;
    }
    else {
        return Step::getUnset(m_timeExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getTimeExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getTimeExponent();
}

void IfcDimensionalExponents::setTimeExponent(Step::Integer value) {
    m_timeExponent = value;
}

void IfcDimensionalExponents::unsetTimeExponent() {
    m_timeExponent = Step::getUnset(getTimeExponent());
}

bool IfcDimensionalExponents::testTimeExponent() const {
    return !Step::isUnset(getTimeExponent());
}

Step::Integer IfcDimensionalExponents::getElectricCurrentExponent() {
    if (Step::BaseObject::inited()) {
        return m_electricCurrentExponent;
    }
    else {
        return Step::getUnset(m_electricCurrentExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getElectricCurrentExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getElectricCurrentExponent();
}

void IfcDimensionalExponents::setElectricCurrentExponent(Step::Integer value) {
    m_electricCurrentExponent = value;
}

void IfcDimensionalExponents::unsetElectricCurrentExponent() {
    m_electricCurrentExponent = Step::getUnset(getElectricCurrentExponent());
}

bool IfcDimensionalExponents::testElectricCurrentExponent() const {
    return !Step::isUnset(getElectricCurrentExponent());
}

Step::Integer IfcDimensionalExponents::getThermodynamicTemperatureExponent() {
    if (Step::BaseObject::inited()) {
        return m_thermodynamicTemperatureExponent;
    }
    else {
        return Step::getUnset(m_thermodynamicTemperatureExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getThermodynamicTemperatureExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getThermodynamicTemperatureExponent();
}

void IfcDimensionalExponents::setThermodynamicTemperatureExponent(Step::Integer value) {
    m_thermodynamicTemperatureExponent = value;
}

void IfcDimensionalExponents::unsetThermodynamicTemperatureExponent() {
    m_thermodynamicTemperatureExponent = Step::getUnset(getThermodynamicTemperatureExponent());
}

bool IfcDimensionalExponents::testThermodynamicTemperatureExponent() const {
    return !Step::isUnset(getThermodynamicTemperatureExponent());
}

Step::Integer IfcDimensionalExponents::getAmountOfSubstanceExponent() {
    if (Step::BaseObject::inited()) {
        return m_amountOfSubstanceExponent;
    }
    else {
        return Step::getUnset(m_amountOfSubstanceExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getAmountOfSubstanceExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getAmountOfSubstanceExponent();
}

void IfcDimensionalExponents::setAmountOfSubstanceExponent(Step::Integer value) {
    m_amountOfSubstanceExponent = value;
}

void IfcDimensionalExponents::unsetAmountOfSubstanceExponent() {
    m_amountOfSubstanceExponent = Step::getUnset(getAmountOfSubstanceExponent());
}

bool IfcDimensionalExponents::testAmountOfSubstanceExponent() const {
    return !Step::isUnset(getAmountOfSubstanceExponent());
}

Step::Integer IfcDimensionalExponents::getLuminousIntensityExponent() {
    if (Step::BaseObject::inited()) {
        return m_luminousIntensityExponent;
    }
    else {
        return Step::getUnset(m_luminousIntensityExponent);
    }
}

const Step::Integer IfcDimensionalExponents::getLuminousIntensityExponent() const {
    IfcDimensionalExponents * deConstObject = const_cast< IfcDimensionalExponents * > (this);
    return deConstObject->getLuminousIntensityExponent();
}

void IfcDimensionalExponents::setLuminousIntensityExponent(Step::Integer value) {
    m_luminousIntensityExponent = value;
}

void IfcDimensionalExponents::unsetLuminousIntensityExponent() {
    m_luminousIntensityExponent = Step::getUnset(getLuminousIntensityExponent());
}

bool IfcDimensionalExponents::testLuminousIntensityExponent() const {
    return !Step::isUnset(getLuminousIntensityExponent());
}

bool IfcDimensionalExponents::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lengthExponent = Step::getUnset(m_lengthExponent);
    }
    else {
        m_lengthExponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_massExponent = Step::getUnset(m_massExponent);
    }
    else {
        m_massExponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeExponent = Step::getUnset(m_timeExponent);
    }
    else {
        m_timeExponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_electricCurrentExponent = Step::getUnset(m_electricCurrentExponent);
    }
    else {
        m_electricCurrentExponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermodynamicTemperatureExponent = Step::getUnset(m_thermodynamicTemperatureExponent);
    }
    else {
        m_thermodynamicTemperatureExponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_amountOfSubstanceExponent = Step::getUnset(m_amountOfSubstanceExponent);
    }
    else {
        m_amountOfSubstanceExponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_luminousIntensityExponent = Step::getUnset(m_luminousIntensityExponent);
    }
    else {
        m_luminousIntensityExponent = Step::spfToInteger(arg);
    }
    return true;
}

void IfcDimensionalExponents::copy(const IfcDimensionalExponents &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setLengthExponent(obj.m_lengthExponent);
    setMassExponent(obj.m_massExponent);
    setTimeExponent(obj.m_timeExponent);
    setElectricCurrentExponent(obj.m_electricCurrentExponent);
    setThermodynamicTemperatureExponent(obj.m_thermodynamicTemperatureExponent);
    setAmountOfSubstanceExponent(obj.m_amountOfSubstanceExponent);
    setLuminousIntensityExponent(obj.m_luminousIntensityExponent);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDimensionalExponents::s_type("IfcDimensionalExponents");
