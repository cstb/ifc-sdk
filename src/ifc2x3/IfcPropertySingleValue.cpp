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

#include "ifc2x3/IfcPropertySingleValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSimpleProperty.h"
#include "ifc2x3/IfcUnit.h"
#include "ifc2x3/IfcValue.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPropertySingleValue::IfcPropertySingleValue(Step::Id id, Step::SPFData *args) : IfcSimpleProperty(id, args) {
    m_nominalValue = NULL;
    m_unit = NULL;
}

IfcPropertySingleValue::~IfcPropertySingleValue() {
}

bool IfcPropertySingleValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPropertySingleValue(this);
}

const std::string &IfcPropertySingleValue::type() {
    return IfcPropertySingleValue::s_type.getName();
}

Step::ClassType IfcPropertySingleValue::getClassType() {
    return IfcPropertySingleValue::s_type;
}

Step::ClassType IfcPropertySingleValue::getType() const {
    return IfcPropertySingleValue::s_type;
}

bool IfcPropertySingleValue::isOfType(Step::ClassType t) {
    return IfcPropertySingleValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

IfcValue *IfcPropertySingleValue::getNominalValue() {
    if (Step::BaseObject::inited()) {
        return m_nominalValue.get();
    }
    else {
        return NULL;
    }
}

void IfcPropertySingleValue::setNominalValue(const Step::RefPtr< IfcValue > &value) {
    m_nominalValue = value;
}

IfcUnit *IfcPropertySingleValue::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

void IfcPropertySingleValue::setUnit(const Step::RefPtr< IfcUnit > &value) {
    m_unit = value;
}

void IfcPropertySingleValue::release() {
    IfcSimpleProperty::release();
}

bool IfcPropertySingleValue::init() {
    bool status = IfcSimpleProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalValue = NULL;
    }
    else {
        m_nominalValue = new IfcValue;
        if (arg[0] == '#') {
            m_nominalValue->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcVolumeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcTimeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOLIDANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPARAMETERVALUE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcParameterValue(tmp_attr1);
                }
                if (type1 == "IFCNUMERICMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_nominalValue->setIfcNumericMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCURRENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_nominalValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOUNTMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_nominalValue->setIfcCountMeasure(tmp_attr1);
                }
                if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                if (type1 == "IFCAREAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcAreaMeasure(tmp_attr1);
                }
                if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOMPLEXNUMBER") {
                    Step::Array< Step::Real > tmp_attr1;
                    tmp_attr1.setUnset(false);
                    while (true) {
                        std::string str2;
                        Step::getSubParameter(arg, str2);
                        if (str2 != "") {
                            Step::Real attr3;
                            attr3 = Step::spfToReal(str2);
                            tmp_attr1.push_back(attr3);
                        }
                        else {
                            break;
                        }
                    }
                    m_nominalValue->setIfcComplexNumber(tmp_attr1);
                }
                if (type1 == "IFCINTEGER") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_nominalValue->setIfcInteger(tmp_attr1);
                }
                if (type1 == "IFCREAL") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcReal(tmp_attr1);
                }
                if (type1 == "IFCBOOLEAN") {
                    Step::Bool tmp_attr1;
                    tmp_attr1 = Step::spfToBool(arg);
                    m_nominalValue->setIfcBoolean(tmp_attr1);
                }
                if (type1 == "IFCIDENTIFIER") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_nominalValue->setIfcIdentifier(tmp_attr1);
                }
                if (type1 == "IFCTEXT") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_nominalValue->setIfcText(tmp_attr1);
                }
                if (type1 == "IFCLABEL") {
                    std::string tmp_attr1;
                    tmp_attr1 = Step::spfToString(arg);
                    m_nominalValue->setIfcLabel(tmp_attr1);
                }
                if (type1 == "IFCLOGICAL") {
                    Step::Logical tmp_attr1;
                    tmp_attr1 = Step::spfToLogical(arg);
                    m_nominalValue->setIfcLogical(tmp_attr1);
                }
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMESTAMP") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_nominalValue->setIfcTimeStamp(tmp_attr1);
                }
                if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_nominalValue->setIfcIntegerCountRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCENERGYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcEnergyMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
                    Step::List< Step::Integer > tmp_attr1;
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
                    m_nominalValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCANGULARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCINDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcInductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCILLUMINANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCHARGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCABSORBEDDOSEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                if (type1 == "IFCRADIOACTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCTORQUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcTorqueMeasure(tmp_attr1);
                }
                if (type1 == "IFCACCELERATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCSHEARMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                if (type1 == "IFCCURVATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSPERLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGCONSTANTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATINGVALUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                if (type1 == "IFCPHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcPHMeasure(tmp_attr1);
                }
                if (type1 == "IFCIONCONCENTRATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_nominalValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unit = NULL;
    }
    else {
        m_unit = new IfcUnit;
        if (arg[0] == '#') {
            m_unit->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcPropertySingleValue::copy(const IfcPropertySingleValue &obj, const CopyOp &copyop) {
    IfcSimpleProperty::copy(obj, copyop);
    m_nominalValue = new IfcValue;
    m_nominalValue->copy(*(obj.m_nominalValue.get()), copyop);
    m_unit = new IfcUnit;
    m_unit->copy(*(obj.m_unit.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertySingleValue::s_type("IfcPropertySingleValue");
