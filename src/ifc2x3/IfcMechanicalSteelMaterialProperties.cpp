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

#include "ifc2x3/IfcMechanicalSteelMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include "ifc2x3/IfcRelaxation.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMechanicalSteelMaterialProperties::IfcMechanicalSteelMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMechanicalMaterialProperties(id, args) {
    m_yieldStress = Step::getUnset(m_yieldStress);
    m_ultimateStress = Step::getUnset(m_ultimateStress);
    m_ultimateStrain = Step::getUnset(m_ultimateStrain);
    m_hardeningModule = Step::getUnset(m_hardeningModule);
    m_proportionalStress = Step::getUnset(m_proportionalStress);
    m_plasticStrain = Step::getUnset(m_plasticStrain);
    m_relaxations.setUnset(true);
}

IfcMechanicalSteelMaterialProperties::~IfcMechanicalSteelMaterialProperties() {
}

bool IfcMechanicalSteelMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMechanicalSteelMaterialProperties(this);
}

const std::string &IfcMechanicalSteelMaterialProperties::type() {
    return IfcMechanicalSteelMaterialProperties::s_type.getName();
}

Step::ClassType IfcMechanicalSteelMaterialProperties::getClassType() {
    return IfcMechanicalSteelMaterialProperties::s_type;
}

Step::ClassType IfcMechanicalSteelMaterialProperties::getType() const {
    return IfcMechanicalSteelMaterialProperties::s_type;
}

bool IfcMechanicalSteelMaterialProperties::isOfType(Step::ClassType t) {
    return IfcMechanicalSteelMaterialProperties::s_type == t ? true : IfcMechanicalMaterialProperties::isOfType(t);
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getYieldStress() {
    if (Step::BaseObject::inited()) {
        return m_yieldStress;
    }
    else {
        return Step::getUnset(m_yieldStress);
    }
}

void IfcMechanicalSteelMaterialProperties::setYieldStress(IfcPressureMeasure value) {
    m_yieldStress = value;
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getUltimateStress() {
    if (Step::BaseObject::inited()) {
        return m_ultimateStress;
    }
    else {
        return Step::getUnset(m_ultimateStress);
    }
}

void IfcMechanicalSteelMaterialProperties::setUltimateStress(IfcPressureMeasure value) {
    m_ultimateStress = value;
}

IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getUltimateStrain() {
    if (Step::BaseObject::inited()) {
        return m_ultimateStrain;
    }
    else {
        return Step::getUnset(m_ultimateStrain);
    }
}

void IfcMechanicalSteelMaterialProperties::setUltimateStrain(IfcPositiveRatioMeasure value) {
    m_ultimateStrain = value;
}

IfcModulusOfElasticityMeasure IfcMechanicalSteelMaterialProperties::getHardeningModule() {
    if (Step::BaseObject::inited()) {
        return m_hardeningModule;
    }
    else {
        return Step::getUnset(m_hardeningModule);
    }
}

void IfcMechanicalSteelMaterialProperties::setHardeningModule(IfcModulusOfElasticityMeasure value) {
    m_hardeningModule = value;
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getProportionalStress() {
    if (Step::BaseObject::inited()) {
        return m_proportionalStress;
    }
    else {
        return Step::getUnset(m_proportionalStress);
    }
}

void IfcMechanicalSteelMaterialProperties::setProportionalStress(IfcPressureMeasure value) {
    m_proportionalStress = value;
}

IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getPlasticStrain() {
    if (Step::BaseObject::inited()) {
        return m_plasticStrain;
    }
    else {
        return Step::getUnset(m_plasticStrain);
    }
}

void IfcMechanicalSteelMaterialProperties::setPlasticStrain(IfcPositiveRatioMeasure value) {
    m_plasticStrain = value;
}

Step::Set< Step::RefPtr< IfcRelaxation > > &IfcMechanicalSteelMaterialProperties::getRelaxations() {
    if (Step::BaseObject::inited()) {
        return m_relaxations;
    }
    else {
        m_relaxations.setUnset(true);
        return m_relaxations;
    }
}

void IfcMechanicalSteelMaterialProperties::setRelaxations(const Step::Set< Step::RefPtr< IfcRelaxation > > &value) {
    m_relaxations = value;
}

void IfcMechanicalSteelMaterialProperties::release() {
    IfcMechanicalMaterialProperties::release();
    m_relaxations.clear();
}

bool IfcMechanicalSteelMaterialProperties::init() {
    bool status = IfcMechanicalMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yieldStress = Step::getUnset(m_yieldStress);
    }
    else {
        m_yieldStress = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ultimateStress = Step::getUnset(m_ultimateStress);
    }
    else {
        m_ultimateStress = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ultimateStrain = Step::getUnset(m_ultimateStrain);
    }
    else {
        m_ultimateStrain = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hardeningModule = Step::getUnset(m_hardeningModule);
    }
    else {
        m_hardeningModule = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_proportionalStress = Step::getUnset(m_proportionalStress);
    }
    else {
        m_proportionalStress = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_plasticStrain = Step::getUnset(m_plasticStrain);
    }
    else {
        m_plasticStrain = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relaxations.setUnset(true);
    }
    else {
        m_relaxations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRelaxation > attr2;
                attr2 = static_cast< IfcRelaxation * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_relaxations.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcMechanicalSteelMaterialProperties::copy(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRelaxation > >::const_iterator it_m_relaxations;
    IfcMechanicalMaterialProperties::copy(obj, copyop);
    setYieldStress(obj.m_yieldStress);
    setUltimateStress(obj.m_ultimateStress);
    setUltimateStrain(obj.m_ultimateStrain);
    setHardeningModule(obj.m_hardeningModule);
    setProportionalStress(obj.m_proportionalStress);
    setPlasticStrain(obj.m_plasticStrain);
    for (it_m_relaxations = obj.m_relaxations.begin(); it_m_relaxations != obj.m_relaxations.end(); ++it_m_relaxations) {
        Step::RefPtr< IfcRelaxation > copyTarget = copyop((*it_m_relaxations).get());
        m_relaxations.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalSteelMaterialProperties::s_type("IfcMechanicalSteelMaterialProperties");
