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



#include <ifc2x3/IfcMeasureValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcMeasureValue::IfcMeasureValue() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcMeasureValue::IfcMeasureValue(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcMeasureValue::~IfcMeasureValue() {
    deleteUnion();
}

bool IfcMeasureValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMeasureValue(this);
}

bool IfcMeasureValue::init() {
    return false;
}

const std::string &IfcMeasureValue::type() const {
    return IfcMeasureValue::s_type.getName();
}

const Step::ClassType &IfcMeasureValue::getClassType() {
    return IfcMeasureValue::s_type;
}

const Step::ClassType &IfcMeasureValue::getType() const {
    return IfcMeasureValue::s_type;
}

bool IfcMeasureValue::isOfType(const Step::ClassType &t) const {
    return IfcMeasureValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcMeasureValue::copy(const IfcMeasureValue &obj, const CopyOp &/*copyop*/) {
    Step::Array< Step::Real, 1, 2 >::const_iterator it_IfcComplexNumber;
    Step::Array< Step::Real, 1, 2 >::iterator it_current_IfcComplexNumber;
    switch(obj.m_type) {
    case IFCVOLUMEMEASURE:
        setIfcVolumeMeasure(obj.m_IfcMeasureValue_union.m_IfcVolumeMeasure);
        break;
    case IFCTIMEMEASURE:
        setIfcTimeMeasure(obj.m_IfcMeasureValue_union.m_IfcTimeMeasure);
        break;
    case IFCTHERMODYNAMICTEMPERATUREMEASURE:
        setIfcThermodynamicTemperatureMeasure(obj.m_IfcMeasureValue_union.m_IfcThermodynamicTemperatureMeasure);
        break;
    case IFCSOLIDANGLEMEASURE:
        setIfcSolidAngleMeasure(obj.m_IfcMeasureValue_union.m_IfcSolidAngleMeasure);
        break;
    case IFCPOSITIVERATIOMEASURE:
        setIfcPositiveRatioMeasure(obj.m_IfcMeasureValue_union.m_IfcPositiveRatioMeasure);
        break;
    case IFCRATIOMEASURE:
        setIfcRatioMeasure(obj.m_IfcMeasureValue_union.m_IfcRatioMeasure);
        break;
    case IFCPOSITIVEPLANEANGLEMEASURE:
        setIfcPositivePlaneAngleMeasure(obj.m_IfcMeasureValue_union.m_IfcPositivePlaneAngleMeasure);
        break;
    case IFCPLANEANGLEMEASURE:
        setIfcPlaneAngleMeasure(obj.m_IfcMeasureValue_union.m_IfcPlaneAngleMeasure);
        break;
    case IFCPARAMETERVALUE:
        setIfcParameterValue(obj.m_IfcMeasureValue_union.m_IfcParameterValue);
        break;
    case IFCNUMERICMEASURE:
        setIfcNumericMeasure(obj.m_IfcMeasureValue_union.m_IfcNumericMeasure);
        break;
    case IFCMASSMEASURE:
        setIfcMassMeasure(obj.m_IfcMeasureValue_union.m_IfcMassMeasure);
        break;
    case IFCPOSITIVELENGTHMEASURE:
        setIfcPositiveLengthMeasure(obj.m_IfcMeasureValue_union.m_IfcPositiveLengthMeasure);
        break;
    case IFCLENGTHMEASURE:
        setIfcLengthMeasure(obj.m_IfcMeasureValue_union.m_IfcLengthMeasure);
        break;
    case IFCELECTRICCURRENTMEASURE:
        setIfcElectricCurrentMeasure(obj.m_IfcMeasureValue_union.m_IfcElectricCurrentMeasure);
        break;
    case IFCDESCRIPTIVEMEASURE:
        setIfcDescriptiveMeasure(*obj.m_IfcMeasureValue_union.m_IfcDescriptiveMeasure);
        break;
    case IFCCOUNTMEASURE:
        setIfcCountMeasure(obj.m_IfcMeasureValue_union.m_IfcCountMeasure);
        break;
    case IFCCONTEXTDEPENDENTMEASURE:
        setIfcContextDependentMeasure(obj.m_IfcMeasureValue_union.m_IfcContextDependentMeasure);
        break;
    case IFCAREAMEASURE:
        setIfcAreaMeasure(obj.m_IfcMeasureValue_union.m_IfcAreaMeasure);
        break;
    case IFCAMOUNTOFSUBSTANCEMEASURE:
        setIfcAmountOfSubstanceMeasure(obj.m_IfcMeasureValue_union.m_IfcAmountOfSubstanceMeasure);
        break;
    case IFCLUMINOUSINTENSITYMEASURE:
        setIfcLuminousIntensityMeasure(obj.m_IfcMeasureValue_union.m_IfcLuminousIntensityMeasure);
        break;
    case IFCNORMALISEDRATIOMEASURE:
        setIfcNormalisedRatioMeasure(obj.m_IfcMeasureValue_union.m_IfcNormalisedRatioMeasure);
        break;
    case IFCCOMPLEXNUMBER:
        for (it_IfcComplexNumber = obj.m_IfcMeasureValue_union.m_IfcComplexNumber->begin(), it_current_IfcComplexNumber = m_IfcMeasureValue_union.m_IfcComplexNumber->begin(); it_IfcComplexNumber != obj.m_IfcMeasureValue_union.m_IfcComplexNumber->end(); ++it_IfcComplexNumber, ++it_current_IfcComplexNumber) {
            Step::Real copyTarget = (*it_IfcComplexNumber);
            *it_current_IfcComplexNumber = copyTarget;
        }
        break;
    default:
        break;
    }
}

std::string IfcMeasureValue::currentTypeName() const {
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
    default:
        return "UNSET";
    }
}

IfcMeasureValue::IfcMeasureValue_select IfcMeasureValue::currentType() const {
    return m_type;
}

void IfcMeasureValue::deleteUnion() {
    switch(m_type) {
    case IFCDESCRIPTIVEMEASURE:
        delete m_IfcMeasureValue_union.m_IfcDescriptiveMeasure;
        break;
    case IFCCOMPLEXNUMBER:
        delete m_IfcMeasureValue_union.m_IfcComplexNumber;
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcVolumeMeasure IfcMeasureValue::getIfcVolumeMeasure() const {
    if (m_type == IFCVOLUMEMEASURE) {
        return m_IfcMeasureValue_union.m_IfcVolumeMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcVolumeMeasure);
    }
}

void IfcMeasureValue::setIfcVolumeMeasure(IfcVolumeMeasure value) {
    m_IfcMeasureValue_union.m_IfcVolumeMeasure = value;
    m_type = IFCVOLUMEMEASURE;
}

IfcTimeMeasure IfcMeasureValue::getIfcTimeMeasure() const {
    if (m_type == IFCTIMEMEASURE) {
        return m_IfcMeasureValue_union.m_IfcTimeMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcTimeMeasure);
    }
}

void IfcMeasureValue::setIfcTimeMeasure(IfcTimeMeasure value) {
    m_IfcMeasureValue_union.m_IfcTimeMeasure = value;
    m_type = IFCTIMEMEASURE;
}

IfcThermodynamicTemperatureMeasure IfcMeasureValue::getIfcThermodynamicTemperatureMeasure() const {
    if (m_type == IFCTHERMODYNAMICTEMPERATUREMEASURE) {
        return m_IfcMeasureValue_union.m_IfcThermodynamicTemperatureMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcThermodynamicTemperatureMeasure);
    }
}

void IfcMeasureValue::setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value) {
    m_IfcMeasureValue_union.m_IfcThermodynamicTemperatureMeasure = value;
    m_type = IFCTHERMODYNAMICTEMPERATUREMEASURE;
}

IfcSolidAngleMeasure IfcMeasureValue::getIfcSolidAngleMeasure() const {
    if (m_type == IFCSOLIDANGLEMEASURE) {
        return m_IfcMeasureValue_union.m_IfcSolidAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcSolidAngleMeasure);
    }
}

void IfcMeasureValue::setIfcSolidAngleMeasure(IfcSolidAngleMeasure value) {
    m_IfcMeasureValue_union.m_IfcSolidAngleMeasure = value;
    m_type = IFCSOLIDANGLEMEASURE;
}

IfcPositiveRatioMeasure IfcMeasureValue::getIfcPositiveRatioMeasure() const {
    if (m_type == IFCPOSITIVERATIOMEASURE) {
        return m_IfcMeasureValue_union.m_IfcPositiveRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcPositiveRatioMeasure);
    }
}

void IfcMeasureValue::setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value) {
    m_IfcMeasureValue_union.m_IfcPositiveRatioMeasure = value;
    m_type = IFCPOSITIVERATIOMEASURE;
}

IfcRatioMeasure IfcMeasureValue::getIfcRatioMeasure() const {
    if (m_type == IFCRATIOMEASURE) {
        return m_IfcMeasureValue_union.m_IfcRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcRatioMeasure);
    }
}

void IfcMeasureValue::setIfcRatioMeasure(IfcRatioMeasure value) {
    m_IfcMeasureValue_union.m_IfcRatioMeasure = value;
    m_type = IFCRATIOMEASURE;
}

IfcPositivePlaneAngleMeasure IfcMeasureValue::getIfcPositivePlaneAngleMeasure() const {
    if (m_type == IFCPOSITIVEPLANEANGLEMEASURE) {
        return m_IfcMeasureValue_union.m_IfcPositivePlaneAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcPositivePlaneAngleMeasure);
    }
}

void IfcMeasureValue::setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value) {
    m_IfcMeasureValue_union.m_IfcPositivePlaneAngleMeasure = value;
    m_type = IFCPOSITIVEPLANEANGLEMEASURE;
}

IfcPlaneAngleMeasure IfcMeasureValue::getIfcPlaneAngleMeasure() const {
    if (m_type == IFCPLANEANGLEMEASURE) {
        return m_IfcMeasureValue_union.m_IfcPlaneAngleMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcPlaneAngleMeasure);
    }
}

void IfcMeasureValue::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
    m_IfcMeasureValue_union.m_IfcPlaneAngleMeasure = value;
    m_type = IFCPLANEANGLEMEASURE;
}

IfcParameterValue IfcMeasureValue::getIfcParameterValue() const {
    if (m_type == IFCPARAMETERVALUE) {
        return m_IfcMeasureValue_union.m_IfcParameterValue;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcParameterValue);
    }
}

void IfcMeasureValue::setIfcParameterValue(IfcParameterValue value) {
    m_IfcMeasureValue_union.m_IfcParameterValue = value;
    m_type = IFCPARAMETERVALUE;
}

IfcNumericMeasure IfcMeasureValue::getIfcNumericMeasure() const {
    if (m_type == IFCNUMERICMEASURE) {
        return m_IfcMeasureValue_union.m_IfcNumericMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcNumericMeasure);
    }
}

void IfcMeasureValue::setIfcNumericMeasure(IfcNumericMeasure value) {
    m_IfcMeasureValue_union.m_IfcNumericMeasure = value;
    m_type = IFCNUMERICMEASURE;
}

IfcMassMeasure IfcMeasureValue::getIfcMassMeasure() const {
    if (m_type == IFCMASSMEASURE) {
        return m_IfcMeasureValue_union.m_IfcMassMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcMassMeasure);
    }
}

void IfcMeasureValue::setIfcMassMeasure(IfcMassMeasure value) {
    m_IfcMeasureValue_union.m_IfcMassMeasure = value;
    m_type = IFCMASSMEASURE;
}

IfcPositiveLengthMeasure IfcMeasureValue::getIfcPositiveLengthMeasure() const {
    if (m_type == IFCPOSITIVELENGTHMEASURE) {
        return m_IfcMeasureValue_union.m_IfcPositiveLengthMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcPositiveLengthMeasure);
    }
}

void IfcMeasureValue::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
    m_IfcMeasureValue_union.m_IfcPositiveLengthMeasure = value;
    m_type = IFCPOSITIVELENGTHMEASURE;
}

IfcLengthMeasure IfcMeasureValue::getIfcLengthMeasure() const {
    if (m_type == IFCLENGTHMEASURE) {
        return m_IfcMeasureValue_union.m_IfcLengthMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcLengthMeasure);
    }
}

void IfcMeasureValue::setIfcLengthMeasure(IfcLengthMeasure value) {
    m_IfcMeasureValue_union.m_IfcLengthMeasure = value;
    m_type = IFCLENGTHMEASURE;
}

IfcElectricCurrentMeasure IfcMeasureValue::getIfcElectricCurrentMeasure() const {
    if (m_type == IFCELECTRICCURRENTMEASURE) {
        return m_IfcMeasureValue_union.m_IfcElectricCurrentMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcElectricCurrentMeasure);
    }
}

void IfcMeasureValue::setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value) {
    m_IfcMeasureValue_union.m_IfcElectricCurrentMeasure = value;
    m_type = IFCELECTRICCURRENTMEASURE;
}

IfcDescriptiveMeasure IfcMeasureValue::getIfcDescriptiveMeasure() const {
    if (m_type == IFCDESCRIPTIVEMEASURE) {
        return *m_IfcMeasureValue_union.m_IfcDescriptiveMeasure;
    }
    else {
        return Step::getUnset(*m_IfcMeasureValue_union.m_IfcDescriptiveMeasure);
    }
}

void IfcMeasureValue::setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value) {
    m_IfcMeasureValue_union.m_IfcDescriptiveMeasure = new IfcDescriptiveMeasure(value);
    m_type = IFCDESCRIPTIVEMEASURE;
}

IfcCountMeasure IfcMeasureValue::getIfcCountMeasure() const {
    if (m_type == IFCCOUNTMEASURE) {
        return m_IfcMeasureValue_union.m_IfcCountMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcCountMeasure);
    }
}

void IfcMeasureValue::setIfcCountMeasure(IfcCountMeasure value) {
    m_IfcMeasureValue_union.m_IfcCountMeasure = value;
    m_type = IFCCOUNTMEASURE;
}

IfcContextDependentMeasure IfcMeasureValue::getIfcContextDependentMeasure() const {
    if (m_type == IFCCONTEXTDEPENDENTMEASURE) {
        return m_IfcMeasureValue_union.m_IfcContextDependentMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcContextDependentMeasure);
    }
}

void IfcMeasureValue::setIfcContextDependentMeasure(IfcContextDependentMeasure value) {
    m_IfcMeasureValue_union.m_IfcContextDependentMeasure = value;
    m_type = IFCCONTEXTDEPENDENTMEASURE;
}

IfcAreaMeasure IfcMeasureValue::getIfcAreaMeasure() const {
    if (m_type == IFCAREAMEASURE) {
        return m_IfcMeasureValue_union.m_IfcAreaMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcAreaMeasure);
    }
}

void IfcMeasureValue::setIfcAreaMeasure(IfcAreaMeasure value) {
    m_IfcMeasureValue_union.m_IfcAreaMeasure = value;
    m_type = IFCAREAMEASURE;
}

IfcAmountOfSubstanceMeasure IfcMeasureValue::getIfcAmountOfSubstanceMeasure() const {
    if (m_type == IFCAMOUNTOFSUBSTANCEMEASURE) {
        return m_IfcMeasureValue_union.m_IfcAmountOfSubstanceMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcAmountOfSubstanceMeasure);
    }
}

void IfcMeasureValue::setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value) {
    m_IfcMeasureValue_union.m_IfcAmountOfSubstanceMeasure = value;
    m_type = IFCAMOUNTOFSUBSTANCEMEASURE;
}

IfcLuminousIntensityMeasure IfcMeasureValue::getIfcLuminousIntensityMeasure() const {
    if (m_type == IFCLUMINOUSINTENSITYMEASURE) {
        return m_IfcMeasureValue_union.m_IfcLuminousIntensityMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcLuminousIntensityMeasure);
    }
}

void IfcMeasureValue::setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value) {
    m_IfcMeasureValue_union.m_IfcLuminousIntensityMeasure = value;
    m_type = IFCLUMINOUSINTENSITYMEASURE;
}

IfcNormalisedRatioMeasure IfcMeasureValue::getIfcNormalisedRatioMeasure() const {
    if (m_type == IFCNORMALISEDRATIOMEASURE) {
        return m_IfcMeasureValue_union.m_IfcNormalisedRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcMeasureValue_union.m_IfcNormalisedRatioMeasure);
    }
}

void IfcMeasureValue::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
    m_IfcMeasureValue_union.m_IfcNormalisedRatioMeasure = value;
    m_type = IFCNORMALISEDRATIOMEASURE;
}

IfcComplexNumber IfcMeasureValue::getIfcComplexNumber() const {
    if (m_type == IFCCOMPLEXNUMBER) {
        return *m_IfcMeasureValue_union.m_IfcComplexNumber;
    }
    else {
        return Step::getUnset(*m_IfcMeasureValue_union.m_IfcComplexNumber);
    }
}

void IfcMeasureValue::setIfcComplexNumber(const IfcComplexNumber &value) {
    m_IfcMeasureValue_union.m_IfcComplexNumber = new IfcComplexNumber(value);
    m_type = IFCCOMPLEXNUMBER;
}

void IfcMeasureValue::set(Step::BaseObject */*v*/) {
}

IFC2X3_EXPORT Step::ClassType IfcMeasureValue::s_type("IfcMeasureValue");
