#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseObject.h>

namespace ifc2x3
{
    /**
     * Generated class for the IfcValue Select type.
     *
     */
    class IFC2X3_EXPORT IfcValue : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcValue_select 
        {
            IFCVOLUMEMEASURE,
            IFCTIMEMEASURE,
            IFCTHERMODYNAMICTEMPERATUREMEASURE,
            IFCSOLIDANGLEMEASURE,
            IFCPOSITIVERATIOMEASURE,
            IFCRATIOMEASURE,
            IFCPOSITIVEPLANEANGLEMEASURE,
            IFCPLANEANGLEMEASURE,
            IFCPARAMETERVALUE,
            IFCNUMERICMEASURE,
            IFCMASSMEASURE,
            IFCPOSITIVELENGTHMEASURE,
            IFCLENGTHMEASURE,
            IFCELECTRICCURRENTMEASURE,
            IFCDESCRIPTIVEMEASURE,
            IFCCOUNTMEASURE,
            IFCCONTEXTDEPENDENTMEASURE,
            IFCAREAMEASURE,
            IFCAMOUNTOFSUBSTANCEMEASURE,
            IFCLUMINOUSINTENSITYMEASURE,
            IFCNORMALISEDRATIOMEASURE,
            IFCCOMPLEXNUMBER,
            IFCINTEGER,
            IFCREAL,
            IFCBOOLEAN,
            IFCIDENTIFIER,
            IFCTEXT,
            IFCLABEL,
            IFCLOGICAL,
            IFCVOLUMETRICFLOWRATEMEASURE,
            IFCTIMESTAMP,
            IFCTHERMALTRANSMITTANCEMEASURE,
            IFCTHERMALRESISTANCEMEASURE,
            IFCTHERMALADMITTANCEMEASURE,
            IFCPRESSUREMEASURE,
            IFCPOWERMEASURE,
            IFCMASSFLOWRATEMEASURE,
            IFCMASSDENSITYMEASURE,
            IFCLINEARVELOCITYMEASURE,
            IFCKINEMATICVISCOSITYMEASURE,
            IFCINTEGERCOUNTRATEMEASURE,
            IFCHEATFLUXDENSITYMEASURE,
            IFCFREQUENCYMEASURE,
            IFCENERGYMEASURE,
            IFCELECTRICVOLTAGEMEASURE,
            IFCDYNAMICVISCOSITYMEASURE,
            IFCCOMPOUNDPLANEANGLEMEASURE,
            IFCANGULARVELOCITYMEASURE,
            IFCTHERMALCONDUCTIVITYMEASURE,
            IFCMOLECULARWEIGHTMEASURE,
            IFCVAPORPERMEABILITYMEASURE,
            IFCMOISTUREDIFFUSIVITYMEASURE,
            IFCISOTHERMALMOISTURECAPACITYMEASURE,
            IFCSPECIFICHEATCAPACITYMEASURE,
            IFCMONETARYMEASURE,
            IFCMAGNETICFLUXDENSITYMEASURE,
            IFCMAGNETICFLUXMEASURE,
            IFCLUMINOUSFLUXMEASURE,
            IFCFORCEMEASURE,
            IFCINDUCTANCEMEASURE,
            IFCILLUMINANCEMEASURE,
            IFCELECTRICRESISTANCEMEASURE,
            IFCELECTRICCONDUCTANCEMEASURE,
            IFCELECTRICCHARGEMEASURE,
            IFCDOSEEQUIVALENTMEASURE,
            IFCELECTRICCAPACITANCEMEASURE,
            IFCABSORBEDDOSEMEASURE,
            IFCRADIOACTIVITYMEASURE,
            IFCROTATIONALFREQUENCYMEASURE,
            IFCTORQUEMEASURE,
            IFCACCELERATIONMEASURE,
            IFCLINEARFORCEMEASURE,
            IFCLINEARSTIFFNESSMEASURE,
            IFCMODULUSOFSUBGRADEREACTIONMEASURE,
            IFCMODULUSOFELASTICITYMEASURE,
            IFCMOMENTOFINERTIAMEASURE,
            IFCPLANARFORCEMEASURE,
            IFCROTATIONALSTIFFNESSMEASURE,
            IFCSHEARMODULUSMEASURE,
            IFCLINEARMOMENTMEASURE,
            IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE,
            IFCCURVATUREMEASURE,
            IFCMASSPERLENGTHMEASURE,
            IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE,
            IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE,
            IFCROTATIONALMASSMEASURE,
            IFCSECTIONALAREAINTEGRALMEASURE,
            IFCSECTIONMODULUSMEASURE,
            IFCTEMPERATUREGRADIENTMEASURE,
            IFCTHERMALEXPANSIONCOEFFICIENTMEASURE,
            IFCWARPINGCONSTANTMEASURE,
            IFCWARPINGMOMENTMEASURE,
            IFCSOUNDPOWERMEASURE,
            IFCSOUNDPRESSUREMEASURE,
            IFCHEATINGVALUEMEASURE,
            IFCPHMEASURE,
            IFCIONCONCENTRATIONMEASURE,
            UNSET
        };

        union IfcValue_union
        {
            IfcVolumeMeasure m_IfcVolumeMeasure;
            IfcTimeMeasure m_IfcTimeMeasure;
            IfcThermodynamicTemperatureMeasure m_IfcThermodynamicTemperatureMeasure;
            IfcSolidAngleMeasure m_IfcSolidAngleMeasure;
            IfcPositiveRatioMeasure m_IfcPositiveRatioMeasure;
            IfcRatioMeasure m_IfcRatioMeasure;
            IfcPositivePlaneAngleMeasure m_IfcPositivePlaneAngleMeasure;
            IfcPlaneAngleMeasure m_IfcPlaneAngleMeasure;
            IfcParameterValue m_IfcParameterValue;
            IfcNumericMeasure m_IfcNumericMeasure;
            IfcMassMeasure m_IfcMassMeasure;
            IfcPositiveLengthMeasure m_IfcPositiveLengthMeasure;
            IfcLengthMeasure m_IfcLengthMeasure;
            IfcElectricCurrentMeasure m_IfcElectricCurrentMeasure;
            IfcDescriptiveMeasure *m_IfcDescriptiveMeasure;
            IfcCountMeasure m_IfcCountMeasure;
            IfcContextDependentMeasure m_IfcContextDependentMeasure;
            IfcAreaMeasure m_IfcAreaMeasure;
            IfcAmountOfSubstanceMeasure m_IfcAmountOfSubstanceMeasure;
            IfcLuminousIntensityMeasure m_IfcLuminousIntensityMeasure;
            IfcNormalisedRatioMeasure m_IfcNormalisedRatioMeasure;
            IfcComplexNumber *m_IfcComplexNumber;
            IfcInteger m_IfcInteger;
            IfcReal m_IfcReal;
            IfcBoolean m_IfcBoolean;
            IfcIdentifier *m_IfcIdentifier;
            IfcText *m_IfcText;
            IfcLabel *m_IfcLabel;
            IfcLogical m_IfcLogical;
            IfcVolumetricFlowRateMeasure m_IfcVolumetricFlowRateMeasure;
            IfcTimeStamp m_IfcTimeStamp;
            IfcThermalTransmittanceMeasure m_IfcThermalTransmittanceMeasure;
            IfcThermalResistanceMeasure m_IfcThermalResistanceMeasure;
            IfcThermalAdmittanceMeasure m_IfcThermalAdmittanceMeasure;
            IfcPressureMeasure m_IfcPressureMeasure;
            IfcPowerMeasure m_IfcPowerMeasure;
            IfcMassFlowRateMeasure m_IfcMassFlowRateMeasure;
            IfcMassDensityMeasure m_IfcMassDensityMeasure;
            IfcLinearVelocityMeasure m_IfcLinearVelocityMeasure;
            IfcKinematicViscosityMeasure m_IfcKinematicViscosityMeasure;
            IfcIntegerCountRateMeasure m_IfcIntegerCountRateMeasure;
            IfcHeatFluxDensityMeasure m_IfcHeatFluxDensityMeasure;
            IfcFrequencyMeasure m_IfcFrequencyMeasure;
            IfcEnergyMeasure m_IfcEnergyMeasure;
            IfcElectricVoltageMeasure m_IfcElectricVoltageMeasure;
            IfcDynamicViscosityMeasure m_IfcDynamicViscosityMeasure;
            IfcCompoundPlaneAngleMeasure *m_IfcCompoundPlaneAngleMeasure;
            IfcAngularVelocityMeasure m_IfcAngularVelocityMeasure;
            IfcThermalConductivityMeasure m_IfcThermalConductivityMeasure;
            IfcMolecularWeightMeasure m_IfcMolecularWeightMeasure;
            IfcVaporPermeabilityMeasure m_IfcVaporPermeabilityMeasure;
            IfcMoistureDiffusivityMeasure m_IfcMoistureDiffusivityMeasure;
            IfcIsothermalMoistureCapacityMeasure m_IfcIsothermalMoistureCapacityMeasure;
            IfcSpecificHeatCapacityMeasure m_IfcSpecificHeatCapacityMeasure;
            IfcMonetaryMeasure m_IfcMonetaryMeasure;
            IfcMagneticFluxDensityMeasure m_IfcMagneticFluxDensityMeasure;
            IfcMagneticFluxMeasure m_IfcMagneticFluxMeasure;
            IfcLuminousFluxMeasure m_IfcLuminousFluxMeasure;
            IfcForceMeasure m_IfcForceMeasure;
            IfcInductanceMeasure m_IfcInductanceMeasure;
            IfcIlluminanceMeasure m_IfcIlluminanceMeasure;
            IfcElectricResistanceMeasure m_IfcElectricResistanceMeasure;
            IfcElectricConductanceMeasure m_IfcElectricConductanceMeasure;
            IfcElectricChargeMeasure m_IfcElectricChargeMeasure;
            IfcDoseEquivalentMeasure m_IfcDoseEquivalentMeasure;
            IfcElectricCapacitanceMeasure m_IfcElectricCapacitanceMeasure;
            IfcAbsorbedDoseMeasure m_IfcAbsorbedDoseMeasure;
            IfcRadioActivityMeasure m_IfcRadioActivityMeasure;
            IfcRotationalFrequencyMeasure m_IfcRotationalFrequencyMeasure;
            IfcTorqueMeasure m_IfcTorqueMeasure;
            IfcAccelerationMeasure m_IfcAccelerationMeasure;
            IfcLinearForceMeasure m_IfcLinearForceMeasure;
            IfcLinearStiffnessMeasure m_IfcLinearStiffnessMeasure;
            IfcModulusOfSubgradeReactionMeasure m_IfcModulusOfSubgradeReactionMeasure;
            IfcModulusOfElasticityMeasure m_IfcModulusOfElasticityMeasure;
            IfcMomentOfInertiaMeasure m_IfcMomentOfInertiaMeasure;
            IfcPlanarForceMeasure m_IfcPlanarForceMeasure;
            IfcRotationalStiffnessMeasure m_IfcRotationalStiffnessMeasure;
            IfcShearModulusMeasure m_IfcShearModulusMeasure;
            IfcLinearMomentMeasure m_IfcLinearMomentMeasure;
            IfcLuminousIntensityDistributionMeasure m_IfcLuminousIntensityDistributionMeasure;
            IfcCurvatureMeasure m_IfcCurvatureMeasure;
            IfcMassPerLengthMeasure m_IfcMassPerLengthMeasure;
            IfcModulusOfLinearSubgradeReactionMeasure m_IfcModulusOfLinearSubgradeReactionMeasure;
            IfcModulusOfRotationalSubgradeReactionMeasure m_IfcModulusOfRotationalSubgradeReactionMeasure;
            IfcRotationalMassMeasure m_IfcRotationalMassMeasure;
            IfcSectionalAreaIntegralMeasure m_IfcSectionalAreaIntegralMeasure;
            IfcSectionModulusMeasure m_IfcSectionModulusMeasure;
            IfcTemperatureGradientMeasure m_IfcTemperatureGradientMeasure;
            IfcThermalExpansionCoefficientMeasure m_IfcThermalExpansionCoefficientMeasure;
            IfcWarpingConstantMeasure m_IfcWarpingConstantMeasure;
            IfcWarpingMomentMeasure m_IfcWarpingMomentMeasure;
            IfcSoundPowerMeasure m_IfcSoundPowerMeasure;
            IfcSoundPressureMeasure m_IfcSoundPressureMeasure;
            IfcHeatingValueMeasure m_IfcHeatingValueMeasure;
            IfcPHMeasure m_IfcPHMeasure;
            IfcIonConcentrationMeasure m_IfcIonConcentrationMeasure;
        };

        IfcValue();
        virtual ~IfcValue();

        virtual void copy(const IfcValue &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcValue_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

        IfcVolumeMeasure getIfcVolumeMeasure() const;
        void setIfcVolumeMeasure(IfcVolumeMeasure value);    

        IfcTimeMeasure getIfcTimeMeasure() const;
        void setIfcTimeMeasure(IfcTimeMeasure value);    

        IfcThermodynamicTemperatureMeasure getIfcThermodynamicTemperatureMeasure() const;
        void setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value);    

        IfcSolidAngleMeasure getIfcSolidAngleMeasure() const;
        void setIfcSolidAngleMeasure(IfcSolidAngleMeasure value);    

        IfcPositiveRatioMeasure getIfcPositiveRatioMeasure() const;
        void setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value);    

        IfcRatioMeasure getIfcRatioMeasure() const;
        void setIfcRatioMeasure(IfcRatioMeasure value);    

        IfcPositivePlaneAngleMeasure getIfcPositivePlaneAngleMeasure() const;
        void setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value);    

        IfcPlaneAngleMeasure getIfcPlaneAngleMeasure() const;
        void setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value);    

        IfcParameterValue getIfcParameterValue() const;
        void setIfcParameterValue(IfcParameterValue value);    

        IfcNumericMeasure getIfcNumericMeasure() const;
        void setIfcNumericMeasure(IfcNumericMeasure value);    

        IfcMassMeasure getIfcMassMeasure() const;
        void setIfcMassMeasure(IfcMassMeasure value);    

        IfcPositiveLengthMeasure getIfcPositiveLengthMeasure() const;
        void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);    

        IfcLengthMeasure getIfcLengthMeasure() const;
        void setIfcLengthMeasure(IfcLengthMeasure value);    

        IfcElectricCurrentMeasure getIfcElectricCurrentMeasure() const;
        void setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value);    

        IfcDescriptiveMeasure getIfcDescriptiveMeasure() const;
        void setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value);   

        IfcCountMeasure getIfcCountMeasure() const;
        void setIfcCountMeasure(IfcCountMeasure value);    

        IfcContextDependentMeasure getIfcContextDependentMeasure() const;
        void setIfcContextDependentMeasure(IfcContextDependentMeasure value);    

        IfcAreaMeasure getIfcAreaMeasure() const;
        void setIfcAreaMeasure(IfcAreaMeasure value);    

        IfcAmountOfSubstanceMeasure getIfcAmountOfSubstanceMeasure() const;
        void setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value);    

        IfcLuminousIntensityMeasure getIfcLuminousIntensityMeasure() const;
        void setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value);    

        IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure() const;
        void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);    

        IfcComplexNumber &getIfcComplexNumber() const;
        void setIfcComplexNumber(const IfcComplexNumber &value);   

        IfcInteger getIfcInteger() const;
        void setIfcInteger(IfcInteger value);    

        IfcReal getIfcReal() const;
        void setIfcReal(IfcReal value);    

        IfcBoolean getIfcBoolean() const;
        void setIfcBoolean(IfcBoolean value);    

        IfcIdentifier getIfcIdentifier() const;
        void setIfcIdentifier(const IfcIdentifier &value);   

        IfcText getIfcText() const;
        void setIfcText(const IfcText &value);   

        IfcLabel getIfcLabel() const;
        void setIfcLabel(const IfcLabel &value);   

        IfcLogical getIfcLogical() const;
        void setIfcLogical(IfcLogical value);    

        IfcVolumetricFlowRateMeasure getIfcVolumetricFlowRateMeasure() const;
        void setIfcVolumetricFlowRateMeasure(IfcVolumetricFlowRateMeasure value);    

        IfcTimeStamp getIfcTimeStamp() const;
        void setIfcTimeStamp(IfcTimeStamp value);    

        IfcThermalTransmittanceMeasure getIfcThermalTransmittanceMeasure() const;
        void setIfcThermalTransmittanceMeasure(IfcThermalTransmittanceMeasure value);    

        IfcThermalResistanceMeasure getIfcThermalResistanceMeasure() const;
        void setIfcThermalResistanceMeasure(IfcThermalResistanceMeasure value);    

        IfcThermalAdmittanceMeasure getIfcThermalAdmittanceMeasure() const;
        void setIfcThermalAdmittanceMeasure(IfcThermalAdmittanceMeasure value);    

        IfcPressureMeasure getIfcPressureMeasure() const;
        void setIfcPressureMeasure(IfcPressureMeasure value);    

        IfcPowerMeasure getIfcPowerMeasure() const;
        void setIfcPowerMeasure(IfcPowerMeasure value);    

        IfcMassFlowRateMeasure getIfcMassFlowRateMeasure() const;
        void setIfcMassFlowRateMeasure(IfcMassFlowRateMeasure value);    

        IfcMassDensityMeasure getIfcMassDensityMeasure() const;
        void setIfcMassDensityMeasure(IfcMassDensityMeasure value);    

        IfcLinearVelocityMeasure getIfcLinearVelocityMeasure() const;
        void setIfcLinearVelocityMeasure(IfcLinearVelocityMeasure value);    

        IfcKinematicViscosityMeasure getIfcKinematicViscosityMeasure() const;
        void setIfcKinematicViscosityMeasure(IfcKinematicViscosityMeasure value);    

        IfcIntegerCountRateMeasure getIfcIntegerCountRateMeasure() const;
        void setIfcIntegerCountRateMeasure(IfcIntegerCountRateMeasure value);    

        IfcHeatFluxDensityMeasure getIfcHeatFluxDensityMeasure() const;
        void setIfcHeatFluxDensityMeasure(IfcHeatFluxDensityMeasure value);    

        IfcFrequencyMeasure getIfcFrequencyMeasure() const;
        void setIfcFrequencyMeasure(IfcFrequencyMeasure value);    

        IfcEnergyMeasure getIfcEnergyMeasure() const;
        void setIfcEnergyMeasure(IfcEnergyMeasure value);    

        IfcElectricVoltageMeasure getIfcElectricVoltageMeasure() const;
        void setIfcElectricVoltageMeasure(IfcElectricVoltageMeasure value);    

        IfcDynamicViscosityMeasure getIfcDynamicViscosityMeasure() const;
        void setIfcDynamicViscosityMeasure(IfcDynamicViscosityMeasure value);    

        IfcCompoundPlaneAngleMeasure &getIfcCompoundPlaneAngleMeasure() const;
        void setIfcCompoundPlaneAngleMeasure(const IfcCompoundPlaneAngleMeasure &value);   

        IfcAngularVelocityMeasure getIfcAngularVelocityMeasure() const;
        void setIfcAngularVelocityMeasure(IfcAngularVelocityMeasure value);    

        IfcThermalConductivityMeasure getIfcThermalConductivityMeasure() const;
        void setIfcThermalConductivityMeasure(IfcThermalConductivityMeasure value);    

        IfcMolecularWeightMeasure getIfcMolecularWeightMeasure() const;
        void setIfcMolecularWeightMeasure(IfcMolecularWeightMeasure value);    

        IfcVaporPermeabilityMeasure getIfcVaporPermeabilityMeasure() const;
        void setIfcVaporPermeabilityMeasure(IfcVaporPermeabilityMeasure value);    

        IfcMoistureDiffusivityMeasure getIfcMoistureDiffusivityMeasure() const;
        void setIfcMoistureDiffusivityMeasure(IfcMoistureDiffusivityMeasure value);    

        IfcIsothermalMoistureCapacityMeasure getIfcIsothermalMoistureCapacityMeasure() const;
        void setIfcIsothermalMoistureCapacityMeasure(IfcIsothermalMoistureCapacityMeasure value);    

        IfcSpecificHeatCapacityMeasure getIfcSpecificHeatCapacityMeasure() const;
        void setIfcSpecificHeatCapacityMeasure(IfcSpecificHeatCapacityMeasure value);    

        IfcMonetaryMeasure getIfcMonetaryMeasure() const;
        void setIfcMonetaryMeasure(IfcMonetaryMeasure value);    

        IfcMagneticFluxDensityMeasure getIfcMagneticFluxDensityMeasure() const;
        void setIfcMagneticFluxDensityMeasure(IfcMagneticFluxDensityMeasure value);    

        IfcMagneticFluxMeasure getIfcMagneticFluxMeasure() const;
        void setIfcMagneticFluxMeasure(IfcMagneticFluxMeasure value);    

        IfcLuminousFluxMeasure getIfcLuminousFluxMeasure() const;
        void setIfcLuminousFluxMeasure(IfcLuminousFluxMeasure value);    

        IfcForceMeasure getIfcForceMeasure() const;
        void setIfcForceMeasure(IfcForceMeasure value);    

        IfcInductanceMeasure getIfcInductanceMeasure() const;
        void setIfcInductanceMeasure(IfcInductanceMeasure value);    

        IfcIlluminanceMeasure getIfcIlluminanceMeasure() const;
        void setIfcIlluminanceMeasure(IfcIlluminanceMeasure value);    

        IfcElectricResistanceMeasure getIfcElectricResistanceMeasure() const;
        void setIfcElectricResistanceMeasure(IfcElectricResistanceMeasure value);    

        IfcElectricConductanceMeasure getIfcElectricConductanceMeasure() const;
        void setIfcElectricConductanceMeasure(IfcElectricConductanceMeasure value);    

        IfcElectricChargeMeasure getIfcElectricChargeMeasure() const;
        void setIfcElectricChargeMeasure(IfcElectricChargeMeasure value);    

        IfcDoseEquivalentMeasure getIfcDoseEquivalentMeasure() const;
        void setIfcDoseEquivalentMeasure(IfcDoseEquivalentMeasure value);    

        IfcElectricCapacitanceMeasure getIfcElectricCapacitanceMeasure() const;
        void setIfcElectricCapacitanceMeasure(IfcElectricCapacitanceMeasure value);    

        IfcAbsorbedDoseMeasure getIfcAbsorbedDoseMeasure() const;
        void setIfcAbsorbedDoseMeasure(IfcAbsorbedDoseMeasure value);    

        IfcRadioActivityMeasure getIfcRadioActivityMeasure() const;
        void setIfcRadioActivityMeasure(IfcRadioActivityMeasure value);    

        IfcRotationalFrequencyMeasure getIfcRotationalFrequencyMeasure() const;
        void setIfcRotationalFrequencyMeasure(IfcRotationalFrequencyMeasure value);    

        IfcTorqueMeasure getIfcTorqueMeasure() const;
        void setIfcTorqueMeasure(IfcTorqueMeasure value);    

        IfcAccelerationMeasure getIfcAccelerationMeasure() const;
        void setIfcAccelerationMeasure(IfcAccelerationMeasure value);    

        IfcLinearForceMeasure getIfcLinearForceMeasure() const;
        void setIfcLinearForceMeasure(IfcLinearForceMeasure value);    

        IfcLinearStiffnessMeasure getIfcLinearStiffnessMeasure() const;
        void setIfcLinearStiffnessMeasure(IfcLinearStiffnessMeasure value);    

        IfcModulusOfSubgradeReactionMeasure getIfcModulusOfSubgradeReactionMeasure() const;
        void setIfcModulusOfSubgradeReactionMeasure(IfcModulusOfSubgradeReactionMeasure value);    

        IfcModulusOfElasticityMeasure getIfcModulusOfElasticityMeasure() const;
        void setIfcModulusOfElasticityMeasure(IfcModulusOfElasticityMeasure value);    

        IfcMomentOfInertiaMeasure getIfcMomentOfInertiaMeasure() const;
        void setIfcMomentOfInertiaMeasure(IfcMomentOfInertiaMeasure value);    

        IfcPlanarForceMeasure getIfcPlanarForceMeasure() const;
        void setIfcPlanarForceMeasure(IfcPlanarForceMeasure value);    

        IfcRotationalStiffnessMeasure getIfcRotationalStiffnessMeasure() const;
        void setIfcRotationalStiffnessMeasure(IfcRotationalStiffnessMeasure value);    

        IfcShearModulusMeasure getIfcShearModulusMeasure() const;
        void setIfcShearModulusMeasure(IfcShearModulusMeasure value);    

        IfcLinearMomentMeasure getIfcLinearMomentMeasure() const;
        void setIfcLinearMomentMeasure(IfcLinearMomentMeasure value);    

        IfcLuminousIntensityDistributionMeasure getIfcLuminousIntensityDistributionMeasure() const;
        void setIfcLuminousIntensityDistributionMeasure(IfcLuminousIntensityDistributionMeasure value);    

        IfcCurvatureMeasure getIfcCurvatureMeasure() const;
        void setIfcCurvatureMeasure(IfcCurvatureMeasure value);    

        IfcMassPerLengthMeasure getIfcMassPerLengthMeasure() const;
        void setIfcMassPerLengthMeasure(IfcMassPerLengthMeasure value);    

        IfcModulusOfLinearSubgradeReactionMeasure getIfcModulusOfLinearSubgradeReactionMeasure() const;
        void setIfcModulusOfLinearSubgradeReactionMeasure(IfcModulusOfLinearSubgradeReactionMeasure value);    

        IfcModulusOfRotationalSubgradeReactionMeasure getIfcModulusOfRotationalSubgradeReactionMeasure() const;
        void setIfcModulusOfRotationalSubgradeReactionMeasure(IfcModulusOfRotationalSubgradeReactionMeasure value);    

        IfcRotationalMassMeasure getIfcRotationalMassMeasure() const;
        void setIfcRotationalMassMeasure(IfcRotationalMassMeasure value);    

        IfcSectionalAreaIntegralMeasure getIfcSectionalAreaIntegralMeasure() const;
        void setIfcSectionalAreaIntegralMeasure(IfcSectionalAreaIntegralMeasure value);    

        IfcSectionModulusMeasure getIfcSectionModulusMeasure() const;
        void setIfcSectionModulusMeasure(IfcSectionModulusMeasure value);    

        IfcTemperatureGradientMeasure getIfcTemperatureGradientMeasure() const;
        void setIfcTemperatureGradientMeasure(IfcTemperatureGradientMeasure value);    

        IfcThermalExpansionCoefficientMeasure getIfcThermalExpansionCoefficientMeasure() const;
        void setIfcThermalExpansionCoefficientMeasure(IfcThermalExpansionCoefficientMeasure value);    

        IfcWarpingConstantMeasure getIfcWarpingConstantMeasure() const;
        void setIfcWarpingConstantMeasure(IfcWarpingConstantMeasure value);    

        IfcWarpingMomentMeasure getIfcWarpingMomentMeasure() const;
        void setIfcWarpingMomentMeasure(IfcWarpingMomentMeasure value);    

        IfcSoundPowerMeasure getIfcSoundPowerMeasure() const;
        void setIfcSoundPowerMeasure(IfcSoundPowerMeasure value);    

        IfcSoundPressureMeasure getIfcSoundPressureMeasure() const;
        void setIfcSoundPressureMeasure(IfcSoundPressureMeasure value);    

        IfcHeatingValueMeasure getIfcHeatingValueMeasure() const;
        void setIfcHeatingValueMeasure(IfcHeatingValueMeasure value);    

        IfcPHMeasure getIfcPHMeasure() const;
        void setIfcPHMeasure(IfcPHMeasure value);    

        IfcIonConcentrationMeasure getIfcIonConcentrationMeasure() const;
        void setIfcIonConcentrationMeasure(IfcIonConcentrationMeasure value);    


    protected:
        IfcValue(Step::SPFData *args);

        virtual bool init();

    private:
        IfcValue_select m_type;
  
        IfcValue_union m_union;
    };
} // namespace ifc2x3