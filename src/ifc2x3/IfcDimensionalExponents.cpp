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

#include "ifc2x3/IfcDimensionalExponents.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcDimensionalExponents::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDimensionalExponents(this);
}

const std::string &IfcDimensionalExponents::type() {
    return IfcDimensionalExponents::s_type.getName();
}

Step::ClassType IfcDimensionalExponents::getClassType() {
    return IfcDimensionalExponents::s_type;
}

Step::ClassType IfcDimensionalExponents::getType() const {
    return IfcDimensionalExponents::s_type;
}

bool IfcDimensionalExponents::isOfType(Step::ClassType t) {
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

void IfcDimensionalExponents::setLengthExponent(Step::Integer value) {
    m_lengthExponent = value;
}

Step::Integer IfcDimensionalExponents::getMassExponent() {
    if (Step::BaseObject::inited()) {
        return m_massExponent;
    }
    else {
        return Step::getUnset(m_massExponent);
    }
}

void IfcDimensionalExponents::setMassExponent(Step::Integer value) {
    m_massExponent = value;
}

Step::Integer IfcDimensionalExponents::getTimeExponent() {
    if (Step::BaseObject::inited()) {
        return m_timeExponent;
    }
    else {
        return Step::getUnset(m_timeExponent);
    }
}

void IfcDimensionalExponents::setTimeExponent(Step::Integer value) {
    m_timeExponent = value;
}

Step::Integer IfcDimensionalExponents::getElectricCurrentExponent() {
    if (Step::BaseObject::inited()) {
        return m_electricCurrentExponent;
    }
    else {
        return Step::getUnset(m_electricCurrentExponent);
    }
}

void IfcDimensionalExponents::setElectricCurrentExponent(Step::Integer value) {
    m_electricCurrentExponent = value;
}

Step::Integer IfcDimensionalExponents::getThermodynamicTemperatureExponent() {
    if (Step::BaseObject::inited()) {
        return m_thermodynamicTemperatureExponent;
    }
    else {
        return Step::getUnset(m_thermodynamicTemperatureExponent);
    }
}

void IfcDimensionalExponents::setThermodynamicTemperatureExponent(Step::Integer value) {
    m_thermodynamicTemperatureExponent = value;
}

Step::Integer IfcDimensionalExponents::getAmountOfSubstanceExponent() {
    if (Step::BaseObject::inited()) {
        return m_amountOfSubstanceExponent;
    }
    else {
        return Step::getUnset(m_amountOfSubstanceExponent);
    }
}

void IfcDimensionalExponents::setAmountOfSubstanceExponent(Step::Integer value) {
    m_amountOfSubstanceExponent = value;
}

Step::Integer IfcDimensionalExponents::getLuminousIntensityExponent() {
    if (Step::BaseObject::inited()) {
        return m_luminousIntensityExponent;
    }
    else {
        return Step::getUnset(m_luminousIntensityExponent);
    }
}

void IfcDimensionalExponents::setLuminousIntensityExponent(Step::Integer value) {
    m_luminousIntensityExponent = value;
}

void IfcDimensionalExponents::release() {
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

IFC2X3_DLL_DEF Step::ClassType IfcDimensionalExponents::s_type("IfcDimensionalExponents");
