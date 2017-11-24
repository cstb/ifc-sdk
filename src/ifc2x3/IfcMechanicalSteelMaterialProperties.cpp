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



#include <ifc2x3/IfcMechanicalSteelMaterialProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <ifc2x3/IfcRelaxation.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

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

void IfcMechanicalSteelMaterialProperties::unsetYieldStress() {
    m_yieldStress = Step::getUnset(getYieldStress());
}

bool IfcMechanicalSteelMaterialProperties::testYieldStress() const {
    return !Step::isUnset(getYieldStress());
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

void IfcMechanicalSteelMaterialProperties::unsetUltimateStress() {
    m_ultimateStress = Step::getUnset(getUltimateStress());
}

bool IfcMechanicalSteelMaterialProperties::testUltimateStress() const {
    return !Step::isUnset(getUltimateStress());
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

void IfcMechanicalSteelMaterialProperties::unsetUltimateStrain() {
    m_ultimateStrain = Step::getUnset(getUltimateStrain());
}

bool IfcMechanicalSteelMaterialProperties::testUltimateStrain() const {
    return !Step::isUnset(getUltimateStrain());
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

void IfcMechanicalSteelMaterialProperties::unsetHardeningModule() {
    m_hardeningModule = Step::getUnset(getHardeningModule());
}

bool IfcMechanicalSteelMaterialProperties::testHardeningModule() const {
    return !Step::isUnset(getHardeningModule());
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

void IfcMechanicalSteelMaterialProperties::unsetProportionalStress() {
    m_proportionalStress = Step::getUnset(getProportionalStress());
}

bool IfcMechanicalSteelMaterialProperties::testProportionalStress() const {
    return !Step::isUnset(getProportionalStress());
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

void IfcMechanicalSteelMaterialProperties::unsetPlasticStrain() {
    m_plasticStrain = Step::getUnset(getPlasticStrain());
}

bool IfcMechanicalSteelMaterialProperties::testPlasticStrain() const {
    return !Step::isUnset(getPlasticStrain());
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

void IfcMechanicalSteelMaterialProperties::unsetRelaxations() {
    m_relaxations.clear();
    m_relaxations.setUnset(true);
}

bool IfcMechanicalSteelMaterialProperties::testRelaxations() const {
    return !m_relaxations.isUnset();
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
                if (attr2.valid()) m_relaxations.insert(attr2);
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

IFC2X3_EXPORT Step::ClassType IfcMechanicalSteelMaterialProperties::s_type("IfcMechanicalSteelMaterialProperties");
