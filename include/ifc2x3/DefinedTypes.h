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

#ifndef IFC2X3_DEFINEDTYPES_H
#define IFC2X3_DEFINEDTYPES_H
#include <Step/Array.h>
#include <Step/Set.h>
#include <Step/List.h>
#include <Step/Bag.h>
#include <Step/SimpleTypes.h>
#include <ifc2x3/fwDecl.h>

namespace ifc2x3 {

    /**
     */
    typedef Step::Real IfcAbsorbedDoseMeasure;

    /**
     */
    typedef Step::Real IfcAccelerationMeasure;

    /**
     */
    typedef Step::Real IfcAmountOfSubstanceMeasure;

    /**
     */
    typedef Step::Real IfcAngularVelocityMeasure;

    /**
     */
    typedef Step::Real IfcAreaMeasure;

    /**
     */
    typedef Step::Boolean IfcBoolean;

    /**
     */
    typedef Step::String IfcBoxAlignment;

    /**
     */
    typedef Step::Real IfcContextDependentMeasure;

    /**
     */
    typedef Step::Number IfcCountMeasure;

    /**
     */
    typedef Step::Real IfcCurvatureMeasure;

    /**
     */
    typedef Step::Integer IfcDayInMonthNumber;

    /**
     */
    typedef Step::Integer IfcDaylightSavingHour;

    /**
     */
    typedef Step::String IfcDescriptiveMeasure;

    /**
     */
    typedef Step::Integer IfcDimensionCount;

    /**
     */
    typedef Step::Real IfcDoseEquivalentMeasure;

    /**
     */
    typedef Step::Real IfcDynamicViscosityMeasure;

    /**
     */
    typedef Step::Real IfcElectricCapacitanceMeasure;

    /**
     */
    typedef Step::Real IfcElectricChargeMeasure;

    /**
     */
    typedef Step::Real IfcElectricConductanceMeasure;

    /**
     */
    typedef Step::Real IfcElectricCurrentMeasure;

    /**
     */
    typedef Step::Real IfcElectricResistanceMeasure;

    /**
     */
    typedef Step::Real IfcElectricVoltageMeasure;

    /**
     */
    typedef Step::Real IfcEnergyMeasure;

    /**
     */
    typedef Step::String IfcFontStyle;

    /**
     */
    typedef Step::String IfcFontVariant;

    /**
     */
    typedef Step::String IfcFontWeight;

    /**
     */
    typedef Step::Real IfcForceMeasure;

    /**
     */
    typedef Step::Real IfcFrequencyMeasure;

    /**
     */
    typedef Step::String IfcGloballyUniqueId;

    /**
     */
    typedef Step::Real IfcHeatFluxDensityMeasure;

    /**
     */
    typedef Step::Real IfcHeatingValueMeasure;

    /**
     */
    typedef Step::Integer IfcHourInDay;

    /**
     */
    typedef Step::String IfcIdentifier;

    /**
     */
    typedef Step::Real IfcIlluminanceMeasure;

    /**
     */
    typedef Step::Real IfcInductanceMeasure;

    /**
     */
    typedef Step::Integer IfcInteger;

    /**
     */
    typedef Step::Integer IfcIntegerCountRateMeasure;

    /**
     */
    typedef Step::Real IfcIonConcentrationMeasure;

    /**
     */
    typedef Step::Real IfcIsothermalMoistureCapacityMeasure;

    /**
     */
    typedef Step::Real IfcKinematicViscosityMeasure;

    /**
     */
    typedef Step::String IfcLabel;

    /**
     */
    typedef Step::List< IfcLabel, 1 > List_IfcLabel_1_n;

    /**
     */
    typedef Step::Real IfcLengthMeasure;

    /**
     */
    typedef Step::List< IfcLengthMeasure, 1, 3 > List_IfcLengthMeasure_1_3;

    /**
     */
    typedef Step::List< IfcLengthMeasure, 2, 3 > List_IfcLengthMeasure_2_3;

    /**
     */
    typedef Step::Real IfcLinearForceMeasure;

    /**
     */
    typedef Step::Real IfcLinearMomentMeasure;

    /**
     */
    typedef Step::Real IfcLinearStiffnessMeasure;

    /**
     */
    typedef Step::Real IfcLinearVelocityMeasure;

    /**
     */
    typedef Step::Logical IfcLogical;

    /**
     */
    typedef Step::Real IfcLuminousFluxMeasure;

    /**
     */
    typedef Step::Real IfcLuminousIntensityDistributionMeasure;

    /**
     */
    typedef Step::List< IfcLuminousIntensityDistributionMeasure, 1 > List_IfcLuminousIntensityDistributionMeasure_1_n;

    /**
     */
    typedef Step::Real IfcLuminousIntensityMeasure;

    /**
     */
    typedef Step::Real IfcMagneticFluxDensityMeasure;

    /**
     */
    typedef Step::Real IfcMagneticFluxMeasure;

    /**
     */
    typedef Step::Real IfcMassDensityMeasure;

    /**
     */
    typedef Step::Real IfcMassFlowRateMeasure;

    /**
     */
    typedef Step::Real IfcMassMeasure;

    /**
     */
    typedef Step::Real IfcMassPerLengthMeasure;

    /**
     */
    typedef Step::Integer IfcMinuteInHour;

    /**
     */
    typedef Step::Real IfcModulusOfElasticityMeasure;

    /**
     */
    typedef Step::Real IfcModulusOfLinearSubgradeReactionMeasure;

    /**
     */
    typedef Step::Real IfcModulusOfRotationalSubgradeReactionMeasure;

    /**
     */
    typedef Step::Real IfcModulusOfSubgradeReactionMeasure;

    /**
     */
    typedef Step::Real IfcMoistureDiffusivityMeasure;

    /**
     */
    typedef Step::Real IfcMolecularWeightMeasure;

    /**
     */
    typedef Step::Real IfcMomentOfInertiaMeasure;

    /**
     */
    typedef Step::Real IfcMonetaryMeasure;

    /**
     */
    typedef Step::Integer IfcMonthInYearNumber;

    /**
     */
    typedef Step::Real IfcNormalisedRatioMeasure;

    /**
     */
    typedef Step::Number IfcNumericMeasure;

    /**
     */
    typedef Step::Real IfcPHMeasure;

    /**
     */
    typedef Step::Real IfcParameterValue;

    /**
     */
    typedef Step::List< IfcParameterValue, 2, 2 > List_IfcParameterValue_2_2;

    /**
     */
    typedef Step::Real IfcPlanarForceMeasure;

    /**
     */
    typedef Step::Real IfcPlaneAngleMeasure;

    /**
     */
    typedef Step::List< IfcPlaneAngleMeasure, 1 > List_IfcPlaneAngleMeasure_1_n;

    /**
     */
    typedef Step::Real IfcPositiveLengthMeasure;

    /**
     */
    typedef Step::List< IfcPositiveLengthMeasure, 3 > List_IfcPositiveLengthMeasure_3_n;

    /**
     */
    typedef Step::List< IfcPositiveLengthMeasure, 2 > List_IfcPositiveLengthMeasure_2_n;

    /**
     */
    typedef Step::Real IfcPositivePlaneAngleMeasure;

    /**
     */
    typedef Step::Real IfcPositiveRatioMeasure;

    /**
     */
    typedef Step::Real IfcPowerMeasure;

    /**
     */
    typedef Step::String IfcPresentableText;

    /**
     */
    typedef Step::Real IfcPressureMeasure;

    /**
     */
    typedef Step::Real IfcRadioActivityMeasure;

    /**
     */
    typedef Step::Real IfcRatioMeasure;

    /**
     */
    typedef Step::Real IfcReal;

    /**
     */
    typedef Step::Real IfcRotationalFrequencyMeasure;

    /**
     */
    typedef Step::Real IfcRotationalMassMeasure;

    /**
     */
    typedef Step::Real IfcRotationalStiffnessMeasure;

    /**
     */
    typedef Step::Real IfcSecondInMinute;

    /**
     */
    typedef Step::Real IfcSectionModulusMeasure;

    /**
     */
    typedef Step::Real IfcSectionalAreaIntegralMeasure;

    /**
     */
    typedef Step::Real IfcShearModulusMeasure;

    /**
     */
    typedef Step::Real IfcSolidAngleMeasure;

    /**
     */
    typedef Step::Real IfcSoundPowerMeasure;

    /**
     */
    typedef Step::Real IfcSoundPressureMeasure;

    /**
     */
    typedef Step::Real IfcSpecificHeatCapacityMeasure;

    /**
     */
    typedef Step::Real IfcSpecularExponent;

    /**
     */
    typedef Step::Real IfcSpecularRoughness;

    /**
     */
    typedef Step::Real IfcTemperatureGradientMeasure;

    /**
     */
    typedef Step::String IfcText;

    /**
     */
    typedef Step::List< IfcText, 1 > List_IfcText_1_n;

    /**
     */
    typedef Step::String IfcTextAlignment;

    /**
     */
    typedef Step::String IfcTextDecoration;

    /**
     */
    typedef Step::String IfcTextFontName;

    /**
     */
    typedef Step::List< IfcTextFontName, 1 > List_IfcTextFontName_1_n;

    /**
     */
    typedef Step::String IfcTextTransformation;

    /**
     */
    typedef Step::Real IfcThermalAdmittanceMeasure;

    /**
     */
    typedef Step::Real IfcThermalConductivityMeasure;

    /**
     */
    typedef Step::Real IfcThermalExpansionCoefficientMeasure;

    /**
     */
    typedef Step::Real IfcThermalResistanceMeasure;

    /**
     */
    typedef Step::Real IfcThermalTransmittanceMeasure;

    /**
     */
    typedef Step::Real IfcThermodynamicTemperatureMeasure;

    /**
     */
    typedef Step::Real IfcTimeMeasure;

    /**
     */
    typedef Step::Integer IfcTimeStamp;

    /**
     */
    typedef Step::Real IfcTorqueMeasure;

    /**
     */
    typedef Step::Real IfcVaporPermeabilityMeasure;

    /**
     */
    typedef Step::Real IfcVolumeMeasure;

    /**
     */
    typedef Step::Real IfcVolumetricFlowRateMeasure;

    /**
     */
    typedef Step::Real IfcWarpingConstantMeasure;

    /**
     */
    typedef Step::Real IfcWarpingMomentMeasure;

    /**
     */
    typedef Step::Integer IfcYearNumber;

/**
 */
enum IfcActionSourceTypeEnum {
        IfcActionSourceTypeEnum_UNSET,
        IfcActionSourceTypeEnum_DEAD_LOAD_G,
        IfcActionSourceTypeEnum_COMPLETION_G1,
        IfcActionSourceTypeEnum_LIVE_LOAD_Q,
        IfcActionSourceTypeEnum_SNOW_S,
        IfcActionSourceTypeEnum_WIND_W,
        IfcActionSourceTypeEnum_PRESTRESSING_P,
        IfcActionSourceTypeEnum_SETTLEMENT_U,
        IfcActionSourceTypeEnum_TEMPERATURE_T,
        IfcActionSourceTypeEnum_EARTHQUAKE_E,
        IfcActionSourceTypeEnum_FIRE,
        IfcActionSourceTypeEnum_IMPULSE,
        IfcActionSourceTypeEnum_IMPACT,
        IfcActionSourceTypeEnum_TRANSPORT,
        IfcActionSourceTypeEnum_ERECTION,
        IfcActionSourceTypeEnum_PROPPING,
        IfcActionSourceTypeEnum_SYSTEM_IMPERFECTION,
        IfcActionSourceTypeEnum_SHRINKAGE,
        IfcActionSourceTypeEnum_CREEP,
        IfcActionSourceTypeEnum_LACK_OF_FIT,
        IfcActionSourceTypeEnum_BUOYANCY,
        IfcActionSourceTypeEnum_ICE,
        IfcActionSourceTypeEnum_CURRENT,
        IfcActionSourceTypeEnum_WAVE,
        IfcActionSourceTypeEnum_RAIN,
        IfcActionSourceTypeEnum_BRAKES,
        IfcActionSourceTypeEnum_USERDEFINED,
        IfcActionSourceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcActionTypeEnum {
        IfcActionTypeEnum_UNSET,
        IfcActionTypeEnum_PERMANENT_G,
        IfcActionTypeEnum_VARIABLE_Q,
        IfcActionTypeEnum_EXTRAORDINARY_A,
        IfcActionTypeEnum_USERDEFINED,
        IfcActionTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcActuatorTypeEnum {
        IfcActuatorTypeEnum_UNSET,
        IfcActuatorTypeEnum_ELECTRICACTUATOR,
        IfcActuatorTypeEnum_HANDOPERATEDACTUATOR,
        IfcActuatorTypeEnum_HYDRAULICACTUATOR,
        IfcActuatorTypeEnum_PNEUMATICACTUATOR,
        IfcActuatorTypeEnum_THERMOSTATICACTUATOR,
        IfcActuatorTypeEnum_USERDEFINED,
        IfcActuatorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcAddressTypeEnum {
        IfcAddressTypeEnum_UNSET,
        IfcAddressTypeEnum_OFFICE,
        IfcAddressTypeEnum_SITE,
        IfcAddressTypeEnum_HOME,
        IfcAddressTypeEnum_DISTRIBUTIONPOINT,
        IfcAddressTypeEnum_USERDEFINED,
    };

/**
 */
enum IfcAheadOrBehind {
        IfcAheadOrBehind_UNSET,
        IfcAheadOrBehind_AHEAD,
        IfcAheadOrBehind_BEHIND,
    };

/**
 */
enum IfcAirTerminalBoxTypeEnum {
        IfcAirTerminalBoxTypeEnum_UNSET,
        IfcAirTerminalBoxTypeEnum_CONSTANTFLOW,
        IfcAirTerminalBoxTypeEnum_VARIABLEFLOWPRESSUREDEPENDANT,
        IfcAirTerminalBoxTypeEnum_VARIABLEFLOWPRESSUREINDEPENDANT,
        IfcAirTerminalBoxTypeEnum_USERDEFINED,
        IfcAirTerminalBoxTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcAirTerminalTypeEnum {
        IfcAirTerminalTypeEnum_UNSET,
        IfcAirTerminalTypeEnum_GRILLE,
        IfcAirTerminalTypeEnum_REGISTER,
        IfcAirTerminalTypeEnum_DIFFUSER,
        IfcAirTerminalTypeEnum_EYEBALL,
        IfcAirTerminalTypeEnum_IRIS,
        IfcAirTerminalTypeEnum_LINEARGRILLE,
        IfcAirTerminalTypeEnum_LINEARDIFFUSER,
        IfcAirTerminalTypeEnum_USERDEFINED,
        IfcAirTerminalTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcAirToAirHeatRecoveryTypeEnum {
        IfcAirToAirHeatRecoveryTypeEnum_UNSET,
        IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECOUNTERFLOWEXCHANGER,
        IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECROSSFLOWEXCHANGER,
        IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATEPARALLELFLOWEXCHANGER,
        IfcAirToAirHeatRecoveryTypeEnum_ROTARYWHEEL,
        IfcAirToAirHeatRecoveryTypeEnum_RUNAROUNDCOILLOOP,
        IfcAirToAirHeatRecoveryTypeEnum_HEATPIPE,
        IfcAirToAirHeatRecoveryTypeEnum_TWINTOWERENTHALPYRECOVERYLOOPS,
        IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS,
        IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONCOILTYPEHEATEXCHANGERS,
        IfcAirToAirHeatRecoveryTypeEnum_USERDEFINED,
        IfcAirToAirHeatRecoveryTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcAlarmTypeEnum {
        IfcAlarmTypeEnum_UNSET,
        IfcAlarmTypeEnum_BELL,
        IfcAlarmTypeEnum_BREAKGLASSBUTTON,
        IfcAlarmTypeEnum_LIGHT,
        IfcAlarmTypeEnum_MANUALPULLBOX,
        IfcAlarmTypeEnum_SIREN,
        IfcAlarmTypeEnum_WHISTLE,
        IfcAlarmTypeEnum_USERDEFINED,
        IfcAlarmTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcAnalysisModelTypeEnum {
        IfcAnalysisModelTypeEnum_UNSET,
        IfcAnalysisModelTypeEnum_IN_PLANE_LOADING_2D,
        IfcAnalysisModelTypeEnum_OUT_PLANE_LOADING_2D,
        IfcAnalysisModelTypeEnum_LOADING_3D,
        IfcAnalysisModelTypeEnum_USERDEFINED,
        IfcAnalysisModelTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcAnalysisTheoryTypeEnum {
        IfcAnalysisTheoryTypeEnum_UNSET,
        IfcAnalysisTheoryTypeEnum_FIRST_ORDER_THEORY,
        IfcAnalysisTheoryTypeEnum_SECOND_ORDER_THEORY,
        IfcAnalysisTheoryTypeEnum_THIRD_ORDER_THEORY,
        IfcAnalysisTheoryTypeEnum_FULL_NONLINEAR_THEORY,
        IfcAnalysisTheoryTypeEnum_USERDEFINED,
        IfcAnalysisTheoryTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcArithmeticOperatorEnum {
        IfcArithmeticOperatorEnum_UNSET,
        IfcArithmeticOperatorEnum_ADD,
        IfcArithmeticOperatorEnum_DIVIDE,
        IfcArithmeticOperatorEnum_MULTIPLY,
        IfcArithmeticOperatorEnum_SUBTRACT,
    };

/**
 */
enum IfcAssemblyPlaceEnum {
        IfcAssemblyPlaceEnum_UNSET,
        IfcAssemblyPlaceEnum_SITE,
        IfcAssemblyPlaceEnum_FACTORY,
        IfcAssemblyPlaceEnum_NOTDEFINED,
    };

/**
 */
enum IfcBSplineCurveForm {
        IfcBSplineCurveForm_UNSET,
        IfcBSplineCurveForm_POLYLINE_FORM,
        IfcBSplineCurveForm_CIRCULAR_ARC,
        IfcBSplineCurveForm_ELLIPTIC_ARC,
        IfcBSplineCurveForm_PARABOLIC_ARC,
        IfcBSplineCurveForm_HYPERBOLIC_ARC,
        IfcBSplineCurveForm_UNSPECIFIED,
    };

/**
 */
enum IfcBeamTypeEnum {
        IfcBeamTypeEnum_UNSET,
        IfcBeamTypeEnum_BEAM,
        IfcBeamTypeEnum_JOIST,
        IfcBeamTypeEnum_LINTEL,
        IfcBeamTypeEnum_T_BEAM,
        IfcBeamTypeEnum_USERDEFINED,
        IfcBeamTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcBenchmarkEnum {
        IfcBenchmarkEnum_UNSET,
        IfcBenchmarkEnum_GREATERTHAN,
        IfcBenchmarkEnum_GREATERTHANOREQUALTO,
        IfcBenchmarkEnum_LESSTHAN,
        IfcBenchmarkEnum_LESSTHANOREQUALTO,
        IfcBenchmarkEnum_EQUALTO,
        IfcBenchmarkEnum_NOTEQUALTO,
    };

/**
 */
enum IfcBoilerTypeEnum {
        IfcBoilerTypeEnum_UNSET,
        IfcBoilerTypeEnum_WATER,
        IfcBoilerTypeEnum_STEAM,
        IfcBoilerTypeEnum_USERDEFINED,
        IfcBoilerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcBooleanOperator {
        IfcBooleanOperator_UNSET,
        IfcBooleanOperator_UNION,
        IfcBooleanOperator_INTERSECTION,
        IfcBooleanOperator_DIFFERENCE,
    };

/**
 */
enum IfcBuildingElementProxyTypeEnum {
        IfcBuildingElementProxyTypeEnum_UNSET,
        IfcBuildingElementProxyTypeEnum_USERDEFINED,
        IfcBuildingElementProxyTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCableCarrierFittingTypeEnum {
        IfcCableCarrierFittingTypeEnum_UNSET,
        IfcCableCarrierFittingTypeEnum_BEND,
        IfcCableCarrierFittingTypeEnum_CROSS,
        IfcCableCarrierFittingTypeEnum_REDUCER,
        IfcCableCarrierFittingTypeEnum_TEE,
        IfcCableCarrierFittingTypeEnum_USERDEFINED,
        IfcCableCarrierFittingTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCableCarrierSegmentTypeEnum {
        IfcCableCarrierSegmentTypeEnum_UNSET,
        IfcCableCarrierSegmentTypeEnum_CABLELADDERSEGMENT,
        IfcCableCarrierSegmentTypeEnum_CABLETRAYSEGMENT,
        IfcCableCarrierSegmentTypeEnum_CABLETRUNKINGSEGMENT,
        IfcCableCarrierSegmentTypeEnum_CONDUITSEGMENT,
        IfcCableCarrierSegmentTypeEnum_USERDEFINED,
        IfcCableCarrierSegmentTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCableSegmentTypeEnum {
        IfcCableSegmentTypeEnum_UNSET,
        IfcCableSegmentTypeEnum_CABLESEGMENT,
        IfcCableSegmentTypeEnum_CONDUCTORSEGMENT,
        IfcCableSegmentTypeEnum_USERDEFINED,
        IfcCableSegmentTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcChangeActionEnum {
        IfcChangeActionEnum_UNSET,
        IfcChangeActionEnum_NOCHANGE,
        IfcChangeActionEnum_MODIFIED,
        IfcChangeActionEnum_ADDED,
        IfcChangeActionEnum_DELETED,
        IfcChangeActionEnum_MODIFIEDADDED,
        IfcChangeActionEnum_MODIFIEDDELETED,
    };

/**
 */
enum IfcChillerTypeEnum {
        IfcChillerTypeEnum_UNSET,
        IfcChillerTypeEnum_AIRCOOLED,
        IfcChillerTypeEnum_WATERCOOLED,
        IfcChillerTypeEnum_HEATRECOVERY,
        IfcChillerTypeEnum_USERDEFINED,
        IfcChillerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCoilTypeEnum {
        IfcCoilTypeEnum_UNSET,
        IfcCoilTypeEnum_DXCOOLINGCOIL,
        IfcCoilTypeEnum_WATERCOOLINGCOIL,
        IfcCoilTypeEnum_STEAMHEATINGCOIL,
        IfcCoilTypeEnum_WATERHEATINGCOIL,
        IfcCoilTypeEnum_ELECTRICHEATINGCOIL,
        IfcCoilTypeEnum_GASHEATINGCOIL,
        IfcCoilTypeEnum_USERDEFINED,
        IfcCoilTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcColumnTypeEnum {
        IfcColumnTypeEnum_UNSET,
        IfcColumnTypeEnum_COLUMN,
        IfcColumnTypeEnum_USERDEFINED,
        IfcColumnTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCompressorTypeEnum {
        IfcCompressorTypeEnum_UNSET,
        IfcCompressorTypeEnum_DYNAMIC,
        IfcCompressorTypeEnum_RECIPROCATING,
        IfcCompressorTypeEnum_ROTARY,
        IfcCompressorTypeEnum_SCROLL,
        IfcCompressorTypeEnum_TROCHOIDAL,
        IfcCompressorTypeEnum_SINGLESTAGE,
        IfcCompressorTypeEnum_BOOSTER,
        IfcCompressorTypeEnum_OPENTYPE,
        IfcCompressorTypeEnum_HERMETIC,
        IfcCompressorTypeEnum_SEMIHERMETIC,
        IfcCompressorTypeEnum_WELDEDSHELLHERMETIC,
        IfcCompressorTypeEnum_ROLLINGPISTON,
        IfcCompressorTypeEnum_ROTARYVANE,
        IfcCompressorTypeEnum_SINGLESCREW,
        IfcCompressorTypeEnum_TWINSCREW,
        IfcCompressorTypeEnum_USERDEFINED,
        IfcCompressorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCondenserTypeEnum {
        IfcCondenserTypeEnum_UNSET,
        IfcCondenserTypeEnum_WATERCOOLEDSHELLTUBE,
        IfcCondenserTypeEnum_WATERCOOLEDSHELLCOIL,
        IfcCondenserTypeEnum_WATERCOOLEDTUBEINTUBE,
        IfcCondenserTypeEnum_WATERCOOLEDBRAZEDPLATE,
        IfcCondenserTypeEnum_AIRCOOLED,
        IfcCondenserTypeEnum_EVAPORATIVECOOLED,
        IfcCondenserTypeEnum_USERDEFINED,
        IfcCondenserTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcConnectionTypeEnum {
        IfcConnectionTypeEnum_UNSET,
        IfcConnectionTypeEnum_ATPATH,
        IfcConnectionTypeEnum_ATSTART,
        IfcConnectionTypeEnum_ATEND,
        IfcConnectionTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcConstraintEnum {
        IfcConstraintEnum_UNSET,
        IfcConstraintEnum_HARD,
        IfcConstraintEnum_SOFT,
        IfcConstraintEnum_ADVISORY,
        IfcConstraintEnum_USERDEFINED,
        IfcConstraintEnum_NOTDEFINED,
    };

/**
 */
enum IfcControllerTypeEnum {
        IfcControllerTypeEnum_UNSET,
        IfcControllerTypeEnum_FLOATING,
        IfcControllerTypeEnum_PROPORTIONAL,
        IfcControllerTypeEnum_PROPORTIONALINTEGRAL,
        IfcControllerTypeEnum_PROPORTIONALINTEGRALDERIVATIVE,
        IfcControllerTypeEnum_TIMEDTWOPOSITION,
        IfcControllerTypeEnum_TWOPOSITION,
        IfcControllerTypeEnum_USERDEFINED,
        IfcControllerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCooledBeamTypeEnum {
        IfcCooledBeamTypeEnum_UNSET,
        IfcCooledBeamTypeEnum_ACTIVE,
        IfcCooledBeamTypeEnum_PASSIVE,
        IfcCooledBeamTypeEnum_USERDEFINED,
        IfcCooledBeamTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCoolingTowerTypeEnum {
        IfcCoolingTowerTypeEnum_UNSET,
        IfcCoolingTowerTypeEnum_NATURALDRAFT,
        IfcCoolingTowerTypeEnum_MECHANICALINDUCEDDRAFT,
        IfcCoolingTowerTypeEnum_MECHANICALFORCEDDRAFT,
        IfcCoolingTowerTypeEnum_USERDEFINED,
        IfcCoolingTowerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCostScheduleTypeEnum {
        IfcCostScheduleTypeEnum_UNSET,
        IfcCostScheduleTypeEnum_BUDGET,
        IfcCostScheduleTypeEnum_COSTPLAN,
        IfcCostScheduleTypeEnum_ESTIMATE,
        IfcCostScheduleTypeEnum_TENDER,
        IfcCostScheduleTypeEnum_PRICEDBILLOFQUANTITIES,
        IfcCostScheduleTypeEnum_UNPRICEDBILLOFQUANTITIES,
        IfcCostScheduleTypeEnum_SCHEDULEOFRATES,
        IfcCostScheduleTypeEnum_USERDEFINED,
        IfcCostScheduleTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCoveringTypeEnum {
        IfcCoveringTypeEnum_UNSET,
        IfcCoveringTypeEnum_CEILING,
        IfcCoveringTypeEnum_FLOORING,
        IfcCoveringTypeEnum_CLADDING,
        IfcCoveringTypeEnum_ROOFING,
        IfcCoveringTypeEnum_INSULATION,
        IfcCoveringTypeEnum_MEMBRANE,
        IfcCoveringTypeEnum_SLEEVING,
        IfcCoveringTypeEnum_WRAPPING,
        IfcCoveringTypeEnum_USERDEFINED,
        IfcCoveringTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcCurrencyEnum {
        IfcCurrencyEnum_UNSET,
        IfcCurrencyEnum_AED,
        IfcCurrencyEnum_AES,
        IfcCurrencyEnum_ATS,
        IfcCurrencyEnum_AUD,
        IfcCurrencyEnum_BBD,
        IfcCurrencyEnum_BEG,
        IfcCurrencyEnum_BGL,
        IfcCurrencyEnum_BHD,
        IfcCurrencyEnum_BMD,
        IfcCurrencyEnum_BND,
        IfcCurrencyEnum_BRL,
        IfcCurrencyEnum_BSD,
        IfcCurrencyEnum_BWP,
        IfcCurrencyEnum_BZD,
        IfcCurrencyEnum_CAD,
        IfcCurrencyEnum_CBD,
        IfcCurrencyEnum_CHF,
        IfcCurrencyEnum_CLP,
        IfcCurrencyEnum_CNY,
        IfcCurrencyEnum_CYS,
        IfcCurrencyEnum_CZK,
        IfcCurrencyEnum_DDP,
        IfcCurrencyEnum_DEM,
        IfcCurrencyEnum_DKK,
        IfcCurrencyEnum_EGL,
        IfcCurrencyEnum_EST,
        IfcCurrencyEnum_EUR,
        IfcCurrencyEnum_FAK,
        IfcCurrencyEnum_FIM,
        IfcCurrencyEnum_FJD,
        IfcCurrencyEnum_FKP,
        IfcCurrencyEnum_FRF,
        IfcCurrencyEnum_GBP,
        IfcCurrencyEnum_GIP,
        IfcCurrencyEnum_GMD,
        IfcCurrencyEnum_GRX,
        IfcCurrencyEnum_HKD,
        IfcCurrencyEnum_HUF,
        IfcCurrencyEnum_ICK,
        IfcCurrencyEnum_IDR,
        IfcCurrencyEnum_ILS,
        IfcCurrencyEnum_INR,
        IfcCurrencyEnum_IRP,
        IfcCurrencyEnum_ITL,
        IfcCurrencyEnum_JMD,
        IfcCurrencyEnum_JOD,
        IfcCurrencyEnum_JPY,
        IfcCurrencyEnum_KES,
        IfcCurrencyEnum_KRW,
        IfcCurrencyEnum_KWD,
        IfcCurrencyEnum_KYD,
        IfcCurrencyEnum_LKR,
        IfcCurrencyEnum_LUF,
        IfcCurrencyEnum_MTL,
        IfcCurrencyEnum_MUR,
        IfcCurrencyEnum_MXN,
        IfcCurrencyEnum_MYR,
        IfcCurrencyEnum_NLG,
        IfcCurrencyEnum_NZD,
        IfcCurrencyEnum_OMR,
        IfcCurrencyEnum_PGK,
        IfcCurrencyEnum_PHP,
        IfcCurrencyEnum_PKR,
        IfcCurrencyEnum_PLN,
        IfcCurrencyEnum_PTN,
        IfcCurrencyEnum_QAR,
        IfcCurrencyEnum_RUR,
        IfcCurrencyEnum_SAR,
        IfcCurrencyEnum_SCR,
        IfcCurrencyEnum_SEK,
        IfcCurrencyEnum_SGD,
        IfcCurrencyEnum_SKP,
        IfcCurrencyEnum_THB,
        IfcCurrencyEnum_TRL,
        IfcCurrencyEnum_TTD,
        IfcCurrencyEnum_TWD,
        IfcCurrencyEnum_USD,
        IfcCurrencyEnum_VEB,
        IfcCurrencyEnum_VND,
        IfcCurrencyEnum_XEU,
        IfcCurrencyEnum_ZAR,
        IfcCurrencyEnum_ZWD,
        IfcCurrencyEnum_NOK,
    };

/**
 */
enum IfcCurtainWallTypeEnum {
        IfcCurtainWallTypeEnum_UNSET,
        IfcCurtainWallTypeEnum_USERDEFINED,
        IfcCurtainWallTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcDamperTypeEnum {
        IfcDamperTypeEnum_UNSET,
        IfcDamperTypeEnum_CONTROLDAMPER,
        IfcDamperTypeEnum_FIREDAMPER,
        IfcDamperTypeEnum_SMOKEDAMPER,
        IfcDamperTypeEnum_FIRESMOKEDAMPER,
        IfcDamperTypeEnum_BACKDRAFTDAMPER,
        IfcDamperTypeEnum_RELIEFDAMPER,
        IfcDamperTypeEnum_BLASTDAMPER,
        IfcDamperTypeEnum_GRAVITYDAMPER,
        IfcDamperTypeEnum_GRAVITYRELIEFDAMPER,
        IfcDamperTypeEnum_BALANCINGDAMPER,
        IfcDamperTypeEnum_FUMEHOODEXHAUST,
        IfcDamperTypeEnum_USERDEFINED,
        IfcDamperTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcDataOriginEnum {
        IfcDataOriginEnum_UNSET,
        IfcDataOriginEnum_MEASURED,
        IfcDataOriginEnum_PREDICTED,
        IfcDataOriginEnum_SIMULATED,
        IfcDataOriginEnum_USERDEFINED,
        IfcDataOriginEnum_NOTDEFINED,
    };

/**
 */
enum IfcDerivedUnitEnum {
        IfcDerivedUnitEnum_UNSET,
        IfcDerivedUnitEnum_ANGULARVELOCITYUNIT,
        IfcDerivedUnitEnum_COMPOUNDPLANEANGLEUNIT,
        IfcDerivedUnitEnum_DYNAMICVISCOSITYUNIT,
        IfcDerivedUnitEnum_HEATFLUXDENSITYUNIT,
        IfcDerivedUnitEnum_INTEGERCOUNTRATEUNIT,
        IfcDerivedUnitEnum_ISOTHERMALMOISTURECAPACITYUNIT,
        IfcDerivedUnitEnum_KINEMATICVISCOSITYUNIT,
        IfcDerivedUnitEnum_LINEARVELOCITYUNIT,
        IfcDerivedUnitEnum_MASSDENSITYUNIT,
        IfcDerivedUnitEnum_MASSFLOWRATEUNIT,
        IfcDerivedUnitEnum_MOISTUREDIFFUSIVITYUNIT,
        IfcDerivedUnitEnum_MOLECULARWEIGHTUNIT,
        IfcDerivedUnitEnum_SPECIFICHEATCAPACITYUNIT,
        IfcDerivedUnitEnum_THERMALADMITTANCEUNIT,
        IfcDerivedUnitEnum_THERMALCONDUCTANCEUNIT,
        IfcDerivedUnitEnum_THERMALRESISTANCEUNIT,
        IfcDerivedUnitEnum_THERMALTRANSMITTANCEUNIT,
        IfcDerivedUnitEnum_VAPORPERMEABILITYUNIT,
        IfcDerivedUnitEnum_VOLUMETRICFLOWRATEUNIT,
        IfcDerivedUnitEnum_ROTATIONALFREQUENCYUNIT,
        IfcDerivedUnitEnum_TORQUEUNIT,
        IfcDerivedUnitEnum_MOMENTOFINERTIAUNIT,
        IfcDerivedUnitEnum_LINEARMOMENTUNIT,
        IfcDerivedUnitEnum_LINEARFORCEUNIT,
        IfcDerivedUnitEnum_PLANARFORCEUNIT,
        IfcDerivedUnitEnum_MODULUSOFELASTICITYUNIT,
        IfcDerivedUnitEnum_SHEARMODULUSUNIT,
        IfcDerivedUnitEnum_LINEARSTIFFNESSUNIT,
        IfcDerivedUnitEnum_ROTATIONALSTIFFNESSUNIT,
        IfcDerivedUnitEnum_MODULUSOFSUBGRADEREACTIONUNIT,
        IfcDerivedUnitEnum_ACCELERATIONUNIT,
        IfcDerivedUnitEnum_CURVATUREUNIT,
        IfcDerivedUnitEnum_HEATINGVALUEUNIT,
        IfcDerivedUnitEnum_IONCONCENTRATIONUNIT,
        IfcDerivedUnitEnum_LUMINOUSINTENSITYDISTRIBUTIONUNIT,
        IfcDerivedUnitEnum_MASSPERLENGTHUNIT,
        IfcDerivedUnitEnum_MODULUSOFLINEARSUBGRADEREACTIONUNIT,
        IfcDerivedUnitEnum_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT,
        IfcDerivedUnitEnum_PHUNIT,
        IfcDerivedUnitEnum_ROTATIONALMASSUNIT,
        IfcDerivedUnitEnum_SECTIONAREAINTEGRALUNIT,
        IfcDerivedUnitEnum_SECTIONMODULUSUNIT,
        IfcDerivedUnitEnum_SOUNDPOWERUNIT,
        IfcDerivedUnitEnum_SOUNDPRESSUREUNIT,
        IfcDerivedUnitEnum_TEMPERATUREGRADIENTUNIT,
        IfcDerivedUnitEnum_THERMALEXPANSIONCOEFFICIENTUNIT,
        IfcDerivedUnitEnum_WARPINGCONSTANTUNIT,
        IfcDerivedUnitEnum_WARPINGMOMENTUNIT,
        IfcDerivedUnitEnum_USERDEFINED,
    };

/**
 */
enum IfcDimensionExtentUsage {
        IfcDimensionExtentUsage_UNSET,
        IfcDimensionExtentUsage_ORIGIN,
        IfcDimensionExtentUsage_TARGET,
    };

/**
 */
enum IfcDirectionSenseEnum {
        IfcDirectionSenseEnum_UNSET,
        IfcDirectionSenseEnum_POSITIVE,
        IfcDirectionSenseEnum_NEGATIVE,
    };

/**
 */
enum IfcDistributionChamberElementTypeEnum {
        IfcDistributionChamberElementTypeEnum_UNSET,
        IfcDistributionChamberElementTypeEnum_FORMEDDUCT,
        IfcDistributionChamberElementTypeEnum_INSPECTIONCHAMBER,
        IfcDistributionChamberElementTypeEnum_INSPECTIONPIT,
        IfcDistributionChamberElementTypeEnum_MANHOLE,
        IfcDistributionChamberElementTypeEnum_METERCHAMBER,
        IfcDistributionChamberElementTypeEnum_SUMP,
        IfcDistributionChamberElementTypeEnum_TRENCH,
        IfcDistributionChamberElementTypeEnum_VALVECHAMBER,
        IfcDistributionChamberElementTypeEnum_USERDEFINED,
        IfcDistributionChamberElementTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcDocumentConfidentialityEnum {
        IfcDocumentConfidentialityEnum_UNSET,
        IfcDocumentConfidentialityEnum_PUBLIC,
        IfcDocumentConfidentialityEnum_RESTRICTED,
        IfcDocumentConfidentialityEnum_CONFIDENTIAL,
        IfcDocumentConfidentialityEnum_PERSONAL,
        IfcDocumentConfidentialityEnum_USERDEFINED,
        IfcDocumentConfidentialityEnum_NOTDEFINED,
    };

/**
 */
enum IfcDocumentStatusEnum {
        IfcDocumentStatusEnum_UNSET,
        IfcDocumentStatusEnum_DRAFT,
        IfcDocumentStatusEnum_FINALDRAFT,
        IfcDocumentStatusEnum_FINAL,
        IfcDocumentStatusEnum_REVISION,
        IfcDocumentStatusEnum_NOTDEFINED,
    };

/**
 */
enum IfcDoorPanelOperationEnum {
        IfcDoorPanelOperationEnum_UNSET,
        IfcDoorPanelOperationEnum_SWINGING,
        IfcDoorPanelOperationEnum_DOUBLE_ACTING,
        IfcDoorPanelOperationEnum_SLIDING,
        IfcDoorPanelOperationEnum_FOLDING,
        IfcDoorPanelOperationEnum_REVOLVING,
        IfcDoorPanelOperationEnum_ROLLINGUP,
        IfcDoorPanelOperationEnum_USERDEFINED,
        IfcDoorPanelOperationEnum_NOTDEFINED,
    };

/**
 */
enum IfcDoorPanelPositionEnum {
        IfcDoorPanelPositionEnum_UNSET,
        IfcDoorPanelPositionEnum_LEFT,
        IfcDoorPanelPositionEnum_MIDDLE,
        IfcDoorPanelPositionEnum_RIGHT,
        IfcDoorPanelPositionEnum_NOTDEFINED,
    };

/**
 */
enum IfcDoorStyleConstructionEnum {
        IfcDoorStyleConstructionEnum_UNSET,
        IfcDoorStyleConstructionEnum_ALUMINIUM,
        IfcDoorStyleConstructionEnum_HIGH_GRADE_STEEL,
        IfcDoorStyleConstructionEnum_STEEL,
        IfcDoorStyleConstructionEnum_WOOD,
        IfcDoorStyleConstructionEnum_ALUMINIUM_WOOD,
        IfcDoorStyleConstructionEnum_ALUMINIUM_PLASTIC,
        IfcDoorStyleConstructionEnum_PLASTIC,
        IfcDoorStyleConstructionEnum_USERDEFINED,
        IfcDoorStyleConstructionEnum_NOTDEFINED,
    };

/**
 */
enum IfcDoorStyleOperationEnum {
        IfcDoorStyleOperationEnum_UNSET,
        IfcDoorStyleOperationEnum_SINGLE_SWING_LEFT,
        IfcDoorStyleOperationEnum_SINGLE_SWING_RIGHT,
        IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING,
        IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT,
        IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT,
        IfcDoorStyleOperationEnum_DOUBLE_SWING_LEFT,
        IfcDoorStyleOperationEnum_DOUBLE_SWING_RIGHT,
        IfcDoorStyleOperationEnum_DOUBLE_DOOR_DOUBLE_SWING,
        IfcDoorStyleOperationEnum_SLIDING_TO_LEFT,
        IfcDoorStyleOperationEnum_SLIDING_TO_RIGHT,
        IfcDoorStyleOperationEnum_DOUBLE_DOOR_SLIDING,
        IfcDoorStyleOperationEnum_FOLDING_TO_LEFT,
        IfcDoorStyleOperationEnum_FOLDING_TO_RIGHT,
        IfcDoorStyleOperationEnum_DOUBLE_DOOR_FOLDING,
        IfcDoorStyleOperationEnum_REVOLVING,
        IfcDoorStyleOperationEnum_ROLLINGUP,
        IfcDoorStyleOperationEnum_USERDEFINED,
        IfcDoorStyleOperationEnum_NOTDEFINED,
    };

/**
 */
enum IfcDuctFittingTypeEnum {
        IfcDuctFittingTypeEnum_UNSET,
        IfcDuctFittingTypeEnum_BEND,
        IfcDuctFittingTypeEnum_CONNECTOR,
        IfcDuctFittingTypeEnum_ENTRY,
        IfcDuctFittingTypeEnum_EXIT,
        IfcDuctFittingTypeEnum_JUNCTION,
        IfcDuctFittingTypeEnum_OBSTRUCTION,
        IfcDuctFittingTypeEnum_TRANSITION,
        IfcDuctFittingTypeEnum_USERDEFINED,
        IfcDuctFittingTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcDuctSegmentTypeEnum {
        IfcDuctSegmentTypeEnum_UNSET,
        IfcDuctSegmentTypeEnum_RIGIDSEGMENT,
        IfcDuctSegmentTypeEnum_FLEXIBLESEGMENT,
        IfcDuctSegmentTypeEnum_USERDEFINED,
        IfcDuctSegmentTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcDuctSilencerTypeEnum {
        IfcDuctSilencerTypeEnum_UNSET,
        IfcDuctSilencerTypeEnum_FLATOVAL,
        IfcDuctSilencerTypeEnum_RECTANGULAR,
        IfcDuctSilencerTypeEnum_ROUND,
        IfcDuctSilencerTypeEnum_USERDEFINED,
        IfcDuctSilencerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricApplianceTypeEnum {
        IfcElectricApplianceTypeEnum_UNSET,
        IfcElectricApplianceTypeEnum_COMPUTER,
        IfcElectricApplianceTypeEnum_DIRECTWATERHEATER,
        IfcElectricApplianceTypeEnum_DISHWASHER,
        IfcElectricApplianceTypeEnum_ELECTRICCOOKER,
        IfcElectricApplianceTypeEnum_ELECTRICHEATER,
        IfcElectricApplianceTypeEnum_FACSIMILE,
        IfcElectricApplianceTypeEnum_FREESTANDINGFAN,
        IfcElectricApplianceTypeEnum_FREEZER,
        IfcElectricApplianceTypeEnum_FRIDGE_FREEZER,
        IfcElectricApplianceTypeEnum_HANDDRYER,
        IfcElectricApplianceTypeEnum_INDIRECTWATERHEATER,
        IfcElectricApplianceTypeEnum_MICROWAVE,
        IfcElectricApplianceTypeEnum_PHOTOCOPIER,
        IfcElectricApplianceTypeEnum_PRINTER,
        IfcElectricApplianceTypeEnum_REFRIGERATOR,
        IfcElectricApplianceTypeEnum_RADIANTHEATER,
        IfcElectricApplianceTypeEnum_SCANNER,
        IfcElectricApplianceTypeEnum_TELEPHONE,
        IfcElectricApplianceTypeEnum_TUMBLEDRYER,
        IfcElectricApplianceTypeEnum_TV,
        IfcElectricApplianceTypeEnum_VENDINGMACHINE,
        IfcElectricApplianceTypeEnum_WASHINGMACHINE,
        IfcElectricApplianceTypeEnum_WATERHEATER,
        IfcElectricApplianceTypeEnum_WATERCOOLER,
        IfcElectricApplianceTypeEnum_USERDEFINED,
        IfcElectricApplianceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricCurrentEnum {
        IfcElectricCurrentEnum_UNSET,
        IfcElectricCurrentEnum_ALTERNATING,
        IfcElectricCurrentEnum_DIRECT,
        IfcElectricCurrentEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricDistributionPointFunctionEnum {
        IfcElectricDistributionPointFunctionEnum_UNSET,
        IfcElectricDistributionPointFunctionEnum_ALARMPANEL,
        IfcElectricDistributionPointFunctionEnum_CONSUMERUNIT,
        IfcElectricDistributionPointFunctionEnum_CONTROLPANEL,
        IfcElectricDistributionPointFunctionEnum_DISTRIBUTIONBOARD,
        IfcElectricDistributionPointFunctionEnum_GASDETECTORPANEL,
        IfcElectricDistributionPointFunctionEnum_INDICATORPANEL,
        IfcElectricDistributionPointFunctionEnum_MIMICPANEL,
        IfcElectricDistributionPointFunctionEnum_MOTORCONTROLCENTRE,
        IfcElectricDistributionPointFunctionEnum_SWITCHBOARD,
        IfcElectricDistributionPointFunctionEnum_USERDEFINED,
        IfcElectricDistributionPointFunctionEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricFlowStorageDeviceTypeEnum {
        IfcElectricFlowStorageDeviceTypeEnum_UNSET,
        IfcElectricFlowStorageDeviceTypeEnum_BATTERY,
        IfcElectricFlowStorageDeviceTypeEnum_CAPACITORBANK,
        IfcElectricFlowStorageDeviceTypeEnum_HARMONICFILTER,
        IfcElectricFlowStorageDeviceTypeEnum_INDUCTORBANK,
        IfcElectricFlowStorageDeviceTypeEnum_UPS,
        IfcElectricFlowStorageDeviceTypeEnum_USERDEFINED,
        IfcElectricFlowStorageDeviceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricGeneratorTypeEnum {
        IfcElectricGeneratorTypeEnum_UNSET,
        IfcElectricGeneratorTypeEnum_USERDEFINED,
        IfcElectricGeneratorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricHeaterTypeEnum {
        IfcElectricHeaterTypeEnum_UNSET,
        IfcElectricHeaterTypeEnum_ELECTRICPOINTHEATER,
        IfcElectricHeaterTypeEnum_ELECTRICCABLEHEATER,
        IfcElectricHeaterTypeEnum_ELECTRICMATHEATER,
        IfcElectricHeaterTypeEnum_USERDEFINED,
        IfcElectricHeaterTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricMotorTypeEnum {
        IfcElectricMotorTypeEnum_UNSET,
        IfcElectricMotorTypeEnum_DC,
        IfcElectricMotorTypeEnum_INDUCTION,
        IfcElectricMotorTypeEnum_POLYPHASE,
        IfcElectricMotorTypeEnum_RELUCTANCESYNCHRONOUS,
        IfcElectricMotorTypeEnum_SYNCHRONOUS,
        IfcElectricMotorTypeEnum_USERDEFINED,
        IfcElectricMotorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElectricTimeControlTypeEnum {
        IfcElectricTimeControlTypeEnum_UNSET,
        IfcElectricTimeControlTypeEnum_TIMECLOCK,
        IfcElectricTimeControlTypeEnum_TIMEDELAY,
        IfcElectricTimeControlTypeEnum_RELAY,
        IfcElectricTimeControlTypeEnum_USERDEFINED,
        IfcElectricTimeControlTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElementAssemblyTypeEnum {
        IfcElementAssemblyTypeEnum_UNSET,
        IfcElementAssemblyTypeEnum_ACCESSORY_ASSEMBLY,
        IfcElementAssemblyTypeEnum_ARCH,
        IfcElementAssemblyTypeEnum_BEAM_GRID,
        IfcElementAssemblyTypeEnum_BRACED_FRAME,
        IfcElementAssemblyTypeEnum_GIRDER,
        IfcElementAssemblyTypeEnum_REINFORCEMENT_UNIT,
        IfcElementAssemblyTypeEnum_RIGID_FRAME,
        IfcElementAssemblyTypeEnum_SLAB_FIELD,
        IfcElementAssemblyTypeEnum_TRUSS,
        IfcElementAssemblyTypeEnum_USERDEFINED,
        IfcElementAssemblyTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcElementCompositionEnum {
        IfcElementCompositionEnum_UNSET,
        IfcElementCompositionEnum_COMPLEX,
        IfcElementCompositionEnum_ELEMENT,
        IfcElementCompositionEnum_PARTIAL,
    };

/**
 */
enum IfcEnergySequenceEnum {
        IfcEnergySequenceEnum_UNSET,
        IfcEnergySequenceEnum_PRIMARY,
        IfcEnergySequenceEnum_SECONDARY,
        IfcEnergySequenceEnum_TERTIARY,
        IfcEnergySequenceEnum_AUXILIARY,
        IfcEnergySequenceEnum_USERDEFINED,
        IfcEnergySequenceEnum_NOTDEFINED,
    };

/**
 */
enum IfcEnvironmentalImpactCategoryEnum {
        IfcEnvironmentalImpactCategoryEnum_UNSET,
        IfcEnvironmentalImpactCategoryEnum_COMBINEDVALUE,
        IfcEnvironmentalImpactCategoryEnum_DISPOSAL,
        IfcEnvironmentalImpactCategoryEnum_EXTRACTION,
        IfcEnvironmentalImpactCategoryEnum_INSTALLATION,
        IfcEnvironmentalImpactCategoryEnum_MANUFACTURE,
        IfcEnvironmentalImpactCategoryEnum_TRANSPORTATION,
        IfcEnvironmentalImpactCategoryEnum_USERDEFINED,
        IfcEnvironmentalImpactCategoryEnum_NOTDEFINED,
    };

/**
 */
enum IfcEvaporativeCoolerTypeEnum {
        IfcEvaporativeCoolerTypeEnum_UNSET,
        IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER,
        IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER,
        IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER,
        IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER,
        IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEAIRWASHER,
        IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEPACKAGEAIRCOOLER,
        IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEWETCOIL,
        IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER,
        IfcEvaporativeCoolerTypeEnum_INDIRECTDIRECTCOMBINATION,
        IfcEvaporativeCoolerTypeEnum_USERDEFINED,
        IfcEvaporativeCoolerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcEvaporatorTypeEnum {
        IfcEvaporatorTypeEnum_UNSET,
        IfcEvaporatorTypeEnum_DIRECTEXPANSIONSHELLANDTUBE,
        IfcEvaporatorTypeEnum_DIRECTEXPANSIONTUBEINTUBE,
        IfcEvaporatorTypeEnum_DIRECTEXPANSIONBRAZEDPLATE,
        IfcEvaporatorTypeEnum_FLOODEDSHELLANDTUBE,
        IfcEvaporatorTypeEnum_SHELLANDCOIL,
        IfcEvaporatorTypeEnum_USERDEFINED,
        IfcEvaporatorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcFanTypeEnum {
        IfcFanTypeEnum_UNSET,
        IfcFanTypeEnum_CENTRIFUGALFORWARDCURVED,
        IfcFanTypeEnum_CENTRIFUGALRADIAL,
        IfcFanTypeEnum_CENTRIFUGALBACKWARDINCLINEDCURVED,
        IfcFanTypeEnum_CENTRIFUGALAIRFOIL,
        IfcFanTypeEnum_TUBEAXIAL,
        IfcFanTypeEnum_VANEAXIAL,
        IfcFanTypeEnum_PROPELLORAXIAL,
        IfcFanTypeEnum_USERDEFINED,
        IfcFanTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcFilterTypeEnum {
        IfcFilterTypeEnum_UNSET,
        IfcFilterTypeEnum_AIRPARTICLEFILTER,
        IfcFilterTypeEnum_ODORFILTER,
        IfcFilterTypeEnum_OILFILTER,
        IfcFilterTypeEnum_STRAINER,
        IfcFilterTypeEnum_WATERFILTER,
        IfcFilterTypeEnum_USERDEFINED,
        IfcFilterTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcFireSuppressionTerminalTypeEnum {
        IfcFireSuppressionTerminalTypeEnum_UNSET,
        IfcFireSuppressionTerminalTypeEnum_BREECHINGINLET,
        IfcFireSuppressionTerminalTypeEnum_FIREHYDRANT,
        IfcFireSuppressionTerminalTypeEnum_HOSEREEL,
        IfcFireSuppressionTerminalTypeEnum_SPRINKLER,
        IfcFireSuppressionTerminalTypeEnum_SPRINKLERDEFLECTOR,
        IfcFireSuppressionTerminalTypeEnum_USERDEFINED,
        IfcFireSuppressionTerminalTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcFlowDirectionEnum {
        IfcFlowDirectionEnum_UNSET,
        IfcFlowDirectionEnum_SOURCE,
        IfcFlowDirectionEnum_SINK,
        IfcFlowDirectionEnum_SOURCEANDSINK,
        IfcFlowDirectionEnum_NOTDEFINED,
    };

/**
 */
enum IfcFlowInstrumentTypeEnum {
        IfcFlowInstrumentTypeEnum_UNSET,
        IfcFlowInstrumentTypeEnum_PRESSUREGAUGE,
        IfcFlowInstrumentTypeEnum_THERMOMETER,
        IfcFlowInstrumentTypeEnum_AMMETER,
        IfcFlowInstrumentTypeEnum_FREQUENCYMETER,
        IfcFlowInstrumentTypeEnum_POWERFACTORMETER,
        IfcFlowInstrumentTypeEnum_PHASEANGLEMETER,
        IfcFlowInstrumentTypeEnum_VOLTMETER_PEAK,
        IfcFlowInstrumentTypeEnum_VOLTMETER_RMS,
        IfcFlowInstrumentTypeEnum_USERDEFINED,
        IfcFlowInstrumentTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcFlowMeterTypeEnum {
        IfcFlowMeterTypeEnum_UNSET,
        IfcFlowMeterTypeEnum_ELECTRICMETER,
        IfcFlowMeterTypeEnum_ENERGYMETER,
        IfcFlowMeterTypeEnum_FLOWMETER,
        IfcFlowMeterTypeEnum_GASMETER,
        IfcFlowMeterTypeEnum_OILMETER,
        IfcFlowMeterTypeEnum_WATERMETER,
        IfcFlowMeterTypeEnum_USERDEFINED,
        IfcFlowMeterTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcFootingTypeEnum {
        IfcFootingTypeEnum_UNSET,
        IfcFootingTypeEnum_FOOTING_BEAM,
        IfcFootingTypeEnum_PAD_FOOTING,
        IfcFootingTypeEnum_PILE_CAP,
        IfcFootingTypeEnum_STRIP_FOOTING,
        IfcFootingTypeEnum_USERDEFINED,
        IfcFootingTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcGasTerminalTypeEnum {
        IfcGasTerminalTypeEnum_UNSET,
        IfcGasTerminalTypeEnum_GASAPPLIANCE,
        IfcGasTerminalTypeEnum_GASBOOSTER,
        IfcGasTerminalTypeEnum_GASBURNER,
        IfcGasTerminalTypeEnum_USERDEFINED,
        IfcGasTerminalTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcGeometricProjectionEnum {
        IfcGeometricProjectionEnum_UNSET,
        IfcGeometricProjectionEnum_GRAPH_VIEW,
        IfcGeometricProjectionEnum_SKETCH_VIEW,
        IfcGeometricProjectionEnum_MODEL_VIEW,
        IfcGeometricProjectionEnum_PLAN_VIEW,
        IfcGeometricProjectionEnum_REFLECTED_PLAN_VIEW,
        IfcGeometricProjectionEnum_SECTION_VIEW,
        IfcGeometricProjectionEnum_ELEVATION_VIEW,
        IfcGeometricProjectionEnum_USERDEFINED,
        IfcGeometricProjectionEnum_NOTDEFINED,
    };

/**
 */
enum IfcGlobalOrLocalEnum {
        IfcGlobalOrLocalEnum_UNSET,
        IfcGlobalOrLocalEnum_GLOBAL_COORDS,
        IfcGlobalOrLocalEnum_LOCAL_COORDS,
    };

/**
 */
enum IfcHeatExchangerTypeEnum {
        IfcHeatExchangerTypeEnum_UNSET,
        IfcHeatExchangerTypeEnum_PLATE,
        IfcHeatExchangerTypeEnum_SHELLANDTUBE,
        IfcHeatExchangerTypeEnum_USERDEFINED,
        IfcHeatExchangerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcHumidifierTypeEnum {
        IfcHumidifierTypeEnum_UNSET,
        IfcHumidifierTypeEnum_STEAMINJECTION,
        IfcHumidifierTypeEnum_ADIABATICAIRWASHER,
        IfcHumidifierTypeEnum_ADIABATICPAN,
        IfcHumidifierTypeEnum_ADIABATICWETTEDELEMENT,
        IfcHumidifierTypeEnum_ADIABATICATOMIZING,
        IfcHumidifierTypeEnum_ADIABATICULTRASONIC,
        IfcHumidifierTypeEnum_ADIABATICRIGIDMEDIA,
        IfcHumidifierTypeEnum_ADIABATICCOMPRESSEDAIRNOZZLE,
        IfcHumidifierTypeEnum_ASSISTEDELECTRIC,
        IfcHumidifierTypeEnum_ASSISTEDNATURALGAS,
        IfcHumidifierTypeEnum_ASSISTEDPROPANE,
        IfcHumidifierTypeEnum_ASSISTEDBUTANE,
        IfcHumidifierTypeEnum_ASSISTEDSTEAM,
        IfcHumidifierTypeEnum_USERDEFINED,
        IfcHumidifierTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcInternalOrExternalEnum {
        IfcInternalOrExternalEnum_UNSET,
        IfcInternalOrExternalEnum_INTERNAL,
        IfcInternalOrExternalEnum_EXTERNAL,
        IfcInternalOrExternalEnum_NOTDEFINED,
    };

/**
 */
enum IfcInventoryTypeEnum {
        IfcInventoryTypeEnum_UNSET,
        IfcInventoryTypeEnum_ASSETINVENTORY,
        IfcInventoryTypeEnum_SPACEINVENTORY,
        IfcInventoryTypeEnum_FURNITUREINVENTORY,
        IfcInventoryTypeEnum_USERDEFINED,
        IfcInventoryTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcJunctionBoxTypeEnum {
        IfcJunctionBoxTypeEnum_UNSET,
        IfcJunctionBoxTypeEnum_USERDEFINED,
        IfcJunctionBoxTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcLampTypeEnum {
        IfcLampTypeEnum_UNSET,
        IfcLampTypeEnum_COMPACTFLUORESCENT,
        IfcLampTypeEnum_FLUORESCENT,
        IfcLampTypeEnum_HIGHPRESSUREMERCURY,
        IfcLampTypeEnum_HIGHPRESSURESODIUM,
        IfcLampTypeEnum_METALHALIDE,
        IfcLampTypeEnum_TUNGSTENFILAMENT,
        IfcLampTypeEnum_USERDEFINED,
        IfcLampTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcLayerSetDirectionEnum {
        IfcLayerSetDirectionEnum_UNSET,
        IfcLayerSetDirectionEnum_AXIS1,
        IfcLayerSetDirectionEnum_AXIS2,
        IfcLayerSetDirectionEnum_AXIS3,
    };

/**
 */
enum IfcLightDistributionCurveEnum {
        IfcLightDistributionCurveEnum_UNSET,
        IfcLightDistributionCurveEnum_TYPE_A,
        IfcLightDistributionCurveEnum_TYPE_B,
        IfcLightDistributionCurveEnum_TYPE_C,
        IfcLightDistributionCurveEnum_NOTDEFINED,
    };

/**
 */
enum IfcLightEmissionSourceEnum {
        IfcLightEmissionSourceEnum_UNSET,
        IfcLightEmissionSourceEnum_COMPACTFLUORESCENT,
        IfcLightEmissionSourceEnum_FLUORESCENT,
        IfcLightEmissionSourceEnum_HIGHPRESSUREMERCURY,
        IfcLightEmissionSourceEnum_HIGHPRESSURESODIUM,
        IfcLightEmissionSourceEnum_LIGHTEMITTINGDIODE,
        IfcLightEmissionSourceEnum_LOWPRESSURESODIUM,
        IfcLightEmissionSourceEnum_LOWVOLTAGEHALOGEN,
        IfcLightEmissionSourceEnum_MAINVOLTAGEHALOGEN,
        IfcLightEmissionSourceEnum_METALHALIDE,
        IfcLightEmissionSourceEnum_TUNGSTENFILAMENT,
        IfcLightEmissionSourceEnum_NOTDEFINED,
    };

/**
 */
enum IfcLightFixtureTypeEnum {
        IfcLightFixtureTypeEnum_UNSET,
        IfcLightFixtureTypeEnum_POINTSOURCE,
        IfcLightFixtureTypeEnum_DIRECTIONSOURCE,
        IfcLightFixtureTypeEnum_USERDEFINED,
        IfcLightFixtureTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcLoadGroupTypeEnum {
        IfcLoadGroupTypeEnum_UNSET,
        IfcLoadGroupTypeEnum_LOAD_GROUP,
        IfcLoadGroupTypeEnum_LOAD_CASE,
        IfcLoadGroupTypeEnum_LOAD_COMBINATION_GROUP,
        IfcLoadGroupTypeEnum_LOAD_COMBINATION,
        IfcLoadGroupTypeEnum_USERDEFINED,
        IfcLoadGroupTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcLogicalOperatorEnum {
        IfcLogicalOperatorEnum_UNSET,
        IfcLogicalOperatorEnum_LOGICALAND,
        IfcLogicalOperatorEnum_LOGICALOR,
    };

/**
 */
enum IfcMemberTypeEnum {
        IfcMemberTypeEnum_UNSET,
        IfcMemberTypeEnum_BRACE,
        IfcMemberTypeEnum_CHORD,
        IfcMemberTypeEnum_COLLAR,
        IfcMemberTypeEnum_MEMBER,
        IfcMemberTypeEnum_MULLION,
        IfcMemberTypeEnum_PLATE,
        IfcMemberTypeEnum_POST,
        IfcMemberTypeEnum_PURLIN,
        IfcMemberTypeEnum_RAFTER,
        IfcMemberTypeEnum_STRINGER,
        IfcMemberTypeEnum_STRUT,
        IfcMemberTypeEnum_STUD,
        IfcMemberTypeEnum_USERDEFINED,
        IfcMemberTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcMotorConnectionTypeEnum {
        IfcMotorConnectionTypeEnum_UNSET,
        IfcMotorConnectionTypeEnum_BELTDRIVE,
        IfcMotorConnectionTypeEnum_COUPLING,
        IfcMotorConnectionTypeEnum_DIRECTDRIVE,
        IfcMotorConnectionTypeEnum_USERDEFINED,
        IfcMotorConnectionTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcNullStyle {
        IfcNullStyle_UNSET,
        IfcNullStyle_NULL,
    };

/**
 */
enum IfcObjectTypeEnum {
        IfcObjectTypeEnum_UNSET,
        IfcObjectTypeEnum_PRODUCT,
        IfcObjectTypeEnum_PROCESS,
        IfcObjectTypeEnum_CONTROL,
        IfcObjectTypeEnum_RESOURCE,
        IfcObjectTypeEnum_ACTOR,
        IfcObjectTypeEnum_GROUP,
        IfcObjectTypeEnum_PROJECT,
        IfcObjectTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcObjectiveEnum {
        IfcObjectiveEnum_UNSET,
        IfcObjectiveEnum_CODECOMPLIANCE,
        IfcObjectiveEnum_DESIGNINTENT,
        IfcObjectiveEnum_HEALTHANDSAFETY,
        IfcObjectiveEnum_REQUIREMENT,
        IfcObjectiveEnum_SPECIFICATION,
        IfcObjectiveEnum_TRIGGERCONDITION,
        IfcObjectiveEnum_USERDEFINED,
        IfcObjectiveEnum_NOTDEFINED,
    };

/**
 */
enum IfcOccupantTypeEnum {
        IfcOccupantTypeEnum_UNSET,
        IfcOccupantTypeEnum_ASSIGNEE,
        IfcOccupantTypeEnum_ASSIGNOR,
        IfcOccupantTypeEnum_LESSEE,
        IfcOccupantTypeEnum_LESSOR,
        IfcOccupantTypeEnum_LETTINGAGENT,
        IfcOccupantTypeEnum_OWNER,
        IfcOccupantTypeEnum_TENANT,
        IfcOccupantTypeEnum_USERDEFINED,
        IfcOccupantTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcOutletTypeEnum {
        IfcOutletTypeEnum_UNSET,
        IfcOutletTypeEnum_AUDIOVISUALOUTLET,
        IfcOutletTypeEnum_COMMUNICATIONSOUTLET,
        IfcOutletTypeEnum_POWEROUTLET,
        IfcOutletTypeEnum_USERDEFINED,
        IfcOutletTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcPermeableCoveringOperationEnum {
        IfcPermeableCoveringOperationEnum_UNSET,
        IfcPermeableCoveringOperationEnum_GRILL,
        IfcPermeableCoveringOperationEnum_LOUVER,
        IfcPermeableCoveringOperationEnum_SCREEN,
        IfcPermeableCoveringOperationEnum_USERDEFINED,
        IfcPermeableCoveringOperationEnum_NOTDEFINED,
    };

/**
 */
enum IfcPhysicalOrVirtualEnum {
        IfcPhysicalOrVirtualEnum_UNSET,
        IfcPhysicalOrVirtualEnum_PHYSICAL,
        IfcPhysicalOrVirtualEnum_VIRTUAL,
        IfcPhysicalOrVirtualEnum_NOTDEFINED,
    };

/**
 */
enum IfcPileConstructionEnum {
        IfcPileConstructionEnum_UNSET,
        IfcPileConstructionEnum_CAST_IN_PLACE,
        IfcPileConstructionEnum_COMPOSITE,
        IfcPileConstructionEnum_PRECAST_CONCRETE,
        IfcPileConstructionEnum_PREFAB_STEEL,
        IfcPileConstructionEnum_USERDEFINED,
        IfcPileConstructionEnum_NOTDEFINED,
    };

/**
 */
enum IfcPileTypeEnum {
        IfcPileTypeEnum_UNSET,
        IfcPileTypeEnum_COHESION,
        IfcPileTypeEnum_FRICTION,
        IfcPileTypeEnum_SUPPORT,
        IfcPileTypeEnum_USERDEFINED,
        IfcPileTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcPipeFittingTypeEnum {
        IfcPipeFittingTypeEnum_UNSET,
        IfcPipeFittingTypeEnum_BEND,
        IfcPipeFittingTypeEnum_CONNECTOR,
        IfcPipeFittingTypeEnum_ENTRY,
        IfcPipeFittingTypeEnum_EXIT,
        IfcPipeFittingTypeEnum_JUNCTION,
        IfcPipeFittingTypeEnum_OBSTRUCTION,
        IfcPipeFittingTypeEnum_TRANSITION,
        IfcPipeFittingTypeEnum_USERDEFINED,
        IfcPipeFittingTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcPipeSegmentTypeEnum {
        IfcPipeSegmentTypeEnum_UNSET,
        IfcPipeSegmentTypeEnum_FLEXIBLESEGMENT,
        IfcPipeSegmentTypeEnum_RIGIDSEGMENT,
        IfcPipeSegmentTypeEnum_GUTTER,
        IfcPipeSegmentTypeEnum_SPOOL,
        IfcPipeSegmentTypeEnum_USERDEFINED,
        IfcPipeSegmentTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcPlateTypeEnum {
        IfcPlateTypeEnum_UNSET,
        IfcPlateTypeEnum_CURTAIN_PANEL,
        IfcPlateTypeEnum_SHEET,
        IfcPlateTypeEnum_USERDEFINED,
        IfcPlateTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcProcedureTypeEnum {
        IfcProcedureTypeEnum_UNSET,
        IfcProcedureTypeEnum_ADVICE_CAUTION,
        IfcProcedureTypeEnum_ADVICE_NOTE,
        IfcProcedureTypeEnum_ADVICE_WARNING,
        IfcProcedureTypeEnum_CALIBRATION,
        IfcProcedureTypeEnum_DIAGNOSTIC,
        IfcProcedureTypeEnum_SHUTDOWN,
        IfcProcedureTypeEnum_STARTUP,
        IfcProcedureTypeEnum_USERDEFINED,
        IfcProcedureTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcProfileTypeEnum {
        IfcProfileTypeEnum_UNSET,
        IfcProfileTypeEnum_CURVE,
        IfcProfileTypeEnum_AREA,
    };

/**
 */
enum IfcProjectOrderRecordTypeEnum {
        IfcProjectOrderRecordTypeEnum_UNSET,
        IfcProjectOrderRecordTypeEnum_CHANGE,
        IfcProjectOrderRecordTypeEnum_MAINTENANCE,
        IfcProjectOrderRecordTypeEnum_MOVE,
        IfcProjectOrderRecordTypeEnum_PURCHASE,
        IfcProjectOrderRecordTypeEnum_WORK,
        IfcProjectOrderRecordTypeEnum_USERDEFINED,
        IfcProjectOrderRecordTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcProjectOrderTypeEnum {
        IfcProjectOrderTypeEnum_UNSET,
        IfcProjectOrderTypeEnum_CHANGEORDER,
        IfcProjectOrderTypeEnum_MAINTENANCEWORKORDER,
        IfcProjectOrderTypeEnum_MOVEORDER,
        IfcProjectOrderTypeEnum_PURCHASEORDER,
        IfcProjectOrderTypeEnum_WORKORDER,
        IfcProjectOrderTypeEnum_USERDEFINED,
        IfcProjectOrderTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcProjectedOrTrueLengthEnum {
        IfcProjectedOrTrueLengthEnum_UNSET,
        IfcProjectedOrTrueLengthEnum_PROJECTED_LENGTH,
        IfcProjectedOrTrueLengthEnum_TRUE_LENGTH,
    };

/**
 */
enum IfcPropertySourceEnum {
        IfcPropertySourceEnum_UNSET,
        IfcPropertySourceEnum_DESIGN,
        IfcPropertySourceEnum_DESIGNMAXIMUM,
        IfcPropertySourceEnum_DESIGNMINIMUM,
        IfcPropertySourceEnum_SIMULATED,
        IfcPropertySourceEnum_ASBUILT,
        IfcPropertySourceEnum_COMMISSIONING,
        IfcPropertySourceEnum_MEASURED,
        IfcPropertySourceEnum_USERDEFINED,
        IfcPropertySourceEnum_NOTKNOWN,
    };

/**
 */
enum IfcProtectiveDeviceTypeEnum {
        IfcProtectiveDeviceTypeEnum_UNSET,
        IfcProtectiveDeviceTypeEnum_FUSEDISCONNECTOR,
        IfcProtectiveDeviceTypeEnum_CIRCUITBREAKER,
        IfcProtectiveDeviceTypeEnum_EARTHFAILUREDEVICE,
        IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTCIRCUITBREAKER,
        IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTSWITCH,
        IfcProtectiveDeviceTypeEnum_VARISTOR,
        IfcProtectiveDeviceTypeEnum_USERDEFINED,
        IfcProtectiveDeviceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcPumpTypeEnum {
        IfcPumpTypeEnum_UNSET,
        IfcPumpTypeEnum_CIRCULATOR,
        IfcPumpTypeEnum_ENDSUCTION,
        IfcPumpTypeEnum_SPLITCASE,
        IfcPumpTypeEnum_VERTICALINLINE,
        IfcPumpTypeEnum_VERTICALTURBINE,
        IfcPumpTypeEnum_USERDEFINED,
        IfcPumpTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcRailingTypeEnum {
        IfcRailingTypeEnum_UNSET,
        IfcRailingTypeEnum_HANDRAIL,
        IfcRailingTypeEnum_GUARDRAIL,
        IfcRailingTypeEnum_BALUSTRADE,
        IfcRailingTypeEnum_USERDEFINED,
        IfcRailingTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcRampFlightTypeEnum {
        IfcRampFlightTypeEnum_UNSET,
        IfcRampFlightTypeEnum_STRAIGHT,
        IfcRampFlightTypeEnum_SPIRAL,
        IfcRampFlightTypeEnum_USERDEFINED,
        IfcRampFlightTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcRampTypeEnum {
        IfcRampTypeEnum_UNSET,
        IfcRampTypeEnum_STRAIGHT_RUN_RAMP,
        IfcRampTypeEnum_TWO_STRAIGHT_RUN_RAMP,
        IfcRampTypeEnum_QUARTER_TURN_RAMP,
        IfcRampTypeEnum_TWO_QUARTER_TURN_RAMP,
        IfcRampTypeEnum_HALF_TURN_RAMP,
        IfcRampTypeEnum_SPIRAL_RAMP,
        IfcRampTypeEnum_USERDEFINED,
        IfcRampTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcReflectanceMethodEnum {
        IfcReflectanceMethodEnum_UNSET,
        IfcReflectanceMethodEnum_BLINN,
        IfcReflectanceMethodEnum_FLAT,
        IfcReflectanceMethodEnum_GLASS,
        IfcReflectanceMethodEnum_MATT,
        IfcReflectanceMethodEnum_METAL,
        IfcReflectanceMethodEnum_MIRROR,
        IfcReflectanceMethodEnum_PHONG,
        IfcReflectanceMethodEnum_PLASTIC,
        IfcReflectanceMethodEnum_STRAUSS,
        IfcReflectanceMethodEnum_NOTDEFINED,
    };

/**
 */
enum IfcReinforcingBarRoleEnum {
        IfcReinforcingBarRoleEnum_UNSET,
        IfcReinforcingBarRoleEnum_MAIN,
        IfcReinforcingBarRoleEnum_SHEAR,
        IfcReinforcingBarRoleEnum_LIGATURE,
        IfcReinforcingBarRoleEnum_STUD,
        IfcReinforcingBarRoleEnum_PUNCHING,
        IfcReinforcingBarRoleEnum_EDGE,
        IfcReinforcingBarRoleEnum_RING,
        IfcReinforcingBarRoleEnum_USERDEFINED,
        IfcReinforcingBarRoleEnum_NOTDEFINED,
    };

/**
 */
enum IfcReinforcingBarSurfaceEnum {
        IfcReinforcingBarSurfaceEnum_UNSET,
        IfcReinforcingBarSurfaceEnum_PLAIN,
        IfcReinforcingBarSurfaceEnum_TEXTURED,
    };

/**
 */
enum IfcResourceConsumptionEnum {
        IfcResourceConsumptionEnum_UNSET,
        IfcResourceConsumptionEnum_CONSUMED,
        IfcResourceConsumptionEnum_PARTIALLYCONSUMED,
        IfcResourceConsumptionEnum_NOTCONSUMED,
        IfcResourceConsumptionEnum_OCCUPIED,
        IfcResourceConsumptionEnum_PARTIALLYOCCUPIED,
        IfcResourceConsumptionEnum_NOTOCCUPIED,
        IfcResourceConsumptionEnum_USERDEFINED,
        IfcResourceConsumptionEnum_NOTDEFINED,
    };

/**
 */
enum IfcRibPlateDirectionEnum {
        IfcRibPlateDirectionEnum_UNSET,
        IfcRibPlateDirectionEnum_DIRECTION_X,
        IfcRibPlateDirectionEnum_DIRECTION_Y,
    };

/**
 */
enum IfcRoleEnum {
        IfcRoleEnum_UNSET,
        IfcRoleEnum_SUPPLIER,
        IfcRoleEnum_MANUFACTURER,
        IfcRoleEnum_CONTRACTOR,
        IfcRoleEnum_SUBCONTRACTOR,
        IfcRoleEnum_ARCHITECT,
        IfcRoleEnum_STRUCTURALENGINEER,
        IfcRoleEnum_COSTENGINEER,
        IfcRoleEnum_CLIENT,
        IfcRoleEnum_BUILDINGOWNER,
        IfcRoleEnum_BUILDINGOPERATOR,
        IfcRoleEnum_MECHANICALENGINEER,
        IfcRoleEnum_ELECTRICALENGINEER,
        IfcRoleEnum_PROJECTMANAGER,
        IfcRoleEnum_FACILITIESMANAGER,
        IfcRoleEnum_CIVILENGINEER,
        IfcRoleEnum_COMISSIONINGENGINEER,
        IfcRoleEnum_ENGINEER,
        IfcRoleEnum_OWNER,
        IfcRoleEnum_CONSULTANT,
        IfcRoleEnum_CONSTRUCTIONMANAGER,
        IfcRoleEnum_FIELDCONSTRUCTIONMANAGER,
        IfcRoleEnum_RESELLER,
        IfcRoleEnum_USERDEFINED,
    };

/**
 */
enum IfcRoofTypeEnum {
        IfcRoofTypeEnum_UNSET,
        IfcRoofTypeEnum_FLAT_ROOF,
        IfcRoofTypeEnum_SHED_ROOF,
        IfcRoofTypeEnum_GABLE_ROOF,
        IfcRoofTypeEnum_HIP_ROOF,
        IfcRoofTypeEnum_HIPPED_GABLE_ROOF,
        IfcRoofTypeEnum_GAMBREL_ROOF,
        IfcRoofTypeEnum_MANSARD_ROOF,
        IfcRoofTypeEnum_BARREL_ROOF,
        IfcRoofTypeEnum_RAINBOW_ROOF,
        IfcRoofTypeEnum_BUTTERFLY_ROOF,
        IfcRoofTypeEnum_PAVILION_ROOF,
        IfcRoofTypeEnum_DOME_ROOF,
        IfcRoofTypeEnum_FREEFORM,
        IfcRoofTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcSIPrefix {
        IfcSIPrefix_UNSET,
        IfcSIPrefix_EXA,
        IfcSIPrefix_PETA,
        IfcSIPrefix_TERA,
        IfcSIPrefix_GIGA,
        IfcSIPrefix_MEGA,
        IfcSIPrefix_KILO,
        IfcSIPrefix_HECTO,
        IfcSIPrefix_DECA,
        IfcSIPrefix_DECI,
        IfcSIPrefix_CENTI,
        IfcSIPrefix_MILLI,
        IfcSIPrefix_MICRO,
        IfcSIPrefix_NANO,
        IfcSIPrefix_PICO,
        IfcSIPrefix_FEMTO,
        IfcSIPrefix_ATTO,
    };

/**
 */
enum IfcSIUnitName {
        IfcSIUnitName_UNSET,
        IfcSIUnitName_AMPERE,
        IfcSIUnitName_BECQUEREL,
        IfcSIUnitName_CANDELA,
        IfcSIUnitName_COULOMB,
        IfcSIUnitName_CUBIC_METRE,
        IfcSIUnitName_DEGREE_CELSIUS,
        IfcSIUnitName_FARAD,
        IfcSIUnitName_GRAM,
        IfcSIUnitName_GRAY,
        IfcSIUnitName_HENRY,
        IfcSIUnitName_HERTZ,
        IfcSIUnitName_JOULE,
        IfcSIUnitName_KELVIN,
        IfcSIUnitName_LUMEN,
        IfcSIUnitName_LUX,
        IfcSIUnitName_METRE,
        IfcSIUnitName_MOLE,
        IfcSIUnitName_NEWTON,
        IfcSIUnitName_OHM,
        IfcSIUnitName_PASCAL,
        IfcSIUnitName_RADIAN,
        IfcSIUnitName_SECOND,
        IfcSIUnitName_SIEMENS,
        IfcSIUnitName_SIEVERT,
        IfcSIUnitName_SQUARE_METRE,
        IfcSIUnitName_STERADIAN,
        IfcSIUnitName_TESLA,
        IfcSIUnitName_VOLT,
        IfcSIUnitName_WATT,
        IfcSIUnitName_WEBER,
    };

/**
 */
enum IfcSanitaryTerminalTypeEnum {
        IfcSanitaryTerminalTypeEnum_UNSET,
        IfcSanitaryTerminalTypeEnum_BATH,
        IfcSanitaryTerminalTypeEnum_BIDET,
        IfcSanitaryTerminalTypeEnum_CISTERN,
        IfcSanitaryTerminalTypeEnum_SHOWER,
        IfcSanitaryTerminalTypeEnum_SINK,
        IfcSanitaryTerminalTypeEnum_SANITARYFOUNTAIN,
        IfcSanitaryTerminalTypeEnum_TOILETPAN,
        IfcSanitaryTerminalTypeEnum_URINAL,
        IfcSanitaryTerminalTypeEnum_WASHHANDBASIN,
        IfcSanitaryTerminalTypeEnum_WCSEAT,
        IfcSanitaryTerminalTypeEnum_USERDEFINED,
        IfcSanitaryTerminalTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcSectionTypeEnum {
        IfcSectionTypeEnum_UNSET,
        IfcSectionTypeEnum_UNIFORM,
        IfcSectionTypeEnum_TAPERED,
    };

/**
 */
enum IfcSensorTypeEnum {
        IfcSensorTypeEnum_UNSET,
        IfcSensorTypeEnum_CO2SENSOR,
        IfcSensorTypeEnum_FIRESENSOR,
        IfcSensorTypeEnum_FLOWSENSOR,
        IfcSensorTypeEnum_GASSENSOR,
        IfcSensorTypeEnum_HEATSENSOR,
        IfcSensorTypeEnum_HUMIDITYSENSOR,
        IfcSensorTypeEnum_LIGHTSENSOR,
        IfcSensorTypeEnum_MOISTURESENSOR,
        IfcSensorTypeEnum_MOVEMENTSENSOR,
        IfcSensorTypeEnum_PRESSURESENSOR,
        IfcSensorTypeEnum_SMOKESENSOR,
        IfcSensorTypeEnum_SOUNDSENSOR,
        IfcSensorTypeEnum_TEMPERATURESENSOR,
        IfcSensorTypeEnum_USERDEFINED,
        IfcSensorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcSequenceEnum {
        IfcSequenceEnum_UNSET,
        IfcSequenceEnum_START_START,
        IfcSequenceEnum_START_FINISH,
        IfcSequenceEnum_FINISH_START,
        IfcSequenceEnum_FINISH_FINISH,
        IfcSequenceEnum_NOTDEFINED,
    };

/**
 */
enum IfcServiceLifeFactorTypeEnum {
        IfcServiceLifeFactorTypeEnum_UNSET,
        IfcServiceLifeFactorTypeEnum_A_QUALITYOFCOMPONENTS,
        IfcServiceLifeFactorTypeEnum_B_DESIGNLEVEL,
        IfcServiceLifeFactorTypeEnum_C_WORKEXECUTIONLEVEL,
        IfcServiceLifeFactorTypeEnum_D_INDOORENVIRONMENT,
        IfcServiceLifeFactorTypeEnum_E_OUTDOORENVIRONMENT,
        IfcServiceLifeFactorTypeEnum_F_INUSECONDITIONS,
        IfcServiceLifeFactorTypeEnum_G_MAINTENANCELEVEL,
        IfcServiceLifeFactorTypeEnum_USERDEFINED,
        IfcServiceLifeFactorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcServiceLifeTypeEnum {
        IfcServiceLifeTypeEnum_UNSET,
        IfcServiceLifeTypeEnum_ACTUALSERVICELIFE,
        IfcServiceLifeTypeEnum_EXPECTEDSERVICELIFE,
        IfcServiceLifeTypeEnum_OPTIMISTICREFERENCESERVICELIFE,
        IfcServiceLifeTypeEnum_PESSIMISTICREFERENCESERVICELIFE,
        IfcServiceLifeTypeEnum_REFERENCESERVICELIFE,
    };

/**
 */
enum IfcSlabTypeEnum {
        IfcSlabTypeEnum_UNSET,
        IfcSlabTypeEnum_FLOOR,
        IfcSlabTypeEnum_ROOF,
        IfcSlabTypeEnum_LANDING,
        IfcSlabTypeEnum_BASESLAB,
        IfcSlabTypeEnum_USERDEFINED,
        IfcSlabTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcSoundScaleEnum {
        IfcSoundScaleEnum_UNSET,
        IfcSoundScaleEnum_DBA,
        IfcSoundScaleEnum_DBB,
        IfcSoundScaleEnum_DBC,
        IfcSoundScaleEnum_NC,
        IfcSoundScaleEnum_NR,
        IfcSoundScaleEnum_USERDEFINED,
        IfcSoundScaleEnum_NOTDEFINED,
    };

/**
 */
enum IfcSpaceHeaterTypeEnum {
        IfcSpaceHeaterTypeEnum_UNSET,
        IfcSpaceHeaterTypeEnum_SECTIONALRADIATOR,
        IfcSpaceHeaterTypeEnum_PANELRADIATOR,
        IfcSpaceHeaterTypeEnum_TUBULARRADIATOR,
        IfcSpaceHeaterTypeEnum_CONVECTOR,
        IfcSpaceHeaterTypeEnum_BASEBOARDHEATER,
        IfcSpaceHeaterTypeEnum_FINNEDTUBEUNIT,
        IfcSpaceHeaterTypeEnum_UNITHEATER,
        IfcSpaceHeaterTypeEnum_USERDEFINED,
        IfcSpaceHeaterTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcSpaceTypeEnum {
        IfcSpaceTypeEnum_UNSET,
        IfcSpaceTypeEnum_USERDEFINED,
        IfcSpaceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcStackTerminalTypeEnum {
        IfcStackTerminalTypeEnum_UNSET,
        IfcStackTerminalTypeEnum_BIRDCAGE,
        IfcStackTerminalTypeEnum_COWL,
        IfcStackTerminalTypeEnum_RAINWATERHOPPER,
        IfcStackTerminalTypeEnum_USERDEFINED,
        IfcStackTerminalTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcStairFlightTypeEnum {
        IfcStairFlightTypeEnum_UNSET,
        IfcStairFlightTypeEnum_STRAIGHT,
        IfcStairFlightTypeEnum_WINDER,
        IfcStairFlightTypeEnum_SPIRAL,
        IfcStairFlightTypeEnum_CURVED,
        IfcStairFlightTypeEnum_FREEFORM,
        IfcStairFlightTypeEnum_USERDEFINED,
        IfcStairFlightTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcStairTypeEnum {
        IfcStairTypeEnum_UNSET,
        IfcStairTypeEnum_STRAIGHT_RUN_STAIR,
        IfcStairTypeEnum_TWO_STRAIGHT_RUN_STAIR,
        IfcStairTypeEnum_QUARTER_WINDING_STAIR,
        IfcStairTypeEnum_QUARTER_TURN_STAIR,
        IfcStairTypeEnum_HALF_WINDING_STAIR,
        IfcStairTypeEnum_HALF_TURN_STAIR,
        IfcStairTypeEnum_TWO_QUARTER_WINDING_STAIR,
        IfcStairTypeEnum_TWO_QUARTER_TURN_STAIR,
        IfcStairTypeEnum_THREE_QUARTER_WINDING_STAIR,
        IfcStairTypeEnum_THREE_QUARTER_TURN_STAIR,
        IfcStairTypeEnum_SPIRAL_STAIR,
        IfcStairTypeEnum_DOUBLE_RETURN_STAIR,
        IfcStairTypeEnum_CURVED_RUN_STAIR,
        IfcStairTypeEnum_TWO_CURVED_RUN_STAIR,
        IfcStairTypeEnum_USERDEFINED,
        IfcStairTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcStateEnum {
        IfcStateEnum_UNSET,
        IfcStateEnum_READWRITE,
        IfcStateEnum_READONLY,
        IfcStateEnum_LOCKED,
        IfcStateEnum_READWRITELOCKED,
        IfcStateEnum_READONLYLOCKED,
    };

/**
 */
enum IfcStructuralCurveTypeEnum {
        IfcStructuralCurveTypeEnum_UNSET,
        IfcStructuralCurveTypeEnum_RIGID_JOINED_MEMBER,
        IfcStructuralCurveTypeEnum_PIN_JOINED_MEMBER,
        IfcStructuralCurveTypeEnum_CABLE,
        IfcStructuralCurveTypeEnum_TENSION_MEMBER,
        IfcStructuralCurveTypeEnum_COMPRESSION_MEMBER,
        IfcStructuralCurveTypeEnum_USERDEFINED,
        IfcStructuralCurveTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcStructuralSurfaceTypeEnum {
        IfcStructuralSurfaceTypeEnum_UNSET,
        IfcStructuralSurfaceTypeEnum_BENDING_ELEMENT,
        IfcStructuralSurfaceTypeEnum_MEMBRANE_ELEMENT,
        IfcStructuralSurfaceTypeEnum_SHELL,
        IfcStructuralSurfaceTypeEnum_USERDEFINED,
        IfcStructuralSurfaceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcSurfaceSide {
        IfcSurfaceSide_UNSET,
        IfcSurfaceSide_POSITIVE,
        IfcSurfaceSide_NEGATIVE,
        IfcSurfaceSide_BOTH,
    };

/**
 */
enum IfcSurfaceTextureEnum {
        IfcSurfaceTextureEnum_UNSET,
        IfcSurfaceTextureEnum_BUMP,
        IfcSurfaceTextureEnum_OPACITY,
        IfcSurfaceTextureEnum_REFLECTION,
        IfcSurfaceTextureEnum_SELFILLUMINATION,
        IfcSurfaceTextureEnum_SHININESS,
        IfcSurfaceTextureEnum_SPECULAR,
        IfcSurfaceTextureEnum_TEXTURE,
        IfcSurfaceTextureEnum_TRANSPARENCYMAP,
        IfcSurfaceTextureEnum_NOTDEFINED,
    };

/**
 */
enum IfcSwitchingDeviceTypeEnum {
        IfcSwitchingDeviceTypeEnum_UNSET,
        IfcSwitchingDeviceTypeEnum_CONTACTOR,
        IfcSwitchingDeviceTypeEnum_EMERGENCYSTOP,
        IfcSwitchingDeviceTypeEnum_STARTER,
        IfcSwitchingDeviceTypeEnum_SWITCHDISCONNECTOR,
        IfcSwitchingDeviceTypeEnum_TOGGLESWITCH,
        IfcSwitchingDeviceTypeEnum_USERDEFINED,
        IfcSwitchingDeviceTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTankTypeEnum {
        IfcTankTypeEnum_UNSET,
        IfcTankTypeEnum_PREFORMED,
        IfcTankTypeEnum_SECTIONAL,
        IfcTankTypeEnum_EXPANSION,
        IfcTankTypeEnum_PRESSUREVESSEL,
        IfcTankTypeEnum_USERDEFINED,
        IfcTankTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTendonTypeEnum {
        IfcTendonTypeEnum_UNSET,
        IfcTendonTypeEnum_STRAND,
        IfcTendonTypeEnum_WIRE,
        IfcTendonTypeEnum_BAR,
        IfcTendonTypeEnum_COATED,
        IfcTendonTypeEnum_USERDEFINED,
        IfcTendonTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTextPath {
        IfcTextPath_UNSET,
        IfcTextPath_LEFT,
        IfcTextPath_RIGHT,
        IfcTextPath_UP,
        IfcTextPath_DOWN,
    };

/**
 */
enum IfcThermalLoadSourceEnum {
        IfcThermalLoadSourceEnum_UNSET,
        IfcThermalLoadSourceEnum_PEOPLE,
        IfcThermalLoadSourceEnum_LIGHTING,
        IfcThermalLoadSourceEnum_EQUIPMENT,
        IfcThermalLoadSourceEnum_VENTILATIONINDOORAIR,
        IfcThermalLoadSourceEnum_VENTILATIONOUTSIDEAIR,
        IfcThermalLoadSourceEnum_RECIRCULATEDAIR,
        IfcThermalLoadSourceEnum_EXHAUSTAIR,
        IfcThermalLoadSourceEnum_AIREXCHANGERATE,
        IfcThermalLoadSourceEnum_DRYBULBTEMPERATURE,
        IfcThermalLoadSourceEnum_RELATIVEHUMIDITY,
        IfcThermalLoadSourceEnum_INFILTRATION,
        IfcThermalLoadSourceEnum_USERDEFINED,
        IfcThermalLoadSourceEnum_NOTDEFINED,
    };

/**
 */
enum IfcThermalLoadTypeEnum {
        IfcThermalLoadTypeEnum_UNSET,
        IfcThermalLoadTypeEnum_SENSIBLE,
        IfcThermalLoadTypeEnum_LATENT,
        IfcThermalLoadTypeEnum_RADIANT,
        IfcThermalLoadTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTimeSeriesDataTypeEnum {
        IfcTimeSeriesDataTypeEnum_UNSET,
        IfcTimeSeriesDataTypeEnum_CONTINUOUS,
        IfcTimeSeriesDataTypeEnum_DISCRETE,
        IfcTimeSeriesDataTypeEnum_DISCRETEBINARY,
        IfcTimeSeriesDataTypeEnum_PIECEWISEBINARY,
        IfcTimeSeriesDataTypeEnum_PIECEWISECONSTANT,
        IfcTimeSeriesDataTypeEnum_PIECEWISECONTINUOUS,
        IfcTimeSeriesDataTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTimeSeriesScheduleTypeEnum {
        IfcTimeSeriesScheduleTypeEnum_UNSET,
        IfcTimeSeriesScheduleTypeEnum_ANNUAL,
        IfcTimeSeriesScheduleTypeEnum_MONTHLY,
        IfcTimeSeriesScheduleTypeEnum_WEEKLY,
        IfcTimeSeriesScheduleTypeEnum_DAILY,
        IfcTimeSeriesScheduleTypeEnum_USERDEFINED,
        IfcTimeSeriesScheduleTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTransformerTypeEnum {
        IfcTransformerTypeEnum_UNSET,
        IfcTransformerTypeEnum_CURRENT,
        IfcTransformerTypeEnum_FREQUENCY,
        IfcTransformerTypeEnum_VOLTAGE,
        IfcTransformerTypeEnum_USERDEFINED,
        IfcTransformerTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTransitionCode {
        IfcTransitionCode_UNSET,
        IfcTransitionCode_DISCONTINUOUS,
        IfcTransitionCode_CONTINUOUS,
        IfcTransitionCode_CONTSAMEGRADIENT,
        IfcTransitionCode_CONTSAMEGRADIENTSAMECURVATURE,
    };

/**
 */
enum IfcTransportElementTypeEnum {
        IfcTransportElementTypeEnum_UNSET,
        IfcTransportElementTypeEnum_ELEVATOR,
        IfcTransportElementTypeEnum_ESCALATOR,
        IfcTransportElementTypeEnum_MOVINGWALKWAY,
        IfcTransportElementTypeEnum_USERDEFINED,
        IfcTransportElementTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcTrimmingPreference {
        IfcTrimmingPreference_UNSET,
        IfcTrimmingPreference_CARTESIAN,
        IfcTrimmingPreference_PARAMETER,
        IfcTrimmingPreference_UNSPECIFIED,
    };

/**
 */
enum IfcTubeBundleTypeEnum {
        IfcTubeBundleTypeEnum_UNSET,
        IfcTubeBundleTypeEnum_FINNED,
        IfcTubeBundleTypeEnum_USERDEFINED,
        IfcTubeBundleTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcUnitEnum {
        IfcUnitEnum_UNSET,
        IfcUnitEnum_ABSORBEDDOSEUNIT,
        IfcUnitEnum_AMOUNTOFSUBSTANCEUNIT,
        IfcUnitEnum_AREAUNIT,
        IfcUnitEnum_DOSEEQUIVALENTUNIT,
        IfcUnitEnum_ELECTRICCAPACITANCEUNIT,
        IfcUnitEnum_ELECTRICCHARGEUNIT,
        IfcUnitEnum_ELECTRICCONDUCTANCEUNIT,
        IfcUnitEnum_ELECTRICCURRENTUNIT,
        IfcUnitEnum_ELECTRICRESISTANCEUNIT,
        IfcUnitEnum_ELECTRICVOLTAGEUNIT,
        IfcUnitEnum_ENERGYUNIT,
        IfcUnitEnum_FORCEUNIT,
        IfcUnitEnum_FREQUENCYUNIT,
        IfcUnitEnum_ILLUMINANCEUNIT,
        IfcUnitEnum_INDUCTANCEUNIT,
        IfcUnitEnum_LENGTHUNIT,
        IfcUnitEnum_LUMINOUSFLUXUNIT,
        IfcUnitEnum_LUMINOUSINTENSITYUNIT,
        IfcUnitEnum_MAGNETICFLUXDENSITYUNIT,
        IfcUnitEnum_MAGNETICFLUXUNIT,
        IfcUnitEnum_MASSUNIT,
        IfcUnitEnum_PLANEANGLEUNIT,
        IfcUnitEnum_POWERUNIT,
        IfcUnitEnum_PRESSUREUNIT,
        IfcUnitEnum_RADIOACTIVITYUNIT,
        IfcUnitEnum_SOLIDANGLEUNIT,
        IfcUnitEnum_THERMODYNAMICTEMPERATUREUNIT,
        IfcUnitEnum_TIMEUNIT,
        IfcUnitEnum_VOLUMEUNIT,
        IfcUnitEnum_USERDEFINED,
    };

/**
 */
enum IfcUnitaryEquipmentTypeEnum {
        IfcUnitaryEquipmentTypeEnum_UNSET,
        IfcUnitaryEquipmentTypeEnum_AIRHANDLER,
        IfcUnitaryEquipmentTypeEnum_AIRCONDITIONINGUNIT,
        IfcUnitaryEquipmentTypeEnum_SPLITSYSTEM,
        IfcUnitaryEquipmentTypeEnum_ROOFTOPUNIT,
        IfcUnitaryEquipmentTypeEnum_USERDEFINED,
        IfcUnitaryEquipmentTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcValveTypeEnum {
        IfcValveTypeEnum_UNSET,
        IfcValveTypeEnum_AIRRELEASE,
        IfcValveTypeEnum_ANTIVACUUM,
        IfcValveTypeEnum_CHANGEOVER,
        IfcValveTypeEnum_CHECK,
        IfcValveTypeEnum_COMMISSIONING,
        IfcValveTypeEnum_DIVERTING,
        IfcValveTypeEnum_DRAWOFFCOCK,
        IfcValveTypeEnum_DOUBLECHECK,
        IfcValveTypeEnum_DOUBLEREGULATING,
        IfcValveTypeEnum_FAUCET,
        IfcValveTypeEnum_FLUSHING,
        IfcValveTypeEnum_GASCOCK,
        IfcValveTypeEnum_GASTAP,
        IfcValveTypeEnum_ISOLATING,
        IfcValveTypeEnum_MIXING,
        IfcValveTypeEnum_PRESSUREREDUCING,
        IfcValveTypeEnum_PRESSURERELIEF,
        IfcValveTypeEnum_REGULATING,
        IfcValveTypeEnum_SAFETYCUTOFF,
        IfcValveTypeEnum_STEAMTRAP,
        IfcValveTypeEnum_STOPCOCK,
        IfcValveTypeEnum_USERDEFINED,
        IfcValveTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcVibrationIsolatorTypeEnum {
        IfcVibrationIsolatorTypeEnum_UNSET,
        IfcVibrationIsolatorTypeEnum_COMPRESSION,
        IfcVibrationIsolatorTypeEnum_SPRING,
        IfcVibrationIsolatorTypeEnum_USERDEFINED,
        IfcVibrationIsolatorTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcWallTypeEnum {
        IfcWallTypeEnum_UNSET,
        IfcWallTypeEnum_STANDARD,
        IfcWallTypeEnum_POLYGONAL,
        IfcWallTypeEnum_SHEAR,
        IfcWallTypeEnum_ELEMENTEDWALL,
        IfcWallTypeEnum_PLUMBINGWALL,
        IfcWallTypeEnum_USERDEFINED,
        IfcWallTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcWasteTerminalTypeEnum {
        IfcWasteTerminalTypeEnum_UNSET,
        IfcWasteTerminalTypeEnum_FLOORTRAP,
        IfcWasteTerminalTypeEnum_FLOORWASTE,
        IfcWasteTerminalTypeEnum_GULLYSUMP,
        IfcWasteTerminalTypeEnum_GULLYTRAP,
        IfcWasteTerminalTypeEnum_GREASEINTERCEPTOR,
        IfcWasteTerminalTypeEnum_OILINTERCEPTOR,
        IfcWasteTerminalTypeEnum_PETROLINTERCEPTOR,
        IfcWasteTerminalTypeEnum_ROOFDRAIN,
        IfcWasteTerminalTypeEnum_WASTEDISPOSALUNIT,
        IfcWasteTerminalTypeEnum_WASTETRAP,
        IfcWasteTerminalTypeEnum_USERDEFINED,
        IfcWasteTerminalTypeEnum_NOTDEFINED,
    };

/**
 */
enum IfcWindowPanelOperationEnum {
        IfcWindowPanelOperationEnum_UNSET,
        IfcWindowPanelOperationEnum_SIDEHUNGRIGHTHAND,
        IfcWindowPanelOperationEnum_SIDEHUNGLEFTHAND,
        IfcWindowPanelOperationEnum_TILTANDTURNRIGHTHAND,
        IfcWindowPanelOperationEnum_TILTANDTURNLEFTHAND,
        IfcWindowPanelOperationEnum_TOPHUNG,
        IfcWindowPanelOperationEnum_BOTTOMHUNG,
        IfcWindowPanelOperationEnum_PIVOTHORIZONTAL,
        IfcWindowPanelOperationEnum_PIVOTVERTICAL,
        IfcWindowPanelOperationEnum_SLIDINGHORIZONTAL,
        IfcWindowPanelOperationEnum_SLIDINGVERTICAL,
        IfcWindowPanelOperationEnum_REMOVABLECASEMENT,
        IfcWindowPanelOperationEnum_FIXEDCASEMENT,
        IfcWindowPanelOperationEnum_OTHEROPERATION,
        IfcWindowPanelOperationEnum_NOTDEFINED,
    };

/**
 */
enum IfcWindowPanelPositionEnum {
        IfcWindowPanelPositionEnum_UNSET,
        IfcWindowPanelPositionEnum_LEFT,
        IfcWindowPanelPositionEnum_MIDDLE,
        IfcWindowPanelPositionEnum_RIGHT,
        IfcWindowPanelPositionEnum_BOTTOM,
        IfcWindowPanelPositionEnum_TOP,
        IfcWindowPanelPositionEnum_NOTDEFINED,
    };

/**
 */
enum IfcWindowStyleConstructionEnum {
        IfcWindowStyleConstructionEnum_UNSET,
        IfcWindowStyleConstructionEnum_ALUMINIUM,
        IfcWindowStyleConstructionEnum_HIGH_GRADE_STEEL,
        IfcWindowStyleConstructionEnum_STEEL,
        IfcWindowStyleConstructionEnum_WOOD,
        IfcWindowStyleConstructionEnum_ALUMINIUM_WOOD,
        IfcWindowStyleConstructionEnum_PLASTIC,
        IfcWindowStyleConstructionEnum_OTHER_CONSTRUCTION,
        IfcWindowStyleConstructionEnum_NOTDEFINED,
    };

/**
 */
enum IfcWindowStyleOperationEnum {
        IfcWindowStyleOperationEnum_UNSET,
        IfcWindowStyleOperationEnum_SINGLE_PANEL,
        IfcWindowStyleOperationEnum_DOUBLE_PANEL_VERTICAL,
        IfcWindowStyleOperationEnum_DOUBLE_PANEL_HORIZONTAL,
        IfcWindowStyleOperationEnum_TRIPLE_PANEL_VERTICAL,
        IfcWindowStyleOperationEnum_TRIPLE_PANEL_BOTTOM,
        IfcWindowStyleOperationEnum_TRIPLE_PANEL_TOP,
        IfcWindowStyleOperationEnum_TRIPLE_PANEL_LEFT,
        IfcWindowStyleOperationEnum_TRIPLE_PANEL_RIGHT,
        IfcWindowStyleOperationEnum_TRIPLE_PANEL_HORIZONTAL,
        IfcWindowStyleOperationEnum_USERDEFINED,
        IfcWindowStyleOperationEnum_NOTDEFINED,
    };

/**
 */
enum IfcWorkControlTypeEnum {
        IfcWorkControlTypeEnum_UNSET,
        IfcWorkControlTypeEnum_ACTUAL,
        IfcWorkControlTypeEnum_BASELINE,
        IfcWorkControlTypeEnum_PLANNED,
        IfcWorkControlTypeEnum_USERDEFINED,
        IfcWorkControlTypeEnum_NOTDEFINED,
    };

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcClassificationNotationFacet >, 1 > Set_IfcClassificationNotationFacet_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcPresentationStyleSelect >, 1 > Set_IfcPresentationStyleSelect_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcVirtualGridIntersection > > Inverse_Set_IfcVirtualGridIntersection_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcMaterial >, 1 > List_IfcMaterial_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcStructuralLoad >, 1 > List_IfcStructuralLoad_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcStyledItem >, 0, 1 > Inverse_Set_IfcStyledItem_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcPhysicalComplexQuantity >, 0, 1 > Inverse_Set_IfcPhysicalComplexQuantity_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > Set_IfcPresentationStyleSelect_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcElement >, 1 > Set_IfcElement_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcOrganization > > Inverse_Set_IfcOrganization_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsPortToElement > > Inverse_Set_IfcRelConnectsPortToElement_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcStructuralLoad >, 2 > List_IfcStructuralLoad_2_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcLocalPlacement > > Inverse_Set_IfcLocalPlacement_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsElements > > Inverse_Set_IfcRelConnectsElements_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcReinforcementBarProperties >, 1 > Set_IfcReinforcementBarProperties_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcRepresentationContext >, 1 > Set_IfcRepresentationContext_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcMaterialClassificationRelationship >, 0, 1 > Inverse_Set_IfcMaterialClassificationRelationship_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcTimeSeriesReferenceRelationship >, 0, 1 > Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcVertexBasedTextureMap >, 1 > Set_IfcVertexBasedTextureMap_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcDraughtingCalloutRelationship > > Inverse_Set_IfcDraughtingCalloutRelationship_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcCurveStyleFontPattern >, 1 > List_IfcCurveStyleFontPattern_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcProduct >, 1, 1 > Inverse_Set_IfcProduct_1_1;

    /**
    */
    typedef Step::Set< Step::ObsPtr< IfcPropertySet > > Inverse_Set_IfcPropertySet_0_n;

    /**
      */
    typedef Step::Set< Step::ObsPtr< IfcProduct >, 1 > Inverse_Set_IfcProduct_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcPropertySetDefinition >, 1 > Set_IfcPropertySetDefinition_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember >, 1 > Inverse_Set_IfcRelConnectsStructuralMember_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcStructuralLoad >, 3 > List_IfcStructuralLoad_3_n;

    /**
     */
    typedef Step::Array< Step::Real, 1, 2 > Array_Real_1_2;

    /**
     */
    typedef Array_Real_1_2 IfcComplexNumber;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcIrregularTimeSeriesValue >, 1 > List_IfcIrregularTimeSeriesValue_1_n;

    /**
     */
    typedef Step::List< Step::Real, 2 > List_Real_2_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcStructuralAnalysisModel >, 0, 1 > Inverse_Set_IfcStructuralAnalysisModel_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcGrid >, 0, 1 > Inverse_Set_IfcGrid_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcDraughtingCalloutElement >, 1 > Set_IfcDraughtingCalloutElement_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcShapeModel >, 1 > List_IfcShapeModel_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssignsToActor > > Inverse_Set_IfcRelAssignsToActor_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcGeometricSetSelect >, 1 > Set_IfcGeometricSetSelect_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcTableRow >, 1 > List_IfcTableRow_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcDocumentSelect >, 1 > Set_IfcDocumentSelect_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcActorSelect >, 1 > Set_IfcActorSelect_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssignsToControl > > Inverse_Set_IfcRelAssignsToControl_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsStructuralMember > > Inverse_Set_IfcRelConnectsStructuralMember_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcConnectedFaceSet >, 1 > Set_IfcConnectedFaceSet_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcCovering >, 1 > Set_IfcCovering_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelDecomposes > > Inverse_Set_IfcRelDecomposes_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcProfileDef >, 2 > List_IfcProfileDef_2_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcReferencesValueDocument > > Inverse_Set_IfcReferencesValueDocument_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelInteractionRequirements > > Inverse_Set_IfcRelInteractionRequirements_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcMappedItem > > Inverse_Set_IfcMappedItem_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcProduct >, 1 > Set_IfcProduct_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcConstraintRelationship > > Inverse_Set_IfcConstraintRelationship_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcCartesianPoint >, 3 > List_IfcCartesianPoint_3_n;

    /**
     */
    typedef Step::List< Step::Real, 2, 3 > List_Real_2_3;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcProductRepresentation >, 0, 1 > Inverse_Set_IfcProductRepresentation_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelServicesBuildings >, 0, 1 > Inverse_Set_IfcRelServicesBuildings_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsStructuralActivity > > Inverse_Set_IfcRelConnectsStructuralActivity_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssignsToProcess > > Inverse_Set_IfcRelAssignsToProcess_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcLibraryInformation >, 0, 1 > Inverse_Set_IfcLibraryInformation_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcDocumentReference >, 1 > Set_IfcDocumentReference_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcOrganizationRelationship > > Inverse_Set_IfcOrganizationRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcApprovalActorRelationship > > Inverse_Set_IfcApprovalActorRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcClassificationItem >, 1 > Set_IfcClassificationItem_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcRepresentation >, 1 > List_IfcRepresentation_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcGridAxis >, 1 > List_IfcGridAxis_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcOrganization >, 1 > Set_IfcOrganization_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcRelaxation >, 1 > Set_IfcRelaxation_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelFlowControlElements >, 0, 1 > Inverse_Set_IfcRelFlowControlElements_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcAnnotationSurface >, 1, 1 > Inverse_Set_IfcAnnotationSurface_1_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcClassificationItem > > Inverse_Set_IfcClassificationItem_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcSectionReinforcementProperties >, 1 > List_IfcSectionReinforcementProperties_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcProfileDef >, 2 > Set_IfcProfileDef_2_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelCoversBldgElements > > Inverse_Set_IfcRelCoversBldgElements_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcLightDistributionData >, 1 > List_IfcLightDistributionData_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcOrientedEdge >, 1 > List_IfcOrientedEdge_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcCurve > > Set_IfcCurve_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure >, 0, 1 > Inverse_Set_IfcRelContainedInSpatialStructure_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcPresentationStyleAssignment >, 1 > Set_IfcPresentationStyleAssignment_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsPorts >, 0, 1 > Inverse_Set_IfcRelConnectsPorts_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelProjectsElement > > Inverse_Set_IfcRelProjectsElement_0_n;

    /**
     */
    typedef Step::List< Step::Integer, 3, 4 > List_Integer_3_4;

    /**
     */
    typedef List_Integer_3_4 IfcCompoundPlaneAngleMeasure;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssociates > > Inverse_Set_IfcRelAssociates_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcFillStyleSelect >, 1 > Set_IfcFillStyleSelect_1_n;

    /**
     */
    typedef Step::Array< Step::RefPtr< IfcCartesianPoint >, 0, 255 > Array_IfcCartesianPoint_0_255;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcClassificationItemRelationship >, 0, 1 > Inverse_Set_IfcClassificationItemRelationship_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelVoidsElement > > Inverse_Set_IfcRelVoidsElement_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcMaterialDefinitionRepresentation >, 0, 1 > Inverse_Set_IfcMaterialDefinitionRepresentation_0_1;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcAxis2Placement3D >, 2 > List_IfcAxis2Placement3D_2_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcDocumentInformation >, 0, 1 > Inverse_Set_IfcDocumentInformation_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcPerson > > Inverse_Set_IfcPerson_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcPropertyConstraintRelationship > > Inverse_Set_IfcPropertyConstraintRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelDefinesByType >, 0, 1 > Inverse_Set_IfcRelDefinesByType_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelCoversBldgElements >, 0, 1 > Inverse_Set_IfcRelCoversBldgElements_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsWithRealizingElements > > Inverse_Set_IfcRelConnectsWithRealizingElements_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcStructuralResultGroup >, 1 > Set_IfcStructuralResultGroup_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcConstraint >, 1 > List_IfcConstraint_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelCoversSpaces > > Inverse_Set_IfcRelCoversSpaces_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcSurfaceTexture >, 1 > List_IfcSurfaceTexture_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcConstraintAggregationRelationship > > Inverse_Set_IfcConstraintAggregationRelationship_0_n;

    /**
     */
    typedef Step::List< Step::Binary< 32 >, 1 > List_32_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRepresentationMap >, 0, 1 > Inverse_Set_IfcRepresentationMap_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcStructuralLoadGroup >, 1 > Set_IfcStructuralLoadGroup_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcValue >, 1 > List_IfcValue_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcAppliedValue >, 1 > Set_IfcAppliedValue_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcSpatialStructureElement >, 1 > Set_IfcSpatialStructureElement_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelDefinesByProperties >, 0, 1 > Inverse_Set_IfcRelDefinesByProperties_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > Inverse_Set_IfcDocumentInformationRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelDecomposes >, 0, 1 > Inverse_Set_IfcRelDecomposes_0_1;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcSimpleValue >, 1 > List_IfcSimpleValue_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcUnit >, 1 > Set_IfcUnit_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelDefines > > Inverse_Set_IfcRelDefines_0_n;

    /**
     */
    typedef Step::Array< Step::Real, 0, 255 > Array_Real_0_255;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcTextureVertex >, 3 > List_IfcTextureVertex_3_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcFillAreaStyleTileShapeSelect >, 1 > Set_IfcFillAreaStyleTileShapeSelect_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcSurfaceStyleElementSelect >, 1, 5 > Set_IfcSurfaceStyleElementSelect_1_5;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcTypeObject >, 0, 1 > Inverse_Set_IfcTypeObject_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelSequence > > Inverse_Set_IfcRelSequence_0_n;

    /**
     */
    typedef Step::List< Step::Integer > List_Integer_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcCartesianPoint >, 2 > List_IfcCartesianPoint_2_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcTimeSeriesValue >, 1 > List_IfcTimeSeriesValue_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > Inverse_Set_IfcRelContainedInSpatialStructure_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcObject >, 1 > Set_IfcObject_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcPropertyDependencyRelationship > > Inverse_Set_IfcPropertyDependencyRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcClassificationNotationSelect >, 1 > Set_IfcClassificationNotationSelect_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcPhysicalQuantity >, 1 > Set_IfcPhysicalQuantity_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcConstraint >, 1 > Set_IfcConstraint_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcProperty >, 1 > Set_IfcProperty_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelCoversSpaces >, 0, 1 > Inverse_Set_IfcRelCoversSpaces_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcLibraryReference >, 1 > Set_IfcLibraryReference_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcPresentationLayerAssignment > > Inverse_Set_IfcPresentationLayerAssignment_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcStructuralResultGroup >, 0, 1 > Inverse_Set_IfcStructuralResultGroup_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcFaceBound >, 1 > Set_IfcFaceBound_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcRelAssignsToProjectOrder >, 1 > List_IfcRelAssignsToProjectOrder_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > Inverse_Set_IfcRelReferencedInSpatialStructure_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcMaterialLayer >, 1 > List_IfcMaterialLayer_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcPersonAndOrganization > > Inverse_Set_IfcPersonAndOrganization_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcAppliedValueRelationship > > Inverse_Set_IfcAppliedValueRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcClosedShell >, 1 > Set_IfcClosedShell_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcShapeAspect > > Inverse_Set_IfcShapeAspect_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcDistributionControlElement >, 1 > Set_IfcDistributionControlElement_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcDerivedUnitElement >, 1 > Set_IfcDerivedUnitElement_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcSoundValue >, 1, 8 > List_IfcSoundValue_1_8;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRepresentation > > Inverse_Set_IfcRepresentation_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcObjectDefinition >, 1 > Set_IfcObjectDefinition_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcConstraintClassificationRelationship > > Inverse_Set_IfcConstraintClassificationRelationship_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > Inverse_Set_IfcRelConnectsStructuralElement_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcCompositeCurveSegment >, 1 > List_IfcCompositeCurveSegment_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > Inverse_Set_IfcRelSpaceBoundary_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcActorRole >, 1 > List_IfcActorRole_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcAddress >, 1 > List_IfcAddress_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcDocumentInformation >, 1 > Set_IfcDocumentInformation_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcCompositeCurve >, 1 > Inverse_Set_IfcCompositeCurve_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcFace >, 1 > Set_IfcFace_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcCurve >, 1 > Set_IfcCurve_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssignsToResource > > Inverse_Set_IfcRelAssignsToResource_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcApprovalRelationship > > Inverse_Set_IfcApprovalRelationship_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcRepresentationMap >, 1 > List_IfcRepresentationMap_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcTrimmingSelect >, 1, 2 > Set_IfcTrimmingSelect_1_2;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelFillsElement >, 0, 1 > Inverse_Set_IfcRelFillsElement_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship >, 0, 1 > Inverse_Set_IfcDocumentInformationRelationship_0_1;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcLayeredItem >, 1 > Set_IfcLayeredItem_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcStructuralAnalysisModel > > Inverse_Set_IfcStructuralAnalysisModel_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcDirection >, 2, 2 > List_IfcDirection_2_2;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcStructuralAction > > Inverse_Set_IfcStructuralAction_0_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcDirection >, 3, 3 > List_IfcDirection_3_3;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcGridAxis >, 2, 2 > List_IfcGridAxis_2_2;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcRepresentationItem >, 1 > Set_IfcRepresentationItem_1_n;

    /**
     */
    typedef Step::List< Step::RefPtr< IfcDateTimeSelect >, 1 > List_IfcDateTimeSelect_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcRoot >, 1 > Set_IfcRoot_1_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssignsToProduct > > Inverse_Set_IfcRelAssignsToProduct_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelAssigns > > Inverse_Set_IfcRelAssigns_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcTerminatorSymbol >, 0, 2 > Inverse_Set_IfcTerminatorSymbol_0_2;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelServicesBuildings > > Inverse_Set_IfcRelServicesBuildings_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcComplexProperty >, 0, 1 > Inverse_Set_IfcComplexProperty_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcGeometricRepresentationSubContext > > Inverse_Set_IfcGeometricRepresentationSubContext_0_n;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcShapeAspect >, 0, 1 > Inverse_Set_IfcShapeAspect_0_1;

    /**
     */
    typedef Step::Set< Step::ObsPtr< IfcRelFillsElement > > Inverse_Set_IfcRelFillsElement_0_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcShell >, 1 > Set_IfcShell_1_n;

    /**
     */
    typedef Step::Set< Step::RefPtr< IfcPerson >, 1 > Set_IfcPerson_1_n;

}

#endif // IFC2X3_DEFINEDTYPES_H
