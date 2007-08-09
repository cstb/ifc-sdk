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
#include <ifc2x3/IfcMeasureValue.h>

#include <Step/BaseObject.h>
#include <ifc2x3/Visitor.h>

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

const char *IfcMeasureValue::type() {
  return "IfcMeasureValue";
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

IFC2X3_DLL_DEF Step::ClassType IfcMeasureValue::s_type = new Step::ClassType_class("IfcMeasureValue");
