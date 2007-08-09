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
#include <ifc2x3/IfcSoundValue.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSoundValue::IfcSoundValue(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_soundLevelTimeSeries = NULL;
  m_frequency = getUnset(m_frequency);
  m_soundLevelSingleValue = NULL;
}


IfcSoundValue::~IfcSoundValue() {
}

bool IfcSoundValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSoundValue(this);
}

const char *IfcSoundValue::type() {
  return "IfcSoundValue";
}

Step::ClassType IfcSoundValue::getClassType() {
  return IfcSoundValue::s_type;
}

Step::ClassType IfcSoundValue::getType() const {
  return IfcSoundValue::s_type;
}

bool IfcSoundValue::isOfType(Step::ClassType t) {
  return IfcSoundValue::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcTimeSeries *IfcSoundValue::getSoundLevelTimeSeries() {
  if (Step::BaseObject::inited()) {
    return m_soundLevelTimeSeries.get();
  }
  else {
    return NULL;
  }
}

void IfcSoundValue::setSoundLevelTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
  m_soundLevelTimeSeries = value;
}

IfcFrequencyMeasure IfcSoundValue::getFrequency() {
  if (Step::BaseObject::inited()) {
    return m_frequency;
  }
  else {
    return getUnset(m_frequency);
  }
}

void IfcSoundValue::setFrequency(IfcFrequencyMeasure value) {
  m_frequency = value;
}

IfcDerivedMeasureValue *IfcSoundValue::getSoundLevelSingleValue() {
  if (Step::BaseObject::inited()) {
    return m_soundLevelSingleValue.get();
  }
  else {
    return NULL;
  }
}

void IfcSoundValue::setSoundLevelSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value) {
  m_soundLevelSingleValue = value;
}

void IfcSoundValue::release() {
  IfcPropertySetDefinition::release();
  m_soundLevelTimeSeries.release();
}

bool IfcSoundValue::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_soundLevelTimeSeries = NULL;
  }
  else {
    m_soundLevelTimeSeries = static_cast< IfcTimeSeries * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_frequency = getUnset(m_frequency);
  }
  else {
    m_frequency = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_soundLevelSingleValue = NULL;
  }
  else {
    m_soundLevelSingleValue = new IfcDerivedMeasureValue;
    if (arg[0] == '#') {
      m_soundLevelSingleValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_soundLevelSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMESTAMP") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_soundLevelSingleValue->setIfcTimeStamp(tmp_attr1);
        }
        if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMassDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_soundLevelSingleValue->setIfcIntegerCountRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCENERGYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcEnergyMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
        }
        if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
          m_soundLevelSingleValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCANGULARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
        }
        if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMonetaryMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCINDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcInductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCILLUMINANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCHARGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
        }
        if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCABSORBEDDOSEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
        }
        if (type1 == "IFCRADIOACTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCTORQUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcTorqueMeasure(tmp_attr1);
        }
        if (type1 == "IFCACCELERATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcAccelerationMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcLinearForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCSHEARMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcShearModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
        }
        if (type1 == "IFCCURVATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcCurvatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSPERLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGCONSTANTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATINGVALUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
        }
        if (type1 == "IFCPHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcPHMeasure(tmp_attr1);
        }
        if (type1 == "IFCIONCONCENTRATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_soundLevelSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSoundValue::s_type = new Step::ClassType_class("IfcSoundValue");
IfcSoundValue_Factory::IfcSoundValue_Factory() {
}

IfcSoundValue_Factory::~IfcSoundValue_Factory() {
  clear(true);
}

void IfcSoundValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSoundValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSoundValue_Factory::end() {
  return m_idMap.end();
}

IfcSoundValue *IfcSoundValue_Factory::get(Step::StepId id) {
  IfcSoundValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSoundValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcSoundValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSoundValue * > (create(id));
  }
}

Step::BaseObject *IfcSoundValue_Factory::create(Step::StepId id) {
  IfcSoundValue *ret = new IfcSoundValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSoundValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSoundValue *ret = new IfcSoundValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSoundValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSoundValue *ret = new IfcSoundValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSoundValue *IfcSoundValue_Factory::generate() {
  return static_cast< IfcSoundValue * > (create(m_model->getNewId()));
}

IfcSoundValue *IfcSoundValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSoundValue * > (it->second);
  }
  else {
    return NULL;
  }
}

