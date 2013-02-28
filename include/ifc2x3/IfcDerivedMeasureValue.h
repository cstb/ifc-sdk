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

#ifndef IFC2X3_IFCDERIVEDMEASUREVALUE_H
#define IFC2X3_IFCDERIVEDMEASUREVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * .
     * 
     */
    class IFC2X3_EXPORT IfcDerivedMeasureValue : public Step::BaseObject {
    public:
        /**
 */
enum IfcDerivedMeasureValue_select {
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
            UNSET,
        };

        union IfcDerivedMeasureValue_union {
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
        /**
         */
        IfcDerivedMeasureValue();
        virtual ~IfcDerivedMeasureValue();
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDerivedMeasureValue &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcDerivedMeasureValue_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcVolumetricFlowRateMeasure getIfcVolumetricFlowRateMeasure() const;
        /**
         * @param value
         */
        void setIfcVolumetricFlowRateMeasure(IfcVolumetricFlowRateMeasure value);
        /**
         */
        IfcTimeStamp getIfcTimeStamp() const;
        /**
         * @param value
         */
        void setIfcTimeStamp(IfcTimeStamp value);
        /**
         */
        IfcThermalTransmittanceMeasure getIfcThermalTransmittanceMeasure() const;
        /**
         * @param value
         */
        void setIfcThermalTransmittanceMeasure(IfcThermalTransmittanceMeasure value);
        /**
         */
        IfcThermalResistanceMeasure getIfcThermalResistanceMeasure() const;
        /**
         * @param value
         */
        void setIfcThermalResistanceMeasure(IfcThermalResistanceMeasure value);
        /**
         */
        IfcThermalAdmittanceMeasure getIfcThermalAdmittanceMeasure() const;
        /**
         * @param value
         */
        void setIfcThermalAdmittanceMeasure(IfcThermalAdmittanceMeasure value);
        /**
         */
        IfcPressureMeasure getIfcPressureMeasure() const;
        /**
         * @param value
         */
        void setIfcPressureMeasure(IfcPressureMeasure value);
        /**
         */
        IfcPowerMeasure getIfcPowerMeasure() const;
        /**
         * @param value
         */
        void setIfcPowerMeasure(IfcPowerMeasure value);
        /**
         */
        IfcMassFlowRateMeasure getIfcMassFlowRateMeasure() const;
        /**
         * @param value
         */
        void setIfcMassFlowRateMeasure(IfcMassFlowRateMeasure value);
        /**
         */
        IfcMassDensityMeasure getIfcMassDensityMeasure() const;
        /**
         * @param value
         */
        void setIfcMassDensityMeasure(IfcMassDensityMeasure value);
        /**
         */
        IfcLinearVelocityMeasure getIfcLinearVelocityMeasure() const;
        /**
         * @param value
         */
        void setIfcLinearVelocityMeasure(IfcLinearVelocityMeasure value);
        /**
         */
        IfcKinematicViscosityMeasure getIfcKinematicViscosityMeasure() const;
        /**
         * @param value
         */
        void setIfcKinematicViscosityMeasure(IfcKinematicViscosityMeasure value);
        /**
         */
        IfcIntegerCountRateMeasure getIfcIntegerCountRateMeasure() const;
        /**
         * @param value
         */
        void setIfcIntegerCountRateMeasure(IfcIntegerCountRateMeasure value);
        /**
         */
        IfcHeatFluxDensityMeasure getIfcHeatFluxDensityMeasure() const;
        /**
         * @param value
         */
        void setIfcHeatFluxDensityMeasure(IfcHeatFluxDensityMeasure value);
        /**
         */
        IfcFrequencyMeasure getIfcFrequencyMeasure() const;
        /**
         * @param value
         */
        void setIfcFrequencyMeasure(IfcFrequencyMeasure value);
        /**
         */
        IfcEnergyMeasure getIfcEnergyMeasure() const;
        /**
         * @param value
         */
        void setIfcEnergyMeasure(IfcEnergyMeasure value);
        /**
         */
        IfcElectricVoltageMeasure getIfcElectricVoltageMeasure() const;
        /**
         * @param value
         */
        void setIfcElectricVoltageMeasure(IfcElectricVoltageMeasure value);
        /**
         */
        IfcDynamicViscosityMeasure getIfcDynamicViscosityMeasure() const;
        /**
         * @param value
         */
        void setIfcDynamicViscosityMeasure(IfcDynamicViscosityMeasure value);
        /**
         */
        IfcCompoundPlaneAngleMeasure getIfcCompoundPlaneAngleMeasure() const;
        /**
         * @param value
         */
        void setIfcCompoundPlaneAngleMeasure(const IfcCompoundPlaneAngleMeasure &value);
        /**
         */
        IfcAngularVelocityMeasure getIfcAngularVelocityMeasure() const;
        /**
         * @param value
         */
        void setIfcAngularVelocityMeasure(IfcAngularVelocityMeasure value);
        /**
         */
        IfcThermalConductivityMeasure getIfcThermalConductivityMeasure() const;
        /**
         * @param value
         */
        void setIfcThermalConductivityMeasure(IfcThermalConductivityMeasure value);
        /**
         */
        IfcMolecularWeightMeasure getIfcMolecularWeightMeasure() const;
        /**
         * @param value
         */
        void setIfcMolecularWeightMeasure(IfcMolecularWeightMeasure value);
        /**
         */
        IfcVaporPermeabilityMeasure getIfcVaporPermeabilityMeasure() const;
        /**
         * @param value
         */
        void setIfcVaporPermeabilityMeasure(IfcVaporPermeabilityMeasure value);
        /**
         */
        IfcMoistureDiffusivityMeasure getIfcMoistureDiffusivityMeasure() const;
        /**
         * @param value
         */
        void setIfcMoistureDiffusivityMeasure(IfcMoistureDiffusivityMeasure value);
        /**
         */
        IfcIsothermalMoistureCapacityMeasure getIfcIsothermalMoistureCapacityMeasure() const;
        /**
         * @param value
         */
        void setIfcIsothermalMoistureCapacityMeasure(IfcIsothermalMoistureCapacityMeasure value);
        /**
         */
        IfcSpecificHeatCapacityMeasure getIfcSpecificHeatCapacityMeasure() const;
        /**
         * @param value
         */
        void setIfcSpecificHeatCapacityMeasure(IfcSpecificHeatCapacityMeasure value);
        /**
         */
        IfcMonetaryMeasure getIfcMonetaryMeasure() const;
        /**
         * @param value
         */
        void setIfcMonetaryMeasure(IfcMonetaryMeasure value);
        /**
         */
        IfcMagneticFluxDensityMeasure getIfcMagneticFluxDensityMeasure() const;
        /**
         * @param value
         */
        void setIfcMagneticFluxDensityMeasure(IfcMagneticFluxDensityMeasure value);
        /**
         */
        IfcMagneticFluxMeasure getIfcMagneticFluxMeasure() const;
        /**
         * @param value
         */
        void setIfcMagneticFluxMeasure(IfcMagneticFluxMeasure value);
        /**
         */
        IfcLuminousFluxMeasure getIfcLuminousFluxMeasure() const;
        /**
         * @param value
         */
        void setIfcLuminousFluxMeasure(IfcLuminousFluxMeasure value);
        /**
         */
        IfcForceMeasure getIfcForceMeasure() const;
        /**
         * @param value
         */
        void setIfcForceMeasure(IfcForceMeasure value);
        /**
         */
        IfcInductanceMeasure getIfcInductanceMeasure() const;
        /**
         * @param value
         */
        void setIfcInductanceMeasure(IfcInductanceMeasure value);
        /**
         */
        IfcIlluminanceMeasure getIfcIlluminanceMeasure() const;
        /**
         * @param value
         */
        void setIfcIlluminanceMeasure(IfcIlluminanceMeasure value);
        /**
         */
        IfcElectricResistanceMeasure getIfcElectricResistanceMeasure() const;
        /**
         * @param value
         */
        void setIfcElectricResistanceMeasure(IfcElectricResistanceMeasure value);
        /**
         */
        IfcElectricConductanceMeasure getIfcElectricConductanceMeasure() const;
        /**
         * @param value
         */
        void setIfcElectricConductanceMeasure(IfcElectricConductanceMeasure value);
        /**
         */
        IfcElectricChargeMeasure getIfcElectricChargeMeasure() const;
        /**
         * @param value
         */
        void setIfcElectricChargeMeasure(IfcElectricChargeMeasure value);
        /**
         */
        IfcDoseEquivalentMeasure getIfcDoseEquivalentMeasure() const;
        /**
         * @param value
         */
        void setIfcDoseEquivalentMeasure(IfcDoseEquivalentMeasure value);
        /**
         */
        IfcElectricCapacitanceMeasure getIfcElectricCapacitanceMeasure() const;
        /**
         * @param value
         */
        void setIfcElectricCapacitanceMeasure(IfcElectricCapacitanceMeasure value);
        /**
         */
        IfcAbsorbedDoseMeasure getIfcAbsorbedDoseMeasure() const;
        /**
         * @param value
         */
        void setIfcAbsorbedDoseMeasure(IfcAbsorbedDoseMeasure value);
        /**
         */
        IfcRadioActivityMeasure getIfcRadioActivityMeasure() const;
        /**
         * @param value
         */
        void setIfcRadioActivityMeasure(IfcRadioActivityMeasure value);
        /**
         */
        IfcRotationalFrequencyMeasure getIfcRotationalFrequencyMeasure() const;
        /**
         * @param value
         */
        void setIfcRotationalFrequencyMeasure(IfcRotationalFrequencyMeasure value);
        /**
         */
        IfcTorqueMeasure getIfcTorqueMeasure() const;
        /**
         * @param value
         */
        void setIfcTorqueMeasure(IfcTorqueMeasure value);
        /**
         */
        IfcAccelerationMeasure getIfcAccelerationMeasure() const;
        /**
         * @param value
         */
        void setIfcAccelerationMeasure(IfcAccelerationMeasure value);
        /**
         */
        IfcLinearForceMeasure getIfcLinearForceMeasure() const;
        /**
         * @param value
         */
        void setIfcLinearForceMeasure(IfcLinearForceMeasure value);
        /**
         */
        IfcLinearStiffnessMeasure getIfcLinearStiffnessMeasure() const;
        /**
         * @param value
         */
        void setIfcLinearStiffnessMeasure(IfcLinearStiffnessMeasure value);
        /**
         */
        IfcModulusOfSubgradeReactionMeasure getIfcModulusOfSubgradeReactionMeasure() const;
        /**
         * @param value
         */
        void setIfcModulusOfSubgradeReactionMeasure(IfcModulusOfSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfElasticityMeasure getIfcModulusOfElasticityMeasure() const;
        /**
         * @param value
         */
        void setIfcModulusOfElasticityMeasure(IfcModulusOfElasticityMeasure value);
        /**
         */
        IfcMomentOfInertiaMeasure getIfcMomentOfInertiaMeasure() const;
        /**
         * @param value
         */
        void setIfcMomentOfInertiaMeasure(IfcMomentOfInertiaMeasure value);
        /**
         */
        IfcPlanarForceMeasure getIfcPlanarForceMeasure() const;
        /**
         * @param value
         */
        void setIfcPlanarForceMeasure(IfcPlanarForceMeasure value);
        /**
         */
        IfcRotationalStiffnessMeasure getIfcRotationalStiffnessMeasure() const;
        /**
         * @param value
         */
        void setIfcRotationalStiffnessMeasure(IfcRotationalStiffnessMeasure value);
        /**
         */
        IfcShearModulusMeasure getIfcShearModulusMeasure() const;
        /**
         * @param value
         */
        void setIfcShearModulusMeasure(IfcShearModulusMeasure value);
        /**
         */
        IfcLinearMomentMeasure getIfcLinearMomentMeasure() const;
        /**
         * @param value
         */
        void setIfcLinearMomentMeasure(IfcLinearMomentMeasure value);
        /**
         */
        IfcLuminousIntensityDistributionMeasure getIfcLuminousIntensityDistributionMeasure() const;
        /**
         * @param value
         */
        void setIfcLuminousIntensityDistributionMeasure(IfcLuminousIntensityDistributionMeasure value);
        /**
         */
        IfcCurvatureMeasure getIfcCurvatureMeasure() const;
        /**
         * @param value
         */
        void setIfcCurvatureMeasure(IfcCurvatureMeasure value);
        /**
         */
        IfcMassPerLengthMeasure getIfcMassPerLengthMeasure() const;
        /**
         * @param value
         */
        void setIfcMassPerLengthMeasure(IfcMassPerLengthMeasure value);
        /**
         */
        IfcModulusOfLinearSubgradeReactionMeasure getIfcModulusOfLinearSubgradeReactionMeasure() const;
        /**
         * @param value
         */
        void setIfcModulusOfLinearSubgradeReactionMeasure(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfRotationalSubgradeReactionMeasure getIfcModulusOfRotationalSubgradeReactionMeasure() const;
        /**
         * @param value
         */
        void setIfcModulusOfRotationalSubgradeReactionMeasure(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         */
        IfcRotationalMassMeasure getIfcRotationalMassMeasure() const;
        /**
         * @param value
         */
        void setIfcRotationalMassMeasure(IfcRotationalMassMeasure value);
        /**
         */
        IfcSectionalAreaIntegralMeasure getIfcSectionalAreaIntegralMeasure() const;
        /**
         * @param value
         */
        void setIfcSectionalAreaIntegralMeasure(IfcSectionalAreaIntegralMeasure value);
        /**
         */
        IfcSectionModulusMeasure getIfcSectionModulusMeasure() const;
        /**
         * @param value
         */
        void setIfcSectionModulusMeasure(IfcSectionModulusMeasure value);
        /**
         */
        IfcTemperatureGradientMeasure getIfcTemperatureGradientMeasure() const;
        /**
         * @param value
         */
        void setIfcTemperatureGradientMeasure(IfcTemperatureGradientMeasure value);
        /**
         */
        IfcThermalExpansionCoefficientMeasure getIfcThermalExpansionCoefficientMeasure() const;
        /**
         * @param value
         */
        void setIfcThermalExpansionCoefficientMeasure(IfcThermalExpansionCoefficientMeasure value);
        /**
         */
        IfcWarpingConstantMeasure getIfcWarpingConstantMeasure() const;
        /**
         * @param value
         */
        void setIfcWarpingConstantMeasure(IfcWarpingConstantMeasure value);
        /**
         */
        IfcWarpingMomentMeasure getIfcWarpingMomentMeasure() const;
        /**
         * @param value
         */
        void setIfcWarpingMomentMeasure(IfcWarpingMomentMeasure value);
        /**
         */
        IfcSoundPowerMeasure getIfcSoundPowerMeasure() const;
        /**
         * @param value
         */
        void setIfcSoundPowerMeasure(IfcSoundPowerMeasure value);
        /**
         */
        IfcSoundPressureMeasure getIfcSoundPressureMeasure() const;
        /**
         * @param value
         */
        void setIfcSoundPressureMeasure(IfcSoundPressureMeasure value);
        /**
         */
        IfcHeatingValueMeasure getIfcHeatingValueMeasure() const;
        /**
         * @param value
         */
        void setIfcHeatingValueMeasure(IfcHeatingValueMeasure value);
        /**
         */
        IfcPHMeasure getIfcPHMeasure() const;
        /**
         * @param value
         */
        void setIfcPHMeasure(IfcPHMeasure value);
        /**
         */
        IfcIonConcentrationMeasure getIfcIonConcentrationMeasure() const;
        /**
         * @param value
         */
        void setIfcIonConcentrationMeasure(IfcIonConcentrationMeasure value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcDerivedMeasureValue(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDerivedMeasureValue_select m_type;
        /**
         */
        IfcDerivedMeasureValue_union m_IfcDerivedMeasureValue_union;

    };

}

#endif // IFC2X3_IFCDERIVEDMEASUREVALUE_H
