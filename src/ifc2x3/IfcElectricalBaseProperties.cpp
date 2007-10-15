/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcElectricalBaseProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcElectricalBaseProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricalBaseProperties(this);
}

const std::string &IfcElectricalBaseProperties::type() {
    return IfcElectricalBaseProperties::s_type.getName();
}

Step::ClassType IfcElectricalBaseProperties::getClassType() {
    return IfcElectricalBaseProperties::s_type;
}

Step::ClassType IfcElectricalBaseProperties::getType() const {
    return IfcElectricalBaseProperties::s_type;
}

bool IfcElectricalBaseProperties::isOfType(Step::ClassType t) {
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

void IfcElectricalBaseProperties::setElectricCurrentType(IfcElectricCurrentEnum value) {
    m_electricCurrentType = value;
}

IfcElectricVoltageMeasure IfcElectricalBaseProperties::getInputVoltage() {
    if (Step::BaseObject::inited()) {
        return m_inputVoltage;
    }
    else {
        return Step::getUnset(m_inputVoltage);
    }
}

void IfcElectricalBaseProperties::setInputVoltage(IfcElectricVoltageMeasure value) {
    m_inputVoltage = value;
}

IfcFrequencyMeasure IfcElectricalBaseProperties::getInputFrequency() {
    if (Step::BaseObject::inited()) {
        return m_inputFrequency;
    }
    else {
        return Step::getUnset(m_inputFrequency);
    }
}

void IfcElectricalBaseProperties::setInputFrequency(IfcFrequencyMeasure value) {
    m_inputFrequency = value;
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getFullLoadCurrent() {
    if (Step::BaseObject::inited()) {
        return m_fullLoadCurrent;
    }
    else {
        return Step::getUnset(m_fullLoadCurrent);
    }
}

void IfcElectricalBaseProperties::setFullLoadCurrent(IfcElectricCurrentMeasure value) {
    m_fullLoadCurrent = value;
}

IfcElectricCurrentMeasure IfcElectricalBaseProperties::getMinimumCircuitCurrent() {
    if (Step::BaseObject::inited()) {
        return m_minimumCircuitCurrent;
    }
    else {
        return Step::getUnset(m_minimumCircuitCurrent);
    }
}

void IfcElectricalBaseProperties::setMinimumCircuitCurrent(IfcElectricCurrentMeasure value) {
    m_minimumCircuitCurrent = value;
}

IfcPowerMeasure IfcElectricalBaseProperties::getMaximumPowerInput() {
    if (Step::BaseObject::inited()) {
        return m_maximumPowerInput;
    }
    else {
        return Step::getUnset(m_maximumPowerInput);
    }
}

void IfcElectricalBaseProperties::setMaximumPowerInput(IfcPowerMeasure value) {
    m_maximumPowerInput = value;
}

IfcPowerMeasure IfcElectricalBaseProperties::getRatedPowerInput() {
    if (Step::BaseObject::inited()) {
        return m_ratedPowerInput;
    }
    else {
        return Step::getUnset(m_ratedPowerInput);
    }
}

void IfcElectricalBaseProperties::setRatedPowerInput(IfcPowerMeasure value) {
    m_ratedPowerInput = value;
}

Step::Integer IfcElectricalBaseProperties::getInputPhase() {
    if (Step::BaseObject::inited()) {
        return m_inputPhase;
    }
    else {
        return Step::getUnset(m_inputPhase);
    }
}

void IfcElectricalBaseProperties::setInputPhase(Step::Integer value) {
    m_inputPhase = value;
}

void IfcElectricalBaseProperties::release() {
    IfcEnergyProperties::release();
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

IFC2X3_DLL_DEF Step::ClassType IfcElectricalBaseProperties::s_type("IfcElectricalBaseProperties");
