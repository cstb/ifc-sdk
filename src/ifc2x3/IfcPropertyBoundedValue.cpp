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



#include <ifc2x3/IfcPropertyBoundedValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSimpleProperty.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPropertyBoundedValue::IfcPropertyBoundedValue(Step::Id id, Step::SPFData *args) : IfcSimpleProperty(id, args) {
    m_upperBoundValue = NULL;
    m_lowerBoundValue = NULL;
    m_unit = NULL;
}

IfcPropertyBoundedValue::~IfcPropertyBoundedValue() {
}

bool IfcPropertyBoundedValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertyBoundedValue(this);
}

const std::string &IfcPropertyBoundedValue::type() const {
    return IfcPropertyBoundedValue::s_type.getName();
}

const Step::ClassType &IfcPropertyBoundedValue::getClassType() {
    return IfcPropertyBoundedValue::s_type;
}

const Step::ClassType &IfcPropertyBoundedValue::getType() const {
    return IfcPropertyBoundedValue::s_type;
}

bool IfcPropertyBoundedValue::isOfType(const Step::ClassType &t) const {
    return IfcPropertyBoundedValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

IfcValue *IfcPropertyBoundedValue::getUpperBoundValue() {
    if (Step::BaseObject::inited()) {
        return m_upperBoundValue.get();
    }
    else {
        return NULL;
    }
}

const IfcValue *IfcPropertyBoundedValue::getUpperBoundValue() const {
    IfcPropertyBoundedValue * deConstObject = const_cast< IfcPropertyBoundedValue * > (this);
    return deConstObject->getUpperBoundValue();
}

void IfcPropertyBoundedValue::setUpperBoundValue(const Step::RefPtr< IfcValue > &value) {
    m_upperBoundValue = value;
}

void IfcPropertyBoundedValue::unsetUpperBoundValue() {
    m_upperBoundValue = Step::getUnset(getUpperBoundValue());
}

bool IfcPropertyBoundedValue::testUpperBoundValue() const {
    return !Step::isUnset(getUpperBoundValue());
}

IfcValue *IfcPropertyBoundedValue::getLowerBoundValue() {
    if (Step::BaseObject::inited()) {
        return m_lowerBoundValue.get();
    }
    else {
        return NULL;
    }
}

const IfcValue *IfcPropertyBoundedValue::getLowerBoundValue() const {
    IfcPropertyBoundedValue * deConstObject = const_cast< IfcPropertyBoundedValue * > (this);
    return deConstObject->getLowerBoundValue();
}

void IfcPropertyBoundedValue::setLowerBoundValue(const Step::RefPtr< IfcValue > &value) {
    m_lowerBoundValue = value;
}

void IfcPropertyBoundedValue::unsetLowerBoundValue() {
    m_lowerBoundValue = Step::getUnset(getLowerBoundValue());
}

bool IfcPropertyBoundedValue::testLowerBoundValue() const {
    return !Step::isUnset(getLowerBoundValue());
}

IfcUnit *IfcPropertyBoundedValue::getUnit() {
    if (Step::BaseObject::inited()) {
        return m_unit.get();
    }
    else {
        return NULL;
    }
}

const IfcUnit *IfcPropertyBoundedValue::getUnit() const {
    IfcPropertyBoundedValue * deConstObject = const_cast< IfcPropertyBoundedValue * > (this);
    return deConstObject->getUnit();
}

void IfcPropertyBoundedValue::setUnit(const Step::RefPtr< IfcUnit > &value) {
    m_unit = value;
}

void IfcPropertyBoundedValue::unsetUnit() {
    m_unit = Step::getUnset(getUnit());
}

bool IfcPropertyBoundedValue::testUnit() const {
    return !Step::isUnset(getUnit());
}

bool IfcPropertyBoundedValue::init() {
    bool status = IfcSimpleProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_upperBoundValue = NULL;
    }
    else {
        m_upperBoundValue = new IfcValue;
        if (arg[0] == '#') {
            m_upperBoundValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcVolumeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcTimeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOLIDANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPARAMETERVALUE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcParameterValue(tmp_attr1);
                }
                if (type1 == "IFCNUMERICMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperBoundValue->setIfcNumericMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCURRENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_upperBoundValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOUNTMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperBoundValue->setIfcCountMeasure(tmp_attr1);
                }
                if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                if (type1 == "IFCAREAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcAreaMeasure(tmp_attr1);
                }
                if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOMPLEXNUMBER") {
                    Array_Real_1_2 tmp_attr1;
                    Array_Real_1_2::iterator it_tmp_attr1 = tmp_attr1.begin();
                    tmp_attr1.setUnset(false);
                    while (true) {
                        std::string str2;
                        Step::getSubParameter(arg, str2);
                        if (str2 != "") {
                            Step::Real attr3;
                            attr3 = Step::spfToReal(str2);
                            *(it_tmp_attr1++) = attr3;
                        }
                        else {
                            break;
                        }
                    }
                    m_upperBoundValue->setIfcComplexNumber(tmp_attr1);
                }
                if (type1 == "IFCINTEGER") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperBoundValue->setIfcInteger(tmp_attr1);
                }
                if (type1 == "IFCREAL") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcReal(tmp_attr1);
                }
                if (type1 == "IFCBOOLEAN") {
                    Step::Boolean tmp_attr1;
                    tmp_attr1 = Step::spfToBoolean(arg);
                    m_upperBoundValue->setIfcBoolean(tmp_attr1);
                }
                if (type1 == "IFCIDENTIFIER") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_upperBoundValue->setIfcIdentifier(tmp_attr1);
                }
                if (type1 == "IFCTEXT") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_upperBoundValue->setIfcText(tmp_attr1);
                }
                if (type1 == "IFCLABEL") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_upperBoundValue->setIfcLabel(tmp_attr1);
                }
                if (type1 == "IFCLOGICAL") {
                    Step::Logical tmp_attr1;
                    tmp_attr1 = Step::spfToLogical(arg);
                    m_upperBoundValue->setIfcLogical(tmp_attr1);
                }
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMESTAMP") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperBoundValue->setIfcTimeStamp(tmp_attr1);
                }
                if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperBoundValue->setIfcIntegerCountRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCENERGYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcEnergyMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
                    m_upperBoundValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCANGULARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCINDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcInductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCILLUMINANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCHARGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCABSORBEDDOSEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                if (type1 == "IFCRADIOACTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCTORQUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcTorqueMeasure(tmp_attr1);
                }
                if (type1 == "IFCACCELERATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCSHEARMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                if (type1 == "IFCCURVATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSPERLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGCONSTANTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATINGVALUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                if (type1 == "IFCPHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcPHMeasure(tmp_attr1);
                }
                if (type1 == "IFCIONCONCENTRATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperBoundValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lowerBoundValue = NULL;
    }
    else {
        m_lowerBoundValue = new IfcValue;
        if (arg[0] == '#') {
            m_lowerBoundValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcVolumeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcTimeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOLIDANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPARAMETERVALUE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcParameterValue(tmp_attr1);
                }
                if (type1 == "IFCNUMERICMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerBoundValue->setIfcNumericMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCURRENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_lowerBoundValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOUNTMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerBoundValue->setIfcCountMeasure(tmp_attr1);
                }
                if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                if (type1 == "IFCAREAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcAreaMeasure(tmp_attr1);
                }
                if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOMPLEXNUMBER") {
                    Array_Real_1_2 tmp_attr1;
                    Array_Real_1_2::iterator it_tmp_attr1 = tmp_attr1.begin();
                    tmp_attr1.setUnset(false);
                    while (true) {
                        std::string str2;
                        Step::getSubParameter(arg, str2);
                        if (str2 != "") {
                            Step::Real attr3;
                            attr3 = Step::spfToReal(str2);
                            *(it_tmp_attr1++) = attr3;
                        }
                        else {
                            break;
                        }
                    }
                    m_lowerBoundValue->setIfcComplexNumber(tmp_attr1);
                }
                if (type1 == "IFCINTEGER") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerBoundValue->setIfcInteger(tmp_attr1);
                }
                if (type1 == "IFCREAL") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcReal(tmp_attr1);
                }
                if (type1 == "IFCBOOLEAN") {
                    Step::Boolean tmp_attr1;
                    tmp_attr1 = Step::spfToBoolean(arg);
                    m_lowerBoundValue->setIfcBoolean(tmp_attr1);
                }
                if (type1 == "IFCIDENTIFIER") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_lowerBoundValue->setIfcIdentifier(tmp_attr1);
                }
                if (type1 == "IFCTEXT") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_lowerBoundValue->setIfcText(tmp_attr1);
                }
                if (type1 == "IFCLABEL") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_lowerBoundValue->setIfcLabel(tmp_attr1);
                }
                if (type1 == "IFCLOGICAL") {
                    Step::Logical tmp_attr1;
                    tmp_attr1 = Step::spfToLogical(arg);
                    m_lowerBoundValue->setIfcLogical(tmp_attr1);
                }
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMESTAMP") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerBoundValue->setIfcTimeStamp(tmp_attr1);
                }
                if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerBoundValue->setIfcIntegerCountRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCENERGYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcEnergyMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
                    m_lowerBoundValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCANGULARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCINDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcInductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCILLUMINANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCHARGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCABSORBEDDOSEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                if (type1 == "IFCRADIOACTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCTORQUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcTorqueMeasure(tmp_attr1);
                }
                if (type1 == "IFCACCELERATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCSHEARMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                if (type1 == "IFCCURVATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSPERLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGCONSTANTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATINGVALUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                if (type1 == "IFCPHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcPHMeasure(tmp_attr1);
                }
                if (type1 == "IFCIONCONCENTRATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerBoundValue->setIfcIonConcentrationMeasure(tmp_attr1);
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
            m_unit->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcPropertyBoundedValue::copy(const IfcPropertyBoundedValue &obj, const CopyOp &copyop) {
    IfcSimpleProperty::copy(obj, copyop);
    m_upperBoundValue = new IfcValue;
    m_upperBoundValue->copy(*(obj.m_upperBoundValue.get()), copyop);
    m_lowerBoundValue = new IfcValue;
    m_lowerBoundValue->copy(*(obj.m_lowerBoundValue.get()), copyop);
    m_unit = new IfcUnit;
    m_unit->copy(*(obj.m_unit.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertyBoundedValue::s_type("IfcPropertyBoundedValue");
