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
#include <ifc2x3/IfcPropertySingleValue.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertySingleValue::IfcPropertySingleValue(Step::SPFData *args) : IfcSimpleProperty(args) {
  m_nominalValue = NULL;
  m_unit = NULL;
}


IfcPropertySingleValue::~IfcPropertySingleValue() {
}

bool IfcPropertySingleValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertySingleValue(this);
}

const char *IfcPropertySingleValue::type() {
  return "IfcPropertySingleValue";
}

Step::ClassType IfcPropertySingleValue::getClassType() {
  return IfcPropertySingleValue::s_type;
}

Step::ClassType IfcPropertySingleValue::getType() const {
  return IfcPropertySingleValue::s_type;
}

bool IfcPropertySingleValue::isOfType(Step::ClassType t) {
  return IfcPropertySingleValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

IfcValue *IfcPropertySingleValue::getNominalValue() {
  if (Step::BaseObject::inited()) {
    return m_nominalValue.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertySingleValue::setNominalValue(const Step::RefPtr< IfcValue > &value) {
  m_nominalValue = value;
}

IfcUnit *IfcPropertySingleValue::getUnit() {
  if (Step::BaseObject::inited()) {
    return m_unit.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertySingleValue::setUnit(const Step::RefPtr< IfcUnit > &value) {
  m_unit = value;
}

void IfcPropertySingleValue::release() {
  IfcSimpleProperty::release();
}

bool IfcPropertySingleValue::init() {
  bool status = IfcSimpleProperty::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_nominalValue = NULL;
  }
  else {
    m_nominalValue = new IfcValue;
    if (arg[0] == '#') {
      m_nominalValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_nominalValue->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_nominalValue->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_nominalValue->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_nominalValue->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
          m_nominalValue->setIfcComplexNumber(tmp_attr1);
        }
        if (type1 == "IFCINTEGER") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_nominalValue->setIfcInteger(tmp_attr1);
        }
        if (type1 == "IFCREAL") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcReal(tmp_attr1);
        }
        if (type1 == "IFCBOOLEAN") {
          Bool tmp_attr1;
          tmp_attr1 = Step::spfToBool(arg);
          m_nominalValue->setIfcBoolean(tmp_attr1);
        }
        if (type1 == "IFCIDENTIFIER") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_nominalValue->setIfcIdentifier(tmp_attr1);
        }
        if (type1 == "IFCTEXT") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_nominalValue->setIfcText(tmp_attr1);
        }
        if (type1 == "IFCLABEL") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_nominalValue->setIfcLabel(tmp_attr1);
        }
        if (type1 == "IFCLOGICAL") {
          Logical tmp_attr1;
          tmp_attr1 = Step::spfToLogical(arg);
          m_nominalValue->setIfcLogical(tmp_attr1);
        }
        if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMESTAMP") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_nominalValue->setIfcTimeStamp(tmp_attr1);
        }
        if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcThermalResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMassFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMassDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLinearVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcKinematicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_nominalValue->setIfcIntegerCountRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCENERGYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcEnergyMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcElectricVoltageMeasure(tmp_attr1);
        }
        if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcDynamicViscosityMeasure(tmp_attr1);
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
          m_nominalValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCANGULARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcAngularVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcThermalConductivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMolecularWeightMeasure(tmp_attr1);
        }
        if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMonetaryMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMagneticFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLuminousFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCINDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcInductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCILLUMINANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcIlluminanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcElectricResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcElectricConductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCHARGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcElectricChargeMeasure(tmp_attr1);
        }
        if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcDoseEquivalentMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCABSORBEDDOSEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
        }
        if (type1 == "IFCRADIOACTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcRadioActivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCTORQUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcTorqueMeasure(tmp_attr1);
        }
        if (type1 == "IFCACCELERATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcAccelerationMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLinearForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLinearStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPlanarForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCSHEARMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcShearModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLinearMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
        }
        if (type1 == "IFCCURVATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcCurvatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSPERLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcMassPerLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcRotationalMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcSectionModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcTemperatureGradientMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGCONSTANTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcWarpingConstantMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcWarpingMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcSoundPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcSoundPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATINGVALUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcHeatingValueMeasure(tmp_attr1);
        }
        if (type1 == "IFCPHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcPHMeasure(tmp_attr1);
        }
        if (type1 == "IFCIONCONCENTRATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_nominalValue->setIfcIonConcentrationMeasure(tmp_attr1);
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

IFC2X3_DLL_DEF Step::ClassType IfcPropertySingleValue::s_type = new Step::ClassType_class("IfcPropertySingleValue");
IfcPropertySingleValue_Factory::IfcPropertySingleValue_Factory() {
}

IfcPropertySingleValue_Factory::~IfcPropertySingleValue_Factory() {
  clear(true);
}

void IfcPropertySingleValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertySingleValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertySingleValue_Factory::end() {
  return m_idMap.end();
}

IfcPropertySingleValue *IfcPropertySingleValue_Factory::get(Step::StepId id) {
  IfcPropertySingleValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertySingleValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertySingleValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertySingleValue * > (create(id));
  }
}

Step::BaseObject *IfcPropertySingleValue_Factory::create(Step::StepId id) {
  IfcPropertySingleValue *ret = new IfcPropertySingleValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertySingleValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertySingleValue *ret = new IfcPropertySingleValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertySingleValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertySingleValue *ret = new IfcPropertySingleValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertySingleValue *IfcPropertySingleValue_Factory::generate() {
  return static_cast< IfcPropertySingleValue * > (create(m_model->getNewId()));
}

IfcPropertySingleValue *IfcPropertySingleValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertySingleValue * > (it->second);
  }
  else {
    return NULL;
  }
}

