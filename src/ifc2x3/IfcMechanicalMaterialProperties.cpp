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

#include "ifc2x3/IfcMechanicalMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcMechanicalMaterialProperties::IfcMechanicalMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_dynamicViscosity = Step::getUnset(m_dynamicViscosity);
    m_youngModulus = Step::getUnset(m_youngModulus);
    m_shearModulus = Step::getUnset(m_shearModulus);
    m_poissonRatio = Step::getUnset(m_poissonRatio);
    m_thermalExpansionCoefficient = Step::getUnset(m_thermalExpansionCoefficient);
}

IfcMechanicalMaterialProperties::~IfcMechanicalMaterialProperties() {
}

bool IfcMechanicalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMechanicalMaterialProperties(this);
}

const std::string &IfcMechanicalMaterialProperties::type() const {
    return IfcMechanicalMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcMechanicalMaterialProperties::getClassType() {
    return IfcMechanicalMaterialProperties::s_type;
}

const Step::ClassType &IfcMechanicalMaterialProperties::getType() const {
    return IfcMechanicalMaterialProperties::s_type;
}

bool IfcMechanicalMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcMechanicalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcDynamicViscosityMeasure IfcMechanicalMaterialProperties::getDynamicViscosity() {
    if (Step::BaseObject::inited()) {
        return m_dynamicViscosity;
    }
    else {
        return Step::getUnset(m_dynamicViscosity);
    }
}

const IfcDynamicViscosityMeasure IfcMechanicalMaterialProperties::getDynamicViscosity() const {
    IfcMechanicalMaterialProperties * deConstObject = const_cast< IfcMechanicalMaterialProperties * > (this);
    return deConstObject->getDynamicViscosity();
}

void IfcMechanicalMaterialProperties::setDynamicViscosity(IfcDynamicViscosityMeasure value) {
    m_dynamicViscosity = value;
}

void IfcMechanicalMaterialProperties::unsetDynamicViscosity() {
    m_dynamicViscosity = Step::getUnset(getDynamicViscosity());
}

bool IfcMechanicalMaterialProperties::testDynamicViscosity() const {
    return !Step::isUnset(getDynamicViscosity());
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getYoungModulus() {
    if (Step::BaseObject::inited()) {
        return m_youngModulus;
    }
    else {
        return Step::getUnset(m_youngModulus);
    }
}

const IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getYoungModulus() const {
    IfcMechanicalMaterialProperties * deConstObject = const_cast< IfcMechanicalMaterialProperties * > (this);
    return deConstObject->getYoungModulus();
}

void IfcMechanicalMaterialProperties::setYoungModulus(IfcModulusOfElasticityMeasure value) {
    m_youngModulus = value;
}

void IfcMechanicalMaterialProperties::unsetYoungModulus() {
    m_youngModulus = Step::getUnset(getYoungModulus());
}

bool IfcMechanicalMaterialProperties::testYoungModulus() const {
    return !Step::isUnset(getYoungModulus());
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getShearModulus() {
    if (Step::BaseObject::inited()) {
        return m_shearModulus;
    }
    else {
        return Step::getUnset(m_shearModulus);
    }
}

const IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getShearModulus() const {
    IfcMechanicalMaterialProperties * deConstObject = const_cast< IfcMechanicalMaterialProperties * > (this);
    return deConstObject->getShearModulus();
}

void IfcMechanicalMaterialProperties::setShearModulus(IfcModulusOfElasticityMeasure value) {
    m_shearModulus = value;
}

void IfcMechanicalMaterialProperties::unsetShearModulus() {
    m_shearModulus = Step::getUnset(getShearModulus());
}

bool IfcMechanicalMaterialProperties::testShearModulus() const {
    return !Step::isUnset(getShearModulus());
}

IfcPositiveRatioMeasure IfcMechanicalMaterialProperties::getPoissonRatio() {
    if (Step::BaseObject::inited()) {
        return m_poissonRatio;
    }
    else {
        return Step::getUnset(m_poissonRatio);
    }
}

const IfcPositiveRatioMeasure IfcMechanicalMaterialProperties::getPoissonRatio() const {
    IfcMechanicalMaterialProperties * deConstObject = const_cast< IfcMechanicalMaterialProperties * > (this);
    return deConstObject->getPoissonRatio();
}

void IfcMechanicalMaterialProperties::setPoissonRatio(IfcPositiveRatioMeasure value) {
    m_poissonRatio = value;
}

void IfcMechanicalMaterialProperties::unsetPoissonRatio() {
    m_poissonRatio = Step::getUnset(getPoissonRatio());
}

bool IfcMechanicalMaterialProperties::testPoissonRatio() const {
    return !Step::isUnset(getPoissonRatio());
}

IfcThermalExpansionCoefficientMeasure IfcMechanicalMaterialProperties::getThermalExpansionCoefficient() {
    if (Step::BaseObject::inited()) {
        return m_thermalExpansionCoefficient;
    }
    else {
        return Step::getUnset(m_thermalExpansionCoefficient);
    }
}

const IfcThermalExpansionCoefficientMeasure IfcMechanicalMaterialProperties::getThermalExpansionCoefficient() const {
    IfcMechanicalMaterialProperties * deConstObject = const_cast< IfcMechanicalMaterialProperties * > (this);
    return deConstObject->getThermalExpansionCoefficient();
}

void IfcMechanicalMaterialProperties::setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value) {
    m_thermalExpansionCoefficient = value;
}

void IfcMechanicalMaterialProperties::unsetThermalExpansionCoefficient() {
    m_thermalExpansionCoefficient = Step::getUnset(getThermalExpansionCoefficient());
}

bool IfcMechanicalMaterialProperties::testThermalExpansionCoefficient() const {
    return !Step::isUnset(getThermalExpansionCoefficient());
}

bool IfcMechanicalMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dynamicViscosity = Step::getUnset(m_dynamicViscosity);
    }
    else {
        m_dynamicViscosity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_youngModulus = Step::getUnset(m_youngModulus);
    }
    else {
        m_youngModulus = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearModulus = Step::getUnset(m_shearModulus);
    }
    else {
        m_shearModulus = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_poissonRatio = Step::getUnset(m_poissonRatio);
    }
    else {
        m_poissonRatio = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalExpansionCoefficient = Step::getUnset(m_thermalExpansionCoefficient);
    }
    else {
        m_thermalExpansionCoefficient = Step::spfToReal(arg);
    }
    return true;
}

void IfcMechanicalMaterialProperties::copy(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setDynamicViscosity(obj.m_dynamicViscosity);
    setYoungModulus(obj.m_youngModulus);
    setShearModulus(obj.m_shearModulus);
    setPoissonRatio(obj.m_poissonRatio);
    setThermalExpansionCoefficient(obj.m_thermalExpansionCoefficient);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalMaterialProperties::s_type("IfcMechanicalMaterialProperties");
