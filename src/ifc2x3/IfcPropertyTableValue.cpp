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



#include <ifc2x3/IfcPropertyTableValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSimpleProperty.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPropertyTableValue::IfcPropertyTableValue(Step::Id id, Step::SPFData *args) : IfcSimpleProperty(id, args) {
    m_expression = Step::getUnset(m_expression);
    m_definingUnit = NULL;
    m_definedUnit = NULL;
}

IfcPropertyTableValue::~IfcPropertyTableValue() {
}

bool IfcPropertyTableValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertyTableValue(this);
}

const std::string &IfcPropertyTableValue::type() const {
    return IfcPropertyTableValue::s_type.getName();
}

const Step::ClassType &IfcPropertyTableValue::getClassType() {
    return IfcPropertyTableValue::s_type;
}

const Step::ClassType &IfcPropertyTableValue::getType() const {
    return IfcPropertyTableValue::s_type;
}

bool IfcPropertyTableValue::isOfType(const Step::ClassType &t) const {
    return IfcPropertyTableValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

List_IfcValue_1_n &IfcPropertyTableValue::getDefiningValues() {
    if (Step::BaseObject::inited()) {
        return m_definingValues;
    }
    else {
        m_definingValues.setUnset(true);
        return m_definingValues;
    }
}

const List_IfcValue_1_n &IfcPropertyTableValue::getDefiningValues() const {
    IfcPropertyTableValue * deConstObject = const_cast< IfcPropertyTableValue * > (this);
    return deConstObject->getDefiningValues();
}

void IfcPropertyTableValue::setDefiningValues(const List_IfcValue_1_n &value) {
    m_definingValues = value;
}

void IfcPropertyTableValue::unsetDefiningValues() {
    m_definingValues.clear();
    m_definingValues.setUnset(true);
}

bool IfcPropertyTableValue::testDefiningValues() const {
    return !m_definingValues.isUnset();
}

List_IfcValue_1_n &IfcPropertyTableValue::getDefinedValues() {
    if (Step::BaseObject::inited()) {
        return m_definedValues;
    }
    else {
        m_definedValues.setUnset(true);
        return m_definedValues;
    }
}

const List_IfcValue_1_n &IfcPropertyTableValue::getDefinedValues() const {
    IfcPropertyTableValue * deConstObject = const_cast< IfcPropertyTableValue * > (this);
    return deConstObject->getDefinedValues();
}

void IfcPropertyTableValue::setDefinedValues(const List_IfcValue_1_n &value) {
    m_definedValues = value;
}

void IfcPropertyTableValue::unsetDefinedValues() {
    m_definedValues.clear();
    m_definedValues.setUnset(true);
}

bool IfcPropertyTableValue::testDefinedValues() const {
    return !m_definedValues.isUnset();
}

IfcText IfcPropertyTableValue::getExpression() {
    if (Step::BaseObject::inited()) {
        return m_expression;
    }
    else {
        return Step::getUnset(m_expression);
    }
}

const IfcText IfcPropertyTableValue::getExpression() const {
    IfcPropertyTableValue * deConstObject = const_cast< IfcPropertyTableValue * > (this);
    return deConstObject->getExpression();
}

void IfcPropertyTableValue::setExpression(const IfcText &value) {
    m_expression = value;
}

void IfcPropertyTableValue::unsetExpression() {
    m_expression = Step::getUnset(getExpression());
}

bool IfcPropertyTableValue::testExpression() const {
    return !Step::isUnset(getExpression());
}

IfcUnit *IfcPropertyTableValue::getDefiningUnit() {
    if (Step::BaseObject::inited()) {
        return m_definingUnit.get();
    }
    else {
        return NULL;
    }
}

const IfcUnit *IfcPropertyTableValue::getDefiningUnit() const {
    IfcPropertyTableValue * deConstObject = const_cast< IfcPropertyTableValue * > (this);
    return deConstObject->getDefiningUnit();
}

void IfcPropertyTableValue::setDefiningUnit(const Step::RefPtr< IfcUnit > &value) {
    m_definingUnit = value;
}

void IfcPropertyTableValue::unsetDefiningUnit() {
    m_definingUnit = Step::getUnset(getDefiningUnit());
}

bool IfcPropertyTableValue::testDefiningUnit() const {
    return !Step::isUnset(getDefiningUnit());
}

IfcUnit *IfcPropertyTableValue::getDefinedUnit() {
    if (Step::BaseObject::inited()) {
        return m_definedUnit.get();
    }
    else {
        return NULL;
    }
}

const IfcUnit *IfcPropertyTableValue::getDefinedUnit() const {
    IfcPropertyTableValue * deConstObject = const_cast< IfcPropertyTableValue * > (this);
    return deConstObject->getDefinedUnit();
}

void IfcPropertyTableValue::setDefinedUnit(const Step::RefPtr< IfcUnit > &value) {
    m_definedUnit = value;
}

void IfcPropertyTableValue::unsetDefinedUnit() {
    m_definedUnit = Step::getUnset(getDefinedUnit());
}

bool IfcPropertyTableValue::testDefinedUnit() const {
    return !Step::isUnset(getDefinedUnit());
}

bool IfcPropertyTableValue::init() {
    bool status = IfcSimpleProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definingValues.setUnset(true);
    }
    else {
        m_definingValues.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcValue > attr2;
                attr2 = new IfcValue;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCVOLUMEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVolumeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTIMEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTimeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermodynamicTemperatureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOLIDANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSolidAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVERATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositiveRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCRATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositivePlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPLANEANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPARAMETERVALUE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                        if (type2 == "IFCNUMERICMEASURE") {
                            Step::Number tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcNumericMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVELENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositiveLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCURRENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricCurrentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDESCRIPTIVEMEASURE") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcDescriptiveMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOUNTMEASURE") {
                            Step::Number tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcCountMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCONTEXTDEPENDENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcContextDependentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCAREAMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAreaMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAmountOfSubstanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSINTENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousIntensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCNORMALISEDRATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcNormalisedRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOMPLEXNUMBER") {
                            Array_Real_1_2 tmp_attr2;
                            Array_Real_1_2::iterator it_tmp_attr2 = tmp_attr2.begin();
                            tmp_attr2.setUnset(false);
                            while (true) {
                                std::string str3;
                                Step::getSubParameter(str1, str3);
                                if (str3 != "") {
                                    Step::Real attr4;
                                    attr4 = Step::spfToReal(str3);
                                    *(it_tmp_attr2++) = attr4;
                                }
                                else {
                                    break;
                                }
                            }
                            attr2->setIfcComplexNumber(tmp_attr2);
                        }
                        if (type2 == "IFCINTEGER") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcInteger(tmp_attr2);
                        }
                        if (type2 == "IFCREAL") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcReal(tmp_attr2);
                        }
                        if (type2 == "IFCBOOLEAN") {
                            Step::Boolean tmp_attr2;
                            tmp_attr2 = Step::spfToBoolean(str1);
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        if (type2 == "IFCIDENTIFIER") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        if (type2 == "IFCTEXT") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcText(tmp_attr2);
                        }
                        if (type2 == "IFCLABEL") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcLabel(tmp_attr2);
                        }
                        if (type2 == "IFCLOGICAL") {
                            Step::Logical tmp_attr2;
                            tmp_attr2 = Step::spfToLogical(str1);
                            attr2->setIfcLogical(tmp_attr2);
                        }
                        if (type2 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVolumetricFlowRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTIMESTAMP") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcTimeStamp(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalTransmittanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALRESISTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalResistanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALADMITTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalAdmittanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPRESSUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPressureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOWERMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPowerMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSFLOWRATEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassFlowRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARVELOCITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearVelocityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCKINEMATICVISCOSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcKinematicViscosityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCINTEGERCOUNTRATEMEASURE") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcIntegerCountRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCHEATFLUXDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcHeatFluxDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCFREQUENCYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcFrequencyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCENERGYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcEnergyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICVOLTAGEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricVoltageMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDYNAMICVISCOSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcDynamicViscosityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
                            List_Integer_3_4 tmp_attr2;
                            tmp_attr2.setUnset(false);
                            while (true) {
                                std::string str3;
                                Step::getSubParameter(str1, str3);
                                if (str3 != "") {
                                    Step::Integer attr4;
                                    attr4 = Step::spfToInteger(str3);
                                    tmp_attr2.push_back(attr4);
                                }
                                else {
                                    break;
                                }
                            }
                            attr2->setIfcCompoundPlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCANGULARVELOCITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAngularVelocityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalConductivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOLECULARWEIGHTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMolecularWeightMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCVAPORPERMEABILITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVaporPermeabilityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMoistureDiffusivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIsothermalMoistureCapacityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSpecificHeatCapacityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMONETARYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMonetaryMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMagneticFluxDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMAGNETICFLUXMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMagneticFluxMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSFLUXMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousFluxMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCINDUCTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcInductanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCILLUMINANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIlluminanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICRESISTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricResistanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCONDUCTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricConductanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCHARGEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricChargeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDOSEEQUIVALENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcDoseEquivalentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCAPACITANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricCapacitanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCABSORBEDDOSEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAbsorbedDoseMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCRADIOACTIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRadioActivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALFREQUENCYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalFrequencyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTORQUEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTorqueMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCACCELERATIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAccelerationMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARSTIFFNESSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearStiffnessMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFELASTICITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfElasticityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOMENTOFINERTIAMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMomentOfInertiaMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPLANARFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPlanarForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALSTIFFNESSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalStiffnessMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSHEARMODULUSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcShearModulusMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARMOMENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearMomentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousIntensityDistributionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCURVATUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcCurvatureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSPERLENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassPerLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALMASSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalMassMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSectionalAreaIntegralMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSECTIONMODULUSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSectionModulusMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTEMPERATUREGRADIENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTemperatureGradientMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalExpansionCoefficientMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCWARPINGCONSTANTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcWarpingConstantMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCWARPINGMOMENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcWarpingMomentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOUNDPOWERMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSoundPowerMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOUNDPRESSUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSoundPressureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCHEATINGVALUEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcHeatingValueMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPHMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCIONCONCENTRATIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIonConcentrationMeasure(tmp_attr2);
                        }
                    }
                }
                m_definingValues.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definedValues.setUnset(true);
    }
    else {
        m_definedValues.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcValue > attr2;
                attr2 = new IfcValue;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCVOLUMEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVolumeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTIMEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTimeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermodynamicTemperatureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOLIDANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSolidAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVERATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositiveRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCRATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositivePlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPLANEANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPARAMETERVALUE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                        if (type2 == "IFCNUMERICMEASURE") {
                            Step::Number tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcNumericMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVELENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositiveLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCURRENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricCurrentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDESCRIPTIVEMEASURE") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcDescriptiveMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOUNTMEASURE") {
                            Step::Number tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcCountMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCONTEXTDEPENDENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcContextDependentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCAREAMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAreaMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAmountOfSubstanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSINTENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousIntensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCNORMALISEDRATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcNormalisedRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOMPLEXNUMBER") {
                            Array_Real_1_2 tmp_attr2;
                            Array_Real_1_2::iterator it_tmp_attr2 = tmp_attr2.begin();
                            tmp_attr2.setUnset(false);
                            while (true) {
                                std::string str3;
                                Step::getSubParameter(str1, str3);
                                if (str3 != "") {
                                    Step::Real attr4;
                                    attr4 = Step::spfToReal(str3);
                                    *(it_tmp_attr2++) = attr4;
                                }
                                else {
                                    break;
                                }
                            }
                            attr2->setIfcComplexNumber(tmp_attr2);
                        }
                        if (type2 == "IFCINTEGER") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcInteger(tmp_attr2);
                        }
                        if (type2 == "IFCREAL") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcReal(tmp_attr2);
                        }
                        if (type2 == "IFCBOOLEAN") {
                            Step::Boolean tmp_attr2;
                            tmp_attr2 = Step::spfToBoolean(str1);
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        if (type2 == "IFCIDENTIFIER") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        if (type2 == "IFCTEXT") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcText(tmp_attr2);
                        }
                        if (type2 == "IFCLABEL") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcLabel(tmp_attr2);
                        }
                        if (type2 == "IFCLOGICAL") {
                            Step::Logical tmp_attr2;
                            tmp_attr2 = Step::spfToLogical(str1);
                            attr2->setIfcLogical(tmp_attr2);
                        }
                        if (type2 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVolumetricFlowRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTIMESTAMP") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcTimeStamp(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalTransmittanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALRESISTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalResistanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALADMITTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalAdmittanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPRESSUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPressureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOWERMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPowerMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSFLOWRATEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassFlowRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARVELOCITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearVelocityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCKINEMATICVISCOSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcKinematicViscosityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCINTEGERCOUNTRATEMEASURE") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcIntegerCountRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCHEATFLUXDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcHeatFluxDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCFREQUENCYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcFrequencyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCENERGYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcEnergyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICVOLTAGEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricVoltageMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDYNAMICVISCOSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcDynamicViscosityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
                            List_Integer_3_4 tmp_attr2;
                            tmp_attr2.setUnset(false);
                            while (true) {
                                std::string str3;
                                Step::getSubParameter(str1, str3);
                                if (str3 != "") {
                                    Step::Integer attr4;
                                    attr4 = Step::spfToInteger(str3);
                                    tmp_attr2.push_back(attr4);
                                }
                                else {
                                    break;
                                }
                            }
                            attr2->setIfcCompoundPlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCANGULARVELOCITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAngularVelocityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalConductivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOLECULARWEIGHTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMolecularWeightMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCVAPORPERMEABILITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVaporPermeabilityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMoistureDiffusivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIsothermalMoistureCapacityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSpecificHeatCapacityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMONETARYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMonetaryMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMagneticFluxDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMAGNETICFLUXMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMagneticFluxMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSFLUXMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousFluxMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCINDUCTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcInductanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCILLUMINANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIlluminanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICRESISTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricResistanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCONDUCTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricConductanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCHARGEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricChargeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDOSEEQUIVALENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcDoseEquivalentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCAPACITANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricCapacitanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCABSORBEDDOSEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAbsorbedDoseMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCRADIOACTIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRadioActivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALFREQUENCYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalFrequencyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTORQUEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTorqueMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCACCELERATIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAccelerationMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARSTIFFNESSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearStiffnessMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFELASTICITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfElasticityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOMENTOFINERTIAMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMomentOfInertiaMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPLANARFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPlanarForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALSTIFFNESSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalStiffnessMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSHEARMODULUSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcShearModulusMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARMOMENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearMomentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousIntensityDistributionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCURVATUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcCurvatureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSPERLENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassPerLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALMASSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalMassMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSectionalAreaIntegralMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSECTIONMODULUSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSectionModulusMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTEMPERATUREGRADIENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTemperatureGradientMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalExpansionCoefficientMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCWARPINGCONSTANTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcWarpingConstantMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCWARPINGMOMENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcWarpingMomentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOUNDPOWERMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSoundPowerMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOUNDPRESSUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSoundPressureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCHEATINGVALUEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcHeatingValueMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPHMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCIONCONCENTRATIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIonConcentrationMeasure(tmp_attr2);
                        }
                    }
                }
                m_definedValues.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_expression = Step::getUnset(m_expression);
    }
    else {
        m_expression = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definingUnit = NULL;
    }
    else {
        m_definingUnit = new IfcUnit;
        if (arg[0] == '#') {
            m_definingUnit->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definedUnit = NULL;
    }
    else {
        m_definedUnit = new IfcUnit;
        if (arg[0] == '#') {
            m_definedUnit->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcPropertyTableValue::copy(const IfcPropertyTableValue &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcValue >, 1 >::const_iterator it_m_definingValues;
    Step::List< Step::RefPtr< IfcValue >, 1 >::const_iterator it_m_definedValues;
    IfcSimpleProperty::copy(obj, copyop);
    for (it_m_definingValues = obj.m_definingValues.begin(); it_m_definingValues != obj.m_definingValues.end(); ++it_m_definingValues) {
        Step::RefPtr< IfcValue > copyTarget = new IfcValue;
        copyTarget->copy(*((*it_m_definingValues).get()), copyop);
        m_definingValues.push_back(copyTarget.get());
    }
    for (it_m_definedValues = obj.m_definedValues.begin(); it_m_definedValues != obj.m_definedValues.end(); ++it_m_definedValues) {
        Step::RefPtr< IfcValue > copyTarget = new IfcValue;
        copyTarget->copy(*((*it_m_definedValues).get()), copyop);
        m_definedValues.push_back(copyTarget.get());
    }
    setExpression(obj.m_expression);
    if (obj.m_definingUnit.valid())
    {
        m_definingUnit = new IfcUnit;
        m_definingUnit->copy(*(obj.m_definingUnit.get()), copyop);
    }
    if (obj.m_definedUnit.valid())
    {
        m_definedUnit = new IfcUnit;
        m_definedUnit->copy(*(obj.m_definedUnit.get()), copyop);
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertyTableValue::s_type("IfcPropertyTableValue");
