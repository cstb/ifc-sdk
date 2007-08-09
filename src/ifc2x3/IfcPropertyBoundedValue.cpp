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
#include <ifc2x3/IfcPropertyBoundedValue.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertyBoundedValue::IfcPropertyBoundedValue(Step::SPFData *args) : IfcSimpleProperty(args) {
  m_upperBoundValue = NULL;
  m_lowerBoundValue = NULL;
  m_unit = NULL;
}


IfcPropertyBoundedValue::~IfcPropertyBoundedValue() {
}

bool IfcPropertyBoundedValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertyBoundedValue(this);
}

const char *IfcPropertyBoundedValue::type() {
  return "IfcPropertyBoundedValue";
}

Step::ClassType IfcPropertyBoundedValue::getClassType() {
  return IfcPropertyBoundedValue::s_type;
}

Step::ClassType IfcPropertyBoundedValue::getType() const {
  return IfcPropertyBoundedValue::s_type;
}

bool IfcPropertyBoundedValue::isOfType(Step::ClassType t) {
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

void IfcPropertyBoundedValue::setUpperBoundValue(const Step::RefPtr< IfcValue > &value) {
  m_upperBoundValue = value;
}

IfcValue *IfcPropertyBoundedValue::getLowerBoundValue() {
  if (Step::BaseObject::inited()) {
    return m_lowerBoundValue.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyBoundedValue::setLowerBoundValue(const Step::RefPtr< IfcValue > &value) {
  m_lowerBoundValue = value;
}

IfcUnit *IfcPropertyBoundedValue::getUnit() {
  if (Step::BaseObject::inited()) {
    return m_unit.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyBoundedValue::setUnit(const Step::RefPtr< IfcUnit > &value) {
  m_unit = value;
}

void IfcPropertyBoundedValue::release() {
  IfcSimpleProperty::release();
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
      m_upperBoundValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCVOLUMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperBoundValue->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_upperBoundValue->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperBoundValue->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOMPLEXNUMBER") {
          Step::StepArray< Real > tmp_attr1;
          tmp_attr1.setUnset(false);
          while (true) {
            std::string str2;
            Step::getSubParameter(arg, str2);
            if (str2 != "") {
              Real attr3;
              attr3 = Step::spfToReal(str2);
              tmp_attr1.push_back(attr3);
            }
            else {
              break;
            }
          }
          m_upperBoundValue->setIfcComplexNumber(tmp_attr1);
        }
        if (type1 == "IFCINTEGER") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperBoundValue->setIfcInteger(tmp_attr1);
        }
        if (type1 == "IFCREAL") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcReal(tmp_attr1);
        }
        if (type1 == "IFCBOOLEAN") {
          Bool tmp_attr1;
          tmp_attr1 = Step::spfToBool(arg);
          m_upperBoundValue->setIfcBoolean(tmp_attr1);
        }
        if (type1 == "IFCIDENTIFIER") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_upperBoundValue->setIfcIdentifier(tmp_attr1);
        }
        if (type1 == "IFCTEXT") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_upperBoundValue->setIfcText(tmp_attr1);
        }
        if (type1 == "IFCLABEL") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_upperBoundValue->setIfcLabel(tmp_attr1);
        }
        if (type1 == "IFCLOGICAL") {
          Logical tmp_attr1;
          tmp_attr1 = Step::spfToLogical(arg);
          m_upperBoundValue->setIfcLogical(tmp_attr1);
        }
        if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMESTAMP") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperBoundValue->setIfcTimeStamp(tmp_attr1);
        }
        if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcThermalResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMassFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMassDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLinearVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcKinematicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperBoundValue->setIfcIntegerCountRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCENERGYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcEnergyMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcElectricVoltageMeasure(tmp_attr1);
        }
        if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
          m_upperBoundValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCANGULARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcAngularVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcThermalConductivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMolecularWeightMeasure(tmp_attr1);
        }
        if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMonetaryMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMagneticFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLuminousFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCINDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcInductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCILLUMINANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcIlluminanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcElectricResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcElectricConductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCHARGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcElectricChargeMeasure(tmp_attr1);
        }
        if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcDoseEquivalentMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCABSORBEDDOSEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
        }
        if (type1 == "IFCRADIOACTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcRadioActivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCTORQUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcTorqueMeasure(tmp_attr1);
        }
        if (type1 == "IFCACCELERATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcAccelerationMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLinearForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLinearStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPlanarForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCSHEARMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcShearModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLinearMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
        }
        if (type1 == "IFCCURVATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcCurvatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSPERLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcMassPerLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcRotationalMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcSectionModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcTemperatureGradientMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGCONSTANTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcWarpingConstantMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcWarpingMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcSoundPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcSoundPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATINGVALUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcHeatingValueMeasure(tmp_attr1);
        }
        if (type1 == "IFCPHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperBoundValue->setIfcPHMeasure(tmp_attr1);
        }
        if (type1 == "IFCIONCONCENTRATIONMEASURE") {
          Real tmp_attr1;
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
      m_lowerBoundValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
        if (type1 == "IFCVOLUMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerBoundValue->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_lowerBoundValue->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerBoundValue->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcNormalisedRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOMPLEXNUMBER") {
          Step::StepArray< Real > tmp_attr1;
          tmp_attr1.setUnset(false);
          while (true) {
            std::string str2;
            Step::getSubParameter(arg, str2);
            if (str2 != "") {
              Real attr3;
              attr3 = Step::spfToReal(str2);
              tmp_attr1.push_back(attr3);
            }
            else {
              break;
            }
          }
          m_lowerBoundValue->setIfcComplexNumber(tmp_attr1);
        }
        if (type1 == "IFCINTEGER") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerBoundValue->setIfcInteger(tmp_attr1);
        }
        if (type1 == "IFCREAL") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcReal(tmp_attr1);
        }
        if (type1 == "IFCBOOLEAN") {
          Bool tmp_attr1;
          tmp_attr1 = Step::spfToBool(arg);
          m_lowerBoundValue->setIfcBoolean(tmp_attr1);
        }
        if (type1 == "IFCIDENTIFIER") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_lowerBoundValue->setIfcIdentifier(tmp_attr1);
        }
        if (type1 == "IFCTEXT") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_lowerBoundValue->setIfcText(tmp_attr1);
        }
        if (type1 == "IFCLABEL") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_lowerBoundValue->setIfcLabel(tmp_attr1);
        }
        if (type1 == "IFCLOGICAL") {
          Logical tmp_attr1;
          tmp_attr1 = Step::spfToLogical(arg);
          m_lowerBoundValue->setIfcLogical(tmp_attr1);
        }
        if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMESTAMP") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerBoundValue->setIfcTimeStamp(tmp_attr1);
        }
        if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcThermalResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMassFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMassDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLinearVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcKinematicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerBoundValue->setIfcIntegerCountRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCENERGYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcEnergyMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcElectricVoltageMeasure(tmp_attr1);
        }
        if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
          m_lowerBoundValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCANGULARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcAngularVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcThermalConductivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMolecularWeightMeasure(tmp_attr1);
        }
        if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMonetaryMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMagneticFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLuminousFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCINDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcInductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCILLUMINANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcIlluminanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcElectricResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcElectricConductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCHARGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcElectricChargeMeasure(tmp_attr1);
        }
        if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcDoseEquivalentMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCABSORBEDDOSEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
        }
        if (type1 == "IFCRADIOACTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcRadioActivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCTORQUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcTorqueMeasure(tmp_attr1);
        }
        if (type1 == "IFCACCELERATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcAccelerationMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLinearForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLinearStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPlanarForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCSHEARMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcShearModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLinearMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
        }
        if (type1 == "IFCCURVATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcCurvatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSPERLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcMassPerLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcRotationalMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcSectionModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcTemperatureGradientMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGCONSTANTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcWarpingConstantMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcWarpingMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcSoundPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcSoundPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATINGVALUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcHeatingValueMeasure(tmp_attr1);
        }
        if (type1 == "IFCPHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerBoundValue->setIfcPHMeasure(tmp_attr1);
        }
        if (type1 == "IFCIONCONCENTRATIONMEASURE") {
          Real tmp_attr1;
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
      m_unit->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPropertyBoundedValue::s_type = new Step::ClassType_class("IfcPropertyBoundedValue");
IfcPropertyBoundedValue_Factory::IfcPropertyBoundedValue_Factory() {
}

IfcPropertyBoundedValue_Factory::~IfcPropertyBoundedValue_Factory() {
  clear(true);
}

void IfcPropertyBoundedValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyBoundedValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyBoundedValue_Factory::end() {
  return m_idMap.end();
}

IfcPropertyBoundedValue *IfcPropertyBoundedValue_Factory::get(Step::StepId id) {
  IfcPropertyBoundedValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertyBoundedValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertyBoundedValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertyBoundedValue * > (create(id));
  }
}

Step::BaseObject *IfcPropertyBoundedValue_Factory::create(Step::StepId id) {
  IfcPropertyBoundedValue *ret = new IfcPropertyBoundedValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyBoundedValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertyBoundedValue *ret = new IfcPropertyBoundedValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyBoundedValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertyBoundedValue *ret = new IfcPropertyBoundedValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertyBoundedValue *IfcPropertyBoundedValue_Factory::generate() {
  return static_cast< IfcPropertyBoundedValue * > (create(m_model->getNewId()));
}

IfcPropertyBoundedValue *IfcPropertyBoundedValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertyBoundedValue * > (it->second);
  }
  else {
    return NULL;
  }
}

