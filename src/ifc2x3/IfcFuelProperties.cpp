/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcFuelProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFuelProperties::IfcFuelProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_combustionTemperature = Step::getUnset(m_combustionTemperature);
    m_carbonContent = Step::getUnset(m_carbonContent);
    m_lowerHeatingValue = Step::getUnset(m_lowerHeatingValue);
    m_higherHeatingValue = Step::getUnset(m_higherHeatingValue);
}

IfcFuelProperties::~IfcFuelProperties() {
}

bool IfcFuelProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFuelProperties(this);
}

const std::string &IfcFuelProperties::type() const {
    return IfcFuelProperties::s_type.getName();
}

const Step::ClassType &IfcFuelProperties::getClassType() {
    return IfcFuelProperties::s_type;
}

const Step::ClassType &IfcFuelProperties::getType() const {
    return IfcFuelProperties::s_type;
}

bool IfcFuelProperties::isOfType(const Step::ClassType &t) const {
    return IfcFuelProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcThermodynamicTemperatureMeasure IfcFuelProperties::getCombustionTemperature() {
    if (Step::BaseObject::inited()) {
        return m_combustionTemperature;
    }
    else {
        return Step::getUnset(m_combustionTemperature);
    }
}

const IfcThermodynamicTemperatureMeasure IfcFuelProperties::getCombustionTemperature() const {
    IfcFuelProperties * deConstObject = const_cast< IfcFuelProperties * > (this);
    return deConstObject->getCombustionTemperature();
}

void IfcFuelProperties::setCombustionTemperature(IfcThermodynamicTemperatureMeasure value) {
    m_combustionTemperature = value;
}

void IfcFuelProperties::unsetCombustionTemperature() {
    m_combustionTemperature = Step::getUnset(getCombustionTemperature());
}

bool IfcFuelProperties::testCombustionTemperature() const {
    return !Step::isUnset(getCombustionTemperature());
}

IfcPositiveRatioMeasure IfcFuelProperties::getCarbonContent() {
    if (Step::BaseObject::inited()) {
        return m_carbonContent;
    }
    else {
        return Step::getUnset(m_carbonContent);
    }
}

const IfcPositiveRatioMeasure IfcFuelProperties::getCarbonContent() const {
    IfcFuelProperties * deConstObject = const_cast< IfcFuelProperties * > (this);
    return deConstObject->getCarbonContent();
}

void IfcFuelProperties::setCarbonContent(IfcPositiveRatioMeasure value) {
    m_carbonContent = value;
}

void IfcFuelProperties::unsetCarbonContent() {
    m_carbonContent = Step::getUnset(getCarbonContent());
}

bool IfcFuelProperties::testCarbonContent() const {
    return !Step::isUnset(getCarbonContent());
}

IfcHeatingValueMeasure IfcFuelProperties::getLowerHeatingValue() {
    if (Step::BaseObject::inited()) {
        return m_lowerHeatingValue;
    }
    else {
        return Step::getUnset(m_lowerHeatingValue);
    }
}

const IfcHeatingValueMeasure IfcFuelProperties::getLowerHeatingValue() const {
    IfcFuelProperties * deConstObject = const_cast< IfcFuelProperties * > (this);
    return deConstObject->getLowerHeatingValue();
}

void IfcFuelProperties::setLowerHeatingValue(IfcHeatingValueMeasure value) {
    m_lowerHeatingValue = value;
}

void IfcFuelProperties::unsetLowerHeatingValue() {
    m_lowerHeatingValue = Step::getUnset(getLowerHeatingValue());
}

bool IfcFuelProperties::testLowerHeatingValue() const {
    return !Step::isUnset(getLowerHeatingValue());
}

IfcHeatingValueMeasure IfcFuelProperties::getHigherHeatingValue() {
    if (Step::BaseObject::inited()) {
        return m_higherHeatingValue;
    }
    else {
        return Step::getUnset(m_higherHeatingValue);
    }
}

const IfcHeatingValueMeasure IfcFuelProperties::getHigherHeatingValue() const {
    IfcFuelProperties * deConstObject = const_cast< IfcFuelProperties * > (this);
    return deConstObject->getHigherHeatingValue();
}

void IfcFuelProperties::setHigherHeatingValue(IfcHeatingValueMeasure value) {
    m_higherHeatingValue = value;
}

void IfcFuelProperties::unsetHigherHeatingValue() {
    m_higherHeatingValue = Step::getUnset(getHigherHeatingValue());
}

bool IfcFuelProperties::testHigherHeatingValue() const {
    return !Step::isUnset(getHigherHeatingValue());
}

bool IfcFuelProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_combustionTemperature = Step::getUnset(m_combustionTemperature);
    }
    else {
        m_combustionTemperature = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_carbonContent = Step::getUnset(m_carbonContent);
    }
    else {
        m_carbonContent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lowerHeatingValue = Step::getUnset(m_lowerHeatingValue);
    }
    else {
        m_lowerHeatingValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_higherHeatingValue = Step::getUnset(m_higherHeatingValue);
    }
    else {
        m_higherHeatingValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcFuelProperties::copy(const IfcFuelProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setCombustionTemperature(obj.m_combustionTemperature);
    setCarbonContent(obj.m_carbonContent);
    setLowerHeatingValue(obj.m_lowerHeatingValue);
    setHigherHeatingValue(obj.m_higherHeatingValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFuelProperties::s_type("IfcFuelProperties");
