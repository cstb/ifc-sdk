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

#include "ifc2x3/IfcMeasureValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcMeasureValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMeasureValue(this);
}

bool IfcMeasureValue::init() {
    return false;
}

const std::string &IfcMeasureValue::type() {
    return IfcMeasureValue::s_type.getName();
}

Step::ClassType IfcMeasureValue::getClassType() {
    return IfcMeasureValue::s_type;
}

Step::ClassType IfcMeasureValue::getType() const {
    return IfcMeasureValue::s_type;
}

bool IfcMeasureValue::isOfType(Step::ClassType t) {
    return IfcMeasureValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcMeasureValue::copy(const IfcMeasureValue &obj, const CopyOp &copyop) {
    Step::Array< Step::Real >::const_iterator it_IfcComplexNumber;
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
        for (it_IfcComplexNumber = obj.m_IfcMeasureValue_union.m_IfcComplexNumber->begin(); it_IfcComplexNumber != obj.m_IfcMeasureValue_union.m_IfcComplexNumber->end(); ++it_IfcComplexNumber) {
            Step::Real copyTarget = (*it_IfcComplexNumber);
            m_IfcMeasureValue_union.m_IfcComplexNumber->push_back(copyTarget);
        }
        break;
        }
}

char *IfcMeasureValue::currentTypeName() {
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

IfcMeasureValue::IfcMeasureValue_select IfcMeasureValue::currentType() {
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
        }
    m_type = UNSET;
}

IfcVolumeMeasure IfcMeasureValue::getIfcVolumeMeasure() {
    return m_IfcMeasureValue_union.m_IfcVolumeMeasure;
}

void IfcMeasureValue::setIfcVolumeMeasure(IfcVolumeMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcVolumeMeasure = value;
    m_type = IFCVOLUMEMEASURE;
}

IfcTimeMeasure IfcMeasureValue::getIfcTimeMeasure() {
    return m_IfcMeasureValue_union.m_IfcTimeMeasure;
}

void IfcMeasureValue::setIfcTimeMeasure(IfcTimeMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcTimeMeasure = value;
    m_type = IFCTIMEMEASURE;
}

IfcThermodynamicTemperatureMeasure IfcMeasureValue::getIfcThermodynamicTemperatureMeasure() {
    return m_IfcMeasureValue_union.m_IfcThermodynamicTemperatureMeasure;
}

void IfcMeasureValue::setIfcThermodynamicTemperatureMeasure(IfcThermodynamicTemperatureMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcThermodynamicTemperatureMeasure = value;
    m_type = IFCTHERMODYNAMICTEMPERATUREMEASURE;
}

IfcSolidAngleMeasure IfcMeasureValue::getIfcSolidAngleMeasure() {
    return m_IfcMeasureValue_union.m_IfcSolidAngleMeasure;
}

void IfcMeasureValue::setIfcSolidAngleMeasure(IfcSolidAngleMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcSolidAngleMeasure = value;
    m_type = IFCSOLIDANGLEMEASURE;
}

IfcPositiveRatioMeasure IfcMeasureValue::getIfcPositiveRatioMeasure() {
    return m_IfcMeasureValue_union.m_IfcPositiveRatioMeasure;
}

void IfcMeasureValue::setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcPositiveRatioMeasure = value;
    m_type = IFCPOSITIVERATIOMEASURE;
}

IfcRatioMeasure IfcMeasureValue::getIfcRatioMeasure() {
    return m_IfcMeasureValue_union.m_IfcRatioMeasure;
}

void IfcMeasureValue::setIfcRatioMeasure(IfcRatioMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcRatioMeasure = value;
    m_type = IFCRATIOMEASURE;
}

IfcPositivePlaneAngleMeasure IfcMeasureValue::getIfcPositivePlaneAngleMeasure() {
    return m_IfcMeasureValue_union.m_IfcPositivePlaneAngleMeasure;
}

void IfcMeasureValue::setIfcPositivePlaneAngleMeasure(IfcPositivePlaneAngleMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcPositivePlaneAngleMeasure = value;
    m_type = IFCPOSITIVEPLANEANGLEMEASURE;
}

IfcPlaneAngleMeasure IfcMeasureValue::getIfcPlaneAngleMeasure() {
    return m_IfcMeasureValue_union.m_IfcPlaneAngleMeasure;
}

void IfcMeasureValue::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcPlaneAngleMeasure = value;
    m_type = IFCPLANEANGLEMEASURE;
}

IfcParameterValue IfcMeasureValue::getIfcParameterValue() {
    return m_IfcMeasureValue_union.m_IfcParameterValue;
}

void IfcMeasureValue::setIfcParameterValue(IfcParameterValue value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcParameterValue = value;
    m_type = IFCPARAMETERVALUE;
}

IfcNumericMeasure IfcMeasureValue::getIfcNumericMeasure() {
    return m_IfcMeasureValue_union.m_IfcNumericMeasure;
}

void IfcMeasureValue::setIfcNumericMeasure(IfcNumericMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcNumericMeasure = value;
    m_type = IFCNUMERICMEASURE;
}

IfcMassMeasure IfcMeasureValue::getIfcMassMeasure() {
    return m_IfcMeasureValue_union.m_IfcMassMeasure;
}

void IfcMeasureValue::setIfcMassMeasure(IfcMassMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcMassMeasure = value;
    m_type = IFCMASSMEASURE;
}

IfcPositiveLengthMeasure IfcMeasureValue::getIfcPositiveLengthMeasure() {
    return m_IfcMeasureValue_union.m_IfcPositiveLengthMeasure;
}

void IfcMeasureValue::setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcPositiveLengthMeasure = value;
    m_type = IFCPOSITIVELENGTHMEASURE;
}

IfcLengthMeasure IfcMeasureValue::getIfcLengthMeasure() {
    return m_IfcMeasureValue_union.m_IfcLengthMeasure;
}

void IfcMeasureValue::setIfcLengthMeasure(IfcLengthMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcLengthMeasure = value;
    m_type = IFCLENGTHMEASURE;
}

IfcElectricCurrentMeasure IfcMeasureValue::getIfcElectricCurrentMeasure() {
    return m_IfcMeasureValue_union.m_IfcElectricCurrentMeasure;
}

void IfcMeasureValue::setIfcElectricCurrentMeasure(IfcElectricCurrentMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcElectricCurrentMeasure = value;
    m_type = IFCELECTRICCURRENTMEASURE;
}

IfcDescriptiveMeasure IfcMeasureValue::getIfcDescriptiveMeasure() {
    return *m_IfcMeasureValue_union.m_IfcDescriptiveMeasure;
}

void IfcMeasureValue::setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcDescriptiveMeasure = new IfcDescriptiveMeasure(value);
    m_type = IFCDESCRIPTIVEMEASURE;
}

IfcCountMeasure IfcMeasureValue::getIfcCountMeasure() {
    return m_IfcMeasureValue_union.m_IfcCountMeasure;
}

void IfcMeasureValue::setIfcCountMeasure(IfcCountMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcCountMeasure = value;
    m_type = IFCCOUNTMEASURE;
}

IfcContextDependentMeasure IfcMeasureValue::getIfcContextDependentMeasure() {
    return m_IfcMeasureValue_union.m_IfcContextDependentMeasure;
}

void IfcMeasureValue::setIfcContextDependentMeasure(IfcContextDependentMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcContextDependentMeasure = value;
    m_type = IFCCONTEXTDEPENDENTMEASURE;
}

IfcAreaMeasure IfcMeasureValue::getIfcAreaMeasure() {
    return m_IfcMeasureValue_union.m_IfcAreaMeasure;
}

void IfcMeasureValue::setIfcAreaMeasure(IfcAreaMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcAreaMeasure = value;
    m_type = IFCAREAMEASURE;
}

IfcAmountOfSubstanceMeasure IfcMeasureValue::getIfcAmountOfSubstanceMeasure() {
    return m_IfcMeasureValue_union.m_IfcAmountOfSubstanceMeasure;
}

void IfcMeasureValue::setIfcAmountOfSubstanceMeasure(IfcAmountOfSubstanceMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcAmountOfSubstanceMeasure = value;
    m_type = IFCAMOUNTOFSUBSTANCEMEASURE;
}

IfcLuminousIntensityMeasure IfcMeasureValue::getIfcLuminousIntensityMeasure() {
    return m_IfcMeasureValue_union.m_IfcLuminousIntensityMeasure;
}

void IfcMeasureValue::setIfcLuminousIntensityMeasure(IfcLuminousIntensityMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcLuminousIntensityMeasure = value;
    m_type = IFCLUMINOUSINTENSITYMEASURE;
}

IfcNormalisedRatioMeasure IfcMeasureValue::getIfcNormalisedRatioMeasure() {
    return m_IfcMeasureValue_union.m_IfcNormalisedRatioMeasure;
}

void IfcMeasureValue::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcNormalisedRatioMeasure = value;
    m_type = IFCNORMALISEDRATIOMEASURE;
}

IfcComplexNumber IfcMeasureValue::getIfcComplexNumber() {
    return *m_IfcMeasureValue_union.m_IfcComplexNumber;
}

void IfcMeasureValue::setIfcComplexNumber(const IfcComplexNumber &value) {
    deleteUnion();
    m_IfcMeasureValue_union.m_IfcComplexNumber = new IfcComplexNumber(value);
    m_type = IFCCOMPLEXNUMBER;
}

void IfcMeasureValue::set(Step::BaseObject *v) {
}

IFC2X3_DLL_DEF Step::ClassType IfcMeasureValue::s_type("IfcMeasureValue");
