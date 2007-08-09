/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcValue.h>

#include <Step/BaseObject.h>
#include <ifc2x3/Visitor.h>

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

bool IfcValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcValue(this);
}

bool IfcValue::init() {
  return false;
}

const char *IfcValue::type() {
  return "IfcValue";
}

Step::ClassType IfcValue::getClassType() {
  return IfcValue::s_type;
}

Step::ClassType IfcValue::getType() const {
  return IfcValue::s_type;
}

bool IfcValue::isOfType(Step::ClassType t) {
  return IfcValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcValue::currentTypeName() {
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

IfcValue::IfcValue_select IfcValue::currentType() {
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
    }
  m_type = UNSET;
}

IfcVolumeMeasure IfcValue::getIfcVolumeMeasure() {
  return m_IfcValue_union.m_IfcVolumeMeasure;
}

void IfcValue::setIfcVolumeMeasure(IfcVolumeMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcVolumeMeasure = value;
  m_type = IFCVOLUMEMEASURE;
}

IfcTimeMeasure IfcValue::getIfcTimeMeasure() {
  return m_IfcValue_union.m_IfcTimeMeasure;
}

void IfcValue::setIfcTimeMeasure(IfcTimeMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcTimeMeasure = value;
  m_type = IFCTIMEMEASURE;
}

IfcThermodynamicTemperatureMeasure IfcValue::getIfcThermodynamicTemperatureMeasure() {
  return m_IfcValue_union.m_IfcThermodynamicTemperatureMeasure;
}

void IfcValue::setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcThermodynamicTemperatureMeasure = value;
  m_type = IFCTHERMODYNAMICTEMPERATUREMEASURE;
}

IfcSolidAngleMeasure IfcValue::getIfcSolidAngleMeasure() {
  return m_IfcValue_union.m_IfcSolidAngleMeasure;
}

void IfcValue::setIfcSolidAngleMeasure(IfcSolidAngleMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcSolidAngleMeasure = value;
  m_type = IFCSOLIDANGLEMEASURE;
}

IfcPositiveRatioMeasure IfcValue::getIfcPositiveRatioMeasure() {
  return m_IfcValue_union.m_IfcPositiveRatioMeasure;
}

void IfcValue::setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPositiveRatioMeasure = value;
  m_type = IFCPOSITIVERATIOMEASURE;
}

IfcRatioMeasure IfcValue::getIfcRatioMeasure() {
  return m_IfcValue_union.m_IfcRatioMeasure;
}

void IfcValue::setIfcRatioMeasure(IfcRatioMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcRatioMeasure = value;
  m_type = IFCRATIOMEASURE;
}

IfcPositivePlaneAngleMeasure IfcValue::getIfcPositivePlaneAngleMeasure() {
  return m_IfcValue_union.m_IfcPositivePlaneAngleMeasure;
}

void IfcValue::setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPositivePlaneAngleMeasure = value;
  m_type = IFCPOSITIVEPLANEANGLEMEASURE;
}

IfcPlaneAngleMeasure IfcValue::getIfcPlaneAngleMeasure() {
  return m_IfcValue_union.m_IfcPlaneAngleMeasure;
}

void IfcValue::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPlaneAngleMeasure = value;
  m_type = IFCPLANEANGLEMEASURE;
}

IfcParameterValue IfcValue::getIfcParameterValue() {
  return m_IfcValue_union.m_IfcParameterValue;
}

void IfcValue::setIfcParameterValue(IfcParameterValue value) {
  deleteUnion();
  m_IfcValue_union.m_IfcParameterValue = value;
  m_type = IFCPARAMETERVALUE;
}

IfcNumericMeasure IfcValue::getIfcNumericMeasure() {
  return m_IfcValue_union.m_IfcNumericMeasure;
}

void IfcValue::setIfcNumericMeasure(IfcNumericMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcNumericMeasure = value;
  m_type = IFCNUMERICMEASURE;
}

IfcMassMeasure IfcValue::getIfcMassMeasure() {
  return m_IfcValue_union.m_IfcMassMeasure;
}

void IfcValue::setIfcMassMeasure(IfcMassMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMassMeasure = value;
  m_type = IFCMASSMEASURE;
}

IfcPositiveLengthMeasure IfcValue::getIfcPositiveLengthMeasure() {
  return m_IfcValue_union.m_IfcPositiveLengthMeasure;
}

void IfcValue::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPositiveLengthMeasure = value;
  m_type = IFCPOSITIVELENGTHMEASURE;
}

IfcLengthMeasure IfcValue::getIfcLengthMeasure() {
  return m_IfcValue_union.m_IfcLengthMeasure;
}

void IfcValue::setIfcLengthMeasure(IfcLengthMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLengthMeasure = value;
  m_type = IFCLENGTHMEASURE;
}

IfcElectricCurrentMeasure IfcValue::getIfcElectricCurrentMeasure() {
  return m_IfcValue_union.m_IfcElectricCurrentMeasure;
}

void IfcValue::setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcElectricCurrentMeasure = value;
  m_type = IFCELECTRICCURRENTMEASURE;
}

IfcDescriptiveMeasure IfcValue::getIfcDescriptiveMeasure() {
  return *m_IfcValue_union.m_IfcDescriptiveMeasure;
}

void IfcValue::setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value) {
  deleteUnion();
  m_IfcValue_union.m_IfcDescriptiveMeasure = new IfcDescriptiveMeasure(value);
  m_type = IFCDESCRIPTIVEMEASURE;
}

IfcCountMeasure IfcValue::getIfcCountMeasure() {
  return m_IfcValue_union.m_IfcCountMeasure;
}

void IfcValue::setIfcCountMeasure(IfcCountMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcCountMeasure = value;
  m_type = IFCCOUNTMEASURE;
}

IfcContextDependentMeasure IfcValue::getIfcContextDependentMeasure() {
  return m_IfcValue_union.m_IfcContextDependentMeasure;
}

void IfcValue::setIfcContextDependentMeasure(IfcContextDependentMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcContextDependentMeasure = value;
  m_type = IFCCONTEXTDEPENDENTMEASURE;
}

IfcAreaMeasure IfcValue::getIfcAreaMeasure() {
  return m_IfcValue_union.m_IfcAreaMeasure;
}

void IfcValue::setIfcAreaMeasure(IfcAreaMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcAreaMeasure = value;
  m_type = IFCAREAMEASURE;
}

IfcAmountOfSubstanceMeasure IfcValue::getIfcAmountOfSubstanceMeasure() {
  return m_IfcValue_union.m_IfcAmountOfSubstanceMeasure;
}

void IfcValue::setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcAmountOfSubstanceMeasure = value;
  m_type = IFCAMOUNTOFSUBSTANCEMEASURE;
}

IfcLuminousIntensityMeasure IfcValue::getIfcLuminousIntensityMeasure() {
  return m_IfcValue_union.m_IfcLuminousIntensityMeasure;
}

void IfcValue::setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLuminousIntensityMeasure = value;
  m_type = IFCLUMINOUSINTENSITYMEASURE;
}

IfcNormalisedRatioMeasure IfcValue::getIfcNormalisedRatioMeasure() {
  return m_IfcValue_union.m_IfcNormalisedRatioMeasure;
}

void IfcValue::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcNormalisedRatioMeasure = value;
  m_type = IFCNORMALISEDRATIOMEASURE;
}

IfcComplexNumber IfcValue::getIfcComplexNumber() {
  return *m_IfcValue_union.m_IfcComplexNumber;
}

void IfcValue::setIfcComplexNumber(const IfcComplexNumber &value) {
  deleteUnion();
  m_IfcValue_union.m_IfcComplexNumber = new IfcComplexNumber(value);
  m_type = IFCCOMPLEXNUMBER;
}

IfcInteger IfcValue::getIfcInteger() {
  return m_IfcValue_union.m_IfcInteger;
}

void IfcValue::setIfcInteger(IfcInteger value) {
  deleteUnion();
  m_IfcValue_union.m_IfcInteger = value;
  m_type = IFCINTEGER;
}

IfcReal IfcValue::getIfcReal() {
  return m_IfcValue_union.m_IfcReal;
}

void IfcValue::setIfcReal(IfcReal value) {
  deleteUnion();
  m_IfcValue_union.m_IfcReal = value;
  m_type = IFCREAL;
}

IfcBoolean IfcValue::getIfcBoolean() {
  return m_IfcValue_union.m_IfcBoolean;
}

void IfcValue::setIfcBoolean(IfcBoolean value) {
  deleteUnion();
  m_IfcValue_union.m_IfcBoolean = value;
  m_type = IFCBOOLEAN;
}

IfcIdentifier IfcValue::getIfcIdentifier() {
  return *m_IfcValue_union.m_IfcIdentifier;
}

void IfcValue::setIfcIdentifier(const IfcIdentifier &value) {
  deleteUnion();
  m_IfcValue_union.m_IfcIdentifier = new IfcIdentifier(value);
  m_type = IFCIDENTIFIER;
}

IfcText IfcValue::getIfcText() {
  return *m_IfcValue_union.m_IfcText;
}

void IfcValue::setIfcText(const IfcText &value) {
  deleteUnion();
  m_IfcValue_union.m_IfcText = new IfcText(value);
  m_type = IFCTEXT;
}

IfcLabel IfcValue::getIfcLabel() {
  return *m_IfcValue_union.m_IfcLabel;
}

void IfcValue::setIfcLabel(const IfcLabel &value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLabel = new IfcLabel(value);
  m_type = IFCLABEL;
}

IfcLogical IfcValue::getIfcLogical() {
  return m_IfcValue_union.m_IfcLogical;
}

void IfcValue::setIfcLogical(IfcLogical value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLogical = value;
  m_type = IFCLOGICAL;
}

IfcVolumetricFlowRateMeasure IfcValue::getIfcVolumetricFlowRateMeasure() {
  return m_IfcValue_union.m_IfcVolumetricFlowRateMeasure;
}

void IfcValue::setIfcVolumetricFlowRateMeasure(IfcVolumetricFlowRateMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcVolumetricFlowRateMeasure = value;
  m_type = IFCVOLUMETRICFLOWRATEMEASURE;
}

IfcTimeStamp IfcValue::getIfcTimeStamp() {
  return m_IfcValue_union.m_IfcTimeStamp;
}

void IfcValue::setIfcTimeStamp(IfcTimeStamp value) {
  deleteUnion();
  m_IfcValue_union.m_IfcTimeStamp = value;
  m_type = IFCTIMESTAMP;
}

IfcThermalTransmittanceMeasure IfcValue::getIfcThermalTransmittanceMeasure() {
  return m_IfcValue_union.m_IfcThermalTransmittanceMeasure;
}

void IfcValue::setIfcThermalTransmittanceMeasure(IfcThermalTransmittanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcThermalTransmittanceMeasure = value;
  m_type = IFCTHERMALTRANSMITTANCEMEASURE;
}

IfcThermalResistanceMeasure IfcValue::getIfcThermalResistanceMeasure() {
  return m_IfcValue_union.m_IfcThermalResistanceMeasure;
}

void IfcValue::setIfcThermalResistanceMeasure(IfcThermalResistanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcThermalResistanceMeasure = value;
  m_type = IFCTHERMALRESISTANCEMEASURE;
}

IfcThermalAdmittanceMeasure IfcValue::getIfcThermalAdmittanceMeasure() {
  return m_IfcValue_union.m_IfcThermalAdmittanceMeasure;
}

void IfcValue::setIfcThermalAdmittanceMeasure(IfcThermalAdmittanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcThermalAdmittanceMeasure = value;
  m_type = IFCTHERMALADMITTANCEMEASURE;
}

IfcPressureMeasure IfcValue::getIfcPressureMeasure() {
  return m_IfcValue_union.m_IfcPressureMeasure;
}

void IfcValue::setIfcPressureMeasure(IfcPressureMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPressureMeasure = value;
  m_type = IFCPRESSUREMEASURE;
}

IfcPowerMeasure IfcValue::getIfcPowerMeasure() {
  return m_IfcValue_union.m_IfcPowerMeasure;
}

void IfcValue::setIfcPowerMeasure(IfcPowerMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPowerMeasure = value;
  m_type = IFCPOWERMEASURE;
}

IfcMassFlowRateMeasure IfcValue::getIfcMassFlowRateMeasure() {
  return m_IfcValue_union.m_IfcMassFlowRateMeasure;
}

void IfcValue::setIfcMassFlowRateMeasure(IfcMassFlowRateMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMassFlowRateMeasure = value;
  m_type = IFCMASSFLOWRATEMEASURE;
}

IfcMassDensityMeasure IfcValue::getIfcMassDensityMeasure() {
  return m_IfcValue_union.m_IfcMassDensityMeasure;
}

void IfcValue::setIfcMassDensityMeasure(IfcMassDensityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMassDensityMeasure = value;
  m_type = IFCMASSDENSITYMEASURE;
}

IfcLinearVelocityMeasure IfcValue::getIfcLinearVelocityMeasure() {
  return m_IfcValue_union.m_IfcLinearVelocityMeasure;
}

void IfcValue::setIfcLinearVelocityMeasure(IfcLinearVelocityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLinearVelocityMeasure = value;
  m_type = IFCLINEARVELOCITYMEASURE;
}

IfcKinematicViscosityMeasure IfcValue::getIfcKinematicViscosityMeasure() {
  return m_IfcValue_union.m_IfcKinematicViscosityMeasure;
}

void IfcValue::setIfcKinematicViscosityMeasure(IfcKinematicViscosityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcKinematicViscosityMeasure = value;
  m_type = IFCKINEMATICVISCOSITYMEASURE;
}

IfcIntegerCountRateMeasure IfcValue::getIfcIntegerCountRateMeasure() {
  return m_IfcValue_union.m_IfcIntegerCountRateMeasure;
}

void IfcValue::setIfcIntegerCountRateMeasure(IfcIntegerCountRateMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcIntegerCountRateMeasure = value;
  m_type = IFCINTEGERCOUNTRATEMEASURE;
}

IfcHeatFluxDensityMeasure IfcValue::getIfcHeatFluxDensityMeasure() {
  return m_IfcValue_union.m_IfcHeatFluxDensityMeasure;
}

void IfcValue::setIfcHeatFluxDensityMeasure(IfcHeatFluxDensityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcHeatFluxDensityMeasure = value;
  m_type = IFCHEATFLUXDENSITYMEASURE;
}

IfcFrequencyMeasure IfcValue::getIfcFrequencyMeasure() {
  return m_IfcValue_union.m_IfcFrequencyMeasure;
}

void IfcValue::setIfcFrequencyMeasure(IfcFrequencyMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcFrequencyMeasure = value;
  m_type = IFCFREQUENCYMEASURE;
}

IfcEnergyMeasure IfcValue::getIfcEnergyMeasure() {
  return m_IfcValue_union.m_IfcEnergyMeasure;
}

void IfcValue::setIfcEnergyMeasure(IfcEnergyMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcEnergyMeasure = value;
  m_type = IFCENERGYMEASURE;
}

IfcElectricVoltageMeasure IfcValue::getIfcElectricVoltageMeasure() {
  return m_IfcValue_union.m_IfcElectricVoltageMeasure;
}

void IfcValue::setIfcElectricVoltageMeasure(IfcElectricVoltageMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcElectricVoltageMeasure = value;
  m_type = IFCELECTRICVOLTAGEMEASURE;
}

IfcDynamicViscosityMeasure IfcValue::getIfcDynamicViscosityMeasure() {
  return m_IfcValue_union.m_IfcDynamicViscosityMeasure;
}

void IfcValue::setIfcDynamicViscosityMeasure(IfcDynamicViscosityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcDynamicViscosityMeasure = value;
  m_type = IFCDYNAMICVISCOSITYMEASURE;
}

IfcCompoundPlaneAngleMeasure IfcValue::getIfcCompoundPlaneAngleMeasure() {
  return *m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure;
}

void IfcValue::setIfcCompoundPlaneAngleMeasure(const IfcCompoundPlaneAngleMeasure &value) {
  deleteUnion();
  m_IfcValue_union.m_IfcCompoundPlaneAngleMeasure = new IfcCompoundPlaneAngleMeasure(value);
  m_type = IFCCOMPOUNDPLANEANGLEMEASURE;
}

IfcAngularVelocityMeasure IfcValue::getIfcAngularVelocityMeasure() {
  return m_IfcValue_union.m_IfcAngularVelocityMeasure;
}

void IfcValue::setIfcAngularVelocityMeasure(IfcAngularVelocityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcAngularVelocityMeasure = value;
  m_type = IFCANGULARVELOCITYMEASURE;
}

IfcThermalConductivityMeasure IfcValue::getIfcThermalConductivityMeasure() {
  return m_IfcValue_union.m_IfcThermalConductivityMeasure;
}

void IfcValue::setIfcThermalConductivityMeasure(IfcThermalConductivityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcThermalConductivityMeasure = value;
  m_type = IFCTHERMALCONDUCTIVITYMEASURE;
}

IfcMolecularWeightMeasure IfcValue::getIfcMolecularWeightMeasure() {
  return m_IfcValue_union.m_IfcMolecularWeightMeasure;
}

void IfcValue::setIfcMolecularWeightMeasure(IfcMolecularWeightMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMolecularWeightMeasure = value;
  m_type = IFCMOLECULARWEIGHTMEASURE;
}

IfcVaporPermeabilityMeasure IfcValue::getIfcVaporPermeabilityMeasure() {
  return m_IfcValue_union.m_IfcVaporPermeabilityMeasure;
}

void IfcValue::setIfcVaporPermeabilityMeasure(IfcVaporPermeabilityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcVaporPermeabilityMeasure = value;
  m_type = IFCVAPORPERMEABILITYMEASURE;
}

IfcMoistureDiffusivityMeasure IfcValue::getIfcMoistureDiffusivityMeasure() {
  return m_IfcValue_union.m_IfcMoistureDiffusivityMeasure;
}

void IfcValue::setIfcMoistureDiffusivityMeasure(IfcMoistureDiffusivityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMoistureDiffusivityMeasure = value;
  m_type = IFCMOISTUREDIFFUSIVITYMEASURE;
}

IfcIsothermalMoistureCapacityMeasure IfcValue::getIfcIsothermalMoistureCapacityMeasure() {
  return m_IfcValue_union.m_IfcIsothermalMoistureCapacityMeasure;
}

void IfcValue::setIfcIsothermalMoistureCapacityMeasure(IfcIsothermalMoistureCapacityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcIsothermalMoistureCapacityMeasure = value;
  m_type = IFCISOTHERMALMOISTURECAPACITYMEASURE;
}

IfcSpecificHeatCapacityMeasure IfcValue::getIfcSpecificHeatCapacityMeasure() {
  return m_IfcValue_union.m_IfcSpecificHeatCapacityMeasure;
}

void IfcValue::setIfcSpecificHeatCapacityMeasure(IfcSpecificHeatCapacityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcSpecificHeatCapacityMeasure = value;
  m_type = IFCSPECIFICHEATCAPACITYMEASURE;
}

IfcMonetaryMeasure IfcValue::getIfcMonetaryMeasure() {
  return m_IfcValue_union.m_IfcMonetaryMeasure;
}

void IfcValue::setIfcMonetaryMeasure(IfcMonetaryMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMonetaryMeasure = value;
  m_type = IFCMONETARYMEASURE;
}

IfcMagneticFluxDensityMeasure IfcValue::getIfcMagneticFluxDensityMeasure() {
  return m_IfcValue_union.m_IfcMagneticFluxDensityMeasure;
}

void IfcValue::setIfcMagneticFluxDensityMeasure(IfcMagneticFluxDensityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMagneticFluxDensityMeasure = value;
  m_type = IFCMAGNETICFLUXDENSITYMEASURE;
}

IfcMagneticFluxMeasure IfcValue::getIfcMagneticFluxMeasure() {
  return m_IfcValue_union.m_IfcMagneticFluxMeasure;
}

void IfcValue::setIfcMagneticFluxMeasure(IfcMagneticFluxMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMagneticFluxMeasure = value;
  m_type = IFCMAGNETICFLUXMEASURE;
}

IfcLuminousFluxMeasure IfcValue::getIfcLuminousFluxMeasure() {
  return m_IfcValue_union.m_IfcLuminousFluxMeasure;
}

void IfcValue::setIfcLuminousFluxMeasure(IfcLuminousFluxMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLuminousFluxMeasure = value;
  m_type = IFCLUMINOUSFLUXMEASURE;
}

IfcForceMeasure IfcValue::getIfcForceMeasure() {
  return m_IfcValue_union.m_IfcForceMeasure;
}

void IfcValue::setIfcForceMeasure(IfcForceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcForceMeasure = value;
  m_type = IFCFORCEMEASURE;
}

IfcInductanceMeasure IfcValue::getIfcInductanceMeasure() {
  return m_IfcValue_union.m_IfcInductanceMeasure;
}

void IfcValue::setIfcInductanceMeasure(IfcInductanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcInductanceMeasure = value;
  m_type = IFCINDUCTANCEMEASURE;
}

IfcIlluminanceMeasure IfcValue::getIfcIlluminanceMeasure() {
  return m_IfcValue_union.m_IfcIlluminanceMeasure;
}

void IfcValue::setIfcIlluminanceMeasure(IfcIlluminanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcIlluminanceMeasure = value;
  m_type = IFCILLUMINANCEMEASURE;
}

IfcElectricResistanceMeasure IfcValue::getIfcElectricResistanceMeasure() {
  return m_IfcValue_union.m_IfcElectricResistanceMeasure;
}

void IfcValue::setIfcElectricResistanceMeasure(IfcElectricResistanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcElectricResistanceMeasure = value;
  m_type = IFCELECTRICRESISTANCEMEASURE;
}

IfcElectricConductanceMeasure IfcValue::getIfcElectricConductanceMeasure() {
  return m_IfcValue_union.m_IfcElectricConductanceMeasure;
}

void IfcValue::setIfcElectricConductanceMeasure(IfcElectricConductanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcElectricConductanceMeasure = value;
  m_type = IFCELECTRICCONDUCTANCEMEASURE;
}

IfcElectricChargeMeasure IfcValue::getIfcElectricChargeMeasure() {
  return m_IfcValue_union.m_IfcElectricChargeMeasure;
}

void IfcValue::setIfcElectricChargeMeasure(IfcElectricChargeMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcElectricChargeMeasure = value;
  m_type = IFCELECTRICCHARGEMEASURE;
}

IfcDoseEquivalentMeasure IfcValue::getIfcDoseEquivalentMeasure() {
  return m_IfcValue_union.m_IfcDoseEquivalentMeasure;
}

void IfcValue::setIfcDoseEquivalentMeasure(IfcDoseEquivalentMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcDoseEquivalentMeasure = value;
  m_type = IFCDOSEEQUIVALENTMEASURE;
}

IfcElectricCapacitanceMeasure IfcValue::getIfcElectricCapacitanceMeasure() {
  return m_IfcValue_union.m_IfcElectricCapacitanceMeasure;
}

void IfcValue::setIfcElectricCapacitanceMeasure(IfcElectricCapacitanceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcElectricCapacitanceMeasure = value;
  m_type = IFCELECTRICCAPACITANCEMEASURE;
}

IfcAbsorbedDoseMeasure IfcValue::getIfcAbsorbedDoseMeasure() {
  return m_IfcValue_union.m_IfcAbsorbedDoseMeasure;
}

void IfcValue::setIfcAbsorbedDoseMeasure(IfcAbsorbedDoseMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcAbsorbedDoseMeasure = value;
  m_type = IFCABSORBEDDOSEMEASURE;
}

IfcRadioActivityMeasure IfcValue::getIfcRadioActivityMeasure() {
  return m_IfcValue_union.m_IfcRadioActivityMeasure;
}

void IfcValue::setIfcRadioActivityMeasure(IfcRadioActivityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcRadioActivityMeasure = value;
  m_type = IFCRADIOACTIVITYMEASURE;
}

IfcRotationalFrequencyMeasure IfcValue::getIfcRotationalFrequencyMeasure() {
  return m_IfcValue_union.m_IfcRotationalFrequencyMeasure;
}

void IfcValue::setIfcRotationalFrequencyMeasure(IfcRotationalFrequencyMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcRotationalFrequencyMeasure = value;
  m_type = IFCROTATIONALFREQUENCYMEASURE;
}

IfcTorqueMeasure IfcValue::getIfcTorqueMeasure() {
  return m_IfcValue_union.m_IfcTorqueMeasure;
}

void IfcValue::setIfcTorqueMeasure(IfcTorqueMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcTorqueMeasure = value;
  m_type = IFCTORQUEMEASURE;
}

IfcAccelerationMeasure IfcValue::getIfcAccelerationMeasure() {
  return m_IfcValue_union.m_IfcAccelerationMeasure;
}

void IfcValue::setIfcAccelerationMeasure(IfcAccelerationMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcAccelerationMeasure = value;
  m_type = IFCACCELERATIONMEASURE;
}

IfcLinearForceMeasure IfcValue::getIfcLinearForceMeasure() {
  return m_IfcValue_union.m_IfcLinearForceMeasure;
}

void IfcValue::setIfcLinearForceMeasure(IfcLinearForceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLinearForceMeasure = value;
  m_type = IFCLINEARFORCEMEASURE;
}

IfcLinearStiffnessMeasure IfcValue::getIfcLinearStiffnessMeasure() {
  return m_IfcValue_union.m_IfcLinearStiffnessMeasure;
}

void IfcValue::setIfcLinearStiffnessMeasure(IfcLinearStiffnessMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLinearStiffnessMeasure = value;
  m_type = IFCLINEARSTIFFNESSMEASURE;
}

IfcModulusOfSubgradeReactionMeasure IfcValue::getIfcModulusOfSubgradeReactionMeasure() {
  return m_IfcValue_union.m_IfcModulusOfSubgradeReactionMeasure;
}

void IfcValue::setIfcModulusOfSubgradeReactionMeasure(IfcModulusOfSubgradeReactionMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcModulusOfSubgradeReactionMeasure = value;
  m_type = IFCMODULUSOFSUBGRADEREACTIONMEASURE;
}

IfcModulusOfElasticityMeasure IfcValue::getIfcModulusOfElasticityMeasure() {
  return m_IfcValue_union.m_IfcModulusOfElasticityMeasure;
}

void IfcValue::setIfcModulusOfElasticityMeasure(IfcModulusOfElasticityMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcModulusOfElasticityMeasure = value;
  m_type = IFCMODULUSOFELASTICITYMEASURE;
}

IfcMomentOfInertiaMeasure IfcValue::getIfcMomentOfInertiaMeasure() {
  return m_IfcValue_union.m_IfcMomentOfInertiaMeasure;
}

void IfcValue::setIfcMomentOfInertiaMeasure(IfcMomentOfInertiaMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMomentOfInertiaMeasure = value;
  m_type = IFCMOMENTOFINERTIAMEASURE;
}

IfcPlanarForceMeasure IfcValue::getIfcPlanarForceMeasure() {
  return m_IfcValue_union.m_IfcPlanarForceMeasure;
}

void IfcValue::setIfcPlanarForceMeasure(IfcPlanarForceMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPlanarForceMeasure = value;
  m_type = IFCPLANARFORCEMEASURE;
}

IfcRotationalStiffnessMeasure IfcValue::getIfcRotationalStiffnessMeasure() {
  return m_IfcValue_union.m_IfcRotationalStiffnessMeasure;
}

void IfcValue::setIfcRotationalStiffnessMeasure(IfcRotationalStiffnessMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcRotationalStiffnessMeasure = value;
  m_type = IFCROTATIONALSTIFFNESSMEASURE;
}

IfcShearModulusMeasure IfcValue::getIfcShearModulusMeasure() {
  return m_IfcValue_union.m_IfcShearModulusMeasure;
}

void IfcValue::setIfcShearModulusMeasure(IfcShearModulusMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcShearModulusMeasure = value;
  m_type = IFCSHEARMODULUSMEASURE;
}

IfcLinearMomentMeasure IfcValue::getIfcLinearMomentMeasure() {
  return m_IfcValue_union.m_IfcLinearMomentMeasure;
}

void IfcValue::setIfcLinearMomentMeasure(IfcLinearMomentMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLinearMomentMeasure = value;
  m_type = IFCLINEARMOMENTMEASURE;
}

IfcLuminousIntensityDistributionMeasure IfcValue::getIfcLuminousIntensityDistributionMeasure() {
  return m_IfcValue_union.m_IfcLuminousIntensityDistributionMeasure;
}

void IfcValue::setIfcLuminousIntensityDistributionMeasure(IfcLuminousIntensityDistributionMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcLuminousIntensityDistributionMeasure = value;
  m_type = IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE;
}

IfcCurvatureMeasure IfcValue::getIfcCurvatureMeasure() {
  return m_IfcValue_union.m_IfcCurvatureMeasure;
}

void IfcValue::setIfcCurvatureMeasure(IfcCurvatureMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcCurvatureMeasure = value;
  m_type = IFCCURVATUREMEASURE;
}

IfcMassPerLengthMeasure IfcValue::getIfcMassPerLengthMeasure() {
  return m_IfcValue_union.m_IfcMassPerLengthMeasure;
}

void IfcValue::setIfcMassPerLengthMeasure(IfcMassPerLengthMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcMassPerLengthMeasure = value;
  m_type = IFCMASSPERLENGTHMEASURE;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcValue::getIfcModulusOfLinearSubgradeReactionMeasure() {
  return m_IfcValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure;
}

void IfcValue::setIfcModulusOfLinearSubgradeReactionMeasure(IfcModulusOfLinearSubgradeReactionMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure = value;
  m_type = IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcValue::getIfcModulusOfRotationalSubgradeReactionMeasure() {
  return m_IfcValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure;
}

void IfcValue::setIfcModulusOfRotationalSubgradeReactionMeasure(IfcModulusOfRotationalSubgradeReactionMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure = value;
  m_type = IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE;
}

IfcRotationalMassMeasure IfcValue::getIfcRotationalMassMeasure() {
  return m_IfcValue_union.m_IfcRotationalMassMeasure;
}

void IfcValue::setIfcRotationalMassMeasure(IfcRotationalMassMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcRotationalMassMeasure = value;
  m_type = IFCROTATIONALMASSMEASURE;
}

IfcSectionalAreaIntegralMeasure IfcValue::getIfcSectionalAreaIntegralMeasure() {
  return m_IfcValue_union.m_IfcSectionalAreaIntegralMeasure;
}

void IfcValue::setIfcSectionalAreaIntegralMeasure(IfcSectionalAreaIntegralMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcSectionalAreaIntegralMeasure = value;
  m_type = IFCSECTIONALAREAINTEGRALMEASURE;
}

IfcSectionModulusMeasure IfcValue::getIfcSectionModulusMeasure() {
  return m_IfcValue_union.m_IfcSectionModulusMeasure;
}

void IfcValue::setIfcSectionModulusMeasure(IfcSectionModulusMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcSectionModulusMeasure = value;
  m_type = IFCSECTIONMODULUSMEASURE;
}

IfcTemperatureGradientMeasure IfcValue::getIfcTemperatureGradientMeasure() {
  return m_IfcValue_union.m_IfcTemperatureGradientMeasure;
}

void IfcValue::setIfcTemperatureGradientMeasure(IfcTemperatureGradientMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcTemperatureGradientMeasure = value;
  m_type = IFCTEMPERATUREGRADIENTMEASURE;
}

IfcThermalExpansionCoefficientMeasure IfcValue::getIfcThermalExpansionCoefficientMeasure() {
  return m_IfcValue_union.m_IfcThermalExpansionCoefficientMeasure;
}

void IfcValue::setIfcThermalExpansionCoefficientMeasure(IfcThermalExpansionCoefficientMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcThermalExpansionCoefficientMeasure = value;
  m_type = IFCTHERMALEXPANSIONCOEFFICIENTMEASURE;
}

IfcWarpingConstantMeasure IfcValue::getIfcWarpingConstantMeasure() {
  return m_IfcValue_union.m_IfcWarpingConstantMeasure;
}

void IfcValue::setIfcWarpingConstantMeasure(IfcWarpingConstantMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcWarpingConstantMeasure = value;
  m_type = IFCWARPINGCONSTANTMEASURE;
}

IfcWarpingMomentMeasure IfcValue::getIfcWarpingMomentMeasure() {
  return m_IfcValue_union.m_IfcWarpingMomentMeasure;
}

void IfcValue::setIfcWarpingMomentMeasure(IfcWarpingMomentMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcWarpingMomentMeasure = value;
  m_type = IFCWARPINGMOMENTMEASURE;
}

IfcSoundPowerMeasure IfcValue::getIfcSoundPowerMeasure() {
  return m_IfcValue_union.m_IfcSoundPowerMeasure;
}

void IfcValue::setIfcSoundPowerMeasure(IfcSoundPowerMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcSoundPowerMeasure = value;
  m_type = IFCSOUNDPOWERMEASURE;
}

IfcSoundPressureMeasure IfcValue::getIfcSoundPressureMeasure() {
  return m_IfcValue_union.m_IfcSoundPressureMeasure;
}

void IfcValue::setIfcSoundPressureMeasure(IfcSoundPressureMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcSoundPressureMeasure = value;
  m_type = IFCSOUNDPRESSUREMEASURE;
}

IfcHeatingValueMeasure IfcValue::getIfcHeatingValueMeasure() {
  return m_IfcValue_union.m_IfcHeatingValueMeasure;
}

void IfcValue::setIfcHeatingValueMeasure(IfcHeatingValueMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcHeatingValueMeasure = value;
  m_type = IFCHEATINGVALUEMEASURE;
}

IfcPHMeasure IfcValue::getIfcPHMeasure() {
  return m_IfcValue_union.m_IfcPHMeasure;
}

void IfcValue::setIfcPHMeasure(IfcPHMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcPHMeasure = value;
  m_type = IFCPHMEASURE;
}

IfcIonConcentrationMeasure IfcValue::getIfcIonConcentrationMeasure() {
  return m_IfcValue_union.m_IfcIonConcentrationMeasure;
}

void IfcValue::setIfcIonConcentrationMeasure(IfcIonConcentrationMeasure value) {
  deleteUnion();
  m_IfcValue_union.m_IfcIonConcentrationMeasure = value;
  m_type = IFCIONCONCENTRATIONMEASURE;
}

void IfcValue::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcValue::s_type = new Step::ClassType_class("IfcValue");
