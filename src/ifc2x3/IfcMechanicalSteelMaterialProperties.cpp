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
 *     Copyright (C) 2008 CSTB                                             *
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

bool IfcMechanicalSteelMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMechanicalSteelMaterialProperties(this);
}

const std::string &IfcMechanicalSteelMaterialProperties::type() const {
    return IfcMechanicalSteelMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcMechanicalSteelMaterialProperties::getClassType() {
    return IfcMechanicalSteelMaterialProperties::s_type;
}

const Step::ClassType &IfcMechanicalSteelMaterialProperties::getType() const {
    return IfcMechanicalSteelMaterialProperties::s_type;
}

bool IfcMechanicalSteelMaterialProperties::isOfType(const Step::ClassType &t) const {
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

const IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getYieldStress() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getYieldStress();
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

const IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getUltimateStress() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getUltimateStress();
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

const IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getUltimateStrain() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getUltimateStrain();
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

const IfcModulusOfElasticityMeasure IfcMechanicalSteelMaterialProperties::getHardeningModule() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getHardeningModule();
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

const IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getProportionalStress() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getProportionalStress();
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

const IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getPlasticStrain() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getPlasticStrain();
}

void IfcMechanicalSteelMaterialProperties::setPlasticStrain(IfcPositiveRatioMeasure value) {
    m_plasticStrain = value;
}

Set_IfcRelaxation_1_n &IfcMechanicalSteelMaterialProperties::getRelaxations() {
    if (Step::BaseObject::inited()) {
        return m_relaxations;
    }
    else {
        m_relaxations.setUnset(true);
        return m_relaxations;
    }
}

const Set_IfcRelaxation_1_n &IfcMechanicalSteelMaterialProperties::getRelaxations() const {
    IfcMechanicalSteelMaterialProperties * deConstObject = const_cast< IfcMechanicalSteelMaterialProperties * > (this);
    return deConstObject->getRelaxations();
}

void IfcMechanicalSteelMaterialProperties::setRelaxations(const Set_IfcRelaxation_1_n &value) {
    m_relaxations = value;
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
                attr2 = static_cast< IfcRelaxation * > (m_expressDataSet->get(Step::getIdParam(str1)));
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
    Step::Set< Step::RefPtr< IfcRelaxation >, 1 >::const_iterator it_m_relaxations;
    IfcMechanicalMaterialProperties::copy(obj, copyop);
    setYieldStress(obj.m_yieldStress);
    setUltimateStress(obj.m_ultimateStress);
    setUltimateStrain(obj.m_ultimateStrain);
    setHardeningModule(obj.m_hardeningModule);
    setProportionalStress(obj.m_proportionalStress);
    setPlasticStrain(obj.m_plasticStrain);
    for (it_m_relaxations = obj.m_relaxations.begin(); it_m_relaxations != obj.m_relaxations.end(); ++it_m_relaxations) {
        Step::RefPtr< IfcRelaxation > copyTarget = (IfcRelaxation *) (copyop((*it_m_relaxations).get()));
        m_relaxations.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalSteelMaterialProperties::s_type("IfcMechanicalSteelMaterialProperties");
