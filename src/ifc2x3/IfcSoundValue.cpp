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



#include <ifc2x3/IfcSoundValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSoundValue::IfcSoundValue(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_soundLevelTimeSeries = NULL;
    m_frequency = Step::getUnset(m_frequency);
    m_soundLevelSingleValue = NULL;
}

IfcSoundValue::~IfcSoundValue() {
}

bool IfcSoundValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSoundValue(this);
}

const std::string &IfcSoundValue::type() const {
    return IfcSoundValue::s_type.getName();
}

const Step::ClassType &IfcSoundValue::getClassType() {
    return IfcSoundValue::s_type;
}

const Step::ClassType &IfcSoundValue::getType() const {
    return IfcSoundValue::s_type;
}

bool IfcSoundValue::isOfType(const Step::ClassType &t) const {
    return IfcSoundValue::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcTimeSeries *IfcSoundValue::getSoundLevelTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_soundLevelTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcSoundValue::getSoundLevelTimeSeries() const {
    IfcSoundValue * deConstObject = const_cast< IfcSoundValue * > (this);
    return deConstObject->getSoundLevelTimeSeries();
}

void IfcSoundValue::setSoundLevelTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_soundLevelTimeSeries = value;
}

void IfcSoundValue::unsetSoundLevelTimeSeries() {
    m_soundLevelTimeSeries = Step::getUnset(getSoundLevelTimeSeries());
}

bool IfcSoundValue::testSoundLevelTimeSeries() const {
    return !Step::isUnset(getSoundLevelTimeSeries());
}

IfcFrequencyMeasure IfcSoundValue::getFrequency() {
    if (Step::BaseObject::inited()) {
        return m_frequency;
    }
    else {
        return Step::getUnset(m_frequency);
    }
}

const IfcFrequencyMeasure IfcSoundValue::getFrequency() const {
    IfcSoundValue * deConstObject = const_cast< IfcSoundValue * > (this);
    return deConstObject->getFrequency();
}

void IfcSoundValue::setFrequency(IfcFrequencyMeasure value) {
    m_frequency = value;
}

void IfcSoundValue::unsetFrequency() {
    m_frequency = Step::getUnset(getFrequency());
}

bool IfcSoundValue::testFrequency() const {
    return !Step::isUnset(getFrequency());
}

IfcDerivedMeasureValue *IfcSoundValue::getSoundLevelSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_soundLevelSingleValue.get();
    }
    else {
        return NULL;
    }
}

const IfcDerivedMeasureValue *IfcSoundValue::getSoundLevelSingleValue() const {
    IfcSoundValue * deConstObject = const_cast< IfcSoundValue * > (this);
    return deConstObject->getSoundLevelSingleValue();
}

void IfcSoundValue::setSoundLevelSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value) {
    m_soundLevelSingleValue = value;
}

void IfcSoundValue::unsetSoundLevelSingleValue() {
    m_soundLevelSingleValue = Step::getUnset(getSoundLevelSingleValue());
}

bool IfcSoundValue::testSoundLevelSingleValue() const {
    return !Step::isUnset(getSoundLevelSingleValue());
}

bool IfcSoundValue::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_soundLevelTimeSeries = NULL;
    }
    else {
        m_soundLevelTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frequency = Step::getUnset(m_frequency);
    }
    else {
        m_frequency = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_soundLevelSingleValue = NULL;
    }
    else {
        m_soundLevelSingleValue = new IfcDerivedMeasureValue;
        if (arg[0] == '#') {
            m_soundLevelSingleValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMESTAMP") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_soundLevelSingleValue->setIfcTimeStamp(tmp_attr1);
                }
                if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_soundLevelSingleValue->setIfcIntegerCountRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCENERGYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcEnergyMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
                    List_Integer_3_4 tmp_attr1;
                    tmp_attr1.setUnset(false);
                    while (true) {
                        std::string str2;
                        Step::getSubParameter(arg, str2);
                        if (str2 != "") {
                            Step::Integer attr3;
                            attr3 = Step::spfToInteger(str2);
                            tmp_attr1.push_back(attr3);
                        }
                        else {
                            break;
                        }
                    }
                    m_soundLevelSingleValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCANGULARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCINDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcInductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCILLUMINANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCHARGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCABSORBEDDOSEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                if (type1 == "IFCRADIOACTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCTORQUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcTorqueMeasure(tmp_attr1);
                }
                if (type1 == "IFCACCELERATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCSHEARMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                if (type1 == "IFCCURVATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSPERLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGCONSTANTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATINGVALUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                if (type1 == "IFCPHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcPHMeasure(tmp_attr1);
                }
                if (type1 == "IFCIONCONCENTRATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_soundLevelSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcSoundValue::copy(const IfcSoundValue &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setSoundLevelTimeSeries((IfcTimeSeries*)copyop(obj.m_soundLevelTimeSeries.get()));
    setFrequency(obj.m_frequency);
    m_soundLevelSingleValue = new IfcDerivedMeasureValue;
    m_soundLevelSingleValue->copy(*(obj.m_soundLevelSingleValue.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSoundValue::s_type("IfcSoundValue");
