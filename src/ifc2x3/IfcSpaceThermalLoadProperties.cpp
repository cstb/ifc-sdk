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

#include "ifc2x3/IfcSpaceThermalLoadProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSpaceThermalLoadProperties::IfcSpaceThermalLoadProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_applicableValueRatio = Step::getUnset(m_applicableValueRatio);
    m_thermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
    m_propertySource = IfcPropertySourceEnum_UNSET;
    m_sourceDescription = Step::getUnset(m_sourceDescription);
    m_maximumValue = Step::getUnset(m_maximumValue);
    m_minimumValue = Step::getUnset(m_minimumValue);
    m_thermalLoadTimeSeriesValues = NULL;
    m_userDefinedThermalLoadSource = Step::getUnset(m_userDefinedThermalLoadSource);
    m_userDefinedPropertySource = Step::getUnset(m_userDefinedPropertySource);
    m_thermalLoadType = IfcThermalLoadTypeEnum_UNSET;
}

IfcSpaceThermalLoadProperties::~IfcSpaceThermalLoadProperties() {
}

bool IfcSpaceThermalLoadProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSpaceThermalLoadProperties(this);
}

const std::string &IfcSpaceThermalLoadProperties::type() {
    return IfcSpaceThermalLoadProperties::s_type.getName();
}

Step::ClassType IfcSpaceThermalLoadProperties::getClassType() {
    return IfcSpaceThermalLoadProperties::s_type;
}

Step::ClassType IfcSpaceThermalLoadProperties::getType() const {
    return IfcSpaceThermalLoadProperties::s_type;
}

bool IfcSpaceThermalLoadProperties::isOfType(Step::ClassType t) {
    return IfcSpaceThermalLoadProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveRatioMeasure IfcSpaceThermalLoadProperties::getApplicableValueRatio() {
    if (Step::BaseObject::inited()) {
        return m_applicableValueRatio;
    }
    else {
        return Step::getUnset(m_applicableValueRatio);
    }
}

void IfcSpaceThermalLoadProperties::setApplicableValueRatio(IfcPositiveRatioMeasure value) {
    m_applicableValueRatio = value;
}

IfcThermalLoadSourceEnum IfcSpaceThermalLoadProperties::getThermalLoadSource() {
    if (Step::BaseObject::inited()) {
        return m_thermalLoadSource;
    }
    else {
        return IfcThermalLoadSourceEnum_UNSET;
    }
}

void IfcSpaceThermalLoadProperties::setThermalLoadSource(IfcThermalLoadSourceEnum value) {
    m_thermalLoadSource = value;
}

IfcPropertySourceEnum IfcSpaceThermalLoadProperties::getPropertySource() {
    if (Step::BaseObject::inited()) {
        return m_propertySource;
    }
    else {
        return IfcPropertySourceEnum_UNSET;
    }
}

void IfcSpaceThermalLoadProperties::setPropertySource(IfcPropertySourceEnum value) {
    m_propertySource = value;
}

IfcText IfcSpaceThermalLoadProperties::getSourceDescription() {
    if (Step::BaseObject::inited()) {
        return m_sourceDescription;
    }
    else {
        return Step::getUnset(m_sourceDescription);
    }
}

void IfcSpaceThermalLoadProperties::setSourceDescription(const IfcText &value) {
    m_sourceDescription = value;
}

IfcPowerMeasure IfcSpaceThermalLoadProperties::getMaximumValue() {
    if (Step::BaseObject::inited()) {
        return m_maximumValue;
    }
    else {
        return Step::getUnset(m_maximumValue);
    }
}

void IfcSpaceThermalLoadProperties::setMaximumValue(IfcPowerMeasure value) {
    m_maximumValue = value;
}

IfcPowerMeasure IfcSpaceThermalLoadProperties::getMinimumValue() {
    if (Step::BaseObject::inited()) {
        return m_minimumValue;
    }
    else {
        return Step::getUnset(m_minimumValue);
    }
}

void IfcSpaceThermalLoadProperties::setMinimumValue(IfcPowerMeasure value) {
    m_minimumValue = value;
}

IfcTimeSeries *IfcSpaceThermalLoadProperties::getThermalLoadTimeSeriesValues() {
    if (Step::BaseObject::inited()) {
        return m_thermalLoadTimeSeriesValues.get();
    }
    else {
        return NULL;
    }
}

void IfcSpaceThermalLoadProperties::setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value) {
    m_thermalLoadTimeSeriesValues = value;
}

IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedThermalLoadSource() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedThermalLoadSource;
    }
    else {
        return Step::getUnset(m_userDefinedThermalLoadSource);
    }
}

void IfcSpaceThermalLoadProperties::setUserDefinedThermalLoadSource(const IfcLabel &value) {
    m_userDefinedThermalLoadSource = value;
}

IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedPropertySource() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedPropertySource;
    }
    else {
        return Step::getUnset(m_userDefinedPropertySource);
    }
}

void IfcSpaceThermalLoadProperties::setUserDefinedPropertySource(const IfcLabel &value) {
    m_userDefinedPropertySource = value;
}

IfcThermalLoadTypeEnum IfcSpaceThermalLoadProperties::getThermalLoadType() {
    if (Step::BaseObject::inited()) {
        return m_thermalLoadType;
    }
    else {
        return IfcThermalLoadTypeEnum_UNSET;
    }
}

void IfcSpaceThermalLoadProperties::setThermalLoadType(IfcThermalLoadTypeEnum value) {
    m_thermalLoadType = value;
}

void IfcSpaceThermalLoadProperties::release() {
    IfcPropertySetDefinition::release();
    m_thermalLoadTimeSeriesValues.release();
}

bool IfcSpaceThermalLoadProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicableValueRatio = Step::getUnset(m_applicableValueRatio);
    }
    else {
        m_applicableValueRatio = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
    }
    else {
        if (arg == ".PEOPLE.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_PEOPLE;
        }
        else if (arg == ".LIGHTING.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_LIGHTING;
        }
        else if (arg == ".EQUIPMENT.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_EQUIPMENT;
        }
        else if (arg == ".VENTILATIONINDOORAIR.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_VENTILATIONINDOORAIR;
        }
        else if (arg == ".VENTILATIONOUTSIDEAIR.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_VENTILATIONOUTSIDEAIR;
        }
        else if (arg == ".RECIRCULATEDAIR.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_RECIRCULATEDAIR;
        }
        else if (arg == ".EXHAUSTAIR.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_EXHAUSTAIR;
        }
        else if (arg == ".AIREXCHANGERATE.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_AIREXCHANGERATE;
        }
        else if (arg == ".DRYBULBTEMPERATURE.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_DRYBULBTEMPERATURE;
        }
        else if (arg == ".RELATIVEHUMIDITY.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_RELATIVEHUMIDITY;
        }
        else if (arg == ".INFILTRATION.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_INFILTRATION;
        }
        else if (arg == ".USERDEFINED.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_thermalLoadSource = IfcThermalLoadSourceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_propertySource = IfcPropertySourceEnum_UNSET;
    }
    else {
        if (arg == ".DESIGN.") {
            m_propertySource = IfcPropertySourceEnum_DESIGN;
        }
        else if (arg == ".DESIGNMAXIMUM.") {
            m_propertySource = IfcPropertySourceEnum_DESIGNMAXIMUM;
        }
        else if (arg == ".DESIGNMINIMUM.") {
            m_propertySource = IfcPropertySourceEnum_DESIGNMINIMUM;
        }
        else if (arg == ".SIMULATED.") {
            m_propertySource = IfcPropertySourceEnum_SIMULATED;
        }
        else if (arg == ".ASBUILT.") {
            m_propertySource = IfcPropertySourceEnum_ASBUILT;
        }
        else if (arg == ".COMMISSIONING.") {
            m_propertySource = IfcPropertySourceEnum_COMMISSIONING;
        }
        else if (arg == ".MEASURED.") {
            m_propertySource = IfcPropertySourceEnum_MEASURED;
        }
        else if (arg == ".USERDEFINED.") {
            m_propertySource = IfcPropertySourceEnum_USERDEFINED;
        }
        else if (arg == ".NOTKNOWN.") {
            m_propertySource = IfcPropertySourceEnum_NOTKNOWN;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sourceDescription = Step::getUnset(m_sourceDescription);
    }
    else {
        m_sourceDescription = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maximumValue = Step::getUnset(m_maximumValue);
    }
    else {
        m_maximumValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minimumValue = Step::getUnset(m_minimumValue);
    }
    else {
        m_minimumValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalLoadTimeSeriesValues = NULL;
    }
    else {
        m_thermalLoadTimeSeriesValues = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedThermalLoadSource = Step::getUnset(m_userDefinedThermalLoadSource);
    }
    else {
        m_userDefinedThermalLoadSource = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedPropertySource = Step::getUnset(m_userDefinedPropertySource);
    }
    else {
        m_userDefinedPropertySource = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalLoadType = IfcThermalLoadTypeEnum_UNSET;
    }
    else {
        if (arg == ".SENSIBLE.") {
            m_thermalLoadType = IfcThermalLoadTypeEnum_SENSIBLE;
        }
        else if (arg == ".LATENT.") {
            m_thermalLoadType = IfcThermalLoadTypeEnum_LATENT;
        }
        else if (arg == ".RADIANT.") {
            m_thermalLoadType = IfcThermalLoadTypeEnum_RADIANT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_thermalLoadType = IfcThermalLoadTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceThermalLoadProperties::copy(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setApplicableValueRatio(obj.m_applicableValueRatio);
    setThermalLoadSource(obj.m_thermalLoadSource);
    setPropertySource(obj.m_propertySource);
    setSourceDescription(obj.m_sourceDescription);
    setMaximumValue(obj.m_maximumValue);
    setMinimumValue(obj.m_minimumValue);
    setThermalLoadTimeSeriesValues(copyop(obj.m_thermalLoadTimeSeriesValues.get()));
    setUserDefinedThermalLoadSource(obj.m_userDefinedThermalLoadSource);
    setUserDefinedPropertySource(obj.m_userDefinedPropertySource);
    setThermalLoadType(obj.m_thermalLoadType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceThermalLoadProperties::s_type("IfcSpaceThermalLoadProperties");
