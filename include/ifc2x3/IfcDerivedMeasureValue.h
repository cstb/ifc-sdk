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
     * Generated class for the IfcDerivedMeasureValue Select type.
     *
     */
    class IFC2X3_EXPORT IfcDerivedMeasureValue : public Step::BaseObject

    {
        ClassType_definitions()

    public:
        enum IfcDerivedMeasureValue_select 
        {
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

        union IfcDerivedMeasureValue_union
        {
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

        IfcDerivedMeasureValue();
        virtual ~IfcDerivedMeasureValue();

        virtual void copy(const IfcDerivedMeasureValue &obj, const CopyOp &copyop);

        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        std::string currentTypeName() const;

        IfcDerivedMeasureValue_select currentType() const;

        void deleteUnion();

        void set(Step::BaseObject *v);

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
        IfcDerivedMeasureValue(Step::SPFData *args);

        virtual bool init();

    private:
        IfcDerivedMeasureValue_select m_type;
  
        IfcDerivedMeasureValue_union m_union;
    };
} // namespace ifc2x3