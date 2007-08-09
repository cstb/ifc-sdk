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
#include <ifc2x3/IfcFluidFlowProperties.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFluidFlowProperties::IfcFluidFlowProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_propertySource = IfcPropertySourceEnum_UNSET;
  m_flowConditionTimeSeries = NULL;
  m_velocityTimeSeries = NULL;
  m_flowrateTimeSeries = NULL;
  m_fluid = NULL;
  m_pressureTimeSeries = NULL;
  m_userDefinedPropertySource = getUnset(m_userDefinedPropertySource);
  m_temperatureSingleValue = getUnset(m_temperatureSingleValue);
  m_wetBulbTemperatureSingleValue = getUnset(m_wetBulbTemperatureSingleValue);
  m_wetBulbTemperatureTimeSeries = NULL;
  m_temperatureTimeSeries = NULL;
  m_flowrateSingleValue = NULL;
  m_flowConditionSingleValue = getUnset(m_flowConditionSingleValue);
  m_velocitySingleValue = getUnset(m_velocitySingleValue);
  m_pressureSingleValue = getUnset(m_pressureSingleValue);
}


IfcFluidFlowProperties::~IfcFluidFlowProperties() {
}

bool IfcFluidFlowProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFluidFlowProperties(this);
}

const char *IfcFluidFlowProperties::type() {
  return "IfcFluidFlowProperties";
}

Step::ClassType IfcFluidFlowProperties::getClassType() {
  return IfcFluidFlowProperties::s_type;
}

Step::ClassType IfcFluidFlowProperties::getType() const {
  return IfcFluidFlowProperties::s_type;
}

bool IfcFluidFlowProperties::isOfType(Step::ClassType t) {
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

void IfcFluidFlowProperties::setPropertySource(IfcPropertySourceEnum value) {
  m_propertySource = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getFlowConditionTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_flowConditionTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_flowConditionTimeSeries = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getVelocityTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_velocityTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_velocityTimeSeries = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getFlowrateTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_flowrateTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_flowrateTimeSeries = value;
}

IfcMaterial *IfcFluidFlowProperties::getFluid() {
  if (Step::BaseObject::inited()) {
    return m_fluid.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setFluid(const Step::RefPtr< IfcMaterial > &value) {
  m_fluid = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getPressureTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_pressureTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_pressureTimeSeries = value;
}

IfcLabel IfcFluidFlowProperties::getUserDefinedPropertySource() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedPropertySource;
  }
  else {
    return getUnset(m_userDefinedPropertySource);
  }
}

void IfcFluidFlowProperties::setUserDefinedPropertySource(const IfcLabel &value) {
  m_userDefinedPropertySource = value;
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getTemperatureSingleValue() {
  if (Step::BaseObject::inited()) {
    return m_temperatureSingleValue;
  }
  else {
    return getUnset(m_temperatureSingleValue);
  }
}

void IfcFluidFlowProperties::setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value) {
  m_temperatureSingleValue = value;
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getWetBulbTemperatureSingleValue() {
  if (Step::BaseObject::inited()) {
    return m_wetBulbTemperatureSingleValue;
  }
  else {
    return getUnset(m_wetBulbTemperatureSingleValue);
  }
}

void IfcFluidFlowProperties::setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value) {
  m_wetBulbTemperatureSingleValue = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getWetBulbTemperatureTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_wetBulbTemperatureTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_wetBulbTemperatureTimeSeries = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getTemperatureTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_temperatureTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_temperatureTimeSeries = value;
}

IfcDerivedMeasureValue *IfcFluidFlowProperties::getFlowrateSingleValue() {
  if (Step::BaseObject::inited()) {
    return m_flowrateSingleValue.get();
  }
  else {
    return NULL;
  }
}

void IfcFluidFlowProperties::setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value) {
  m_flowrateSingleValue = value;
}

IfcPositiveRatioMeasure IfcFluidFlowProperties::getFlowConditionSingleValue() {
  if (Step::BaseObject::inited()) {
    return m_flowConditionSingleValue;
  }
  else {
    return getUnset(m_flowConditionSingleValue);
  }
}

void IfcFluidFlowProperties::setFlowConditionSingleValue(IfcPositiveRatioMeasure value) {
  m_flowConditionSingleValue = value;
}

IfcLinearVelocityMeasure IfcFluidFlowProperties::getVelocitySingleValue() {
  if (Step::BaseObject::inited()) {
    return m_velocitySingleValue;
  }
  else {
    return getUnset(m_velocitySingleValue);
  }
}

void IfcFluidFlowProperties::setVelocitySingleValue(IfcLinearVelocityMeasure value) {
  m_velocitySingleValue = value;
}

IfcPressureMeasure IfcFluidFlowProperties::getPressureSingleValue() {
  if (Step::BaseObject::inited()) {
    return m_pressureSingleValue;
  }
  else {
    return getUnset(m_pressureSingleValue);
  }
}

void IfcFluidFlowProperties::setPressureSingleValue(IfcPressureMeasure value) {
  m_pressureSingleValue = value;
}

void IfcFluidFlowProperties::release() {
  IfcPropertySetDefinition::release();
  m_flowConditionTimeSeries.release();
  m_velocityTimeSeries.release();
  m_flowrateTimeSeries.release();
  m_fluid.release();
  m_pressureTimeSeries.release();
  m_wetBulbTemperatureTimeSeries.release();
  m_temperatureTimeSeries.release();
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
    m_flowConditionTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_velocityTimeSeries = NULL;
  }
  else {
    m_velocityTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flowrateTimeSeries = NULL;
  }
  else {
    m_flowrateTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fluid = NULL;
  }
  else {
    m_fluid = static_cast< IfcMaterial * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pressureTimeSeries = NULL;
  }
  else {
    m_pressureTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedPropertySource = getUnset(m_userDefinedPropertySource);
  }
  else {
    m_userDefinedPropertySource = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_temperatureSingleValue = getUnset(m_temperatureSingleValue);
  }
  else {
    m_temperatureSingleValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_wetBulbTemperatureSingleValue = getUnset(m_wetBulbTemperatureSingleValue);
  }
  else {
    m_wetBulbTemperatureSingleValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_wetBulbTemperatureTimeSeries = NULL;
  }
  else {
    m_wetBulbTemperatureTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_temperatureTimeSeries = NULL;
  }
  else {
    m_temperatureTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flowrateSingleValue = NULL;
  }
  else {
    m_flowrateSingleValue = new IfcDerivedMeasureValue;
    if (arg[0] == '#') {
      m_flowrateSingleValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMESTAMP") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_flowrateSingleValue->setIfcTimeStamp(tmp_attr1);
        }
        if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMassDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_flowrateSingleValue->setIfcIntegerCountRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCENERGYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcEnergyMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
        }
        if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
          Step::StepList< Integer > tmp_attr1;
          tmp_attr1.setUnset(false);
          while (true) {
            std::string str2;
            Step::getSubParameter(arg, str2);
            if (str2 != "") {
              Integer attr3;
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
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
        }
        if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMonetaryMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCINDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcInductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCILLUMINANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCHARGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
        }
        if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCABSORBEDDOSEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
        }
        if (type1 == "IFCRADIOACTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCTORQUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcTorqueMeasure(tmp_attr1);
        }
        if (type1 == "IFCACCELERATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcAccelerationMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcLinearForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCSHEARMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcShearModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
        }
        if (type1 == "IFCCURVATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcCurvatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSPERLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGCONSTANTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATINGVALUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
        }
        if (type1 == "IFCPHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcPHMeasure(tmp_attr1);
        }
        if (type1 == "IFCIONCONCENTRATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_flowrateSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flowConditionSingleValue = getUnset(m_flowConditionSingleValue);
  }
  else {
    m_flowConditionSingleValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_velocitySingleValue = getUnset(m_velocitySingleValue);
  }
  else {
    m_velocitySingleValue = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pressureSingleValue = getUnset(m_pressureSingleValue);
  }
  else {
    m_pressureSingleValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFluidFlowProperties::s_type = new Step::ClassType_class("IfcFluidFlowProperties");
IfcFluidFlowProperties_Factory::IfcFluidFlowProperties_Factory() {
}

IfcFluidFlowProperties_Factory::~IfcFluidFlowProperties_Factory() {
  clear(true);
}

void IfcFluidFlowProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFluidFlowProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFluidFlowProperties_Factory::end() {
  return m_idMap.end();
}

IfcFluidFlowProperties *IfcFluidFlowProperties_Factory::get(Step::StepId id) {
  IfcFluidFlowProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFluidFlowProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcFluidFlowProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFluidFlowProperties * > (create(id));
  }
}

Step::BaseObject *IfcFluidFlowProperties_Factory::create(Step::StepId id) {
  IfcFluidFlowProperties *ret = new IfcFluidFlowProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFluidFlowProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFluidFlowProperties *ret = new IfcFluidFlowProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFluidFlowProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFluidFlowProperties *ret = new IfcFluidFlowProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFluidFlowProperties *IfcFluidFlowProperties_Factory::generate() {
  return static_cast< IfcFluidFlowProperties * > (create(m_model->getNewId()));
}

IfcFluidFlowProperties *IfcFluidFlowProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFluidFlowProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

