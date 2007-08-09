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
#include <ifc2x3/IfcMeasureWithUnit.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMeasureWithUnit::IfcMeasureWithUnit(Step::SPFData *args) : Step::BaseObject(args) {
  m_valueComponent = NULL;
  m_unitComponent = NULL;
}


IfcMeasureWithUnit::~IfcMeasureWithUnit() {
}

bool IfcMeasureWithUnit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMeasureWithUnit(this);
}

const char *IfcMeasureWithUnit::type() {
  return "IfcMeasureWithUnit";
}

Step::ClassType IfcMeasureWithUnit::getClassType() {
  return IfcMeasureWithUnit::s_type;
}

Step::ClassType IfcMeasureWithUnit::getType() const {
  return IfcMeasureWithUnit::s_type;
}

bool IfcMeasureWithUnit::isOfType(Step::ClassType t) {
  return IfcMeasureWithUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcValue *IfcMeasureWithUnit::getValueComponent() {
  if (Step::BaseObject::inited()) {
    return m_valueComponent.get();
  }
  else {
    return NULL;
  }
}

void IfcMeasureWithUnit::setValueComponent(const Step::RefPtr< IfcValue > &value) {
  m_valueComponent = value;
}

IfcUnit *IfcMeasureWithUnit::getUnitComponent() {
  if (Step::BaseObject::inited()) {
    return m_unitComponent.get();
  }
  else {
    return NULL;
  }
}

void IfcMeasureWithUnit::setUnitComponent(const Step::RefPtr< IfcUnit > &value) {
  m_unitComponent = value;
}

void IfcMeasureWithUnit::release() {
}

bool IfcMeasureWithUnit::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_valueComponent = NULL;
  }
  else {
    m_valueComponent = new IfcValue;
    if (arg[0] == '#') {
      m_valueComponent->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_valueComponent->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_valueComponent->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_valueComponent->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_valueComponent->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcNormalisedRatioMeasure(tmp_attr1);
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
          m_valueComponent->setIfcComplexNumber(tmp_attr1);
        }
        if (type1 == "IFCINTEGER") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_valueComponent->setIfcInteger(tmp_attr1);
        }
        if (type1 == "IFCREAL") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcReal(tmp_attr1);
        }
        if (type1 == "IFCBOOLEAN") {
          Bool tmp_attr1;
          tmp_attr1 = Step::spfToBool(arg);
          m_valueComponent->setIfcBoolean(tmp_attr1);
        }
        if (type1 == "IFCIDENTIFIER") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_valueComponent->setIfcIdentifier(tmp_attr1);
        }
        if (type1 == "IFCTEXT") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_valueComponent->setIfcText(tmp_attr1);
        }
        if (type1 == "IFCLABEL") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_valueComponent->setIfcLabel(tmp_attr1);
        }
        if (type1 == "IFCLOGICAL") {
          Logical tmp_attr1;
          tmp_attr1 = Step::spfToLogical(arg);
          m_valueComponent->setIfcLogical(tmp_attr1);
        }
        if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcVolumetricFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMESTAMP") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_valueComponent->setIfcTimeStamp(tmp_attr1);
        }
        if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcThermalTransmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcThermalResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcThermalAdmittanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSFLOWRATEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMassFlowRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMassDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLinearVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcKinematicViscosityMeasure(tmp_attr1);
        }
        if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_valueComponent->setIfcIntegerCountRateMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcHeatFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCENERGYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcEnergyMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcElectricVoltageMeasure(tmp_attr1);
        }
        if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcDynamicViscosityMeasure(tmp_attr1);
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
          m_valueComponent->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCANGULARVELOCITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcAngularVelocityMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcThermalConductivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMolecularWeightMeasure(tmp_attr1);
        }
        if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcVaporPermeabilityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMoistureDiffusivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMONETARYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMonetaryMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMagneticFluxDensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMAGNETICFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMagneticFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSFLUXMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLuminousFluxMeasure(tmp_attr1);
        }
        if (type1 == "IFCFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCINDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcInductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCILLUMINANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcIlluminanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcElectricResistanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcElectricConductanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCHARGEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcElectricChargeMeasure(tmp_attr1);
        }
        if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcDoseEquivalentMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcElectricCapacitanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCABSORBEDDOSEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcAbsorbedDoseMeasure(tmp_attr1);
        }
        if (type1 == "IFCRADIOACTIVITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcRadioActivityMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcRotationalFrequencyMeasure(tmp_attr1);
        }
        if (type1 == "IFCTORQUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcTorqueMeasure(tmp_attr1);
        }
        if (type1 == "IFCACCELERATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcAccelerationMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLinearForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLinearStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcModulusOfElasticityMeasure(tmp_attr1);
        }
        if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMomentOfInertiaMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANARFORCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPlanarForceMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcRotationalStiffnessMeasure(tmp_attr1);
        }
        if (type1 == "IFCSHEARMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcShearModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCLINEARMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLinearMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
        }
        if (type1 == "IFCCURVATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcCurvatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSPERLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcMassPerLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
        }
        if (type1 == "IFCROTATIONALMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcRotationalMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
        }
        if (type1 == "IFCSECTIONMODULUSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcSectionModulusMeasure(tmp_attr1);
        }
        if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcTemperatureGradientMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGCONSTANTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcWarpingConstantMeasure(tmp_attr1);
        }
        if (type1 == "IFCWARPINGMOMENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcWarpingMomentMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPOWERMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcSoundPowerMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOUNDPRESSUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcSoundPressureMeasure(tmp_attr1);
        }
        if (type1 == "IFCHEATINGVALUEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcHeatingValueMeasure(tmp_attr1);
        }
        if (type1 == "IFCPHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcPHMeasure(tmp_attr1);
        }
        if (type1 == "IFCIONCONCENTRATIONMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_valueComponent->setIfcIonConcentrationMeasure(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unitComponent = NULL;
  }
  else {
    m_unitComponent = new IfcUnit;
    if (arg[0] == '#') {
      m_unitComponent->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcMeasureWithUnit::s_type = new Step::ClassType_class("IfcMeasureWithUnit");
IfcMeasureWithUnit_Factory::IfcMeasureWithUnit_Factory() {
}

IfcMeasureWithUnit_Factory::~IfcMeasureWithUnit_Factory() {
  clear(true);
}

void IfcMeasureWithUnit_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMeasureWithUnit_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMeasureWithUnit_Factory::end() {
  return m_idMap.end();
}

IfcMeasureWithUnit *IfcMeasureWithUnit_Factory::get(Step::StepId id) {
  IfcMeasureWithUnit *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMeasureWithUnit * > (it->second);
  }
  else {
    LOG_ERROR("IfcMeasureWithUnit_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMeasureWithUnit * > (create(id));
  }
}

Step::BaseObject *IfcMeasureWithUnit_Factory::create(Step::StepId id) {
  IfcMeasureWithUnit *ret = new IfcMeasureWithUnit(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMeasureWithUnit_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMeasureWithUnit *ret = new IfcMeasureWithUnit(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMeasureWithUnit_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMeasureWithUnit *ret = new IfcMeasureWithUnit(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMeasureWithUnit *IfcMeasureWithUnit_Factory::generate() {
  return static_cast< IfcMeasureWithUnit * > (create(m_model->getNewId()));
}

IfcMeasureWithUnit *IfcMeasureWithUnit_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMeasureWithUnit * > (it->second);
  }
  else {
    return NULL;
  }
}

