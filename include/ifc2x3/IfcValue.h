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

#ifndef IFC2X3_IFCVALUE_H
#define IFC2X3_IFCVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcValue : public Step::BaseObject {
    public:
        /**
 */
enum IfcValue_select {
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
            UNSET,
        };

        union IfcValue_union {
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
        /**
         */
        IfcValue();
        virtual ~IfcValue();
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcValue &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcValue_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcVolumeMeasure getIfcVolumeMeasure();
        /**
         * @param value
         */
        void setIfcVolumeMeasure(IfcVolumeMeasure value);
        /**
         */
        IfcTimeMeasure getIfcTimeMeasure();
        /**
         * @param value
         */
        void setIfcTimeMeasure(IfcTimeMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getIfcThermodynamicTemperatureMeasure();
        /**
         * @param value
         */
        void setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcSolidAngleMeasure getIfcSolidAngleMeasure();
        /**
         * @param value
         */
        void setIfcSolidAngleMeasure(IfcSolidAngleMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getIfcPositiveRatioMeasure();
        /**
         * @param value
         */
        void setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value);
        /**
         */
        IfcRatioMeasure getIfcRatioMeasure();
        /**
         * @param value
         */
        void setIfcRatioMeasure(IfcRatioMeasure value);
        /**
         */
        IfcPositivePlaneAngleMeasure getIfcPositivePlaneAngleMeasure();
        /**
         * @param value
         */
        void setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value);
        /**
         */
        IfcPlaneAngleMeasure getIfcPlaneAngleMeasure();
        /**
         * @param value
         */
        void setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value);
        /**
         */
        IfcParameterValue getIfcParameterValue();
        /**
         * @param value
         */
        void setIfcParameterValue(IfcParameterValue value);
        /**
         */
        IfcNumericMeasure getIfcNumericMeasure();
        /**
         * @param value
         */
        void setIfcNumericMeasure(IfcNumericMeasure value);
        /**
         */
        IfcMassMeasure getIfcMassMeasure();
        /**
         * @param value
         */
        void setIfcMassMeasure(IfcMassMeasure value);
        /**
         */
        IfcPositiveLengthMeasure getIfcPositiveLengthMeasure();
        /**
         * @param value
         */
        void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);
        /**
         */
        IfcLengthMeasure getIfcLengthMeasure();
        /**
         * @param value
         */
        void setIfcLengthMeasure(IfcLengthMeasure value);
        /**
         */
        IfcElectricCurrentMeasure getIfcElectricCurrentMeasure();
        /**
         * @param value
         */
        void setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value);
        /**
         */
        IfcDescriptiveMeasure getIfcDescriptiveMeasure();
        /**
         * @param value
         */
        void setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value);
        /**
         */
        IfcCountMeasure getIfcCountMeasure();
        /**
         * @param value
         */
        void setIfcCountMeasure(IfcCountMeasure value);
        /**
         */
        IfcContextDependentMeasure getIfcContextDependentMeasure();
        /**
         * @param value
         */
        void setIfcContextDependentMeasure(IfcContextDependentMeasure value);
        /**
         */
        IfcAreaMeasure getIfcAreaMeasure();
        /**
         * @param value
         */
        void setIfcAreaMeasure(IfcAreaMeasure value);
        /**
         */
        IfcAmountOfSubstanceMeasure getIfcAmountOfSubstanceMeasure();
        /**
         * @param value
         */
        void setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value);
        /**
         */
        IfcLuminousIntensityMeasure getIfcLuminousIntensityMeasure();
        /**
         * @param value
         */
        void setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure();
        /**
         * @param value
         */
        void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcComplexNumber getIfcComplexNumber();
        /**
         * @param value
         */
        void setIfcComplexNumber(const IfcComplexNumber &value);
        /**
         */
        IfcInteger getIfcInteger();
        /**
         * @param value
         */
        void setIfcInteger(IfcInteger value);
        /**
         */
        IfcReal getIfcReal();
        /**
         * @param value
         */
        void setIfcReal(IfcReal value);
        /**
         */
        IfcBoolean getIfcBoolean();
        /**
         * @param value
         */
        void setIfcBoolean(IfcBoolean value);
        /**
         */
        IfcIdentifier getIfcIdentifier();
        /**
         * @param value
         */
        void setIfcIdentifier(const IfcIdentifier &value);
        /**
         */
        IfcText getIfcText();
        /**
         * @param value
         */
        void setIfcText(const IfcText &value);
        /**
         */
        IfcLabel getIfcLabel();
        /**
         * @param value
         */
        void setIfcLabel(const IfcLabel &value);
        /**
         */
        IfcLogical getIfcLogical();
        /**
         * @param value
         */
        void setIfcLogical(IfcLogical value);
        /**
         */
        IfcVolumetricFlowRateMeasure getIfcVolumetricFlowRateMeasure();
        /**
         * @param value
         */
        void setIfcVolumetricFlowRateMeasure(IfcVolumetricFlowRateMeasure value);
        /**
         */
        IfcTimeStamp getIfcTimeStamp();
        /**
         * @param value
         */
        void setIfcTimeStamp(IfcTimeStamp value);
        /**
         */
        IfcThermalTransmittanceMeasure getIfcThermalTransmittanceMeasure();
        /**
         * @param value
         */
        void setIfcThermalTransmittanceMeasure(IfcThermalTransmittanceMeasure value);
        /**
         */
        IfcThermalResistanceMeasure getIfcThermalResistanceMeasure();
        /**
         * @param value
         */
        void setIfcThermalResistanceMeasure(IfcThermalResistanceMeasure value);
        /**
         */
        IfcThermalAdmittanceMeasure getIfcThermalAdmittanceMeasure();
        /**
         * @param value
         */
        void setIfcThermalAdmittanceMeasure(IfcThermalAdmittanceMeasure value);
        /**
         */
        IfcPressureMeasure getIfcPressureMeasure();
        /**
         * @param value
         */
        void setIfcPressureMeasure(IfcPressureMeasure value);
        /**
         */
        IfcPowerMeasure getIfcPowerMeasure();
        /**
         * @param value
         */
        void setIfcPowerMeasure(IfcPowerMeasure value);
        /**
         */
        IfcMassFlowRateMeasure getIfcMassFlowRateMeasure();
        /**
         * @param value
         */
        void setIfcMassFlowRateMeasure(IfcMassFlowRateMeasure value);
        /**
         */
        IfcMassDensityMeasure getIfcMassDensityMeasure();
        /**
         * @param value
         */
        void setIfcMassDensityMeasure(IfcMassDensityMeasure value);
        /**
         */
        IfcLinearVelocityMeasure getIfcLinearVelocityMeasure();
        /**
         * @param value
         */
        void setIfcLinearVelocityMeasure(IfcLinearVelocityMeasure value);
        /**
         */
        IfcKinematicViscosityMeasure getIfcKinematicViscosityMeasure();
        /**
         * @param value
         */
        void setIfcKinematicViscosityMeasure(IfcKinematicViscosityMeasure value);
        /**
         */
        IfcIntegerCountRateMeasure getIfcIntegerCountRateMeasure();
        /**
         * @param value
         */
        void setIfcIntegerCountRateMeasure(IfcIntegerCountRateMeasure value);
        /**
         */
        IfcHeatFluxDensityMeasure getIfcHeatFluxDensityMeasure();
        /**
         * @param value
         */
        void setIfcHeatFluxDensityMeasure(IfcHeatFluxDensityMeasure value);
        /**
         */
        IfcFrequencyMeasure getIfcFrequencyMeasure();
        /**
         * @param value
         */
        void setIfcFrequencyMeasure(IfcFrequencyMeasure value);
        /**
         */
        IfcEnergyMeasure getIfcEnergyMeasure();
        /**
         * @param value
         */
        void setIfcEnergyMeasure(IfcEnergyMeasure value);
        /**
         */
        IfcElectricVoltageMeasure getIfcElectricVoltageMeasure();
        /**
         * @param value
         */
        void setIfcElectricVoltageMeasure(IfcElectricVoltageMeasure value);
        /**
         */
        IfcDynamicViscosityMeasure getIfcDynamicViscosityMeasure();
        /**
         * @param value
         */
        void setIfcDynamicViscosityMeasure(IfcDynamicViscosityMeasure value);
        /**
         */
        IfcCompoundPlaneAngleMeasure getIfcCompoundPlaneAngleMeasure();
        /**
         * @param value
         */
        void setIfcCompoundPlaneAngleMeasure(const IfcCompoundPlaneAngleMeasure &value);
        /**
         */
        IfcAngularVelocityMeasure getIfcAngularVelocityMeasure();
        /**
         * @param value
         */
        void setIfcAngularVelocityMeasure(IfcAngularVelocityMeasure value);
        /**
         */
        IfcThermalConductivityMeasure getIfcThermalConductivityMeasure();
        /**
         * @param value
         */
        void setIfcThermalConductivityMeasure(IfcThermalConductivityMeasure value);
        /**
         */
        IfcMolecularWeightMeasure getIfcMolecularWeightMeasure();
        /**
         * @param value
         */
        void setIfcMolecularWeightMeasure(IfcMolecularWeightMeasure value);
        /**
         */
        IfcVaporPermeabilityMeasure getIfcVaporPermeabilityMeasure();
        /**
         * @param value
         */
        void setIfcVaporPermeabilityMeasure(IfcVaporPermeabilityMeasure value);
        /**
         */
        IfcMoistureDiffusivityMeasure getIfcMoistureDiffusivityMeasure();
        /**
         * @param value
         */
        void setIfcMoistureDiffusivityMeasure(IfcMoistureDiffusivityMeasure value);
        /**
         */
        IfcIsothermalMoistureCapacityMeasure getIfcIsothermalMoistureCapacityMeasure();
        /**
         * @param value
         */
        void setIfcIsothermalMoistureCapacityMeasure(IfcIsothermalMoistureCapacityMeasure value);
        /**
         */
        IfcSpecificHeatCapacityMeasure getIfcSpecificHeatCapacityMeasure();
        /**
         * @param value
         */
        void setIfcSpecificHeatCapacityMeasure(IfcSpecificHeatCapacityMeasure value);
        /**
         */
        IfcMonetaryMeasure getIfcMonetaryMeasure();
        /**
         * @param value
         */
        void setIfcMonetaryMeasure(IfcMonetaryMeasure value);
        /**
         */
        IfcMagneticFluxDensityMeasure getIfcMagneticFluxDensityMeasure();
        /**
         * @param value
         */
        void setIfcMagneticFluxDensityMeasure(IfcMagneticFluxDensityMeasure value);
        /**
         */
        IfcMagneticFluxMeasure getIfcMagneticFluxMeasure();
        /**
         * @param value
         */
        void setIfcMagneticFluxMeasure(IfcMagneticFluxMeasure value);
        /**
         */
        IfcLuminousFluxMeasure getIfcLuminousFluxMeasure();
        /**
         * @param value
         */
        void setIfcLuminousFluxMeasure(IfcLuminousFluxMeasure value);
        /**
         */
        IfcForceMeasure getIfcForceMeasure();
        /**
         * @param value
         */
        void setIfcForceMeasure(IfcForceMeasure value);
        /**
         */
        IfcInductanceMeasure getIfcInductanceMeasure();
        /**
         * @param value
         */
        void setIfcInductanceMeasure(IfcInductanceMeasure value);
        /**
         */
        IfcIlluminanceMeasure getIfcIlluminanceMeasure();
        /**
         * @param value
         */
        void setIfcIlluminanceMeasure(IfcIlluminanceMeasure value);
        /**
         */
        IfcElectricResistanceMeasure getIfcElectricResistanceMeasure();
        /**
         * @param value
         */
        void setIfcElectricResistanceMeasure(IfcElectricResistanceMeasure value);
        /**
         */
        IfcElectricConductanceMeasure getIfcElectricConductanceMeasure();
        /**
         * @param value
         */
        void setIfcElectricConductanceMeasure(IfcElectricConductanceMeasure value);
        /**
         */
        IfcElectricChargeMeasure getIfcElectricChargeMeasure();
        /**
         * @param value
         */
        void setIfcElectricChargeMeasure(IfcElectricChargeMeasure value);
        /**
         */
        IfcDoseEquivalentMeasure getIfcDoseEquivalentMeasure();
        /**
         * @param value
         */
        void setIfcDoseEquivalentMeasure(IfcDoseEquivalentMeasure value);
        /**
         */
        IfcElectricCapacitanceMeasure getIfcElectricCapacitanceMeasure();
        /**
         * @param value
         */
        void setIfcElectricCapacitanceMeasure(IfcElectricCapacitanceMeasure value);
        /**
         */
        IfcAbsorbedDoseMeasure getIfcAbsorbedDoseMeasure();
        /**
         * @param value
         */
        void setIfcAbsorbedDoseMeasure(IfcAbsorbedDoseMeasure value);
        /**
         */
        IfcRadioActivityMeasure getIfcRadioActivityMeasure();
        /**
         * @param value
         */
        void setIfcRadioActivityMeasure(IfcRadioActivityMeasure value);
        /**
         */
        IfcRotationalFrequencyMeasure getIfcRotationalFrequencyMeasure();
        /**
         * @param value
         */
        void setIfcRotationalFrequencyMeasure(IfcRotationalFrequencyMeasure value);
        /**
         */
        IfcTorqueMeasure getIfcTorqueMeasure();
        /**
         * @param value
         */
        void setIfcTorqueMeasure(IfcTorqueMeasure value);
        /**
         */
        IfcAccelerationMeasure getIfcAccelerationMeasure();
        /**
         * @param value
         */
        void setIfcAccelerationMeasure(IfcAccelerationMeasure value);
        /**
         */
        IfcLinearForceMeasure getIfcLinearForceMeasure();
        /**
         * @param value
         */
        void setIfcLinearForceMeasure(IfcLinearForceMeasure value);
        /**
         */
        IfcLinearStiffnessMeasure getIfcLinearStiffnessMeasure();
        /**
         * @param value
         */
        void setIfcLinearStiffnessMeasure(IfcLinearStiffnessMeasure value);
        /**
         */
        IfcModulusOfSubgradeReactionMeasure getIfcModulusOfSubgradeReactionMeasure();
        /**
         * @param value
         */
        void setIfcModulusOfSubgradeReactionMeasure(IfcModulusOfSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfElasticityMeasure getIfcModulusOfElasticityMeasure();
        /**
         * @param value
         */
        void setIfcModulusOfElasticityMeasure(IfcModulusOfElasticityMeasure value);
        /**
         */
        IfcMomentOfInertiaMeasure getIfcMomentOfInertiaMeasure();
        /**
         * @param value
         */
        void setIfcMomentOfInertiaMeasure(IfcMomentOfInertiaMeasure value);
        /**
         */
        IfcPlanarForceMeasure getIfcPlanarForceMeasure();
        /**
         * @param value
         */
        void setIfcPlanarForceMeasure(IfcPlanarForceMeasure value);
        /**
         */
        IfcRotationalStiffnessMeasure getIfcRotationalStiffnessMeasure();
        /**
         * @param value
         */
        void setIfcRotationalStiffnessMeasure(IfcRotationalStiffnessMeasure value);
        /**
         */
        IfcShearModulusMeasure getIfcShearModulusMeasure();
        /**
         * @param value
         */
        void setIfcShearModulusMeasure(IfcShearModulusMeasure value);
        /**
         */
        IfcLinearMomentMeasure getIfcLinearMomentMeasure();
        /**
         * @param value
         */
        void setIfcLinearMomentMeasure(IfcLinearMomentMeasure value);
        /**
         */
        IfcLuminousIntensityDistributionMeasure getIfcLuminousIntensityDistributionMeasure();
        /**
         * @param value
         */
        void setIfcLuminousIntensityDistributionMeasure(IfcLuminousIntensityDistributionMeasure value);
        /**
         */
        IfcCurvatureMeasure getIfcCurvatureMeasure();
        /**
         * @param value
         */
        void setIfcCurvatureMeasure(IfcCurvatureMeasure value);
        /**
         */
        IfcMassPerLengthMeasure getIfcMassPerLengthMeasure();
        /**
         * @param value
         */
        void setIfcMassPerLengthMeasure(IfcMassPerLengthMeasure value);
        /**
         */
        IfcModulusOfLinearSubgradeReactionMeasure getIfcModulusOfLinearSubgradeReactionMeasure();
        /**
         * @param value
         */
        void setIfcModulusOfLinearSubgradeReactionMeasure(IfcModulusOfLinearSubgradeReactionMeasure value);
        /**
         */
        IfcModulusOfRotationalSubgradeReactionMeasure getIfcModulusOfRotationalSubgradeReactionMeasure();
        /**
         * @param value
         */
        void setIfcModulusOfRotationalSubgradeReactionMeasure(IfcModulusOfRotationalSubgradeReactionMeasure value);
        /**
         */
        IfcRotationalMassMeasure getIfcRotationalMassMeasure();
        /**
         * @param value
         */
        void setIfcRotationalMassMeasure(IfcRotationalMassMeasure value);
        /**
         */
        IfcSectionalAreaIntegralMeasure getIfcSectionalAreaIntegralMeasure();
        /**
         * @param value
         */
        void setIfcSectionalAreaIntegralMeasure(IfcSectionalAreaIntegralMeasure value);
        /**
         */
        IfcSectionModulusMeasure getIfcSectionModulusMeasure();
        /**
         * @param value
         */
        void setIfcSectionModulusMeasure(IfcSectionModulusMeasure value);
        /**
         */
        IfcTemperatureGradientMeasure getIfcTemperatureGradientMeasure();
        /**
         * @param value
         */
        void setIfcTemperatureGradientMeasure(IfcTemperatureGradientMeasure value);
        /**
         */
        IfcThermalExpansionCoefficientMeasure getIfcThermalExpansionCoefficientMeasure();
        /**
         * @param value
         */
        void setIfcThermalExpansionCoefficientMeasure(IfcThermalExpansionCoefficientMeasure value);
        /**
         */
        IfcWarpingConstantMeasure getIfcWarpingConstantMeasure();
        /**
         * @param value
         */
        void setIfcWarpingConstantMeasure(IfcWarpingConstantMeasure value);
        /**
         */
        IfcWarpingMomentMeasure getIfcWarpingMomentMeasure();
        /**
         * @param value
         */
        void setIfcWarpingMomentMeasure(IfcWarpingMomentMeasure value);
        /**
         */
        IfcSoundPowerMeasure getIfcSoundPowerMeasure();
        /**
         * @param value
         */
        void setIfcSoundPowerMeasure(IfcSoundPowerMeasure value);
        /**
         */
        IfcSoundPressureMeasure getIfcSoundPressureMeasure();
        /**
         * @param value
         */
        void setIfcSoundPressureMeasure(IfcSoundPressureMeasure value);
        /**
         */
        IfcHeatingValueMeasure getIfcHeatingValueMeasure();
        /**
         * @param value
         */
        void setIfcHeatingValueMeasure(IfcHeatingValueMeasure value);
        /**
         */
        IfcPHMeasure getIfcPHMeasure();
        /**
         * @param value
         */
        void setIfcPHMeasure(IfcPHMeasure value);
        /**
         */
        IfcIonConcentrationMeasure getIfcIonConcentrationMeasure();
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
        IfcValue(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcValue_select m_type;
        /**
         */
        IfcValue_union m_IfcValue_union;

    };

}

#endif // IFC2X3_IFCVALUE_H
