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



#include <ifc2x3/IfcElectricalBaseProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElectricalBaseProperties::IfcElectricalBaseProperties(Step::Id id, Step::SPFData *args) : IfcEnergyProperties(id, args) {
    m_electricCurrentType = IfcElectricCurrentEnum_UNSET;
    m_inputVoltage = Step::getUnset(m_inputVoltage);
    m_inputFrequency = Step::getUnset(m_inputFrequency);
    m_fullLoadCurrent = Step::getUnset(m_fullLoadCurrent);
    m_minimumCircuitCurrent = Step::getUnset(m_minimumCircuitCurrent);
    m_maximumPowerInput = Step::getUnset(m_maximumPowerInput);
    m_ratedPowerInput = Step::getUnset(m_ratedPowerInput);
    m_inputPhase = Step::getUnset(m_inputPhase);
}

IfcElectricalBaseProperties::~IfcElectricalBaseProperties() {
}

bool IfcElectricalBaseProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricalBaseProperties(this);
}

const std::string &IfcElectricalBaseProperties::type() const {
    return IfcElectricalBaseProperties::s_type.getName();
}

const Step::ClassType &IfcElectricalBaseProperties::getClassType() {
    return IfcElectricalBaseProperties::s_type;
}

const Step::ClassType &IfcElectricalBaseProperties::getType() const {
    return IfcElectricalBaseProperties::s_type;
}

bool IfcElectricalBaseProperties::isOfType(const Step::ClassType &t) const {
    return IfcElectricalBaseProperties::s_type == t ? true : IfcEnergyProperties::isOfType(t);
}

IfcElectricCurrentEnum IfcElectricalBaseProperties::getElectricCurrentType() {
    if (Step::BaseObject::inited()) {
        return m_electricCurrentType;
    }
    else {
        return IfcElectricCurrentEnum_UNSET;
    }
}

const IfcElectricCurrentEnum IfcElectricalBaseProperties::getElectricCurrentType() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getElectricCurrentType();
}

void IfcElectricalBaseProperties::setElectricCurrentType(IfcElectricCurrentEnum value) {
    m_electricCurrentType = value;
}

void IfcElectricalBaseProperties::unsetElectricCurrentType() {
    m_electricCurrentType = IfcElectricCurrentEnum_UNSET;
}

bool IfcElectricalBaseProperties::testElectricCurrentType() const {
    return getElectricCurrentType() != IfcElectricCurrentEnum_UNSET;
}

IfcElectricVoltageMeasure IfcElectricalBaseProperties::getInputVoltage() {
    if (Step::BaseObject::inited()) {
        return m_inputVoltage;
    }
    else {
        return Step::getUnset(m_inputVoltage);
    }
}

const IfcElectricVoltageMeasure IfcElectricalBaseProperties::getInputVoltage() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getInputVoltage();
}

void IfcElectricalBaseProperties::setInputVoltage(IfcElectricVoltageMeasure value) {
    m_inputVoltage = value;
}

void IfcElectricalBaseProperties::unsetInputVoltage() {
    m_inputVoltage = Step::getUnset(getInputVoltage());
}

bool IfcElectricalBaseProperties::testInputVoltage() const {
    return !Step::isUnset(getInputVoltage());
}

IfcFrequencyMeasure IfcElectricalBaseProperties::getInputFrequency() {
    if (Step::BaseObject::inited()) {
        return m_inputFrequency;
    }
    else {
        return Step::getUnset(m_inputFrequency);
    }
}

const IfcFrequencyMeasure IfcElectricalBaseProperties::getInputFrequency() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getInputFrequency();
}

void IfcElectricalBaseProperties::setInputFrequency(IfcFrequencyMeasure value) {
    m_inputFrequency = value;
}

void IfcElectricalBaseProperties::unsetInputFrequency() {
    m_inputFrequency = Step::getUnset(getInputFrequency());
}

bool IfcElectricalBaseProperties::testInputFrequency() const {
    return !Step::isUnset(getInputFrequency());
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getFullLoadCurrent() {
    if (Step::BaseObject::inited()) {
        return m_fullLoadCurrent;
    }
    else {
        return Step::getUnset(m_fullLoadCurrent);
    }
}

const IfcElectricCurrentMeasure IfcElectricalBaseProperties::getFullLoadCurrent() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getFullLoadCurrent();
}

void IfcElectricalBaseProperties::setFullLoadCurrent(IfcElectricCurrentMeasure value) {
    m_fullLoadCurrent = value;
}

void IfcElectricalBaseProperties::unsetFullLoadCurrent() {
    m_fullLoadCurrent = Step::getUnset(getFullLoadCurrent());
}

bool IfcElectricalBaseProperties::testFullLoadCurrent() const {
    return !Step::isUnset(getFullLoadCurrent());
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getMinimumCircuitCurrent() {
    if (Step::BaseObject::inited()) {
        return m_minimumCircuitCurrent;
    }
    else {
        return Step::getUnset(m_minimumCircuitCurrent);
    }
}

const IfcElectricCurrentMeasure IfcElectricalBaseProperties::getMinimumCircuitCurrent() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getMinimumCircuitCurrent();
}

void IfcElectricalBaseProperties::setMinimumCircuitCurrent(IfcElectricCurrentMeasure value) {
    m_minimumCircuitCurrent = value;
}

void IfcElectricalBaseProperties::unsetMinimumCircuitCurrent() {
    m_minimumCircuitCurrent = Step::getUnset(getMinimumCircuitCurrent());
}

bool IfcElectricalBaseProperties::testMinimumCircuitCurrent() const {
    return !Step::isUnset(getMinimumCircuitCurrent());
}

IfcPowerMeasure IfcElectricalBaseProperties::getMaximumPowerInput() {
    if (Step::BaseObject::inited()) {
        return m_maximumPowerInput;
    }
    else {
        return Step::getUnset(m_maximumPowerInput);
    }
}

const IfcPowerMeasure IfcElectricalBaseProperties::getMaximumPowerInput() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getMaximumPowerInput();
}

void IfcElectricalBaseProperties::setMaximumPowerInput(IfcPowerMeasure value) {
    m_maximumPowerInput = value;
}

void IfcElectricalBaseProperties::unsetMaximumPowerInput() {
    m_maximumPowerInput = Step::getUnset(getMaximumPowerInput());
}

bool IfcElectricalBaseProperties::testMaximumPowerInput() const {
    return !Step::isUnset(getMaximumPowerInput());
}

IfcPowerMeasure IfcElectricalBaseProperties::getRatedPowerInput() {
    if (Step::BaseObject::inited()) {
        return m_ratedPowerInput;
    }
    else {
        return Step::getUnset(m_ratedPowerInput);
    }
}

const IfcPowerMeasure IfcElectricalBaseProperties::getRatedPowerInput() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getRatedPowerInput();
}

void IfcElectricalBaseProperties::setRatedPowerInput(IfcPowerMeasure value) {
    m_ratedPowerInput = value;
}

void IfcElectricalBaseProperties::unsetRatedPowerInput() {
    m_ratedPowerInput = Step::getUnset(getRatedPowerInput());
}

bool IfcElectricalBaseProperties::testRatedPowerInput() const {
    return !Step::isUnset(getRatedPowerInput());
}

Step::Integer IfcElectricalBaseProperties::getInputPhase() {
    if (Step::BaseObject::inited()) {
        return m_inputPhase;
    }
    else {
        return Step::getUnset(m_inputPhase);
    }
}

const Step::Integer IfcElectricalBaseProperties::getInputPhase() const {
    IfcElectricalBaseProperties * deConstObject = const_cast< IfcElectricalBaseProperties * > (this);
    return deConstObject->getInputPhase();
}

void IfcElectricalBaseProperties::setInputPhase(Step::Integer value) {
    m_inputPhase = value;
}

void IfcElectricalBaseProperties::unsetInputPhase() {
    m_inputPhase = Step::getUnset(getInputPhase());
}

bool IfcElectricalBaseProperties::testInputPhase() const {
    return !Step::isUnset(getInputPhase());
}

bool IfcElectricalBaseProperties::init() {
    bool status = IfcEnergyProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_electricCurrentType = IfcElectricCurrentEnum_UNSET;
    }
    else {
        if (arg == ".ALTERNATING.") {
            m_electricCurrentType = IfcElectricCurrentEnum_ALTERNATING;
        }
        else if (arg == ".DIRECT.") {
            m_electricCurrentType = IfcElectricCurrentEnum_DIRECT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_electricCurrentType = IfcElectricCurrentEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_inputVoltage = Step::getUnset(m_inputVoltage);
    }
    else {
        m_inputVoltage = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_inputFrequency = Step::getUnset(m_inputFrequency);
    }
    else {
        m_inputFrequency = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fullLoadCurrent = Step::getUnset(m_fullLoadCurrent);
    }
    else {
        m_fullLoadCurrent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minimumCircuitCurrent = Step::getUnset(m_minimumCircuitCurrent);
    }
    else {
        m_minimumCircuitCurrent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maximumPowerInput = Step::getUnset(m_maximumPowerInput);
    }
    else {
        m_maximumPowerInput = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ratedPowerInput = Step::getUnset(m_ratedPowerInput);
    }
    else {
        m_ratedPowerInput = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_inputPhase = Step::getUnset(m_inputPhase);
    }
    else {
        m_inputPhase = Step::spfToInteger(arg);
    }
    return true;
}

void IfcElectricalBaseProperties::copy(const IfcElectricalBaseProperties &obj, const CopyOp &copyop) {
    IfcEnergyProperties::copy(obj, copyop);
    setElectricCurrentType(obj.m_electricCurrentType);
    setInputVoltage(obj.m_inputVoltage);
    setInputFrequency(obj.m_inputFrequency);
    setFullLoadCurrent(obj.m_fullLoadCurrent);
    setMinimumCircuitCurrent(obj.m_minimumCircuitCurrent);
    setMaximumPowerInput(obj.m_maximumPowerInput);
    setRatedPowerInput(obj.m_ratedPowerInput);
    setInputPhase(obj.m_inputPhase);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElectricalBaseProperties::s_type("IfcElectricalBaseProperties");
