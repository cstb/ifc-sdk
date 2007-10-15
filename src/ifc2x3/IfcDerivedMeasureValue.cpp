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

#include "ifc2x3/IfcDerivedMeasureValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDerivedMeasureValue::IfcDerivedMeasureValue() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDerivedMeasureValue::IfcDerivedMeasureValue(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDerivedMeasureValue::~IfcDerivedMeasureValue() {
    deleteUnion();
}

bool IfcDerivedMeasureValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDerivedMeasureValue(this);
}

bool IfcDerivedMeasureValue::init() {
    return false;
}

const std::string &IfcDerivedMeasureValue::type() {
    return IfcDerivedMeasureValue::s_type.getName();
}

Step::ClassType IfcDerivedMeasureValue::getClassType() {
    return IfcDerivedMeasureValue::s_type;
}

Step::ClassType IfcDerivedMeasureValue::getType() const {
    return IfcDerivedMeasureValue::s_type;
}

bool IfcDerivedMeasureValue::isOfType(Step::ClassType t) {
    return IfcDerivedMeasureValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDerivedMeasureValue::copy(const IfcDerivedMeasureValue &obj, const CopyOp &copyop) {
    Step::List< Step::Integer >::const_iterator it_IfcCompoundPlaneAngleMeasure;
    switch(obj.m_type) {
    case IFCVOLUMETRICFLOWRATEMEASURE:
        setIfcVolumetricFlowRateMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcVolumetricFlowRateMeasure);
        break;
    case IFCTIMESTAMP:
        setIfcTimeStamp(obj.m_IfcDerivedMeasureValue_union.m_IfcTimeStamp);
        break;
    case IFCTHERMALTRANSMITTANCEMEASURE:
        setIfcThermalTransmittanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcThermalTransmittanceMeasure);
        break;
    case IFCTHERMALRESISTANCEMEASURE:
        setIfcThermalResistanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcThermalResistanceMeasure);
        break;
    case IFCTHERMALADMITTANCEMEASURE:
        setIfcThermalAdmittanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcThermalAdmittanceMeasure);
        break;
    case IFCPRESSUREMEASURE:
        setIfcPressureMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcPressureMeasure);
        break;
    case IFCPOWERMEASURE:
        setIfcPowerMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcPowerMeasure);
        break;
    case IFCMASSFLOWRATEMEASURE:
        setIfcMassFlowRateMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMassFlowRateMeasure);
        break;
    case IFCMASSDENSITYMEASURE:
        setIfcMassDensityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMassDensityMeasure);
        break;
    case IFCLINEARVELOCITYMEASURE:
        setIfcLinearVelocityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcLinearVelocityMeasure);
        break;
    case IFCKINEMATICVISCOSITYMEASURE:
        setIfcKinematicViscosityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcKinematicViscosityMeasure);
        break;
    case IFCINTEGERCOUNTRATEMEASURE:
        setIfcIntegerCountRateMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcIntegerCountRateMeasure);
        break;
    case IFCHEATFLUXDENSITYMEASURE:
        setIfcHeatFluxDensityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcHeatFluxDensityMeasure);
        break;
    case IFCFREQUENCYMEASURE:
        setIfcFrequencyMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcFrequencyMeasure);
        break;
    case IFCENERGYMEASURE:
        setIfcEnergyMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcEnergyMeasure);
        break;
    case IFCELECTRICVOLTAGEMEASURE:
        setIfcElectricVoltageMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcElectricVoltageMeasure);
        break;
    case IFCDYNAMICVISCOSITYMEASURE:
        setIfcDynamicViscosityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcDynamicViscosityMeasure);
        break;
    case IFCCOMPOUNDPLANEANGLEMEASURE:
        for (it_IfcCompoundPlaneAngleMeasure = obj.m_IfcDerivedMeasureValue_union.m_IfcCompoundPlaneAngleMeasure->begin(); it_IfcCompoundPlaneAngleMeasure != obj.m_IfcDerivedMeasureValue_union.m_IfcCompoundPlaneAngleMeasure->end(); ++it_IfcCompoundPlaneAngleMeasure) {
            Step::Integer copyTarget = (*it_IfcCompoundPlaneAngleMeasure);
            m_IfcDerivedMeasureValue_union.m_IfcCompoundPlaneAngleMeasure->push_back(copyTarget);
        }
        break;
    case IFCANGULARVELOCITYMEASURE:
        setIfcAngularVelocityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcAngularVelocityMeasure);
        break;
    case IFCTHERMALCONDUCTIVITYMEASURE:
        setIfcThermalConductivityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcThermalConductivityMeasure);
        break;
    case IFCMOLECULARWEIGHTMEASURE:
        setIfcMolecularWeightMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMolecularWeightMeasure);
        break;
    case IFCVAPORPERMEABILITYMEASURE:
        setIfcVaporPermeabilityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcVaporPermeabilityMeasure);
        break;
    case IFCMOISTUREDIFFUSIVITYMEASURE:
        setIfcMoistureDiffusivityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMoistureDiffusivityMeasure);
        break;
    case IFCISOTHERMALMOISTURECAPACITYMEASURE:
        setIfcIsothermalMoistureCapacityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcIsothermalMoistureCapacityMeasure);
        break;
    case IFCSPECIFICHEATCAPACITYMEASURE:
        setIfcSpecificHeatCapacityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcSpecificHeatCapacityMeasure);
        break;
    case IFCMONETARYMEASURE:
        setIfcMonetaryMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMonetaryMeasure);
        break;
    case IFCMAGNETICFLUXDENSITYMEASURE:
        setIfcMagneticFluxDensityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMagneticFluxDensityMeasure);
        break;
    case IFCMAGNETICFLUXMEASURE:
        setIfcMagneticFluxMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMagneticFluxMeasure);
        break;
    case IFCLUMINOUSFLUXMEASURE:
        setIfcLuminousFluxMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcLuminousFluxMeasure);
        break;
    case IFCFORCEMEASURE:
        setIfcForceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcForceMeasure);
        break;
    case IFCINDUCTANCEMEASURE:
        setIfcInductanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcInductanceMeasure);
        break;
    case IFCILLUMINANCEMEASURE:
        setIfcIlluminanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcIlluminanceMeasure);
        break;
    case IFCELECTRICRESISTANCEMEASURE:
        setIfcElectricResistanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcElectricResistanceMeasure);
        break;
    case IFCELECTRICCONDUCTANCEMEASURE:
        setIfcElectricConductanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcElectricConductanceMeasure);
        break;
    case IFCELECTRICCHARGEMEASURE:
        setIfcElectricChargeMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcElectricChargeMeasure);
        break;
    case IFCDOSEEQUIVALENTMEASURE:
        setIfcDoseEquivalentMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcDoseEquivalentMeasure);
        break;
    case IFCELECTRICCAPACITANCEMEASURE:
        setIfcElectricCapacitanceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcElectricCapacitanceMeasure);
        break;
    case IFCABSORBEDDOSEMEASURE:
        setIfcAbsorbedDoseMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcAbsorbedDoseMeasure);
        break;
    case IFCRADIOACTIVITYMEASURE:
        setIfcRadioActivityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcRadioActivityMeasure);
        break;
    case IFCROTATIONALFREQUENCYMEASURE:
        setIfcRotationalFrequencyMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcRotationalFrequencyMeasure);
        break;
    case IFCTORQUEMEASURE:
        setIfcTorqueMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcTorqueMeasure);
        break;
    case IFCACCELERATIONMEASURE:
        setIfcAccelerationMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcAccelerationMeasure);
        break;
    case IFCLINEARFORCEMEASURE:
        setIfcLinearForceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcLinearForceMeasure);
        break;
    case IFCLINEARSTIFFNESSMEASURE:
        setIfcLinearStiffnessMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcLinearStiffnessMeasure);
        break;
    case IFCMODULUSOFSUBGRADEREACTIONMEASURE:
        setIfcModulusOfSubgradeReactionMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcModulusOfSubgradeReactionMeasure);
        break;
    case IFCMODULUSOFELASTICITYMEASURE:
        setIfcModulusOfElasticityMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcModulusOfElasticityMeasure);
        break;
    case IFCMOMENTOFINERTIAMEASURE:
        setIfcMomentOfInertiaMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMomentOfInertiaMeasure);
        break;
    case IFCPLANARFORCEMEASURE:
        setIfcPlanarForceMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcPlanarForceMeasure);
        break;
    case IFCROTATIONALSTIFFNESSMEASURE:
        setIfcRotationalStiffnessMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcRotationalStiffnessMeasure);
        break;
    case IFCSHEARMODULUSMEASURE:
        setIfcShearModulusMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcShearModulusMeasure);
        break;
    case IFCLINEARMOMENTMEASURE:
        setIfcLinearMomentMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcLinearMomentMeasure);
        break;
    case IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE:
        setIfcLuminousIntensityDistributionMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcLuminousIntensityDistributionMeasure);
        break;
    case IFCCURVATUREMEASURE:
        setIfcCurvatureMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcCurvatureMeasure);
        break;
    case IFCMASSPERLENGTHMEASURE:
        setIfcMassPerLengthMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcMassPerLengthMeasure);
        break;
    case IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE:
        setIfcModulusOfLinearSubgradeReactionMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure);
        break;
    case IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE:
        setIfcModulusOfRotationalSubgradeReactionMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure);
        break;
    case IFCROTATIONALMASSMEASURE:
        setIfcRotationalMassMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcRotationalMassMeasure);
        break;
    case IFCSECTIONALAREAINTEGRALMEASURE:
        setIfcSectionalAreaIntegralMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcSectionalAreaIntegralMeasure);
        break;
    case IFCSECTIONMODULUSMEASURE:
        setIfcSectionModulusMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcSectionModulusMeasure);
        break;
    case IFCTEMPERATUREGRADIENTMEASURE:
        setIfcTemperatureGradientMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcTemperatureGradientMeasure);
        break;
    case IFCTHERMALEXPANSIONCOEFFICIENTMEASURE:
        setIfcThermalExpansionCoefficientMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcThermalExpansionCoefficientMeasure);
        break;
    case IFCWARPINGCONSTANTMEASURE:
        setIfcWarpingConstantMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcWarpingConstantMeasure);
        break;
    case IFCWARPINGMOMENTMEASURE:
        setIfcWarpingMomentMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcWarpingMomentMeasure);
        break;
    case IFCSOUNDPOWERMEASURE:
        setIfcSoundPowerMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcSoundPowerMeasure);
        break;
    case IFCSOUNDPRESSUREMEASURE:
        setIfcSoundPressureMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcSoundPressureMeasure);
        break;
    case IFCHEATINGVALUEMEASURE:
        setIfcHeatingValueMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcHeatingValueMeasure);
        break;
    case IFCPHMEASURE:
        setIfcPHMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcPHMeasure);
        break;
    case IFCIONCONCENTRATIONMEASURE:
        setIfcIonConcentrationMeasure(obj.m_IfcDerivedMeasureValue_union.m_IfcIonConcentrationMeasure);
        break;
        }
}

char *IfcDerivedMeasureValue::currentTypeName() {
    switch(m_type) {
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

IfcDerivedMeasureValue::IfcDerivedMeasureValue_select IfcDerivedMeasureValue::currentType() {
    return m_type;
}

void IfcDerivedMeasureValue::deleteUnion() {
    switch(m_type) {
    case IFCCOMPOUNDPLANEANGLEMEASURE:
        delete m_IfcDerivedMeasureValue_union.m_IfcCompoundPlaneAngleMeasure;
        break;
        }
    m_type = UNSET;
}

IfcVolumetricFlowRateMeasure IfcDerivedMeasureValue::getIfcVolumetricFlowRateMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcVolumetricFlowRateMeasure;
}

void IfcDerivedMeasureValue::setIfcVolumetricFlowRateMeasure(IfcVolumetricFlowRateMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcVolumetricFlowRateMeasure = value;
    m_type = IFCVOLUMETRICFLOWRATEMEASURE;
}

IfcTimeStamp IfcDerivedMeasureValue::getIfcTimeStamp() {
    return m_IfcDerivedMeasureValue_union.m_IfcTimeStamp;
}

void IfcDerivedMeasureValue::setIfcTimeStamp(IfcTimeStamp value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcTimeStamp = value;
    m_type = IFCTIMESTAMP;
}

IfcThermalTransmittanceMeasure IfcDerivedMeasureValue::getIfcThermalTransmittanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcThermalTransmittanceMeasure;
}

void IfcDerivedMeasureValue::setIfcThermalTransmittanceMeasure(IfcThermalTransmittanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcThermalTransmittanceMeasure = value;
    m_type = IFCTHERMALTRANSMITTANCEMEASURE;
}

IfcThermalResistanceMeasure IfcDerivedMeasureValue::getIfcThermalResistanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcThermalResistanceMeasure;
}

void IfcDerivedMeasureValue::setIfcThermalResistanceMeasure(IfcThermalResistanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcThermalResistanceMeasure = value;
    m_type = IFCTHERMALRESISTANCEMEASURE;
}

IfcThermalAdmittanceMeasure IfcDerivedMeasureValue::getIfcThermalAdmittanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcThermalAdmittanceMeasure;
}

void IfcDerivedMeasureValue::setIfcThermalAdmittanceMeasure(IfcThermalAdmittanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcThermalAdmittanceMeasure = value;
    m_type = IFCTHERMALADMITTANCEMEASURE;
}

IfcPressureMeasure IfcDerivedMeasureValue::getIfcPressureMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcPressureMeasure;
}

void IfcDerivedMeasureValue::setIfcPressureMeasure(IfcPressureMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcPressureMeasure = value;
    m_type = IFCPRESSUREMEASURE;
}

IfcPowerMeasure IfcDerivedMeasureValue::getIfcPowerMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcPowerMeasure;
}

void IfcDerivedMeasureValue::setIfcPowerMeasure(IfcPowerMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcPowerMeasure = value;
    m_type = IFCPOWERMEASURE;
}

IfcMassFlowRateMeasure IfcDerivedMeasureValue::getIfcMassFlowRateMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMassFlowRateMeasure;
}

void IfcDerivedMeasureValue::setIfcMassFlowRateMeasure(IfcMassFlowRateMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMassFlowRateMeasure = value;
    m_type = IFCMASSFLOWRATEMEASURE;
}

IfcMassDensityMeasure IfcDerivedMeasureValue::getIfcMassDensityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMassDensityMeasure;
}

void IfcDerivedMeasureValue::setIfcMassDensityMeasure(IfcMassDensityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMassDensityMeasure = value;
    m_type = IFCMASSDENSITYMEASURE;
}

IfcLinearVelocityMeasure IfcDerivedMeasureValue::getIfcLinearVelocityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcLinearVelocityMeasure;
}

void IfcDerivedMeasureValue::setIfcLinearVelocityMeasure(IfcLinearVelocityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcLinearVelocityMeasure = value;
    m_type = IFCLINEARVELOCITYMEASURE;
}

IfcKinematicViscosityMeasure IfcDerivedMeasureValue::getIfcKinematicViscosityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcKinematicViscosityMeasure;
}

void IfcDerivedMeasureValue::setIfcKinematicViscosityMeasure(IfcKinematicViscosityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcKinematicViscosityMeasure = value;
    m_type = IFCKINEMATICVISCOSITYMEASURE;
}

IfcIntegerCountRateMeasure IfcDerivedMeasureValue::getIfcIntegerCountRateMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcIntegerCountRateMeasure;
}

void IfcDerivedMeasureValue::setIfcIntegerCountRateMeasure(IfcIntegerCountRateMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcIntegerCountRateMeasure = value;
    m_type = IFCINTEGERCOUNTRATEMEASURE;
}

IfcHeatFluxDensityMeasure IfcDerivedMeasureValue::getIfcHeatFluxDensityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcHeatFluxDensityMeasure;
}

void IfcDerivedMeasureValue::setIfcHeatFluxDensityMeasure(IfcHeatFluxDensityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcHeatFluxDensityMeasure = value;
    m_type = IFCHEATFLUXDENSITYMEASURE;
}

IfcFrequencyMeasure IfcDerivedMeasureValue::getIfcFrequencyMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcFrequencyMeasure;
}

void IfcDerivedMeasureValue::setIfcFrequencyMeasure(IfcFrequencyMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcFrequencyMeasure = value;
    m_type = IFCFREQUENCYMEASURE;
}

IfcEnergyMeasure IfcDerivedMeasureValue::getIfcEnergyMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcEnergyMeasure;
}

void IfcDerivedMeasureValue::setIfcEnergyMeasure(IfcEnergyMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcEnergyMeasure = value;
    m_type = IFCENERGYMEASURE;
}

IfcElectricVoltageMeasure IfcDerivedMeasureValue::getIfcElectricVoltageMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcElectricVoltageMeasure;
}

void IfcDerivedMeasureValue::setIfcElectricVoltageMeasure(IfcElectricVoltageMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcElectricVoltageMeasure = value;
    m_type = IFCELECTRICVOLTAGEMEASURE;
}

IfcDynamicViscosityMeasure IfcDerivedMeasureValue::getIfcDynamicViscosityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcDynamicViscosityMeasure;
}

void IfcDerivedMeasureValue::setIfcDynamicViscosityMeasure(IfcDynamicViscosityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcDynamicViscosityMeasure = value;
    m_type = IFCDYNAMICVISCOSITYMEASURE;
}

IfcCompoundPlaneAngleMeasure IfcDerivedMeasureValue::getIfcCompoundPlaneAngleMeasure() {
    return *m_IfcDerivedMeasureValue_union.m_IfcCompoundPlaneAngleMeasure;
}

void IfcDerivedMeasureValue::setIfcCompoundPlaneAngleMeasure(const IfcCompoundPlaneAngleMeasure &value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcCompoundPlaneAngleMeasure = new IfcCompoundPlaneAngleMeasure(value);
    m_type = IFCCOMPOUNDPLANEANGLEMEASURE;
}

IfcAngularVelocityMeasure IfcDerivedMeasureValue::getIfcAngularVelocityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcAngularVelocityMeasure;
}

void IfcDerivedMeasureValue::setIfcAngularVelocityMeasure(IfcAngularVelocityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcAngularVelocityMeasure = value;
    m_type = IFCANGULARVELOCITYMEASURE;
}

IfcThermalConductivityMeasure IfcDerivedMeasureValue::getIfcThermalConductivityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcThermalConductivityMeasure;
}

void IfcDerivedMeasureValue::setIfcThermalConductivityMeasure(IfcThermalConductivityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcThermalConductivityMeasure = value;
    m_type = IFCTHERMALCONDUCTIVITYMEASURE;
}

IfcMolecularWeightMeasure IfcDerivedMeasureValue::getIfcMolecularWeightMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMolecularWeightMeasure;
}

void IfcDerivedMeasureValue::setIfcMolecularWeightMeasure(IfcMolecularWeightMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMolecularWeightMeasure = value;
    m_type = IFCMOLECULARWEIGHTMEASURE;
}

IfcVaporPermeabilityMeasure IfcDerivedMeasureValue::getIfcVaporPermeabilityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcVaporPermeabilityMeasure;
}

void IfcDerivedMeasureValue::setIfcVaporPermeabilityMeasure(IfcVaporPermeabilityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcVaporPermeabilityMeasure = value;
    m_type = IFCVAPORPERMEABILITYMEASURE;
}

IfcMoistureDiffusivityMeasure IfcDerivedMeasureValue::getIfcMoistureDiffusivityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMoistureDiffusivityMeasure;
}

void IfcDerivedMeasureValue::setIfcMoistureDiffusivityMeasure(IfcMoistureDiffusivityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMoistureDiffusivityMeasure = value;
    m_type = IFCMOISTUREDIFFUSIVITYMEASURE;
}

IfcIsothermalMoistureCapacityMeasure IfcDerivedMeasureValue::getIfcIsothermalMoistureCapacityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcIsothermalMoistureCapacityMeasure;
}

void IfcDerivedMeasureValue::setIfcIsothermalMoistureCapacityMeasure(IfcIsothermalMoistureCapacityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcIsothermalMoistureCapacityMeasure = value;
    m_type = IFCISOTHERMALMOISTURECAPACITYMEASURE;
}

IfcSpecificHeatCapacityMeasure IfcDerivedMeasureValue::getIfcSpecificHeatCapacityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcSpecificHeatCapacityMeasure;
}

void IfcDerivedMeasureValue::setIfcSpecificHeatCapacityMeasure(IfcSpecificHeatCapacityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcSpecificHeatCapacityMeasure = value;
    m_type = IFCSPECIFICHEATCAPACITYMEASURE;
}

IfcMonetaryMeasure IfcDerivedMeasureValue::getIfcMonetaryMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMonetaryMeasure;
}

void IfcDerivedMeasureValue::setIfcMonetaryMeasure(IfcMonetaryMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMonetaryMeasure = value;
    m_type = IFCMONETARYMEASURE;
}

IfcMagneticFluxDensityMeasure IfcDerivedMeasureValue::getIfcMagneticFluxDensityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMagneticFluxDensityMeasure;
}

void IfcDerivedMeasureValue::setIfcMagneticFluxDensityMeasure(IfcMagneticFluxDensityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMagneticFluxDensityMeasure = value;
    m_type = IFCMAGNETICFLUXDENSITYMEASURE;
}

IfcMagneticFluxMeasure IfcDerivedMeasureValue::getIfcMagneticFluxMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMagneticFluxMeasure;
}

void IfcDerivedMeasureValue::setIfcMagneticFluxMeasure(IfcMagneticFluxMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMagneticFluxMeasure = value;
    m_type = IFCMAGNETICFLUXMEASURE;
}

IfcLuminousFluxMeasure IfcDerivedMeasureValue::getIfcLuminousFluxMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcLuminousFluxMeasure;
}

void IfcDerivedMeasureValue::setIfcLuminousFluxMeasure(IfcLuminousFluxMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcLuminousFluxMeasure = value;
    m_type = IFCLUMINOUSFLUXMEASURE;
}

IfcForceMeasure IfcDerivedMeasureValue::getIfcForceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcForceMeasure;
}

void IfcDerivedMeasureValue::setIfcForceMeasure(IfcForceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcForceMeasure = value;
    m_type = IFCFORCEMEASURE;
}

IfcInductanceMeasure IfcDerivedMeasureValue::getIfcInductanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcInductanceMeasure;
}

void IfcDerivedMeasureValue::setIfcInductanceMeasure(IfcInductanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcInductanceMeasure = value;
    m_type = IFCINDUCTANCEMEASURE;
}

IfcIlluminanceMeasure IfcDerivedMeasureValue::getIfcIlluminanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcIlluminanceMeasure;
}

void IfcDerivedMeasureValue::setIfcIlluminanceMeasure(IfcIlluminanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcIlluminanceMeasure = value;
    m_type = IFCILLUMINANCEMEASURE;
}

IfcElectricResistanceMeasure IfcDerivedMeasureValue::getIfcElectricResistanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcElectricResistanceMeasure;
}

void IfcDerivedMeasureValue::setIfcElectricResistanceMeasure(IfcElectricResistanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcElectricResistanceMeasure = value;
    m_type = IFCELECTRICRESISTANCEMEASURE;
}

IfcElectricConductanceMeasure IfcDerivedMeasureValue::getIfcElectricConductanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcElectricConductanceMeasure;
}

void IfcDerivedMeasureValue::setIfcElectricConductanceMeasure(IfcElectricConductanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcElectricConductanceMeasure = value;
    m_type = IFCELECTRICCONDUCTANCEMEASURE;
}

IfcElectricChargeMeasure IfcDerivedMeasureValue::getIfcElectricChargeMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcElectricChargeMeasure;
}

void IfcDerivedMeasureValue::setIfcElectricChargeMeasure(IfcElectricChargeMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcElectricChargeMeasure = value;
    m_type = IFCELECTRICCHARGEMEASURE;
}

IfcDoseEquivalentMeasure IfcDerivedMeasureValue::getIfcDoseEquivalentMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcDoseEquivalentMeasure;
}

void IfcDerivedMeasureValue::setIfcDoseEquivalentMeasure(IfcDoseEquivalentMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcDoseEquivalentMeasure = value;
    m_type = IFCDOSEEQUIVALENTMEASURE;
}

IfcElectricCapacitanceMeasure IfcDerivedMeasureValue::getIfcElectricCapacitanceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcElectricCapacitanceMeasure;
}

void IfcDerivedMeasureValue::setIfcElectricCapacitanceMeasure(IfcElectricCapacitanceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcElectricCapacitanceMeasure = value;
    m_type = IFCELECTRICCAPACITANCEMEASURE;
}

IfcAbsorbedDoseMeasure IfcDerivedMeasureValue::getIfcAbsorbedDoseMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcAbsorbedDoseMeasure;
}

void IfcDerivedMeasureValue::setIfcAbsorbedDoseMeasure(IfcAbsorbedDoseMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcAbsorbedDoseMeasure = value;
    m_type = IFCABSORBEDDOSEMEASURE;
}

IfcRadioActivityMeasure IfcDerivedMeasureValue::getIfcRadioActivityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcRadioActivityMeasure;
}

void IfcDerivedMeasureValue::setIfcRadioActivityMeasure(IfcRadioActivityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcRadioActivityMeasure = value;
    m_type = IFCRADIOACTIVITYMEASURE;
}

IfcRotationalFrequencyMeasure IfcDerivedMeasureValue::getIfcRotationalFrequencyMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcRotationalFrequencyMeasure;
}

void IfcDerivedMeasureValue::setIfcRotationalFrequencyMeasure(IfcRotationalFrequencyMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcRotationalFrequencyMeasure = value;
    m_type = IFCROTATIONALFREQUENCYMEASURE;
}

IfcTorqueMeasure IfcDerivedMeasureValue::getIfcTorqueMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcTorqueMeasure;
}

void IfcDerivedMeasureValue::setIfcTorqueMeasure(IfcTorqueMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcTorqueMeasure = value;
    m_type = IFCTORQUEMEASURE;
}

IfcAccelerationMeasure IfcDerivedMeasureValue::getIfcAccelerationMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcAccelerationMeasure;
}

void IfcDerivedMeasureValue::setIfcAccelerationMeasure(IfcAccelerationMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcAccelerationMeasure = value;
    m_type = IFCACCELERATIONMEASURE;
}

IfcLinearForceMeasure IfcDerivedMeasureValue::getIfcLinearForceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcLinearForceMeasure;
}

void IfcDerivedMeasureValue::setIfcLinearForceMeasure(IfcLinearForceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcLinearForceMeasure = value;
    m_type = IFCLINEARFORCEMEASURE;
}

IfcLinearStiffnessMeasure IfcDerivedMeasureValue::getIfcLinearStiffnessMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcLinearStiffnessMeasure;
}

void IfcDerivedMeasureValue::setIfcLinearStiffnessMeasure(IfcLinearStiffnessMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcLinearStiffnessMeasure = value;
    m_type = IFCLINEARSTIFFNESSMEASURE;
}

IfcModulusOfSubgradeReactionMeasure IfcDerivedMeasureValue::getIfcModulusOfSubgradeReactionMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcModulusOfSubgradeReactionMeasure;
}

void IfcDerivedMeasureValue::setIfcModulusOfSubgradeReactionMeasure(IfcModulusOfSubgradeReactionMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcModulusOfSubgradeReactionMeasure = value;
    m_type = IFCMODULUSOFSUBGRADEREACTIONMEASURE;
}

IfcModulusOfElasticityMeasure IfcDerivedMeasureValue::getIfcModulusOfElasticityMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcModulusOfElasticityMeasure;
}

void IfcDerivedMeasureValue::setIfcModulusOfElasticityMeasure(IfcModulusOfElasticityMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcModulusOfElasticityMeasure = value;
    m_type = IFCMODULUSOFELASTICITYMEASURE;
}

IfcMomentOfInertiaMeasure IfcDerivedMeasureValue::getIfcMomentOfInertiaMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMomentOfInertiaMeasure;
}

void IfcDerivedMeasureValue::setIfcMomentOfInertiaMeasure(IfcMomentOfInertiaMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMomentOfInertiaMeasure = value;
    m_type = IFCMOMENTOFINERTIAMEASURE;
}

IfcPlanarForceMeasure IfcDerivedMeasureValue::getIfcPlanarForceMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcPlanarForceMeasure;
}

void IfcDerivedMeasureValue::setIfcPlanarForceMeasure(IfcPlanarForceMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcPlanarForceMeasure = value;
    m_type = IFCPLANARFORCEMEASURE;
}

IfcRotationalStiffnessMeasure IfcDerivedMeasureValue::getIfcRotationalStiffnessMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcRotationalStiffnessMeasure;
}

void IfcDerivedMeasureValue::setIfcRotationalStiffnessMeasure(IfcRotationalStiffnessMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcRotationalStiffnessMeasure = value;
    m_type = IFCROTATIONALSTIFFNESSMEASURE;
}

IfcShearModulusMeasure IfcDerivedMeasureValue::getIfcShearModulusMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcShearModulusMeasure;
}

void IfcDerivedMeasureValue::setIfcShearModulusMeasure(IfcShearModulusMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcShearModulusMeasure = value;
    m_type = IFCSHEARMODULUSMEASURE;
}

IfcLinearMomentMeasure IfcDerivedMeasureValue::getIfcLinearMomentMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcLinearMomentMeasure;
}

void IfcDerivedMeasureValue::setIfcLinearMomentMeasure(IfcLinearMomentMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcLinearMomentMeasure = value;
    m_type = IFCLINEARMOMENTMEASURE;
}

IfcLuminousIntensityDistributionMeasure IfcDerivedMeasureValue::getIfcLuminousIntensityDistributionMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcLuminousIntensityDistributionMeasure;
}

void IfcDerivedMeasureValue::setIfcLuminousIntensityDistributionMeasure(IfcLuminousIntensityDistributionMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcLuminousIntensityDistributionMeasure = value;
    m_type = IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE;
}

IfcCurvatureMeasure IfcDerivedMeasureValue::getIfcCurvatureMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcCurvatureMeasure;
}

void IfcDerivedMeasureValue::setIfcCurvatureMeasure(IfcCurvatureMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcCurvatureMeasure = value;
    m_type = IFCCURVATUREMEASURE;
}

IfcMassPerLengthMeasure IfcDerivedMeasureValue::getIfcMassPerLengthMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcMassPerLengthMeasure;
}

void IfcDerivedMeasureValue::setIfcMassPerLengthMeasure(IfcMassPerLengthMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcMassPerLengthMeasure = value;
    m_type = IFCMASSPERLENGTHMEASURE;
}

IfcModulusOfLinearSubgradeReactionMeasure IfcDerivedMeasureValue::getIfcModulusOfLinearSubgradeReactionMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure;
}

void IfcDerivedMeasureValue::setIfcModulusOfLinearSubgradeReactionMeasure(IfcModulusOfLinearSubgradeReactionMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcModulusOfLinearSubgradeReactionMeasure = value;
    m_type = IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE;
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcDerivedMeasureValue::getIfcModulusOfRotationalSubgradeReactionMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure;
}

void IfcDerivedMeasureValue::setIfcModulusOfRotationalSubgradeReactionMeasure(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcModulusOfRotationalSubgradeReactionMeasure = value;
    m_type = IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE;
}

IfcRotationalMassMeasure IfcDerivedMeasureValue::getIfcRotationalMassMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcRotationalMassMeasure;
}

void IfcDerivedMeasureValue::setIfcRotationalMassMeasure(IfcRotationalMassMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcRotationalMassMeasure = value;
    m_type = IFCROTATIONALMASSMEASURE;
}

IfcSectionalAreaIntegralMeasure IfcDerivedMeasureValue::getIfcSectionalAreaIntegralMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcSectionalAreaIntegralMeasure;
}

void IfcDerivedMeasureValue::setIfcSectionalAreaIntegralMeasure(IfcSectionalAreaIntegralMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcSectionalAreaIntegralMeasure = value;
    m_type = IFCSECTIONALAREAINTEGRALMEASURE;
}

IfcSectionModulusMeasure IfcDerivedMeasureValue::getIfcSectionModulusMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcSectionModulusMeasure;
}

void IfcDerivedMeasureValue::setIfcSectionModulusMeasure(IfcSectionModulusMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcSectionModulusMeasure = value;
    m_type = IFCSECTIONMODULUSMEASURE;
}

IfcTemperatureGradientMeasure IfcDerivedMeasureValue::getIfcTemperatureGradientMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcTemperatureGradientMeasure;
}

void IfcDerivedMeasureValue::setIfcTemperatureGradientMeasure(IfcTemperatureGradientMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcTemperatureGradientMeasure = value;
    m_type = IFCTEMPERATUREGRADIENTMEASURE;
}

IfcThermalExpansionCoefficientMeasure IfcDerivedMeasureValue::getIfcThermalExpansionCoefficientMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcThermalExpansionCoefficientMeasure;
}

void IfcDerivedMeasureValue::setIfcThermalExpansionCoefficientMeasure(IfcThermalExpansionCoefficientMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcThermalExpansionCoefficientMeasure = value;
    m_type = IFCTHERMALEXPANSIONCOEFFICIENTMEASURE;
}

IfcWarpingConstantMeasure IfcDerivedMeasureValue::getIfcWarpingConstantMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcWarpingConstantMeasure;
}

void IfcDerivedMeasureValue::setIfcWarpingConstantMeasure(IfcWarpingConstantMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcWarpingConstantMeasure = value;
    m_type = IFCWARPINGCONSTANTMEASURE;
}

IfcWarpingMomentMeasure IfcDerivedMeasureValue::getIfcWarpingMomentMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcWarpingMomentMeasure;
}

void IfcDerivedMeasureValue::setIfcWarpingMomentMeasure(IfcWarpingMomentMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcWarpingMomentMeasure = value;
    m_type = IFCWARPINGMOMENTMEASURE;
}

IfcSoundPowerMeasure IfcDerivedMeasureValue::getIfcSoundPowerMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcSoundPowerMeasure;
}

void IfcDerivedMeasureValue::setIfcSoundPowerMeasure(IfcSoundPowerMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcSoundPowerMeasure = value;
    m_type = IFCSOUNDPOWERMEASURE;
}

IfcSoundPressureMeasure IfcDerivedMeasureValue::getIfcSoundPressureMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcSoundPressureMeasure;
}

void IfcDerivedMeasureValue::setIfcSoundPressureMeasure(IfcSoundPressureMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcSoundPressureMeasure = value;
    m_type = IFCSOUNDPRESSUREMEASURE;
}

IfcHeatingValueMeasure IfcDerivedMeasureValue::getIfcHeatingValueMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcHeatingValueMeasure;
}

void IfcDerivedMeasureValue::setIfcHeatingValueMeasure(IfcHeatingValueMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcHeatingValueMeasure = value;
    m_type = IFCHEATINGVALUEMEASURE;
}

IfcPHMeasure IfcDerivedMeasureValue::getIfcPHMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcPHMeasure;
}

void IfcDerivedMeasureValue::setIfcPHMeasure(IfcPHMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcPHMeasure = value;
    m_type = IFCPHMEASURE;
}

IfcIonConcentrationMeasure IfcDerivedMeasureValue::getIfcIonConcentrationMeasure() {
    return m_IfcDerivedMeasureValue_union.m_IfcIonConcentrationMeasure;
}

void IfcDerivedMeasureValue::setIfcIonConcentrationMeasure(IfcIonConcentrationMeasure value) {
    deleteUnion();
    m_IfcDerivedMeasureValue_union.m_IfcIonConcentrationMeasure = value;
    m_type = IFCIONCONCENTRATIONMEASURE;
}

void IfcDerivedMeasureValue::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcDerivedMeasureValue::s_type("IfcDerivedMeasureValue");
