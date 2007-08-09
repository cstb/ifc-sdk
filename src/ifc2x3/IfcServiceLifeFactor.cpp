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
#include <ifc2x3/IfcServiceLifeFactor.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMeasureValue.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcServiceLifeFactor::IfcServiceLifeFactor(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_predefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
  m_upperValue = NULL;
  m_mostUsedValue = NULL;
  m_lowerValue = NULL;
}


IfcServiceLifeFactor::~IfcServiceLifeFactor() {
}

bool IfcServiceLifeFactor::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcServiceLifeFactor(this);
}

const char *IfcServiceLifeFactor::type() {
  return "IfcServiceLifeFactor";
}

Step::ClassType IfcServiceLifeFactor::getClassType() {
  return IfcServiceLifeFactor::s_type;
}

Step::ClassType IfcServiceLifeFactor::getType() const {
  return IfcServiceLifeFactor::s_type;
}

bool IfcServiceLifeFactor::isOfType(Step::ClassType t) {
  return IfcServiceLifeFactor::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcServiceLifeFactorTypeEnum IfcServiceLifeFactor::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcServiceLifeFactorTypeEnum_UNSET;
  }
}

void IfcServiceLifeFactor::setPredefinedType(IfcServiceLifeFactorTypeEnum value) {
  m_predefinedType = value;
}

IfcMeasureValue *IfcServiceLifeFactor::getUpperValue() {
  if (Step::BaseObject::inited()) {
    return m_upperValue.get();
  }
  else {
    return NULL;
  }
}

void IfcServiceLifeFactor::setUpperValue(const Step::RefPtr< IfcMeasureValue > &value) {
  m_upperValue = value;
}

IfcMeasureValue *IfcServiceLifeFactor::getMostUsedValue() {
  if (Step::BaseObject::inited()) {
    return m_mostUsedValue.get();
  }
  else {
    return NULL;
  }
}

void IfcServiceLifeFactor::setMostUsedValue(const Step::RefPtr< IfcMeasureValue > &value) {
  m_mostUsedValue = value;
}

IfcMeasureValue *IfcServiceLifeFactor::getLowerValue() {
  if (Step::BaseObject::inited()) {
    return m_lowerValue.get();
  }
  else {
    return NULL;
  }
}

void IfcServiceLifeFactor::setLowerValue(const Step::RefPtr< IfcMeasureValue > &value) {
  m_lowerValue = value;
}

void IfcServiceLifeFactor::release() {
  IfcPropertySetDefinition::release();
}

bool IfcServiceLifeFactor::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcServiceLifeFactorTypeEnum_UNSET;
  }
  else {
    if (arg == ".A_QUALITYOFCOMPONENTS.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_A_QUALITYOFCOMPONENTS;
    }
    else if (arg == ".B_DESIGNLEVEL.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_B_DESIGNLEVEL;
    }
    else if (arg == ".C_WORKEXECUTIONLEVEL.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_C_WORKEXECUTIONLEVEL;
    }
    else if (arg == ".D_INDOORENVIRONMENT.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_D_INDOORENVIRONMENT;
    }
    else if (arg == ".E_OUTDOORENVIRONMENT.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_E_OUTDOORENVIRONMENT;
    }
    else if (arg == ".F_INUSECONDITIONS.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_F_INUSECONDITIONS;
    }
    else if (arg == ".G_MAINTENANCELEVEL.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_G_MAINTENANCELEVEL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcServiceLifeFactorTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_upperValue = NULL;
  }
  else {
    m_upperValue = new IfcMeasureValue;
    if (arg[0] == '#') {
      m_upperValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_upperValue->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperValue->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_upperValue->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_upperValue->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_upperValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
          m_upperValue->setIfcComplexNumber(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mostUsedValue = NULL;
  }
  else {
    m_mostUsedValue = new IfcMeasureValue;
    if (arg[0] == '#') {
      m_mostUsedValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_mostUsedValue->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_mostUsedValue->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_mostUsedValue->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_mostUsedValue->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_mostUsedValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
          m_mostUsedValue->setIfcComplexNumber(tmp_attr1);
        }
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lowerValue = NULL;
  }
  else {
    m_lowerValue = new IfcMeasureValue;
    if (arg[0] == '#') {
      m_lowerValue->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
          m_lowerValue->setIfcVolumeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTIMEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcTimeMeasure(tmp_attr1);
        }
        if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
        }
        if (type1 == "IFCSOLIDANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcSolidAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVERATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcPositiveRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcRatioMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPLANEANGLEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcPlaneAngleMeasure(tmp_attr1);
        }
        if (type1 == "IFCPARAMETERVALUE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcParameterValue(tmp_attr1);
        }
        if (type1 == "IFCNUMERICMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerValue->setIfcNumericMeasure(tmp_attr1);
        }
        if (type1 == "IFCMASSMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcMassMeasure(tmp_attr1);
        }
        if (type1 == "IFCPOSITIVELENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcPositiveLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCLENGTHMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcLengthMeasure(tmp_attr1);
        }
        if (type1 == "IFCELECTRICCURRENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcElectricCurrentMeasure(tmp_attr1);
        }
        if (type1 == "IFCDESCRIPTIVEMEASURE") {
          std::string tmp_attr1;
          tmp_attr1 = Step::spfToString(arg);
          m_lowerValue->setIfcDescriptiveMeasure(tmp_attr1);
        }
        if (type1 == "IFCCOUNTMEASURE") {
          Integer tmp_attr1;
          tmp_attr1 = Step::spfToInteger(arg);
          m_lowerValue->setIfcCountMeasure(tmp_attr1);
        }
        if (type1 == "IFCCONTEXTDEPENDENTMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcContextDependentMeasure(tmp_attr1);
        }
        if (type1 == "IFCAREAMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcAreaMeasure(tmp_attr1);
        }
        if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
        }
        if (type1 == "IFCLUMINOUSINTENSITYMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcLuminousIntensityMeasure(tmp_attr1);
        }
        if (type1 == "IFCNORMALISEDRATIOMEASURE") {
          Real tmp_attr1;
          tmp_attr1 = Step::spfToReal(arg);
          m_lowerValue->setIfcNormalisedRatioMeasure(tmp_attr1);
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
          m_lowerValue->setIfcComplexNumber(tmp_attr1);
        }
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcServiceLifeFactor::s_type = new Step::ClassType_class("IfcServiceLifeFactor");
IfcServiceLifeFactor_Factory::IfcServiceLifeFactor_Factory() {
}

IfcServiceLifeFactor_Factory::~IfcServiceLifeFactor_Factory() {
  clear(true);
}

void IfcServiceLifeFactor_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcServiceLifeFactor_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcServiceLifeFactor_Factory::end() {
  return m_idMap.end();
}

IfcServiceLifeFactor *IfcServiceLifeFactor_Factory::get(Step::StepId id) {
  IfcServiceLifeFactor *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcServiceLifeFactor * > (it->second);
  }
  else {
    LOG_ERROR("IfcServiceLifeFactor_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcServiceLifeFactor * > (create(id));
  }
}

Step::BaseObject *IfcServiceLifeFactor_Factory::create(Step::StepId id) {
  IfcServiceLifeFactor *ret = new IfcServiceLifeFactor(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcServiceLifeFactor_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcServiceLifeFactor *ret = new IfcServiceLifeFactor(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcServiceLifeFactor_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcServiceLifeFactor *ret = new IfcServiceLifeFactor(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcServiceLifeFactor *IfcServiceLifeFactor_Factory::generate() {
  return static_cast< IfcServiceLifeFactor * > (create(m_model->getNewId()));
}

IfcServiceLifeFactor *IfcServiceLifeFactor_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcServiceLifeFactor * > (it->second);
  }
  else {
    return NULL;
  }
}

