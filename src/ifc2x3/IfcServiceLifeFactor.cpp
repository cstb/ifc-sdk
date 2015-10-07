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



#include <ifc2x3/IfcServiceLifeFactor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMeasureValue.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
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

IfcServiceLifeFactor::IfcServiceLifeFactor(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_predefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
    m_upperValue = NULL;
    m_mostUsedValue = NULL;
    m_lowerValue = NULL;
}

IfcServiceLifeFactor::~IfcServiceLifeFactor() {
}

bool IfcServiceLifeFactor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcServiceLifeFactor(this);
}

const std::string &IfcServiceLifeFactor::type() const {
    return IfcServiceLifeFactor::s_type.getName();
}

const Step::ClassType &IfcServiceLifeFactor::getClassType() {
    return IfcServiceLifeFactor::s_type;
}

const Step::ClassType &IfcServiceLifeFactor::getType() const {
    return IfcServiceLifeFactor::s_type;
}

bool IfcServiceLifeFactor::isOfType(const Step::ClassType &t) const {
    return IfcServiceLifeFactor::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcServiceLifeFactorTypeEnum IfcServiceLifeFactor::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcServiceLifeFactorTypeEnum_UNSET;
    }
}

const IfcServiceLifeFactorTypeEnum IfcServiceLifeFactor::getPredefinedType() const {
    IfcServiceLifeFactor * deConstObject = const_cast< IfcServiceLifeFactor * > (this);
    return deConstObject->getPredefinedType();
}

void IfcServiceLifeFactor::setPredefinedType(IfcServiceLifeFactorTypeEnum value) {
    m_predefinedType = value;
}

void IfcServiceLifeFactor::unsetPredefinedType() {
    m_predefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
}

bool IfcServiceLifeFactor::testPredefinedType() const {
    return getPredefinedType() != IfcServiceLifeFactorTypeEnum_UNSET;
}

IfcMeasureValue *IfcServiceLifeFactor::getUpperValue() {
    if (Step::BaseObject::inited()) {
        return m_upperValue.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureValue *IfcServiceLifeFactor::getUpperValue() const {
    IfcServiceLifeFactor * deConstObject = const_cast< IfcServiceLifeFactor * > (this);
    return deConstObject->getUpperValue();
}

void IfcServiceLifeFactor::setUpperValue(const Step::RefPtr< IfcMeasureValue > &value) {
    m_upperValue = value;
}

void IfcServiceLifeFactor::unsetUpperValue() {
    m_upperValue = Step::getUnset(getUpperValue());
}

bool IfcServiceLifeFactor::testUpperValue() const {
    return !Step::isUnset(getUpperValue());
}

IfcMeasureValue *IfcServiceLifeFactor::getMostUsedValue() {
    if (Step::BaseObject::inited()) {
        return m_mostUsedValue.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureValue *IfcServiceLifeFactor::getMostUsedValue() const {
    IfcServiceLifeFactor * deConstObject = const_cast< IfcServiceLifeFactor * > (this);
    return deConstObject->getMostUsedValue();
}

void IfcServiceLifeFactor::setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value) {
    m_mostUsedValue = value;
}

void IfcServiceLifeFactor::unsetMostUsedValue() {
    m_mostUsedValue = Step::getUnset(getMostUsedValue());
}

bool IfcServiceLifeFactor::testMostUsedValue() const {
    return !Step::isUnset(getMostUsedValue());
}

IfcMeasureValue *IfcServiceLifeFactor::getLowerValue() {
    if (Step::BaseObject::inited()) {
        return m_lowerValue.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureValue *IfcServiceLifeFactor::getLowerValue() const {
    IfcServiceLifeFactor * deConstObject = const_cast< IfcServiceLifeFactor * > (this);
    return deConstObject->getLowerValue();
}

void IfcServiceLifeFactor::setLowerValue(const Step::RefPtr< IfcMeasureValue > &value) {
    m_lowerValue = value;
}

void IfcServiceLifeFactor::unsetLowerValue() {
    m_lowerValue = Step::getUnset(getLowerValue());
}

bool IfcServiceLifeFactor::testLowerValue() const {
    return !Step::isUnset(getLowerValue());
}

bool IfcServiceLifeFactor::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
    }
    else {
        if (arg == ".A_QUALITYOFCOMPONENTS.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_A_QUALITYOFCOMPONENTS;
        }
        else if (arg == ".B_DESIGNLEVEL.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_B_DESIGNLEVEL;
        }
        else if (arg == ".C_WORKEXECUTIONLEVEL.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_C_WORKEXECUTIONLEVEL;
        }
        else if (arg == ".D_INDOORENVIRONMENT.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_D_INDOORENVIRONMENT;
        }
        else if (arg == ".E_OUTDOORENVIRONMENT.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_E_OUTDOORENVIRONMENT;
        }
        else if (arg == ".F_INUSECONDITIONS.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_F_INUSECONDITIONS;
        }
        else if (arg == ".G_MAINTENANCELEVEL.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_G_MAINTENANCELEVEL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcServiceLifeFactorTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_upperValue = NULL;
    }
    else {
        m_upperValue = new IfcMeasureValue;
        if (arg[0] == '#') {
            m_upperValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_upperValue->setIfcVolumeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcTimeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOLIDANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPARAMETERVALUE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcParameterValue(tmp_attr1);
                }
                if (type1 == "IFCNUMERICMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperValue->setIfcNumericMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCURRENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_upperValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOUNTMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_upperValue->setIfcCountMeasure(tmp_attr1);
                }
                if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                if (type1 == "IFCAREAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcAreaMeasure(tmp_attr1);
                }
                if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_upperValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
                    m_upperValue->setIfcComplexNumber(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mostUsedValue = NULL;
    }
    else {
        m_mostUsedValue = new IfcMeasureValue;
        if (arg[0] == '#') {
            m_mostUsedValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_mostUsedValue->setIfcVolumeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcTimeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOLIDANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPARAMETERVALUE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcParameterValue(tmp_attr1);
                }
                if (type1 == "IFCNUMERICMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_mostUsedValue->setIfcNumericMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCURRENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_mostUsedValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOUNTMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_mostUsedValue->setIfcCountMeasure(tmp_attr1);
                }
                if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                if (type1 == "IFCAREAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcAreaMeasure(tmp_attr1);
                }
                if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_mostUsedValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
                    m_mostUsedValue->setIfcComplexNumber(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lowerValue = NULL;
    }
    else {
        m_lowerValue = new IfcMeasureValue;
        if (arg[0] == '#') {
            m_lowerValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_lowerValue->setIfcVolumeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcTimeMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOLIDANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVERATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCPARAMETERVALUE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcParameterValue(tmp_attr1);
                }
                if (type1 == "IFCNUMERICMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerValue->setIfcNumericMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOSITIVELENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCURRENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                if (type1 == "IFCDESCRIPTIVEMEASURE") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_lowerValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOUNTMEASURE") {
                    Step::Number tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_lowerValue->setIfcCountMeasure(tmp_attr1);
                }
                if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                if (type1 == "IFCAREAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcAreaMeasure(tmp_attr1);
                }
                if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCNORMALISEDRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_lowerValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
                    m_lowerValue->setIfcComplexNumber(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcServiceLifeFactor::copy(const IfcServiceLifeFactor &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    m_upperValue = new IfcMeasureValue;
    m_upperValue->copy(*(obj.m_upperValue.get()), copyop);
    m_mostUsedValue = new IfcMeasureValue;
    m_mostUsedValue->copy(*(obj.m_mostUsedValue.get()), copyop);
    m_lowerValue = new IfcMeasureValue;
    m_lowerValue->copy(*(obj.m_lowerValue.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcServiceLifeFactor::s_type("IfcServiceLifeFactor");
