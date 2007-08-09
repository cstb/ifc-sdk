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
#include <ifc2x3/IfcPropertyListValue.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPropertyListValue::IfcPropertyListValue(Step::SPFData *args) : IfcSimpleProperty(args) {
  m_listValues.setUnset(true);
  m_unit = NULL;
}


IfcPropertyListValue::~IfcPropertyListValue() {
}

bool IfcPropertyListValue::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPropertyListValue(this);
}

const char *IfcPropertyListValue::type() {
  return "IfcPropertyListValue";
}

Step::ClassType IfcPropertyListValue::getClassType() {
  return IfcPropertyListValue::s_type;
}

Step::ClassType IfcPropertyListValue::getType() const {
  return IfcPropertyListValue::s_type;
}

bool IfcPropertyListValue::isOfType(Step::ClassType t) {
  return IfcPropertyListValue::s_type == t ? true : IfcSimpleProperty::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcValue > > &IfcPropertyListValue::getListValues() {
  if (Step::BaseObject::inited()) {
    return m_listValues;
  }
  else {
    m_listValues.setUnset(true);
    return m_listValues;
  }
}

void IfcPropertyListValue::setListValues(const Step::StepList< Step::RefPtr< IfcValue > > &value) {
  m_listValues = value;
}

IfcUnit *IfcPropertyListValue::getUnit() {
  if (Step::BaseObject::inited()) {
    return m_unit.get();
  }
  else {
    return NULL;
  }
}

void IfcPropertyListValue::setUnit(const Step::RefPtr< IfcUnit > &value) {
  m_unit = value;
}

void IfcPropertyListValue::release() {
  IfcSimpleProperty::release();
  m_listValues.clear();
}

bool IfcPropertyListValue::init() {
  bool status = IfcSimpleProperty::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_listValues.setUnset(true);
  }
  else {
    m_listValues.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcValue > attr2;
        attr2 = new IfcValue;
        if (str1[0] == '#') {
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
            if (type2 == "IFCVOLUMEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcVolumeMeasure(tmp_attr2);
            }
            if (type2 == "IFCTIMEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcTimeMeasure(tmp_attr2);
            }
            if (type2 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcThermodynamicTemperatureMeasure(tmp_attr2);
            }
            if (type2 == "IFCSOLIDANGLEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcSolidAngleMeasure(tmp_attr2);
            }
            if (type2 == "IFCPOSITIVERATIOMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPositiveRatioMeasure(tmp_attr2);
            }
            if (type2 == "IFCRATIOMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcRatioMeasure(tmp_attr2);
            }
            if (type2 == "IFCPOSITIVEPLANEANGLEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPositivePlaneAngleMeasure(tmp_attr2);
            }
            if (type2 == "IFCPLANEANGLEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPlaneAngleMeasure(tmp_attr2);
            }
            if (type2 == "IFCPARAMETERVALUE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcParameterValue(tmp_attr2);
            }
            if (type2 == "IFCNUMERICMEASURE") {
              Integer tmp_attr2;
              tmp_attr2 = Step::spfToInteger(str1);
              attr2->setIfcNumericMeasure(tmp_attr2);
            }
            if (type2 == "IFCMASSMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMassMeasure(tmp_attr2);
            }
            if (type2 == "IFCPOSITIVELENGTHMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPositiveLengthMeasure(tmp_attr2);
            }
            if (type2 == "IFCLENGTHMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLengthMeasure(tmp_attr2);
            }
            if (type2 == "IFCELECTRICCURRENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcElectricCurrentMeasure(tmp_attr2);
            }
            if (type2 == "IFCDESCRIPTIVEMEASURE") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcDescriptiveMeasure(tmp_attr2);
            }
            if (type2 == "IFCCOUNTMEASURE") {
              Integer tmp_attr2;
              tmp_attr2 = Step::spfToInteger(str1);
              attr2->setIfcCountMeasure(tmp_attr2);
            }
            if (type2 == "IFCCONTEXTDEPENDENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcContextDependentMeasure(tmp_attr2);
            }
            if (type2 == "IFCAREAMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcAreaMeasure(tmp_attr2);
            }
            if (type2 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcAmountOfSubstanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCLUMINOUSINTENSITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLuminousIntensityMeasure(tmp_attr2);
            }
            if (type2 == "IFCNORMALISEDRATIOMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcNormalisedRatioMeasure(tmp_attr2);
            }
            if (type2 == "IFCCOMPLEXNUMBER") {
              Step::StepArray< Real > tmp_attr2;
              tmp_attr2.setUnset(false);
              while (true) {
                std::string str3;
                Step::getSubParameter(str1, str3);
                if (str3 != "") {
                  Real attr4;
                  attr4 = Step::spfToReal(str3);
                  tmp_attr2.push_back(attr4);
                }
                else {
                  break;
                }
              }
              attr2->setIfcComplexNumber(tmp_attr2);
            }
            if (type2 == "IFCINTEGER") {
              Integer tmp_attr2;
              tmp_attr2 = Step::spfToInteger(str1);
              attr2->setIfcInteger(tmp_attr2);
            }
            if (type2 == "IFCREAL") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcReal(tmp_attr2);
            }
            if (type2 == "IFCBOOLEAN") {
              Bool tmp_attr2;
              tmp_attr2 = Step::spfToBool(str1);
              attr2->setIfcBoolean(tmp_attr2);
            }
            if (type2 == "IFCIDENTIFIER") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcIdentifier(tmp_attr2);
            }
            if (type2 == "IFCTEXT") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcText(tmp_attr2);
            }
            if (type2 == "IFCLABEL") {
              std::string tmp_attr2;
              tmp_attr2 = Step::spfToString(str1);
              attr2->setIfcLabel(tmp_attr2);
            }
            if (type2 == "IFCLOGICAL") {
              Logical tmp_attr2;
              tmp_attr2 = Step::spfToLogical(str1);
              attr2->setIfcLogical(tmp_attr2);
            }
            if (type2 == "IFCVOLUMETRICFLOWRATEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcVolumetricFlowRateMeasure(tmp_attr2);
            }
            if (type2 == "IFCTIMESTAMP") {
              Integer tmp_attr2;
              tmp_attr2 = Step::spfToInteger(str1);
              attr2->setIfcTimeStamp(tmp_attr2);
            }
            if (type2 == "IFCTHERMALTRANSMITTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcThermalTransmittanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCTHERMALRESISTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcThermalResistanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCTHERMALADMITTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcThermalAdmittanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCPRESSUREMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPressureMeasure(tmp_attr2);
            }
            if (type2 == "IFCPOWERMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPowerMeasure(tmp_attr2);
            }
            if (type2 == "IFCMASSFLOWRATEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMassFlowRateMeasure(tmp_attr2);
            }
            if (type2 == "IFCMASSDENSITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMassDensityMeasure(tmp_attr2);
            }
            if (type2 == "IFCLINEARVELOCITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLinearVelocityMeasure(tmp_attr2);
            }
            if (type2 == "IFCKINEMATICVISCOSITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcKinematicViscosityMeasure(tmp_attr2);
            }
            if (type2 == "IFCINTEGERCOUNTRATEMEASURE") {
              Integer tmp_attr2;
              tmp_attr2 = Step::spfToInteger(str1);
              attr2->setIfcIntegerCountRateMeasure(tmp_attr2);
            }
            if (type2 == "IFCHEATFLUXDENSITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcHeatFluxDensityMeasure(tmp_attr2);
            }
            if (type2 == "IFCFREQUENCYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcFrequencyMeasure(tmp_attr2);
            }
            if (type2 == "IFCENERGYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcEnergyMeasure(tmp_attr2);
            }
            if (type2 == "IFCELECTRICVOLTAGEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcElectricVoltageMeasure(tmp_attr2);
            }
            if (type2 == "IFCDYNAMICVISCOSITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcDynamicViscosityMeasure(tmp_attr2);
            }
            if (type2 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
              Step::StepList< Integer > tmp_attr2;
              tmp_attr2.setUnset(false);
              while (true) {
                std::string str3;
                Step::getSubParameter(str1, str3);
                if (str3 != "") {
                  Integer attr4;
                  attr4 = Step::spfToInteger(str3);
                  tmp_attr2.push_back(attr4);
                }
                else {
                  break;
                }
              }
              attr2->setIfcCompoundPlaneAngleMeasure(tmp_attr2);
            }
            if (type2 == "IFCANGULARVELOCITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcAngularVelocityMeasure(tmp_attr2);
            }
            if (type2 == "IFCTHERMALCONDUCTIVITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcThermalConductivityMeasure(tmp_attr2);
            }
            if (type2 == "IFCMOLECULARWEIGHTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMolecularWeightMeasure(tmp_attr2);
            }
            if (type2 == "IFCVAPORPERMEABILITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcVaporPermeabilityMeasure(tmp_attr2);
            }
            if (type2 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMoistureDiffusivityMeasure(tmp_attr2);
            }
            if (type2 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcIsothermalMoistureCapacityMeasure(tmp_attr2);
            }
            if (type2 == "IFCSPECIFICHEATCAPACITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcSpecificHeatCapacityMeasure(tmp_attr2);
            }
            if (type2 == "IFCMONETARYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMonetaryMeasure(tmp_attr2);
            }
            if (type2 == "IFCMAGNETICFLUXDENSITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMagneticFluxDensityMeasure(tmp_attr2);
            }
            if (type2 == "IFCMAGNETICFLUXMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMagneticFluxMeasure(tmp_attr2);
            }
            if (type2 == "IFCLUMINOUSFLUXMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLuminousFluxMeasure(tmp_attr2);
            }
            if (type2 == "IFCFORCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcForceMeasure(tmp_attr2);
            }
            if (type2 == "IFCINDUCTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcInductanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCILLUMINANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcIlluminanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCELECTRICRESISTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcElectricResistanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCELECTRICCONDUCTANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcElectricConductanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCELECTRICCHARGEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcElectricChargeMeasure(tmp_attr2);
            }
            if (type2 == "IFCDOSEEQUIVALENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcDoseEquivalentMeasure(tmp_attr2);
            }
            if (type2 == "IFCELECTRICCAPACITANCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcElectricCapacitanceMeasure(tmp_attr2);
            }
            if (type2 == "IFCABSORBEDDOSEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcAbsorbedDoseMeasure(tmp_attr2);
            }
            if (type2 == "IFCRADIOACTIVITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcRadioActivityMeasure(tmp_attr2);
            }
            if (type2 == "IFCROTATIONALFREQUENCYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcRotationalFrequencyMeasure(tmp_attr2);
            }
            if (type2 == "IFCTORQUEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcTorqueMeasure(tmp_attr2);
            }
            if (type2 == "IFCACCELERATIONMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcAccelerationMeasure(tmp_attr2);
            }
            if (type2 == "IFCLINEARFORCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLinearForceMeasure(tmp_attr2);
            }
            if (type2 == "IFCLINEARSTIFFNESSMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLinearStiffnessMeasure(tmp_attr2);
            }
            if (type2 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcModulusOfSubgradeReactionMeasure(tmp_attr2);
            }
            if (type2 == "IFCMODULUSOFELASTICITYMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcModulusOfElasticityMeasure(tmp_attr2);
            }
            if (type2 == "IFCMOMENTOFINERTIAMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMomentOfInertiaMeasure(tmp_attr2);
            }
            if (type2 == "IFCPLANARFORCEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPlanarForceMeasure(tmp_attr2);
            }
            if (type2 == "IFCROTATIONALSTIFFNESSMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcRotationalStiffnessMeasure(tmp_attr2);
            }
            if (type2 == "IFCSHEARMODULUSMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcShearModulusMeasure(tmp_attr2);
            }
            if (type2 == "IFCLINEARMOMENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLinearMomentMeasure(tmp_attr2);
            }
            if (type2 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcLuminousIntensityDistributionMeasure(tmp_attr2);
            }
            if (type2 == "IFCCURVATUREMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcCurvatureMeasure(tmp_attr2);
            }
            if (type2 == "IFCMASSPERLENGTHMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcMassPerLengthMeasure(tmp_attr2);
            }
            if (type2 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr2);
            }
            if (type2 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr2);
            }
            if (type2 == "IFCROTATIONALMASSMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcRotationalMassMeasure(tmp_attr2);
            }
            if (type2 == "IFCSECTIONALAREAINTEGRALMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcSectionalAreaIntegralMeasure(tmp_attr2);
            }
            if (type2 == "IFCSECTIONMODULUSMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcSectionModulusMeasure(tmp_attr2);
            }
            if (type2 == "IFCTEMPERATUREGRADIENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcTemperatureGradientMeasure(tmp_attr2);
            }
            if (type2 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcThermalExpansionCoefficientMeasure(tmp_attr2);
            }
            if (type2 == "IFCWARPINGCONSTANTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcWarpingConstantMeasure(tmp_attr2);
            }
            if (type2 == "IFCWARPINGMOMENTMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcWarpingMomentMeasure(tmp_attr2);
            }
            if (type2 == "IFCSOUNDPOWERMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcSoundPowerMeasure(tmp_attr2);
            }
            if (type2 == "IFCSOUNDPRESSUREMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcSoundPressureMeasure(tmp_attr2);
            }
            if (type2 == "IFCHEATINGVALUEMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcHeatingValueMeasure(tmp_attr2);
            }
            if (type2 == "IFCPHMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcPHMeasure(tmp_attr2);
            }
            if (type2 == "IFCIONCONCENTRATIONMEASURE") {
              Real tmp_attr2;
              tmp_attr2 = Step::spfToReal(str1);
              attr2->setIfcIonConcentrationMeasure(tmp_attr2);
            }
          }
        }
        m_listValues.push_back(attr2);
      }
      else {
        break;
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

IFC2X3_DLL_DEF Step::ClassType IfcPropertyListValue::s_type = new Step::ClassType_class("IfcPropertyListValue");
IfcPropertyListValue_Factory::IfcPropertyListValue_Factory() {
}

IfcPropertyListValue_Factory::~IfcPropertyListValue_Factory() {
  clear(true);
}

void IfcPropertyListValue_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyListValue_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPropertyListValue_Factory::end() {
  return m_idMap.end();
}

IfcPropertyListValue *IfcPropertyListValue_Factory::get(Step::StepId id) {
  IfcPropertyListValue *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPropertyListValue * > (it->second);
  }
  else {
    LOG_ERROR("IfcPropertyListValue_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPropertyListValue * > (create(id));
  }
}

Step::BaseObject *IfcPropertyListValue_Factory::create(Step::StepId id) {
  IfcPropertyListValue *ret = new IfcPropertyListValue(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyListValue_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPropertyListValue *ret = new IfcPropertyListValue(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPropertyListValue_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPropertyListValue *ret = new IfcPropertyListValue(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPropertyListValue *IfcPropertyListValue_Factory::generate() {
  return static_cast< IfcPropertyListValue * > (create(m_model->getNewId()));
}

IfcPropertyListValue *IfcPropertyListValue_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPropertyListValue * > (it->second);
  }
  else {
    return NULL;
  }
}

