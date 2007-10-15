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

#include "ifc2x3/IfcMechanicalMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcMechanicalMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMechanicalMaterialProperties(this);
}

const std::string &IfcMechanicalMaterialProperties::type() {
    return IfcMechanicalMaterialProperties::s_type.getName();
}

Step::ClassType IfcMechanicalMaterialProperties::getClassType() {
    return IfcMechanicalMaterialProperties::s_type;
}

Step::ClassType IfcMechanicalMaterialProperties::getType() const {
    return IfcMechanicalMaterialProperties::s_type;
}

bool IfcMechanicalMaterialProperties::isOfType(Step::ClassType t) {
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

void IfcMechanicalMaterialProperties::setDynamicViscosity(IfcDynamicViscosityMeasure value) {
    m_dynamicViscosity = value;
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getYoungModulus() {
    if (Step::BaseObject::inited()) {
        return m_youngModulus;
    }
    else {
        return Step::getUnset(m_youngModulus);
    }
}

void IfcMechanicalMaterialProperties::setYoungModulus(IfcModulusOfElasticityMeasure value) {
    m_youngModulus = value;
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getShearModulus() {
    if (Step::BaseObject::inited()) {
        return m_shearModulus;
    }
    else {
        return Step::getUnset(m_shearModulus);
    }
}

void IfcMechanicalMaterialProperties::setShearModulus(IfcModulusOfElasticityMeasure value) {
    m_shearModulus = value;
}

IfcPositiveRatioMeasure IfcMechanicalMaterialProperties::getPoissonRatio() {
    if (Step::BaseObject::inited()) {
        return m_poissonRatio;
    }
    else {
        return Step::getUnset(m_poissonRatio);
    }
}

void IfcMechanicalMaterialProperties::setPoissonRatio(IfcPositiveRatioMeasure value) {
    m_poissonRatio = value;
}

IfcThermalExpansionCoefficientMeasure IfcMechanicalMaterialProperties::getThermalExpansionCoefficient() {
    if (Step::BaseObject::inited()) {
        return m_thermalExpansionCoefficient;
    }
    else {
        return Step::getUnset(m_thermalExpansionCoefficient);
    }
}

void IfcMechanicalMaterialProperties::setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value) {
    m_thermalExpansionCoefficient = value;
}

void IfcMechanicalMaterialProperties::release() {
    IfcMaterialProperties::release();
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
