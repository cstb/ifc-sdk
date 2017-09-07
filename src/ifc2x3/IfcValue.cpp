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



#include <ifc2x3/IfcValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcValue::IfcValue() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcValue::IfcValue(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcValue::~IfcValue() {
    deleteUnion();
}

bool IfcValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcValue(this);
}

bool IfcValue::init() {
    return false;
}

const std::string &IfcValue::type() const {
    return IfcValue::s_type.getName();
}

const Step::ClassType &IfcValue::getClassType() {
    return IfcValue::s_type;
}

const Step::ClassType &IfcValue::getType() const {
    return IfcValue::s_type;
}

bool IfcValue::isOfType(const Step::ClassType &t) const {
    return IfcValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcValue::copy(const IfcValue &obj, const CopyOp &/*copyop*/) {
    Step::Array< Step::Real, 1, 2 >::const_iterator it_IfcComplexNumber;
    Step::Array< Step::Real, 1, 2 >::iterator it_current_IfcComplexNumber;
    Step::List< Step::Integer, 3, 4 >::const_iterator it_IfcCompoundPlaneAngleMeasure;
    switch(obj.m_type) {
    case IFCVOLUMEMEASURE:
        setIfcVolumeMeasure(obj.m_IfcValue_union.m_IfcVolumeMeasure);
        break;
    case IFCTIMEMEASURE:
        setIfcTimeMeasure(obj.m_IfcValue_union.m_IfcTimeMeasure);
        break;
    case IFCTHERMODYNAMICTEMPERATUREMEASURE:
        setIfcThermodynamicTemperatureMeasure(obj.m_IfcValue_union.m_IfcThermodynamicTemperatureMeasure);
        break;
    case IFCSOLIDANGLEMEASURE:
        setIfcSolidAngleMeasure(obj.m_IfcValue_union.m_IfcSolidAngleMeasure);
        break;
    case IFCPOSITIVERATIOMEASURE:
        setIfcPositiveRatioMeasure(obj.m_IfcValue_union.m_IfcPositiveRatioMeasure);
        break;
    case IFCRATIOMEASURE:
        setIfcRatioMeasure(obj.m_IfcValue_union.m_IfcRatioMeasure);
        break;
    case IFCPOSITIVEPLANEANGLEMEASURE:
        setIfcPositivePlaneAngleMeasure(obj.m_IfcValue_union.m_IfcPositivePlaneAngleMeasure);
        break;
    case IFCPLANEANGLEMEASURE:
        setIfcPlaneAngleMeasure(obj.m_IfcValue_union.m_IfcPlaneAngleMeasure);
        break;
    case IFCPARAMETERVALUE:
        setIfcParameterValue(obj.m_IfcValue_union.m_IfcParameterValue);
        break;
    case IFCNUMERICMEASURE:
        setIfcNumericMeasure(obj.m_IfcValue_union.m_IfcNumericMeasure);
        break;
    case IFCMASSMEASURE:
        setIfcMassMeasure(obj.m_IfcValue_union.m_IfcMassMeasure);
        break;
    case IFCPOSITIVELENGTHMEASURE:
        setIfcPositiveLengthMeasure(obj.m_IfcValue_union.m_IfcPositiveLengthMeasure);
        break;
    case IFCLENGTHMEASURE:
        setIfcLengthMeasure(obj.m_IfcValue_union.m_IfcLengthMeasure);
        break;
    case IFCELECTRICCURRENTMEASURE:
        setIfcElectricCurrentMeasure(obj.m_IfcValue_union.m_IfcElectricCurrentMeasure);
        break;
    case IFCDESCRIPTIVEMEASURE:
        setIfcDescriptiveMeasure(*obj.m_IfcValue_union.m_IfcDescriptiveMeasure);
        break;
    case IFCCOUNTMEASURE:
        setIfcCountMeasure(obj.m_IfcValue_union.m_IfcCountMeasure);
        break;
    case IFCCONTEXTDEPENDENTMEASURE:
        setIfcContextDependentMeasure(obj.m_IfcValue_union.m_IfcContextDependentMeasure);
        break;
    case IFCAREAMEASURE:
        setIfcAreaMeasure(obj.m_IfcValue_union.m_IfcAreaMeasure);
        break;
    case IFCAMOUNTOFSUBSTANCEMEASURE:
        setIfcAmountOfSubstanceMeasure(obj.m_IfcValue_union.m_IfcAmountOfSubstanceMeasure);
        break;
    case IFCLUMINOUSINTENSITYMEASURE:
        setIfcLuminousIntensityMeasure(obj.m_IfcValue_union.m_IfcLuminousIntensityMeasure);
        break;
    case IFCNORMALISEDRATIOMEASURE:
        setIfcNormalisedRatioMeasure(obj.m_IfcValue_union.m_IfcNormalisedRatioMeasure);
        break;
    case IFCCOMPLEXNUMBER:
        for (it_IfcComplexNumber = obj.m_IfcValue_union.m_IfcComplexNumber->begin(), it_current_IfcComplexNumber = m_IfcValue_union.m_IfcComplexNumber->begin(); it_IfcComplexNumber != obj.m_IfcValue_union.m_IfcComplexNumber->end(); ++it_IfcComplexNumber, ++it_current_IfcComplexNumber) {
            Step::Real copyTarget = (*it_IfcComplexNumber);
            *it_current_IfcComplexNumber = copyTarget;
        }
        break;
    case IFCINTEGER:
        setIfcInteger(obj.m_IfcValue_union.m_IfcInteger);
        break;
    case IFCREAL:
        setIfcReal(obj.m_IfcValue_union.m_IfcReal);
        break;
    case IFCBOOLEAN:
        setIfcBoolean(obj.m_IfcValue_union.m_IfcBoolean);
        break;
    case IFCIDENTIFIER:
        setIfcIdentifier(*obj.m_IfcValue_union.m_IfcIdentifier);
        break;
    case IFCTEXT:
        setIfcText(*obj.m_IfcValue_union.m_IfcText);
        break;
    case IFCLABEL:
        setIfcLabel(*obj.m_IfcValue_union.m_IfcLabel);
        break;
    case IFCLOGICAL:
        setIfcLogical(obj.m_IfcValue_union.m_IfcLogical);
        break;
    case IFCVOLUMETRICFLOWRATEMEASURE:
        setIfcVolumetricFlowRateMeasure(obj.m_IfcValue_union.m_IfcVolumetricFlowRateMeasure);
        break;
    case IFCTIMESTAMP:
        setIfcTimeStamp(obj.m_IfcValue_union.m_IfcTimeStamp);
        break;
    case IFCTHERMALTRANSMITTANCEMEASURE:
        setIfcThermalTransmittanceMeasure(obj.m_IfcValue_union.m_IfcThermalTransmittanceMeasure);
        break;
    case IFCTHERMALRESISTANCEMEASURE:
        setIfcThermalResistanceMeasure(obj.m_IfcValue_union.m_IfcThermalResistanceMeasure);
        break;
    case IFCTHERMALADMITTANCEMEASURE:
        setIfcThermalAdmittanceMeasure(obj.m_IfcValue_union.m_IfcThermalAdmittanceMeasure);
        break;
    case IFCPRESSUREMEASURE:
        setIfcPressureMeasure(obj.m_IfcValue_union.m_IfcPressureMeasure);
        break;
    case IFCPOWERMEASURE:
        setIfcPowerMeasure(obj.m_IfcValue_union.m_IfcPowerMeasure);
        break;
    case IFCMASSFLOWRATEMEASURE:
        setIfcMassFlowRateMeasure(obj.m_IfcValue_union.m_IfcMassFlowRateMeasure);
        break;
    case IFCMASSDENSITYMEASURE:
        setIfcMassDensityMeasure(obj.m_IfcValue_union.m_IfcMassDensityMeasure);
        break;
    case IFCLINEARVELOCITYMEASURE:
        setIfcLinearVelocityMeasure(obj.m_IfcValue_union.m_IfcLinearVelocityMeasure);
        break;
    case IFCKINEMATICVISCOSITYMEASURE:
        setIfcKinematicViscosityMeasure(obj.m_IfcValue_union.m_IfcKinematicViscosityMeasure);
        break;
    case IFCINTEGERCOUNTRATEMEASURE:
        setIfcIntegerCountRateMeasure(obj.m_IfcValue_union.m_IfcIntegerCountRateMeasure);
        break;
    case IFCHEATFLUXDENSITYMEASURE:
        setIfcHeatFluxDensityMeasure(obj.m_IfcValue_union.m_IfcHeatFluxDensityMeasure);
        break;
    case IFCFREQUENCYMEASURE:
        setIfcFrequencyMeasure(obj.m_IfcValue_union.m_IfcFrequencyMeasure);
        break;
    case IFCENERGYMEASURE:
        setIfcEnergyMeasure(obj.m_IfcValue_union.m_IfcEnergyMeasure);
        break;
    case IFCELECTRICVOLTAGEMEASURE:
        setIfcElectricVoltageMeasure(obj.m_IfcValue_union.m_IfcElectricVoltageMeasure);
        break;
    case IFCDYNAMICVISCOSITYMEASURE:
        setIfcDynamicViscosityMeasure(obj.m_IfcValue_union.m_IfcDynamicViscosityMeasure);
        break;
    case IFCCOMPOUNDPLANEANGLEMEASURE:
        for (it_IfcCompoundPlaneAngleMeasure = obj.m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure->begin(); it_IfcCompoundPlaneAngleMeasure != obj.m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure->end(); ++it_IfcCompoundPlaneAngleMeasure) {
            Step::Integer copyTarget = (*it_IfcCompoundPlaneAngleMeasure);
            m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure->push_back(copyTarget);
        }
        break;
    case IFCANGULARVELOCITYMEASURE:
        setIfcAngularVelocityMeasure(obj.m_IfcValue_union.m_IfcAngularVelocityMeasure);
        break;
    case IFCTHERMALCONDUCTIVITYMEASURE:
        setIfcThermalConductivityMeasure(obj.m_IfcValue_union.m_IfcThermalConductivityMeasure);
        break;
    case IFCMOLECULARWEIGHTMEASURE:
        setIfcMolecularWeightMeasure(obj.m_IfcValue_union.m_IfcMolecularWeightMeasure);
        break;
    case IFCVAPORPERMEABILITYMEASURE:
        setIfcVaporPermeabilityMeasure(obj.m_IfcValue_union.m_IfcVaporPermeabilityMeasure);
        break;
    case IFCMOISTUREDIFFUSIVITYMEASURE:
        setIfcMoistureDiffusivityMeasure(obj.m_IfcValue_union.m_IfcMoistureDiffusivityMeasure);
        break;
    case IFCISOTHERMALMOISTURECAPACITYMEASURE:
        setIfcIsothermalMoistureCapacityMeasure(obj.m_IfcValue_union.m_IfcIsothermalMoistureCapacityMeasure);
        break;
    case IFCSPECIFICHEATCAPACITYMEASURE:
        setIfcSpecificHeatCapacityMeasure(obj.m_IfcValue_union.m_IfcSpecificHeatCapacityMeasure);
        break;
    case IFCMONETARYMEASURE:
        setIfcMonetaryMeasure(obj.m_IfcValue_union.m_IfcMonetaryMeasure);
        break;
    case IFCMAGNETICFLUXDENSITYMEASURE:
        setIfcMagneticFluxDensityMeasure(obj.m_IfcValue_union.m_IfcMagneticFluxDensityMeasure);
        break;
    case IFCMAGNETICFLUXMEASURE:
        setIfcMagneticFluxMeasure(obj.m_IfcValue_union.m_IfcMagneticFluxMeasure);
        break;
    case IFCLUMINOUSFLUXMEASURE:
        setIfcLuminousFluxMeasure(obj.m_IfcValue_union.m_IfcLuminousFluxMeasure);
        break;
    case IFCFORCEMEASURE:
        setIfcForceMeasure(obj.m_IfcValue_union.m_IfcForceMeasure);
        break;
    case IFCINDUCTANCEMEASURE:
        setIfcInductanceMeasure(obj.m_IfcValue_union.m_IfcInductanceMeasure);
        break;
    case IFCILLUMINANCEMEASURE:
        setIfcIlluminanceMeasure(obj.m_IfcValue_union.m_IfcIlluminanceMeasure);
        break;
    case IFCELECTRICRESISTANCEMEASURE:
        setIfcElectricResistanceMeasure(obj.m_IfcValue_union.m_IfcElectricResistanceMeasure);
        break;
    case IFCELECTRICCONDUCTANCEMEASURE:
        setIfcElectricConductanceMeasure(obj.m_IfcValue_union.m_IfcElectricConductanceMeasure);
        break;
    case IFCELECTRICCHARGEMEASURE:
        setIfcElectricChargeMeasure(obj.m_IfcValue_union.m_IfcElectricChargeMeasure);
        break;
    case IFCDOSEEQUIVALENTMEASURE:
        setIfcDoseEquivalentMeasure(obj.m_IfcValue_union.m_IfcDoseEquivalentMeasure);
        break;
    case IFCELECTRICCAPACITANCEMEASURE:
        setIfcElectricCapacitanceMeasure(obj.m_IfcValue_union.m_IfcElectricCapacitanceMeasure);
        break;
    case IFCABSORBEDDOSEMEASURE:
        setIfcAbsorbedDoseMeasure(obj.m_IfcValue_union.m_IfcAbsorbedDoseMeasure);
        break;
    case IFCRADIOACTIVITYMEASURE:
        setIfcRadioActivityMeasure(obj.m_IfcValue_union.m_IfcRadioActivityMeasure);
        break;
    case IFCROTATIONALFREQUENCYMEASURE:
        setIfcRotationalFrequencyMeasure(obj.m_IfcValue_union.m_IfcRotationalFrequencyMeasure);
        break;
    case IFCTORQUEMEASURE:
        setIfcTorqueMeasure(obj.m_IfcValue_union.m_IfcTorqueMeasure);
        break;
    case IFCACCELERATIONMEASURE:
        setIfcAccelerationMeasure(obj.m_IfcValue_union.m_IfcAccelerationMeasure);
        break;
    case IFCLINEARFORCEMEASURE:
        setIfcLinearForceMeasure(obj.m_IfcValue_union.m_IfcLinearForceMeasure);
        break;
    case IFCLINEARSTIFFNESSMEASURE:
        setIfcLinearStiffnessMeasure(obj.m_IfcValue_union.m_IfcLinearStiffnessMeasure);
        break;
    case IFCMODULUSOFSUBGRADEREACTIONMEASURE:
        setIfcModulusOfSubgradeReactionMeasure(obj.m_IfcValue_union.m_IfcModulusOfSubgradeReactionMeasure);
        break;
    case IFCMODULUSOFELASTICITYMEASURE:
        setIfcModulusOfElasticityMeasure(obj.m_IfcValue_union.m_IfcModulusOfElasticityMeasure);
        break;
    case IFCMOMENTOFINERTIAMEASURE:
        setIfcMomentOfInertiaMeasure(obj.m_IfcValue_union.m_IfcMomentOfInertiaMeasure);
        break;
    case IFCPLANARFORCEMEASURE:
        setIfcPlanarForceMeasure(obj.m_IfcValue_union.m_IfcPlanarForceMeasure);
        break;
    case IFCROTATIONALSTIFFNESSMEASURE:
        setIfcRotationalStiffnessMeasure(obj.m_IfcValue_union.m_IfcRotationalStiffnessMeasure);
        break;
    case IFCSHEARMODULUSMEASURE:
        setIfcShearModulusMeasure(obj.m_IfcValue_union.m_IfcShearModulusMeasure);
        break;
    case IFCLINEARMOMENTMEASURE:
        setIfcLinearMomentMeasure(obj.m_IfcValue_union.m_IfcLinearMomentMeasure);
        break;
    case IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE:
        setIfcLuminousIntensityDistributionMeasure(obj.m_IfcValue_union.m_IfcLuminousIntensityDistributionMeasure);
        break;
    case IFCCURVATUREMEASURE:
        setIfcCurvatureMeasure(obj.m_IfcValue_union.m_IfcCurvatureMeasure);
        break;
    case IFCMASSPERLENGTHMEASURE:
        setIfcMassPerLengthMeasure(obj.m_IfcValue_union.m_IfcMassPerLengthMeasure);
        break;
    case IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE:
        setIfcModulusOfLinearSubgradeReactionMeasure(obj.m_IfcValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure);
        break;
    case IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE:
        setIfcModulusOfRotationalSubgradeReactionMeasure(obj.m_IfcValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure);
        break;
    case IFCROTATIONALMASSMEASURE:
        setIfcRotationalMassMeasure(obj.m_IfcValue_union.m_IfcRotationalMassMeasure);
        break;
    case IFCSECTIONALAREAINTEGRALMEASURE:
        setIfcSectionalAreaIntegralMeasure(obj.m_IfcValue_union.m_IfcSectionalAreaIntegralMeasure);
        break;
    case IFCSECTIONMODULUSMEASURE:
        setIfcSectionModulusMeasure(obj.m_IfcValue_union.m_IfcSectionModulusMeasure);
        break;
    case IFCTEMPERATUREGRADIENTMEASURE:
        setIfcTemperatureGradientMeasure(obj.m_IfcValue_union.m_IfcTemperatureGradientMeasure);
        break;
    case IFCTHERMALEXPANSIONCOEFFICIENTMEASURE:
        setIfcThermalExpansionCoefficientMeasure(obj.m_IfcValue_union.m_IfcThermalExpansionCoefficientMeasure);
        break;
    case IFCWARPINGCONSTANTMEASURE:
        setIfcWarpingConstantMeasure(obj.m_IfcValue_union.m_IfcWarpingConstantMeasure);
        break;
    case IFCWARPINGMOMENTMEASURE:
        setIfcWarpingMomentMeasure(obj.m_IfcValue_union.m_IfcWarpingMomentMeasure);
        break;
    case IFCSOUNDPOWERMEASURE:
        setIfcSoundPowerMeasure(obj.m_IfcValue_union.m_IfcSoundPowerMeasure);
        break;
    case IFCSOUNDPRESSUREMEASURE:
        setIfcSoundPressureMeasure(obj.m_IfcValue_union.m_IfcSoundPressureMeasure);
        break;
    case IFCHEATINGVALUEMEASURE:
        setIfcHeatingValueMeasure(obj.m_IfcValue_union.m_IfcHeatingValueMeasure);
        break;
    case IFCPHMEASURE:
        setIfcPHMeasure(obj.m_IfcValue_union.m_IfcPHMeasure);
        break;
    case IFCIONCONCENTRATIONMEASURE:
        setIfcIonConcentrationMeasure(obj.m_IfcValue_union.m_IfcIonConcentrationMeasure);
        break;
    default:
        break;
    }
}

std::string IfcValue::currentTypeName() const {
    switch(m_type) {
    case IFCVOLUMEMEASURE:
        return "IfcVolumeMeasure";
        break;
    case IFCTIMEMEASURE:
        return "IfcTimeMeasure";
        break;
    case IFCTHERMODYNAMICTEMPERATUREMEASURE:
        return "IfcThermodynamicTemperatureMeasure";
        break;
    case IFCSOLIDANGLEMEASURE:
        return "IfcSolidAngleMeasure";
        break;
    case IFCPOSITIVERATIOMEASURE:
        return "IfcPositiveRatioMeasure";
        break;
    case IFCRATIOMEASURE:
        return "IfcRatioMeasure";
        break;
    case IFCPOSITIVEPLANEANGLEMEASURE:
        return "IfcPositivePlaneAngleMeasure";
        break;
    case IFCPLANEANGLEMEASURE:
        return "IfcPlaneAngleMeasure";
        break;
    case IFCPARAMETERVALUE:
        return "IfcParameterValue";
        break;
    case IFCNUMERICMEASURE:
        return "IfcNumericMeasure";
        break;
    case IFCMASSMEASURE:
        return "IfcMassMeasure";
        break;
    case IFCPOSITIVELENGTHMEASURE:
        return "IfcPositiveLengthMeasure";
        break;
    case IFCLENGTHMEASURE:
        return "IfcLengthMeasure";
        break;
    case IFCELECTRICCURRENTMEASURE:
        return "IfcElectricCurrentMeasure";
        break;
    case IFCDESCRIPTIVEMEASURE:
        return "IfcDescriptiveMeasure";
        break;
    case IFCCOUNTMEASURE:
        return "IfcCountMeasure";
        break;
    case IFCCONTEXTDEPENDENTMEASURE:
        return "IfcContextDependentMeasure";
        break;
    case IFCAREAMEASURE:
        return "IfcAreaMeasure";
        break;
    case IFCAMOUNTOFSUBSTANCEMEASURE:
        return "IfcAmountOfSubstanceMeasure";
        break;
    case IFCLUMINOUSINTENSITYMEASURE:
        return "IfcLuminousIntensityMeasure";
        break;
    case IFCNORMALISEDRATIOMEASURE:
        return "IfcNormalisedRatioMeasure";
        break;
    case IFCCOMPLEXNUMBER:
        return "IfcComplexNumber";
        break;
    case IFCINTEGER:
        return "IfcInteger";
        break;
    case IFCREAL:
        return "IfcReal";
        break;
    case IFCBOOLEAN:
        return "IfcBoolean";
        break;
    case IFCIDENTIFIER:
        return "IfcIdentifier";
        break;
    case IFCTEXT:
        return "IfcText";
        break;
    case IFCLABEL:
        return "IfcLabel";
        break;
    case IFCLOGICAL:
        return "IfcLogical";
        break;
    case IFCVOLUMETRICFLOWRATEMEASURE:
        return "IfcVolumetricFlowRateMeasure";
        break;
    case IFCTIMESTAMP:
        return "IfcTimeStamp";
        break;
    case IFCTHERMALTRANSMITTANCEMEASURE:
        return "IfcThermalTransmittanceMeasure";
        break;
    case IFCTHERMALRESISTANCEMEASURE:
        return "IfcThermalResistanceMeasure";
        break;
    case IFCTHERMALADMITTANCEMEASURE:
        return "IfcThermalAdmittanceMeasure";
        break;
    case IFCPRESSUREMEASURE:
        return "IfcPressureMeasure";
        break;
    case IFCPOWERMEASURE:
        return "IfcPowerMeasure";
        break;
    case IFCMASSFLOWRATEMEASURE:
        return "IfcMassFlowRateMeasure";
        break;
    case IFCMASSDENSITYMEASURE:
        return "IfcMassDensityMeasure";
        break;
    case IFCLINEARVELOCITYMEASURE:
        return "IfcLinearVelocityMeasure";
        break;
    case IFCKINEMATICVISCOSITYMEASURE:
        return "IfcKinematicViscosityMeasure";
        break;
    case IFCINTEGERCOUNTRATEMEASURE:
        return "IfcIntegerCountRateMeasure";
        break;
    case IFCHEATFLUXDENSITYMEASURE:
        return "IfcHeatFluxDensityMeasure";
        break;
    case IFCFREQUENCYMEASURE:
        return "IfcFrequencyMeasure";
        break;
    case IFCENERGYMEASURE:
        return "IfcEnergyMeasure";
        break;
    case IFCELECTRICVOLTAGEMEASURE:
        return "IfcElectricVoltageMeasure";
        break;
    case IFCDYNAMICVISCOSITYMEASURE:
        return "IfcDynamicViscosityMeasure";
        break;
    case IFCCOMPOUNDPLANEANGLEMEASURE:
        return "IfcCompoundPlaneAngleMeasure";
        break;
    case IFCANGULARVELOCITYMEASURE:
        return "IfcAngularVelocityMeasure";
        break;
    case IFCTHERMALCONDUCTIVITYMEASURE:
        return "IfcThermalConductivityMeasure";
        break;
    case IFCMOLECULARWEIGHTMEASURE:
        return "IfcMolecularWeightMeasure";
        break;
    case IFCVAPORPERMEABILITYMEASURE:
        return "IfcVaporPermeabilityMeasure";
        break;
    case IFCMOISTUREDIFFUSIVITYMEASURE:
        return "IfcMoistureDiffusivityMeasure";
        break;
    case IFCISOTHERMALMOISTURECAPACITYMEASURE:
        return "IfcIsothermalMoistureCapacityMeasure";
        break;
    case IFCSPECIFICHEATCAPACITYMEASURE:
        return "IfcSpecificHeatCapacityMeasure";
        break;
    case IFCMONETARYMEASURE:
        return "IfcMonetaryMeasure";
        break;
    case IFCMAGNETICFLUXDENSITYMEASURE:
        return "IfcMagneticFluxDensityMeasure";
        break;
    case IFCMAGNETICFLUXMEASURE:
        return "IfcMagneticFluxMeasure";
        break;
    case IFCLUMINOUSFLUXMEASURE:
        return "IfcLuminousFluxMeasure";
        break;
    case IFCFORCEMEASURE:
        return "IfcForceMeasure";
        break;
    case IFCINDUCTANCEMEASURE:
        return "IfcInductanceMeasure";
        break;
    case IFCILLUMINANCEMEASURE:
        return "IfcIlluminanceMeasure";
        break;
    case IFCELECTRICRESISTANCEMEASURE:
        return "IfcElectricResistanceMeasure";
        break;
    case IFCELECTRICCONDUCTANCEMEASURE:
        return "IfcElectricConductanceMeasure";
        break;
    case IFCELECTRICCHARGEMEASURE:
        return "IfcElectricChargeMeasure";
        break;
    case IFCDOSEEQUIVALENTMEASURE:
        return "IfcDoseEquivalentMeasure";
        break;
    case IFCELECTRICCAPACITANCEMEASURE:
        return "IfcElectricCapacitanceMeasure";
        break;
    case IFCABSORBEDDOSEMEASURE:
        return "IfcAbsorbedDoseMeasure";
        break;
    case IFCRADIOACTIVITYMEASURE:
        return "IfcRadioActivityMeasure";
        break;
    case IFCROTATIONALFREQUENCYMEASURE:
        return "IfcRotationalFrequencyMeasure";
        break;
    case IFCTORQUEMEASURE:
        return "IfcTorqueMeasure";
        break;
    case IFCACCELERATIONMEASURE:
        return "IfcAccelerationMeasure";
        break;
    case IFCLINEARFORCEMEASURE:
        return "IfcLinearForceMeasure";
        break;
    case IFCLINEARSTIFFNESSMEASURE:
        return "IfcLinearStiffnessMeasure";
        break;
    case IFCMODULUSOFSUBGRADEREACTIONMEASURE:
        return "IfcModulusOfSubgradeReactionMeasure";
        break;
    case IFCMODULUSOFELASTICITYMEASURE:
        return "IfcModulusOfElasticityMeasure";
        break;
    case IFCMOMENTOFINERTIAMEASURE:
        return "IfcMomentOfInertiaMeasure";
        break;
    case IFCPLANARFORCEMEASURE:
        return "IfcPlanarForceMeasure";
        break;
    case IFCROTATIONALSTIFFNESSMEASURE:
        return "IfcRotationalStiffnessMeasure";
        break;
    case IFCSHEARMODULUSMEASURE:
        return "IfcShearModulusMeasure";
        break;
    case IFCLINEARMOMENTMEASURE:
        return "IfcLinearMomentMeasure";
        break;
    case IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE:
        return "IfcLuminousIntensityDistributionMeasure";
        break;
    case IFCCURVATUREMEASURE:
        return "IfcCurvatureMeasure";
        break;
    case IFCMASSPERLENGTHMEASURE:
        return "IfcMassPerLengthMeasure";
        break;
    case IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE:
        return "IfcModulusOfLinearSubgradeReactionMeasure";
        break;
    case IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE:
        return "IfcModulusOfRotationalSubgradeReactionMeasure";
        break;
    case IFCROTATIONALMASSMEASURE:
        return "IfcRotationalMassMeasure";
        break;
    case IFCSECTIONALAREAINTEGRALMEASURE:
        return "IfcSectionalAreaIntegralMeasure";
        break;
    case IFCSECTIONMODULUSMEASURE:
        return "IfcSectionModulusMeasure";
        break;
    case IFCTEMPERATUREGRADIENTMEASURE:
        return "IfcTemperatureGradientMeasure";
        break;
    case IFCTHERMALEXPANSIONCOEFFICIENTMEASURE:
        return "IfcThermalExpansionCoefficientMeasure";
        break;
    case IFCWARPINGCONSTANTMEASURE:
        return "IfcWarpingConstantMeasure";
        break;
    case IFCWARPINGMOMENTMEASURE:
        return "IfcWarpingMomentMeasure";
        break;
    case IFCSOUNDPOWERMEASURE:
        return "IfcSoundPowerMeasure";
        break;
    case IFCSOUNDPRESSUREMEASURE:
        return "IfcSoundPressureMeasure";
        break;
    case IFCHEATINGVALUEMEASURE:
        return "IfcHeatingValueMeasure";
        break;
    case IFCPHMEASURE:
        return "IfcPHMeasure";
        break;
    case IFCIONCONCENTRATIONMEASURE:
        return "IfcIonConcentrationMeasure";
        break;
    default:
        return "UNSET";
    }
}

IfcValue::IfcValue_select IfcValue::currentType() const {
    return m_type;
}

void IfcValue::deleteUnion() {
    switch(m_type) {
    case IFCDESCRIPTIVEMEASURE:
        delete m_IfcValue_union.m_IfcDescriptiveMeasure;
        break;
    case IFCCOMPLEXNUMBER:
        delete m_IfcValue_union.m_IfcComplexNumber;
        break;
    case IFCIDENTIFIER:
        delete m_IfcValue_union.m_IfcIdentifier;
        break;
    case IFCTEXT:
        delete m_IfcValue_union.m_IfcText;
        break;
    case IFCLABEL:
        delete m_IfcValue_union.m_IfcLabel;
        break;
    case IFCCOMPOUNDPLANEANGLEMEASURE:
        delete m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure;
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcVolumeMeasure IfcValue::getIfcVolumeMeasure() const {
    if (m_type == IFCVOLUMEMEASURE) {
        return m_IfcValue_union.m_IfcVolumeMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcVolumeMeasure);
    }
}

void IfcValue::setIfcVolumeMeasure(IfcVolumeMeasure value) {
    m_IfcValue_union.m_IfcVolumeMeasure = value;
    m_type = IFCVOLUMEMEASURE;
}

IfcTimeMeasure IfcValue::getIfcTimeMeasure() const {
    if (m_type == IFCTIMEMEASURE) {
        return m_IfcValue_union.m_IfcTimeMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcTimeMeasure);
    }
}

void IfcValue::setIfcTimeMeasure(IfcTimeMeasure value) {
    m_IfcValue_union.m_IfcTimeMeasure = value;
    m_type = IFCTIMEMEASURE;
}

IfcThermodynamicTemperatureMeasure IfcValue::getIfcThermodynamicTemperatureMeasure() const {
    if (m_type == IFCTHERMODYNAMICTEMPERATUREMEASURE) {
        return m_IfcValue_union.m_IfcThermodynamicTemperatureMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcThermodynamicTemperatureMeasure);
    }
}

void IfcValue::setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value) {
    m_IfcValue_union.m_IfcThermodynamicTemperatureMeasure = value;
    m_type = IFCTHERMODYNAMICTEMPERATUREMEASURE;
}

IfcSolidAngleMeasure IfcValue::getIfcSolidAngleMeasure() const {
    if (m_type == IFCSOLIDANGLEMEASURE) {
        return m_IfcValue_union.m_IfcSolidAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcSolidAngleMeasure);
    }
}

void IfcValue::setIfcSolidAngleMeasure(IfcSolidAngleMeasure value) {
    m_IfcValue_union.m_IfcSolidAngleMeasure = value;
    m_type = IFCSOLIDANGLEMEASURE;
}

IfcPositiveRatioMeasure IfcValue::getIfcPositiveRatioMeasure() const {
    if (m_type == IFCPOSITIVERATIOMEASURE) {
        return m_IfcValue_union.m_IfcPositiveRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPositiveRatioMeasure);
    }
}

void IfcValue::setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value) {
    m_IfcValue_union.m_IfcPositiveRatioMeasure = value;
    m_type = IFCPOSITIVERATIOMEASURE;
}

IfcRatioMeasure IfcValue::getIfcRatioMeasure() const {
    if (m_type == IFCRATIOMEASURE) {
        return m_IfcValue_union.m_IfcRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcRatioMeasure);
    }
}

void IfcValue::setIfcRatioMeasure(IfcRatioMeasure value) {
    m_IfcValue_union.m_IfcRatioMeasure = value;
    m_type = IFCRATIOMEASURE;
}

IfcPositivePlaneAngleMeasure IfcValue::getIfcPositivePlaneAngleMeasure() const {
    if (m_type == IFCPOSITIVEPLANEANGLEMEASURE) {
        return m_IfcValue_union.m_IfcPositivePlaneAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPositivePlaneAngleMeasure);
    }
}

void IfcValue::setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value) {
    m_IfcValue_union.m_IfcPositivePlaneAngleMeasure = value;
    m_type = IFCPOSITIVEPLANEANGLEMEASURE;
}

IfcPlaneAngleMeasure IfcValue::getIfcPlaneAngleMeasure() const {
    if (m_type == IFCPLANEANGLEMEASURE) {
        return m_IfcValue_union.m_IfcPlaneAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPlaneAngleMeasure);
    }
}

void IfcValue::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
    m_IfcValue_union.m_IfcPlaneAngleMeasure = value;
    m_type = IFCPLANEANGLEMEASURE;
}

IfcParameterValue IfcValue::getIfcParameterValue() const {
    if (m_type == IFCPARAMETERVALUE) {
        return m_IfcValue_union.m_IfcParameterValue;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcParameterValue);
    }
}

void IfcValue::setIfcParameterValue(IfcParameterValue value) {
    m_IfcValue_union.m_IfcParameterValue = value;
    m_type = IFCPARAMETERVALUE;
}

IfcNumericMeasure IfcValue::getIfcNumericMeasure() const {
    if (m_type == IFCNUMERICMEASURE) {
        return m_IfcValue_union.m_IfcNumericMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcNumericMeasure);
    }
}

void IfcValue::setIfcNumericMeasure(IfcNumericMeasure value) {
    m_IfcValue_union.m_IfcNumericMeasure = value;
    m_type = IFCNUMERICMEASURE;
}

IfcMassMeasure IfcValue::getIfcMassMeasure() const {
    if (m_type == IFCMASSMEASURE) {
        return m_IfcValue_union.m_IfcMassMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMassMeasure);
    }
}

void IfcValue::setIfcMassMeasure(IfcMassMeasure value) {
    m_IfcValue_union.m_IfcMassMeasure = value;
    m_type = IFCMASSMEASURE;
}

IfcPositiveLengthMeasure IfcValue::getIfcPositiveLengthMeasure() const {
    if (m_type == IFCPOSITIVELENGTHMEASURE) {
        return m_IfcValue_union.m_IfcPositiveLengthMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPositiveLengthMeasure);
    }
}

void IfcValue::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
    m_IfcValue_union.m_IfcPositiveLengthMeasure = value;
    m_type = IFCPOSITIVELENGTHMEASURE;
}

IfcLengthMeasure IfcValue::getIfcLengthMeasure() const {
    if (m_type == IFCLENGTHMEASURE) {
        return m_IfcValue_union.m_IfcLengthMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLengthMeasure);
    }
}

void IfcValue::setIfcLengthMeasure(IfcLengthMeasure value) {
    m_IfcValue_union.m_IfcLengthMeasure = value;
    m_type = IFCLENGTHMEASURE;
}

IfcElectricCurrentMeasure IfcValue::getIfcElectricCurrentMeasure() const {
    if (m_type == IFCELECTRICCURRENTMEASURE) {
        return m_IfcValue_union.m_IfcElectricCurrentMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcElectricCurrentMeasure);
    }
}

void IfcValue::setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value) {
    m_IfcValue_union.m_IfcElectricCurrentMeasure = value;
    m_type = IFCELECTRICCURRENTMEASURE;
}

IfcDescriptiveMeasure IfcValue::getIfcDescriptiveMeasure() const {
    if (m_type == IFCDESCRIPTIVEMEASURE) {
        return *m_IfcValue_union.m_IfcDescriptiveMeasure;
    }
    else {
        return Step::getUnset(*m_IfcValue_union.m_IfcDescriptiveMeasure);
    }
}

void IfcValue::setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value) {
    m_IfcValue_union.m_IfcDescriptiveMeasure = new IfcDescriptiveMeasure(value);
    m_type = IFCDESCRIPTIVEMEASURE;
}

IfcCountMeasure IfcValue::getIfcCountMeasure() const {
    if (m_type == IFCCOUNTMEASURE) {
        return m_IfcValue_union.m_IfcCountMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcCountMeasure);
    }
}

void IfcValue::setIfcCountMeasure(IfcCountMeasure value) {
    m_IfcValue_union.m_IfcCountMeasure = value;
    m_type = IFCCOUNTMEASURE;
}

IfcContextDependentMeasure IfcValue::getIfcContextDependentMeasure() const {
    if (m_type == IFCCONTEXTDEPENDENTMEASURE) {
        return m_IfcValue_union.m_IfcContextDependentMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcContextDependentMeasure);
    }
}

void IfcValue::setIfcContextDependentMeasure(IfcContextDependentMeasure value) {
    m_IfcValue_union.m_IfcContextDependentMeasure = value;
    m_type = IFCCONTEXTDEPENDENTMEASURE;
}

IfcAreaMeasure IfcValue::getIfcAreaMeasure() const {
    if (m_type == IFCAREAMEASURE) {
        return m_IfcValue_union.m_IfcAreaMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcAreaMeasure);
    }
}

void IfcValue::setIfcAreaMeasure(IfcAreaMeasure value) {
    m_IfcValue_union.m_IfcAreaMeasure = value;
    m_type = IFCAREAMEASURE;
}

IfcAmountOfSubstanceMeasure IfcValue::getIfcAmountOfSubstanceMeasure() const {
    if (m_type == IFCAMOUNTOFSUBSTANCEMEASURE) {
        return m_IfcValue_union.m_IfcAmountOfSubstanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcAmountOfSubstanceMeasure);
    }
}

void IfcValue::setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value) {
    m_IfcValue_union.m_IfcAmountOfSubstanceMeasure = value;
    m_type = IFCAMOUNTOFSUBSTANCEMEASURE;
}

IfcLuminousIntensityMeasure IfcValue::getIfcLuminousIntensityMeasure() const {
    if (m_type == IFCLUMINOUSINTENSITYMEASURE) {
        return m_IfcValue_union.m_IfcLuminousIntensityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLuminousIntensityMeasure);
    }
}

void IfcValue::setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value) {
    m_IfcValue_union.m_IfcLuminousIntensityMeasure = value;
    m_type = IFCLUMINOUSINTENSITYMEASURE;
}

IfcNormalisedRatioMeasure IfcValue::getIfcNormalisedRatioMeasure() const {
    if (m_type == IFCNORMALISEDRATIOMEASURE) {
        return m_IfcValue_union.m_IfcNormalisedRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcNormalisedRatioMeasure);
    }
}

void IfcValue::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
    m_IfcValue_union.m_IfcNormalisedRatioMeasure = value;
    m_type = IFCNORMALISEDRATIOMEASURE;
}

IfcComplexNumber IfcValue::getIfcComplexNumber() const {
    if (m_type == IFCCOMPLEXNUMBER) {
        return *m_IfcValue_union.m_IfcComplexNumber;
    }
    else {
        return Step::getUnset(*m_IfcValue_union.m_IfcComplexNumber);
    }
}

void IfcValue::setIfcComplexNumber(const IfcComplexNumber &value) {
    m_IfcValue_union.m_IfcComplexNumber = new IfcComplexNumber(value);
    m_type = IFCCOMPLEXNUMBER;
}

IfcInteger IfcValue::getIfcInteger() const {
    if (m_type == IFCINTEGER) {
        return m_IfcValue_union.m_IfcInteger;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcInteger);
    }
}

void IfcValue::setIfcInteger(IfcInteger value) {
    m_IfcValue_union.m_IfcInteger = value;
    m_type = IFCINTEGER;
}

IfcReal IfcValue::getIfcReal() const {
    if (m_type == IFCREAL) {
        return m_IfcValue_union.m_IfcReal;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcReal);
    }
}

void IfcValue::setIfcReal(IfcReal value) {
    m_IfcValue_union.m_IfcReal = value;
    m_type = IFCREAL;
}

IfcBoolean IfcValue::getIfcBoolean() const {
    if (m_type == IFCBOOLEAN) {
        return m_IfcValue_union.m_IfcBoolean;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcBoolean);
    }
}

void IfcValue::setIfcBoolean(IfcBoolean value) {
    m_IfcValue_union.m_IfcBoolean = value;
    m_type = IFCBOOLEAN;
}

IfcIdentifier IfcValue::getIfcIdentifier() const {
    if (m_type == IFCIDENTIFIER) {
        return *m_IfcValue_union.m_IfcIdentifier;
    }
    else {
        return Step::getUnset(*m_IfcValue_union.m_IfcIdentifier);
    }
}

void IfcValue::setIfcIdentifier(const IfcIdentifier &value) {
    m_IfcValue_union.m_IfcIdentifier = new IfcIdentifier(value);
    m_type = IFCIDENTIFIER;
}

IfcText IfcValue::getIfcText() const {
    if (m_type == IFCTEXT) {
        return *m_IfcValue_union.m_IfcText;
    }
    else {
        return Step::getUnset(*m_IfcValue_union.m_IfcText);
    }
}

void IfcValue::setIfcText(const IfcText &value) {
    m_IfcValue_union.m_IfcText = new IfcText(value);
    m_type = IFCTEXT;
}

IfcLabel IfcValue::getIfcLabel() const {
    if (m_type == IFCLABEL) {
        return *m_IfcValue_union.m_IfcLabel;
    }
    else {
        return Step::getUnset(*m_IfcValue_union.m_IfcLabel);
    }
}

void IfcValue::setIfcLabel(const IfcLabel &value) {
    m_IfcValue_union.m_IfcLabel = new IfcLabel(value);
    m_type = IFCLABEL;
}

IfcLogical IfcValue::getIfcLogical() const {
    if (m_type == IFCLOGICAL) {
        return m_IfcValue_union.m_IfcLogical;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLogical);
    }
}

void IfcValue::setIfcLogical(IfcLogical value) {
    m_IfcValue_union.m_IfcLogical = value;
    m_type = IFCLOGICAL;
}

IfcVolumetricFlowRateMeasure IfcValue::getIfcVolumetricFlowRateMeasure() const {
    if (m_type == IFCVOLUMETRICFLOWRATEMEASURE) {
        return m_IfcValue_union.m_IfcVolumetricFlowRateMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcVolumetricFlowRateMeasure);
    }
}

void IfcValue::setIfcVolumetricFlowRateMeasure(IfcVolumetricFlowRateMeasure value) {
    m_IfcValue_union.m_IfcVolumetricFlowRateMeasure = value;
    m_type = IFCVOLUMETRICFLOWRATEMEASURE;
}

IfcTimeStamp IfcValue::getIfcTimeStamp() const {
    if (m_type == IFCTIMESTAMP) {
        return m_IfcValue_union.m_IfcTimeStamp;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcTimeStamp);
    }
}

void IfcValue::setIfcTimeStamp(IfcTimeStamp value) {
    m_IfcValue_union.m_IfcTimeStamp = value;
    m_type = IFCTIMESTAMP;
}

IfcThermalTransmittanceMeasure IfcValue::getIfcThermalTransmittanceMeasure() const {
    if (m_type == IFCTHERMALTRANSMITTANCEMEASURE) {
        return m_IfcValue_union.m_IfcThermalTransmittanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcThermalTransmittanceMeasure);
    }
}

void IfcValue::setIfcThermalTransmittanceMeasure(IfcThermalTransmittanceMeasure value) {
    m_IfcValue_union.m_IfcThermalTransmittanceMeasure = value;
    m_type = IFCTHERMALTRANSMITTANCEMEASURE;
}

IfcThermalResistanceMeasure IfcValue::getIfcThermalResistanceMeasure() const {
    if (m_type == IFCTHERMALRESISTANCEMEASURE) {
        return m_IfcValue_union.m_IfcThermalResistanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcThermalResistanceMeasure);
    }
}

void IfcValue::setIfcThermalResistanceMeasure(IfcThermalResistanceMeasure value) {
    m_IfcValue_union.m_IfcThermalResistanceMeasure = value;
    m_type = IFCTHERMALRESISTANCEMEASURE;
}

IfcThermalAdmittanceMeasure IfcValue::getIfcThermalAdmittanceMeasure() const {
    if (m_type == IFCTHERMALADMITTANCEMEASURE) {
        return m_IfcValue_union.m_IfcThermalAdmittanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcThermalAdmittanceMeasure);
    }
}

void IfcValue::setIfcThermalAdmittanceMeasure(IfcThermalAdmittanceMeasure value) {
    m_IfcValue_union.m_IfcThermalAdmittanceMeasure = value;
    m_type = IFCTHERMALADMITTANCEMEASURE;
}

IfcPressureMeasure IfcValue::getIfcPressureMeasure() const {
    if (m_type == IFCPRESSUREMEASURE) {
        return m_IfcValue_union.m_IfcPressureMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPressureMeasure);
    }
}

void IfcValue::setIfcPressureMeasure(IfcPressureMeasure value) {
    m_IfcValue_union.m_IfcPressureMeasure = value;
    m_type = IFCPRESSUREMEASURE;
}

IfcPowerMeasure IfcValue::getIfcPowerMeasure() const {
    if (m_type == IFCPOWERMEASURE) {
        return m_IfcValue_union.m_IfcPowerMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPowerMeasure);
    }
}

void IfcValue::setIfcPowerMeasure(IfcPowerMeasure value) {
    m_IfcValue_union.m_IfcPowerMeasure = value;
    m_type = IFCPOWERMEASURE;
}

IfcMassFlowRateMeasure IfcValue::getIfcMassFlowRateMeasure() const {
    if (m_type == IFCMASSFLOWRATEMEASURE) {
        return m_IfcValue_union.m_IfcMassFlowRateMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMassFlowRateMeasure);
    }
}

void IfcValue::setIfcMassFlowRateMeasure(IfcMassFlowRateMeasure value) {
    m_IfcValue_union.m_IfcMassFlowRateMeasure = value;
    m_type = IFCMASSFLOWRATEMEASURE;
}

IfcMassDensityMeasure IfcValue::getIfcMassDensityMeasure() const {
    if (m_type == IFCMASSDENSITYMEASURE) {
        return m_IfcValue_union.m_IfcMassDensityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMassDensityMeasure);
    }
}

void IfcValue::setIfcMassDensityMeasure(IfcMassDensityMeasure value) {
    m_IfcValue_union.m_IfcMassDensityMeasure = value;
    m_type = IFCMASSDENSITYMEASURE;
}

IfcLinearVelocityMeasure IfcValue::getIfcLinearVelocityMeasure() const {
    if (m_type == IFCLINEARVELOCITYMEASURE) {
        return m_IfcValue_union.m_IfcLinearVelocityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLinearVelocityMeasure);
    }
}

void IfcValue::setIfcLinearVelocityMeasure(IfcLinearVelocityMeasure value) {
    m_IfcValue_union.m_IfcLinearVelocityMeasure = value;
    m_type = IFCLINEARVELOCITYMEASURE;
}

IfcKinematicViscosityMeasure IfcValue::getIfcKinematicViscosityMeasure() const {
    if (m_type == IFCKINEMATICVISCOSITYMEASURE) {
        return m_IfcValue_union.m_IfcKinematicViscosityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcKinematicViscosityMeasure);
    }
}

void IfcValue::setIfcKinematicViscosityMeasure(IfcKinematicViscosityMeasure value) {
    m_IfcValue_union.m_IfcKinematicViscosityMeasure = value;
    m_type = IFCKINEMATICVISCOSITYMEASURE;
}

IfcIntegerCountRateMeasure IfcValue::getIfcIntegerCountRateMeasure() const {
    if (m_type == IFCINTEGERCOUNTRATEMEASURE) {
        return m_IfcValue_union.m_IfcIntegerCountRateMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcIntegerCountRateMeasure);
    }
}

void IfcValue::setIfcIntegerCountRateMeasure(IfcIntegerCountRateMeasure value) {
    m_IfcValue_union.m_IfcIntegerCountRateMeasure = value;
    m_type = IFCINTEGERCOUNTRATEMEASURE;
}

IfcHeatFluxDensityMeasure IfcValue::getIfcHeatFluxDensityMeasure() const {
    if (m_type == IFCHEATFLUXDENSITYMEASURE) {
        return m_IfcValue_union.m_IfcHeatFluxDensityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcHeatFluxDensityMeasure);
    }
}

void IfcValue::setIfcHeatFluxDensityMeasure(IfcHeatFluxDensityMeasure value) {
    m_IfcValue_union.m_IfcHeatFluxDensityMeasure = value;
    m_type = IFCHEATFLUXDENSITYMEASURE;
}

IfcFrequencyMeasure IfcValue::getIfcFrequencyMeasure() const {
    if (m_type == IFCFREQUENCYMEASURE) {
        return m_IfcValue_union.m_IfcFrequencyMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcFrequencyMeasure);
    }
}

void IfcValue::setIfcFrequencyMeasure(IfcFrequencyMeasure value) {
    m_IfcValue_union.m_IfcFrequencyMeasure = value;
    m_type = IFCFREQUENCYMEASURE;
}

IfcEnergyMeasure IfcValue::getIfcEnergyMeasure() const {
    if (m_type == IFCENERGYMEASURE) {
        return m_IfcValue_union.m_IfcEnergyMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcEnergyMeasure);
    }
}

void IfcValue::setIfcEnergyMeasure(IfcEnergyMeasure value) {
    m_IfcValue_union.m_IfcEnergyMeasure = value;
    m_type = IFCENERGYMEASURE;
}

IfcElectricVoltageMeasure IfcValue::getIfcElectricVoltageMeasure() const {
    if (m_type == IFCELECTRICVOLTAGEMEASURE) {
        return m_IfcValue_union.m_IfcElectricVoltageMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcElectricVoltageMeasure);
    }
}

void IfcValue::setIfcElectricVoltageMeasure(IfcElectricVoltageMeasure value) {
    m_IfcValue_union.m_IfcElectricVoltageMeasure = value;
    m_type = IFCELECTRICVOLTAGEMEASURE;
}

IfcDynamicViscosityMeasure IfcValue::getIfcDynamicViscosityMeasure() const {
    if (m_type == IFCDYNAMICVISCOSITYMEASURE) {
        return m_IfcValue_union.m_IfcDynamicViscosityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcDynamicViscosityMeasure);
    }
}

void IfcValue::setIfcDynamicViscosityMeasure(IfcDynamicViscosityMeasure value) {
    m_IfcValue_union.m_IfcDynamicViscosityMeasure = value;
    m_type = IFCDYNAMICVISCOSITYMEASURE;
}

IfcCompoundPlaneAngleMeasure IfcValue::getIfcCompoundPlaneAngleMeasure() const {
    if (m_type == IFCCOMPOUNDPLANEANGLEMEASURE) {
        return *m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure;
    }
    else {
        return Step::getUnset(*m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure);
    }
}

void IfcValue::setIfcCompoundPlaneAngleMeasure(const IfcCompoundPlaneAngleMeasure &value) {
    m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure = new IfcCompoundPlaneAngleMeasure(value);
    m_type = IFCCOMPOUNDPLANEANGLEMEASURE;
}

IfcAngularVelocityMeasure IfcValue::getIfcAngularVelocityMeasure() const {
    if (m_type == IFCANGULARVELOCITYMEASURE) {
        return m_IfcValue_union.m_IfcAngularVelocityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcAngularVelocityMeasure);
    }
}

void IfcValue::setIfcAngularVelocityMeasure(IfcAngularVelocityMeasure value) {
    m_IfcValue_union.m_IfcAngularVelocityMeasure = value;
    m_type = IFCANGULARVELOCITYMEASURE;
}

IfcThermalConductivityMeasure IfcValue::getIfcThermalConductivityMeasure() const {
    if (m_type == IFCTHERMALCONDUCTIVITYMEASURE) {
        return m_IfcValue_union.m_IfcThermalConductivityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcThermalConductivityMeasure);
    }
}

void IfcValue::setIfcThermalConductivityMeasure(IfcThermalConductivityMeasure value) {
    m_IfcValue_union.m_IfcThermalConductivityMeasure = value;
    m_type = IFCTHERMALCONDUCTIVITYMEASURE;
}

IfcMolecularWeightMeasure IfcValue::getIfcMolecularWeightMeasure() const {
    if (m_type == IFCMOLECULARWEIGHTMEASURE) {
        return m_IfcValue_union.m_IfcMolecularWeightMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMolecularWeightMeasure);
    }
}

void IfcValue::setIfcMolecularWeightMeasure(IfcMolecularWeightMeasure value) {
    m_IfcValue_union.m_IfcMolecularWeightMeasure = value;
    m_type = IFCMOLECULARWEIGHTMEASURE;
}

IfcVaporPermeabilityMeasure IfcValue::getIfcVaporPermeabilityMeasure() const {
    if (m_type == IFCVAPORPERMEABILITYMEASURE) {
        return m_IfcValue_union.m_IfcVaporPermeabilityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcVaporPermeabilityMeasure);
    }
}

void IfcValue::setIfcVaporPermeabilityMeasure(IfcVaporPermeabilityMeasure value) {
    m_IfcValue_union.m_IfcVaporPermeabilityMeasure = value;
    m_type = IFCVAPORPERMEABILITYMEASURE;
}

IfcMoistureDiffusivityMeasure IfcValue::getIfcMoistureDiffusivityMeasure() const {
    if (m_type == IFCMOISTUREDIFFUSIVITYMEASURE) {
        return m_IfcValue_union.m_IfcMoistureDiffusivityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMoistureDiffusivityMeasure);
    }
}

void IfcValue::setIfcMoistureDiffusivityMeasure(IfcMoistureDiffusivityMeasure value) {
    m_IfcValue_union.m_IfcMoistureDiffusivityMeasure = value;
    m_type = IFCMOISTUREDIFFUSIVITYMEASURE;
}

IfcIsothermalMoistureCapacityMeasure IfcValue::getIfcIsothermalMoistureCapacityMeasure() const {
    if (m_type == IFCISOTHERMALMOISTURECAPACITYMEASURE) {
        return m_IfcValue_union.m_IfcIsothermalMoistureCapacityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcIsothermalMoistureCapacityMeasure);
    }
}

void IfcValue::setIfcIsothermalMoistureCapacityMeasure(IfcIsothermalMoistureCapacityMeasure value) {
    m_IfcValue_union.m_IfcIsothermalMoistureCapacityMeasure = value;
    m_type = IFCISOTHERMALMOISTURECAPACITYMEASURE;
}

IfcSpecificHeatCapacityMeasure IfcValue::getIfcSpecificHeatCapacityMeasure() const {
    if (m_type == IFCSPECIFICHEATCAPACITYMEASURE) {
        return m_IfcValue_union.m_IfcSpecificHeatCapacityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcSpecificHeatCapacityMeasure);
    }
}

void IfcValue::setIfcSpecificHeatCapacityMeasure(IfcSpecificHeatCapacityMeasure value) {
    m_IfcValue_union.m_IfcSpecificHeatCapacityMeasure = value;
    m_type = IFCSPECIFICHEATCAPACITYMEASURE;
}

IfcMonetaryMeasure IfcValue::getIfcMonetaryMeasure() const {
    if (m_type == IFCMONETARYMEASURE) {
        return m_IfcValue_union.m_IfcMonetaryMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMonetaryMeasure);
    }
}

void IfcValue::setIfcMonetaryMeasure(IfcMonetaryMeasure value) {
    m_IfcValue_union.m_IfcMonetaryMeasure = value;
    m_type = IFCMONETARYMEASURE;
}

IfcMagneticFluxDensityMeasure IfcValue::getIfcMagneticFluxDensityMeasure() const {
    if (m_type == IFCMAGNETICFLUXDENSITYMEASURE) {
        return m_IfcValue_union.m_IfcMagneticFluxDensityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMagneticFluxDensityMeasure);
    }
}

void IfcValue::setIfcMagneticFluxDensityMeasure(IfcMagneticFluxDensityMeasure value) {
    m_IfcValue_union.m_IfcMagneticFluxDensityMeasure = value;
    m_type = IFCMAGNETICFLUXDENSITYMEASURE;
}

IfcMagneticFluxMeasure IfcValue::getIfcMagneticFluxMeasure() const {
    if (m_type == IFCMAGNETICFLUXMEASURE) {
        return m_IfcValue_union.m_IfcMagneticFluxMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMagneticFluxMeasure);
    }
}

void IfcValue::setIfcMagneticFluxMeasure(IfcMagneticFluxMeasure value) {
    m_IfcValue_union.m_IfcMagneticFluxMeasure = value;
    m_type = IFCMAGNETICFLUXMEASURE;
}

IfcLuminousFluxMeasure IfcValue::getIfcLuminousFluxMeasure() const {
    if (m_type == IFCLUMINOUSFLUXMEASURE) {
        return m_IfcValue_union.m_IfcLuminousFluxMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLuminousFluxMeasure);
    }
}

void IfcValue::setIfcLuminousFluxMeasure(IfcLuminousFluxMeasure value) {
    m_IfcValue_union.m_IfcLuminousFluxMeasure = value;
    m_type = IFCLUMINOUSFLUXMEASURE;
}

IfcForceMeasure IfcValue::getIfcForceMeasure() const {
    if (m_type == IFCFORCEMEASURE) {
        return m_IfcValue_union.m_IfcForceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcForceMeasure);
    }
}

void IfcValue::setIfcForceMeasure(IfcForceMeasure value) {
    m_IfcValue_union.m_IfcForceMeasure = value;
    m_type = IFCFORCEMEASURE;
}

IfcInductanceMeasure IfcValue::getIfcInductanceMeasure() const {
    if (m_type == IFCINDUCTANCEMEASURE) {
        return m_IfcValue_union.m_IfcInductanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcInductanceMeasure);
    }
}

void IfcValue::setIfcInductanceMeasure(IfcInductanceMeasure value) {
    m_IfcValue_union.m_IfcInductanceMeasure = value;
    m_type = IFCINDUCTANCEMEASURE;
}

IfcIlluminanceMeasure IfcValue::getIfcIlluminanceMeasure() const {
    if (m_type == IFCILLUMINANCEMEASURE) {
        return m_IfcValue_union.m_IfcIlluminanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcIlluminanceMeasure);
    }
}

void IfcValue::setIfcIlluminanceMeasure(IfcIlluminanceMeasure value) {
    m_IfcValue_union.m_IfcIlluminanceMeasure = value;
    m_type = IFCILLUMINANCEMEASURE;
}

IfcElectricResistanceMeasure IfcValue::getIfcElectricResistanceMeasure() const {
    if (m_type == IFCELECTRICRESISTANCEMEASURE) {
        return m_IfcValue_union.m_IfcElectricResistanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcElectricResistanceMeasure);
    }
}

void IfcValue::setIfcElectricResistanceMeasure(IfcElectricResistanceMeasure value) {
    m_IfcValue_union.m_IfcElectricResistanceMeasure = value;
    m_type = IFCELECTRICRESISTANCEMEASURE;
}

IfcElectricConductanceMeasure IfcValue::getIfcElectricConductanceMeasure() const {
    if (m_type == IFCELECTRICCONDUCTANCEMEASURE) {
        return m_IfcValue_union.m_IfcElectricConductanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcElectricConductanceMeasure);
    }
}

void IfcValue::setIfcElectricConductanceMeasure(IfcElectricConductanceMeasure value) {
    m_IfcValue_union.m_IfcElectricConductanceMeasure = value;
    m_type = IFCELECTRICCONDUCTANCEMEASURE;
}

IfcElectricChargeMeasure IfcValue::getIfcElectricChargeMeasure() const {
    if (m_type == IFCELECTRICCHARGEMEASURE) {
        return m_IfcValue_union.m_IfcElectricChargeMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcElectricChargeMeasure);
    }
}

void IfcValue::setIfcElectricChargeMeasure(IfcElectricChargeMeasure value) {
    m_IfcValue_union.m_IfcElectricChargeMeasure = value;
    m_type = IFCELECTRICCHARGEMEASURE;
}

IfcDoseEquivalentMeasure IfcValue::getIfcDoseEquivalentMeasure() const {
    if (m_type == IFCDOSEEQUIVALENTMEASURE) {
        return m_IfcValue_union.m_IfcDoseEquivalentMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcDoseEquivalentMeasure);
    }
}

void IfcValue::setIfcDoseEquivalentMeasure(IfcDoseEquivalentMeasure value) {
    m_IfcValue_union.m_IfcDoseEquivalentMeasure = value;
    m_type = IFCDOSEEQUIVALENTMEASURE;
}

IfcElectricCapacitanceMeasure IfcValue::getIfcElectricCapacitanceMeasure() const {
    if (m_type == IFCELECTRICCAPACITANCEMEASURE) {
        return m_IfcValue_union.m_IfcElectricCapacitanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcElectricCapacitanceMeasure);
    }
}

void IfcValue::setIfcElectricCapacitanceMeasure(IfcElectricCapacitanceMeasure value) {
    m_IfcValue_union.m_IfcElectricCapacitanceMeasure = value;
    m_type = IFCELECTRICCAPACITANCEMEASURE;
}

IfcAbsorbedDoseMeasure IfcValue::getIfcAbsorbedDoseMeasure() const {
    if (m_type == IFCABSORBEDDOSEMEASURE) {
        return m_IfcValue_union.m_IfcAbsorbedDoseMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcAbsorbedDoseMeasure);
    }
}

void IfcValue::setIfcAbsorbedDoseMeasure(IfcAbsorbedDoseMeasure value) {
    m_IfcValue_union.m_IfcAbsorbedDoseMeasure = value;
    m_type = IFCABSORBEDDOSEMEASURE;
}

IfcRadioActivityMeasure IfcValue::getIfcRadioActivityMeasure() const {
    if (m_type == IFCRADIOACTIVITYMEASURE) {
        return m_IfcValue_union.m_IfcRadioActivityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcRadioActivityMeasure);
    }
}

void IfcValue::setIfcRadioActivityMeasure(IfcRadioActivityMeasure value) {
    m_IfcValue_union.m_IfcRadioActivityMeasure = value;
    m_type = IFCRADIOACTIVITYMEASURE;
}

IfcRotationalFrequencyMeasure IfcValue::getIfcRotationalFrequencyMeasure() const {
    if (m_type == IFCROTATIONALFREQUENCYMEASURE) {
        return m_IfcValue_union.m_IfcRotationalFrequencyMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcRotationalFrequencyMeasure);
    }
}

void IfcValue::setIfcRotationalFrequencyMeasure(IfcRotationalFrequencyMeasure value) {
    m_IfcValue_union.m_IfcRotationalFrequencyMeasure = value;
    m_type = IFCROTATIONALFREQUENCYMEASURE;
}

IfcTorqueMeasure IfcValue::getIfcTorqueMeasure() const {
    if (m_type == IFCTORQUEMEASURE) {
        return m_IfcValue_union.m_IfcTorqueMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcTorqueMeasure);
    }
}

void IfcValue::setIfcTorqueMeasure(IfcTorqueMeasure value) {
    m_IfcValue_union.m_IfcTorqueMeasure = value;
    m_type = IFCTORQUEMEASURE;
}

IfcAccelerationMeasure IfcValue::getIfcAccelerationMeasure() const {
    if (m_type == IFCACCELERATIONMEASURE) {
        return m_IfcValue_union.m_IfcAccelerationMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcAccelerationMeasure);
    }
}

void IfcValue::setIfcAccelerationMeasure(IfcAccelerationMeasure value) {
    m_IfcValue_union.m_IfcAccelerationMeasure = value;
    m_type = IFCACCELERATIONMEASURE;
}

IfcLinearForceMeasure IfcValue::getIfcLinearForceMeasure() const {
    if (m_type == IFCLINEARFORCEMEASURE) {
        return m_IfcValue_union.m_IfcLinearForceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLinearForceMeasure);
    }
}

void IfcValue::setIfcLinearForceMeasure(IfcLinearForceMeasure value) {
    m_IfcValue_union.m_IfcLinearForceMeasure = value;
    m_type = IFCLINEARFORCEMEASURE;
}

IfcLinearStiffnessMeasure IfcValue::getIfcLinearStiffnessMeasure() const {
    if (m_type == IFCLINEARSTIFFNESSMEASURE) {
        return m_IfcValue_union.m_IfcLinearStiffnessMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLinearStiffnessMeasure);
    }
}

void IfcValue::setIfcLinearStiffnessMeasure(IfcLinearStiffnessMeasure value) {
    m_IfcValue_union.m_IfcLinearStiffnessMeasure = value;
    m_type = IFCLINEARSTIFFNESSMEASURE;
}

IfcModulusOfSubgradeReactionMeasure IfcValue::getIfcModulusOfSubgradeReactionMeasure() const {
    if (m_type == IFCMODULUSOFSUBGRADEREACTIONMEASURE) {
        return m_IfcValue_union.m_IfcModulusOfSubgradeReactionMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcModulusOfSubgradeReactionMeasure);
    }
}

void IfcValue::setIfcModulusOfSubgradeReactionMeasure(IfcModulusOfSubgradeReactionMeasure value) {
    m_IfcValue_union.m_IfcModulusOfSubgradeReactionMeasure = value;
    m_type = IFCMODULUSOFSUBGRADEREACTIONMEASURE;
}

IfcModulusOfElasticityMeasure IfcValue::getIfcModulusOfElasticityMeasure() const {
    if (m_type == IFCMODULUSOFELASTICITYMEASURE) {
        return m_IfcValue_union.m_IfcModulusOfElasticityMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcModulusOfElasticityMeasure);
    }
}

void IfcValue::setIfcModulusOfElasticityMeasure(IfcModulusOfElasticityMeasure value) {
    m_IfcValue_union.m_IfcModulusOfElasticityMeasure = value;
    m_type = IFCMODULUSOFELASTICITYMEASURE;
}

IfcMomentOfInertiaMeasure IfcValue::getIfcMomentOfInertiaMeasure() const {
    if (m_type == IFCMOMENTOFINERTIAMEASURE) {
        return m_IfcValue_union.m_IfcMomentOfInertiaMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMomentOfInertiaMeasure);
    }
}

void IfcValue::setIfcMomentOfInertiaMeasure(IfcMomentOfInertiaMeasure value) {
    m_IfcValue_union.m_IfcMomentOfInertiaMeasure = value;
    m_type = IFCMOMENTOFINERTIAMEASURE;
}

IfcPlanarForceMeasure IfcValue::getIfcPlanarForceMeasure() const {
    if (m_type == IFCPLANARFORCEMEASURE) {
        return m_IfcValue_union.m_IfcPlanarForceMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPlanarForceMeasure);
    }
}

void IfcValue::setIfcPlanarForceMeasure(IfcPlanarForceMeasure value) {
    m_IfcValue_union.m_IfcPlanarForceMeasure = value;
    m_type = IFCPLANARFORCEMEASURE;
}

IfcRotationalStiffnessMeasure IfcValue::getIfcRotationalStiffnessMeasure() const {
    if (m_type == IFCROTATIONALSTIFFNESSMEASURE) {
        return m_IfcValue_union.m_IfcRotationalStiffnessMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcRotationalStiffnessMeasure);
    }
}

void IfcValue::setIfcRotationalStiffnessMeasure(IfcRotationalStiffnessMeasure value) {
    m_IfcValue_union.m_IfcRotationalStiffnessMeasure = value;
    m_type = IFCROTATIONALSTIFFNESSMEASURE;
}

IfcShearModulusMeasure IfcValue::getIfcShearModulusMeasure() const {
    if (m_type == IFCSHEARMODULUSMEASURE) {
        return m_IfcValue_union.m_IfcShearModulusMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcShearModulusMeasure);
    }
}

void IfcValue::setIfcShearModulusMeasure(IfcShearModulusMeasure value) {
    m_IfcValue_union.m_IfcShearModulusMeasure = value;
    m_type = IFCSHEARMODULUSMEASURE;
}

IfcLinearMomentMeasure IfcValue::getIfcLinearMomentMeasure() const {
    if (m_type == IFCLINEARMOMENTMEASURE) {
        return m_IfcValue_union.m_IfcLinearMomentMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLinearMomentMeasure);
    }
}

void IfcValue::setIfcLinearMomentMeasure(IfcLinearMomentMeasure value) {
    m_IfcValue_union.m_IfcLinearMomentMeasure = value;
    m_type = IFCLINEARMOMENTMEASURE;
}

IfcLuminousIntensityDistributionMeasure IfcValue::getIfcLuminousIntensityDistributionMeasure() const {
    if (m_type == IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE) {
        return m_IfcValue_union.m_IfcLuminousIntensityDistributionMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcLuminousIntensityDistributionMeasure);
    }
}

void IfcValue::setIfcLuminousIntensityDistributionMeasure(IfcLuminousIntensityDistributionMeasure value) {
    m_IfcValue_union.m_IfcLuminousIntensityDistributionMeasure = value;
    m_type = IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE;
}

IfcCurvatureMeasure IfcValue::getIfcCurvatureMeasure() const {
    if (m_type == IFCCURVATUREMEASURE) {
        return m_IfcValue_union.m_IfcCurvatureMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcCurvatureMeasure);
    }
}

void IfcValue::setIfcCurvatureMeasure(IfcCurvatureMeasure value) {
    m_IfcValue_union.m_IfcCurvatureMeasure = value;
    m_type = IFCCURVATUREMEASURE;
}

IfcMassPerLengthMeasure IfcValue::getIfcMassPerLengthMeasure() const {
    if (m_type == IFCMASSPERLENGTHMEASURE) {
        return m_IfcValue_union.m_IfcMassPerLengthMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcMassPerLengthMeasure);
    }
}

void IfcValue::setIfcMassPerLengthMeasure(IfcMassPerLengthMeasure value) {
    m_IfcValue_union.m_IfcMassPerLengthMeasure = value;
    m_type = IFCMASSPERLENGTHMEASURE;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcValue::getIfcModulusOfLinearSubgradeReactionMeasure() const {
    if (m_type == IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE) {
        return m_IfcValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure);
    }
}

void IfcValue::setIfcModulusOfLinearSubgradeReactionMeasure(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_IfcValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure = value;
    m_type = IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcValue::getIfcModulusOfRotationalSubgradeReactionMeasure() const {
    if (m_type == IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE) {
        return m_IfcValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure);
    }
}

void IfcValue::setIfcModulusOfRotationalSubgradeReactionMeasure(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_IfcValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure = value;
    m_type = IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE;
}

IfcRotationalMassMeasure IfcValue::getIfcRotationalMassMeasure() const {
    if (m_type == IFCROTATIONALMASSMEASURE) {
        return m_IfcValue_union.m_IfcRotationalMassMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcRotationalMassMeasure);
    }
}

void IfcValue::setIfcRotationalMassMeasure(IfcRotationalMassMeasure value) {
    m_IfcValue_union.m_IfcRotationalMassMeasure = value;
    m_type = IFCROTATIONALMASSMEASURE;
}

IfcSectionalAreaIntegralMeasure IfcValue::getIfcSectionalAreaIntegralMeasure() const {
    if (m_type == IFCSECTIONALAREAINTEGRALMEASURE) {
        return m_IfcValue_union.m_IfcSectionalAreaIntegralMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcSectionalAreaIntegralMeasure);
    }
}

void IfcValue::setIfcSectionalAreaIntegralMeasure(IfcSectionalAreaIntegralMeasure value) {
    m_IfcValue_union.m_IfcSectionalAreaIntegralMeasure = value;
    m_type = IFCSECTIONALAREAINTEGRALMEASURE;
}

IfcSectionModulusMeasure IfcValue::getIfcSectionModulusMeasure() const {
    if (m_type == IFCSECTIONMODULUSMEASURE) {
        return m_IfcValue_union.m_IfcSectionModulusMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcSectionModulusMeasure);
    }
}

void IfcValue::setIfcSectionModulusMeasure(IfcSectionModulusMeasure value) {
    m_IfcValue_union.m_IfcSectionModulusMeasure = value;
    m_type = IFCSECTIONMODULUSMEASURE;
}

IfcTemperatureGradientMeasure IfcValue::getIfcTemperatureGradientMeasure() const {
    if (m_type == IFCTEMPERATUREGRADIENTMEASURE) {
        return m_IfcValue_union.m_IfcTemperatureGradientMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcTemperatureGradientMeasure);
    }
}

void IfcValue::setIfcTemperatureGradientMeasure(IfcTemperatureGradientMeasure value) {
    m_IfcValue_union.m_IfcTemperatureGradientMeasure = value;
    m_type = IFCTEMPERATUREGRADIENTMEASURE;
}

IfcThermalExpansionCoefficientMeasure IfcValue::getIfcThermalExpansionCoefficientMeasure() const {
    if (m_type == IFCTHERMALEXPANSIONCOEFFICIENTMEASURE) {
        return m_IfcValue_union.m_IfcThermalExpansionCoefficientMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcThermalExpansionCoefficientMeasure);
    }
}

void IfcValue::setIfcThermalExpansionCoefficientMeasure(IfcThermalExpansionCoefficientMeasure value) {
    m_IfcValue_union.m_IfcThermalExpansionCoefficientMeasure = value;
    m_type = IFCTHERMALEXPANSIONCOEFFICIENTMEASURE;
}

IfcWarpingConstantMeasure IfcValue::getIfcWarpingConstantMeasure() const {
    if (m_type == IFCWARPINGCONSTANTMEASURE) {
        return m_IfcValue_union.m_IfcWarpingConstantMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcWarpingConstantMeasure);
    }
}

void IfcValue::setIfcWarpingConstantMeasure(IfcWarpingConstantMeasure value) {
    m_IfcValue_union.m_IfcWarpingConstantMeasure = value;
    m_type = IFCWARPINGCONSTANTMEASURE;
}

IfcWarpingMomentMeasure IfcValue::getIfcWarpingMomentMeasure() const {
    if (m_type == IFCWARPINGMOMENTMEASURE) {
        return m_IfcValue_union.m_IfcWarpingMomentMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcWarpingMomentMeasure);
    }
}

void IfcValue::setIfcWarpingMomentMeasure(IfcWarpingMomentMeasure value) {
    m_IfcValue_union.m_IfcWarpingMomentMeasure = value;
    m_type = IFCWARPINGMOMENTMEASURE;
}

IfcSoundPowerMeasure IfcValue::getIfcSoundPowerMeasure() const {
    if (m_type == IFCSOUNDPOWERMEASURE) {
        return m_IfcValue_union.m_IfcSoundPowerMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcSoundPowerMeasure);
    }
}

void IfcValue::setIfcSoundPowerMeasure(IfcSoundPowerMeasure value) {
    m_IfcValue_union.m_IfcSoundPowerMeasure = value;
    m_type = IFCSOUNDPOWERMEASURE;
}

IfcSoundPressureMeasure IfcValue::getIfcSoundPressureMeasure() const {
    if (m_type == IFCSOUNDPRESSUREMEASURE) {
        return m_IfcValue_union.m_IfcSoundPressureMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcSoundPressureMeasure);
    }
}

void IfcValue::setIfcSoundPressureMeasure(IfcSoundPressureMeasure value) {
    m_IfcValue_union.m_IfcSoundPressureMeasure = value;
    m_type = IFCSOUNDPRESSUREMEASURE;
}

IfcHeatingValueMeasure IfcValue::getIfcHeatingValueMeasure() const {
    if (m_type == IFCHEATINGVALUEMEASURE) {
        return m_IfcValue_union.m_IfcHeatingValueMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcHeatingValueMeasure);
    }
}

void IfcValue::setIfcHeatingValueMeasure(IfcHeatingValueMeasure value) {
    m_IfcValue_union.m_IfcHeatingValueMeasure = value;
    m_type = IFCHEATINGVALUEMEASURE;
}

IfcPHMeasure IfcValue::getIfcPHMeasure() const {
    if (m_type == IFCPHMEASURE) {
        return m_IfcValue_union.m_IfcPHMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcPHMeasure);
    }
}

void IfcValue::setIfcPHMeasure(IfcPHMeasure value) {
    m_IfcValue_union.m_IfcPHMeasure = value;
    m_type = IFCPHMEASURE;
}

IfcIonConcentrationMeasure IfcValue::getIfcIonConcentrationMeasure() const {
    if (m_type == IFCIONCONCENTRATIONMEASURE) {
        return m_IfcValue_union.m_IfcIonConcentrationMeasure;
    }
    else {
        return Step::getUnset(m_IfcValue_union.m_IfcIonConcentrationMeasure);
    }
}

void IfcValue::setIfcIonConcentrationMeasure(IfcIonConcentrationMeasure value) {
    m_IfcValue_union.m_IfcIonConcentrationMeasure = value;
    m_type = IFCIONCONCENTRATIONMEASURE;
}

void IfcValue::set(Step::BaseObject * /*v*/) {
}

IFC2X3_EXPORT Step::ClassType IfcValue::s_type("IfcValue");
