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



#include <ifc2x3/IfcFluidFlowProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcTimeSeries.h>
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

IfcFluidFlowProperties::IfcFluidFlowProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_propertySource = IfcPropertySourceEnum_UNSET;
    m_flowConditionTimeSeries = NULL;
    m_velocityTimeSeries = NULL;
    m_flowrateTimeSeries = NULL;
    m_fluid = NULL;
    m_pressureTimeSeries = NULL;
    m_userDefinedPropertySource = Step::getUnset(m_userDefinedPropertySource);
    m_temperatureSingleValue = Step::getUnset(m_temperatureSingleValue);
    m_wetBulbTemperatureSingleValue = Step::getUnset(m_wetBulbTemperatureSingleValue);
    m_wetBulbTemperatureTimeSeries = NULL;
    m_temperatureTimeSeries = NULL;
    m_flowrateSingleValue = NULL;
    m_flowConditionSingleValue = Step::getUnset(m_flowConditionSingleValue);
    m_velocitySingleValue = Step::getUnset(m_velocitySingleValue);
    m_pressureSingleValue = Step::getUnset(m_pressureSingleValue);
}

IfcFluidFlowProperties::~IfcFluidFlowProperties() {
}

bool IfcFluidFlowProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFluidFlowProperties(this);
}

const std::string &IfcFluidFlowProperties::type() const {
    return IfcFluidFlowProperties::s_type.getName();
}

const Step::ClassType &IfcFluidFlowProperties::getClassType() {
    return IfcFluidFlowProperties::s_type;
}

const Step::ClassType &IfcFluidFlowProperties::getType() const {
    return IfcFluidFlowProperties::s_type;
}

bool IfcFluidFlowProperties::isOfType(const Step::ClassType &t) const {
    return IfcFluidFlowProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPropertySourceEnum IfcFluidFlowProperties::getPropertySource() {
    if (Step::BaseObject::inited()) {
        return m_propertySource;
    }
    else {
        return IfcPropertySourceEnum_UNSET;
    }
}

const IfcPropertySourceEnum IfcFluidFlowProperties::getPropertySource() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getPropertySource();
}

void IfcFluidFlowProperties::setPropertySource(IfcPropertySourceEnum value) {
    m_propertySource = value;
}

void IfcFluidFlowProperties::unsetPropertySource() {
    m_propertySource = IfcPropertySourceEnum_UNSET;
}

bool IfcFluidFlowProperties::testPropertySource() const {
    return getPropertySource() != IfcPropertySourceEnum_UNSET;
}

IfcTimeSeries *IfcFluidFlowProperties::getFlowConditionTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_flowConditionTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcFluidFlowProperties::getFlowConditionTimeSeries() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getFlowConditionTimeSeries();
}

void IfcFluidFlowProperties::setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_flowConditionTimeSeries = value;
}

void IfcFluidFlowProperties::unsetFlowConditionTimeSeries() {
    m_flowConditionTimeSeries = Step::getUnset(getFlowConditionTimeSeries());
}

bool IfcFluidFlowProperties::testFlowConditionTimeSeries() const {
    return !Step::isUnset(getFlowConditionTimeSeries());
}

IfcTimeSeries *IfcFluidFlowProperties::getVelocityTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_velocityTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcFluidFlowProperties::getVelocityTimeSeries() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getVelocityTimeSeries();
}

void IfcFluidFlowProperties::setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_velocityTimeSeries = value;
}

void IfcFluidFlowProperties::unsetVelocityTimeSeries() {
    m_velocityTimeSeries = Step::getUnset(getVelocityTimeSeries());
}

bool IfcFluidFlowProperties::testVelocityTimeSeries() const {
    return !Step::isUnset(getVelocityTimeSeries());
}

IfcTimeSeries *IfcFluidFlowProperties::getFlowrateTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_flowrateTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcFluidFlowProperties::getFlowrateTimeSeries() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getFlowrateTimeSeries();
}

void IfcFluidFlowProperties::setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_flowrateTimeSeries = value;
}

void IfcFluidFlowProperties::unsetFlowrateTimeSeries() {
    m_flowrateTimeSeries = Step::getUnset(getFlowrateTimeSeries());
}

bool IfcFluidFlowProperties::testFlowrateTimeSeries() const {
    return !Step::isUnset(getFlowrateTimeSeries());
}

IfcMaterial *IfcFluidFlowProperties::getFluid() {
    if (Step::BaseObject::inited()) {
        return m_fluid.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterial *IfcFluidFlowProperties::getFluid() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getFluid();
}

void IfcFluidFlowProperties::setFluid(const Step::RefPtr< IfcMaterial > &value) {
    m_fluid = value;
}

void IfcFluidFlowProperties::unsetFluid() {
    m_fluid = Step::getUnset(getFluid());
}

bool IfcFluidFlowProperties::testFluid() const {
    return !Step::isUnset(getFluid());
}

IfcTimeSeries *IfcFluidFlowProperties::getPressureTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_pressureTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcFluidFlowProperties::getPressureTimeSeries() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getPressureTimeSeries();
}

void IfcFluidFlowProperties::setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_pressureTimeSeries = value;
}

void IfcFluidFlowProperties::unsetPressureTimeSeries() {
    m_pressureTimeSeries = Step::getUnset(getPressureTimeSeries());
}

bool IfcFluidFlowProperties::testPressureTimeSeries() const {
    return !Step::isUnset(getPressureTimeSeries());
}

IfcLabel IfcFluidFlowProperties::getUserDefinedPropertySource() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedPropertySource;
    }
    else {
        return Step::getUnset(m_userDefinedPropertySource);
    }
}

const IfcLabel IfcFluidFlowProperties::getUserDefinedPropertySource() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getUserDefinedPropertySource();
}

void IfcFluidFlowProperties::setUserDefinedPropertySource(const IfcLabel &value) {
    m_userDefinedPropertySource = value;
}

void IfcFluidFlowProperties::unsetUserDefinedPropertySource() {
    m_userDefinedPropertySource = Step::getUnset(getUserDefinedPropertySource());
}

bool IfcFluidFlowProperties::testUserDefinedPropertySource() const {
    return !Step::isUnset(getUserDefinedPropertySource());
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getTemperatureSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_temperatureSingleValue;
    }
    else {
        return Step::getUnset(m_temperatureSingleValue);
    }
}

const IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getTemperatureSingleValue() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getTemperatureSingleValue();
}

void IfcFluidFlowProperties::setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value) {
    m_temperatureSingleValue = value;
}

void IfcFluidFlowProperties::unsetTemperatureSingleValue() {
    m_temperatureSingleValue = Step::getUnset(getTemperatureSingleValue());
}

bool IfcFluidFlowProperties::testTemperatureSingleValue() const {
    return !Step::isUnset(getTemperatureSingleValue());
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getWetBulbTemperatureSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_wetBulbTemperatureSingleValue;
    }
    else {
        return Step::getUnset(m_wetBulbTemperatureSingleValue);
    }
}

const IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getWetBulbTemperatureSingleValue() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getWetBulbTemperatureSingleValue();
}

void IfcFluidFlowProperties::setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value) {
    m_wetBulbTemperatureSingleValue = value;
}

void IfcFluidFlowProperties::unsetWetBulbTemperatureSingleValue() {
    m_wetBulbTemperatureSingleValue = Step::getUnset(getWetBulbTemperatureSingleValue());
}

bool IfcFluidFlowProperties::testWetBulbTemperatureSingleValue() const {
    return !Step::isUnset(getWetBulbTemperatureSingleValue());
}

IfcTimeSeries *IfcFluidFlowProperties::getWetBulbTemperatureTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_wetBulbTemperatureTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcFluidFlowProperties::getWetBulbTemperatureTimeSeries() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getWetBulbTemperatureTimeSeries();
}

void IfcFluidFlowProperties::setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_wetBulbTemperatureTimeSeries = value;
}

void IfcFluidFlowProperties::unsetWetBulbTemperatureTimeSeries() {
    m_wetBulbTemperatureTimeSeries = Step::getUnset(getWetBulbTemperatureTimeSeries());
}

bool IfcFluidFlowProperties::testWetBulbTemperatureTimeSeries() const {
    return !Step::isUnset(getWetBulbTemperatureTimeSeries());
}

IfcTimeSeries *IfcFluidFlowProperties::getTemperatureTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_temperatureTimeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcFluidFlowProperties::getTemperatureTimeSeries() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getTemperatureTimeSeries();
}

void IfcFluidFlowProperties::setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_temperatureTimeSeries = value;
}

void IfcFluidFlowProperties::unsetTemperatureTimeSeries() {
    m_temperatureTimeSeries = Step::getUnset(getTemperatureTimeSeries());
}

bool IfcFluidFlowProperties::testTemperatureTimeSeries() const {
    return !Step::isUnset(getTemperatureTimeSeries());
}

IfcDerivedMeasureValue *IfcFluidFlowProperties::getFlowrateSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_flowrateSingleValue.get();
    }
    else {
        return NULL;
    }
}

const IfcDerivedMeasureValue *IfcFluidFlowProperties::getFlowrateSingleValue() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getFlowrateSingleValue();
}

void IfcFluidFlowProperties::setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value) {
    m_flowrateSingleValue = value;
}

void IfcFluidFlowProperties::unsetFlowrateSingleValue() {
    m_flowrateSingleValue = Step::getUnset(getFlowrateSingleValue());
}

bool IfcFluidFlowProperties::testFlowrateSingleValue() const {
    return !Step::isUnset(getFlowrateSingleValue());
}

IfcPositiveRatioMeasure IfcFluidFlowProperties::getFlowConditionSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_flowConditionSingleValue;
    }
    else {
        return Step::getUnset(m_flowConditionSingleValue);
    }
}

const IfcPositiveRatioMeasure IfcFluidFlowProperties::getFlowConditionSingleValue() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getFlowConditionSingleValue();
}

void IfcFluidFlowProperties::setFlowConditionSingleValue(IfcPositiveRatioMeasure value) {
    m_flowConditionSingleValue = value;
}

void IfcFluidFlowProperties::unsetFlowConditionSingleValue() {
    m_flowConditionSingleValue = Step::getUnset(getFlowConditionSingleValue());
}

bool IfcFluidFlowProperties::testFlowConditionSingleValue() const {
    return !Step::isUnset(getFlowConditionSingleValue());
}

IfcLinearVelocityMeasure IfcFluidFlowProperties::getVelocitySingleValue() {
    if (Step::BaseObject::inited()) {
        return m_velocitySingleValue;
    }
    else {
        return Step::getUnset(m_velocitySingleValue);
    }
}

const IfcLinearVelocityMeasure IfcFluidFlowProperties::getVelocitySingleValue() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getVelocitySingleValue();
}

void IfcFluidFlowProperties::setVelocitySingleValue(IfcLinearVelocityMeasure value) {
    m_velocitySingleValue = value;
}

void IfcFluidFlowProperties::unsetVelocitySingleValue() {
    m_velocitySingleValue = Step::getUnset(getVelocitySingleValue());
}

bool IfcFluidFlowProperties::testVelocitySingleValue() const {
    return !Step::isUnset(getVelocitySingleValue());
}

IfcPressureMeasure IfcFluidFlowProperties::getPressureSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_pressureSingleValue;
    }
    else {
        return Step::getUnset(m_pressureSingleValue);
    }
}

const IfcPressureMeasure IfcFluidFlowProperties::getPressureSingleValue() const {
    IfcFluidFlowProperties * deConstObject = const_cast< IfcFluidFlowProperties * > (this);
    return deConstObject->getPressureSingleValue();
}

void IfcFluidFlowProperties::setPressureSingleValue(IfcPressureMeasure value) {
    m_pressureSingleValue = value;
}

void IfcFluidFlowProperties::unsetPressureSingleValue() {
    m_pressureSingleValue = Step::getUnset(getPressureSingleValue());
}

bool IfcFluidFlowProperties::testPressureSingleValue() const {
    return !Step::isUnset(getPressureSingleValue());
}

bool IfcFluidFlowProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
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
        m_flowConditionTimeSeries = NULL;
    }
    else {
        m_flowConditionTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_velocityTimeSeries = NULL;
    }
    else {
        m_velocityTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowrateTimeSeries = NULL;
    }
    else {
        m_flowrateTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fluid = NULL;
    }
    else {
        m_fluid = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pressureTimeSeries = NULL;
    }
    else {
        m_pressureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedPropertySource = Step::getUnset(m_userDefinedPropertySource);
    }
    else {
        m_userDefinedPropertySource = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_temperatureSingleValue = Step::getUnset(m_temperatureSingleValue);
    }
    else {
        m_temperatureSingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wetBulbTemperatureSingleValue = Step::getUnset(m_wetBulbTemperatureSingleValue);
    }
    else {
        m_wetBulbTemperatureSingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wetBulbTemperatureTimeSeries = NULL;
    }
    else {
        m_wetBulbTemperatureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_temperatureTimeSeries = NULL;
    }
    else {
        m_temperatureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowrateSingleValue = NULL;
    }
    else {
        m_flowrateSingleValue = new IfcDerivedMeasureValue;
        if (arg[0] == '#') {
            m_flowrateSingleValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMESTAMP") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_flowrateSingleValue->setIfcTimeStamp(tmp_attr1);
                }
                if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_flowrateSingleValue->setIfcIntegerCountRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCENERGYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcEnergyMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
                    m_flowrateSingleValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCANGULARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCINDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcInductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCILLUMINANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCHARGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCABSORBEDDOSEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                if (type1 == "IFCRADIOACTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCTORQUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcTorqueMeasure(tmp_attr1);
                }
                if (type1 == "IFCACCELERATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCSHEARMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                if (type1 == "IFCCURVATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSPERLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGCONSTANTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATINGVALUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                if (type1 == "IFCPHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPHMeasure(tmp_attr1);
                }
                if (type1 == "IFCIONCONCENTRATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowConditionSingleValue = Step::getUnset(m_flowConditionSingleValue);
    }
    else {
        m_flowConditionSingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_velocitySingleValue = Step::getUnset(m_velocitySingleValue);
    }
    else {
        m_velocitySingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pressureSingleValue = Step::getUnset(m_pressureSingleValue);
    }
    else {
        m_pressureSingleValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcFluidFlowProperties::copy(const IfcFluidFlowProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setPropertySource(obj.m_propertySource);
    setFlowConditionTimeSeries((IfcTimeSeries*)copyop(obj.m_flowConditionTimeSeries.get()));
    setVelocityTimeSeries((IfcTimeSeries*)copyop(obj.m_velocityTimeSeries.get()));
    setFlowrateTimeSeries((IfcTimeSeries*)copyop(obj.m_flowrateTimeSeries.get()));
    setFluid((IfcMaterial*)copyop(obj.m_fluid.get()));
    setPressureTimeSeries((IfcTimeSeries*)copyop(obj.m_pressureTimeSeries.get()));
    setUserDefinedPropertySource(obj.m_userDefinedPropertySource);
    setTemperatureSingleValue(obj.m_temperatureSingleValue);
    setWetBulbTemperatureSingleValue(obj.m_wetBulbTemperatureSingleValue);
    setWetBulbTemperatureTimeSeries((IfcTimeSeries*)copyop(obj.m_wetBulbTemperatureTimeSeries.get()));
    setTemperatureTimeSeries((IfcTimeSeries*)copyop(obj.m_temperatureTimeSeries.get()));
    m_flowrateSingleValue = new IfcDerivedMeasureValue;
    m_flowrateSingleValue->copy(*(obj.m_flowrateSingleValue.get()), copyop);
    setFlowConditionSingleValue(obj.m_flowConditionSingleValue);
    setVelocitySingleValue(obj.m_velocitySingleValue);
    setPressureSingleValue(obj.m_pressureSingleValue);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFluidFlowProperties::s_type("IfcFluidFlowProperties");
