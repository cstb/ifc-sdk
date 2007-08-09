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
#include <ifc2x3/IfcDerivedUnit.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDerivedUnitElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDerivedUnit::IfcDerivedUnit(Step::SPFData *args) : Step::BaseObject(args) {
  m_elements.setUnset(true);
  m_unitType = IfcDerivedUnitEnum_UNSET;
  m_userDefinedType = getUnset(m_userDefinedType);
}


IfcDerivedUnit::~IfcDerivedUnit() {
}

bool IfcDerivedUnit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDerivedUnit(this);
}

const char *IfcDerivedUnit::type() {
  return "IfcDerivedUnit";
}

Step::ClassType IfcDerivedUnit::getClassType() {
  return IfcDerivedUnit::s_type;
}

Step::ClassType IfcDerivedUnit::getType() const {
  return IfcDerivedUnit::s_type;
}

bool IfcDerivedUnit::isOfType(Step::ClassType t) {
  return IfcDerivedUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcDerivedUnitElement > > &IfcDerivedUnit::getElements() {
  if (Step::BaseObject::inited()) {
    return m_elements;
  }
  else {
    m_elements.setUnset(true);
    return m_elements;
  }
}

void IfcDerivedUnit::setElements(const Step::StepSet< Step::RefPtr< IfcDerivedUnitElement > > &value) {
  m_elements = value;
}

IfcDerivedUnitEnum IfcDerivedUnit::getUnitType() {
  if (Step::BaseObject::inited()) {
    return m_unitType;
  }
  else {
    return IfcDerivedUnitEnum_UNSET;
  }
}

void IfcDerivedUnit::setUnitType(IfcDerivedUnitEnum value) {
  m_unitType = value;
}

IfcLabel IfcDerivedUnit::getUserDefinedType() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedType;
  }
  else {
    return getUnset(m_userDefinedType);
  }
}

void IfcDerivedUnit::setUserDefinedType(const IfcLabel &value) {
  m_userDefinedType = value;
}

void IfcDerivedUnit::release() {
  m_elements.clear();
}

bool IfcDerivedUnit::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elements.setUnset(true);
  }
  else {
    m_elements.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcDerivedUnitElement > attr2;
        attr2 = static_cast< IfcDerivedUnitElement * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_elements.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unitType = IfcDerivedUnitEnum_UNSET;
  }
  else {
    if (arg == ".ANGULARVELOCITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_ANGULARVELOCITYUNIT;
    }
    else if (arg == ".COMPOUNDPLANEANGLEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_COMPOUNDPLANEANGLEUNIT;
    }
    else if (arg == ".DYNAMICVISCOSITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_DYNAMICVISCOSITYUNIT;
    }
    else if (arg == ".HEATFLUXDENSITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_HEATFLUXDENSITYUNIT;
    }
    else if (arg == ".INTEGERCOUNTRATEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_INTEGERCOUNTRATEUNIT;
    }
    else if (arg == ".ISOTHERMALMOISTURECAPACITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_ISOTHERMALMOISTURECAPACITYUNIT;
    }
    else if (arg == ".KINEMATICVISCOSITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_KINEMATICVISCOSITYUNIT;
    }
    else if (arg == ".LINEARVELOCITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_LINEARVELOCITYUNIT;
    }
    else if (arg == ".MASSDENSITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MASSDENSITYUNIT;
    }
    else if (arg == ".MASSFLOWRATEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MASSFLOWRATEUNIT;
    }
    else if (arg == ".MOISTUREDIFFUSIVITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MOISTUREDIFFUSIVITYUNIT;
    }
    else if (arg == ".MOLECULARWEIGHTUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MOLECULARWEIGHTUNIT;
    }
    else if (arg == ".SPECIFICHEATCAPACITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_SPECIFICHEATCAPACITYUNIT;
    }
    else if (arg == ".THERMALADMITTANCEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_THERMALADMITTANCEUNIT;
    }
    else if (arg == ".THERMALCONDUCTANCEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_THERMALCONDUCTANCEUNIT;
    }
    else if (arg == ".THERMALRESISTANCEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_THERMALRESISTANCEUNIT;
    }
    else if (arg == ".THERMALTRANSMITTANCEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_THERMALTRANSMITTANCEUNIT;
    }
    else if (arg == ".VAPORPERMEABILITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_VAPORPERMEABILITYUNIT;
    }
    else if (arg == ".VOLUMETRICFLOWRATEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_VOLUMETRICFLOWRATEUNIT;
    }
    else if (arg == ".ROTATIONALFREQUENCYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_ROTATIONALFREQUENCYUNIT;
    }
    else if (arg == ".TORQUEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_TORQUEUNIT;
    }
    else if (arg == ".MOMENTOFINERTIAUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MOMENTOFINERTIAUNIT;
    }
    else if (arg == ".LINEARMOMENTUNIT.") {
      m_unitType = IfcDerivedUnitEnum_LINEARMOMENTUNIT;
    }
    else if (arg == ".LINEARFORCEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_LINEARFORCEUNIT;
    }
    else if (arg == ".PLANARFORCEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_PLANARFORCEUNIT;
    }
    else if (arg == ".MODULUSOFELASTICITYUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MODULUSOFELASTICITYUNIT;
    }
    else if (arg == ".SHEARMODULUSUNIT.") {
      m_unitType = IfcDerivedUnitEnum_SHEARMODULUSUNIT;
    }
    else if (arg == ".LINEARSTIFFNESSUNIT.") {
      m_unitType = IfcDerivedUnitEnum_LINEARSTIFFNESSUNIT;
    }
    else if (arg == ".ROTATIONALSTIFFNESSUNIT.") {
      m_unitType = IfcDerivedUnitEnum_ROTATIONALSTIFFNESSUNIT;
    }
    else if (arg == ".MODULUSOFSUBGRADEREACTIONUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MODULUSOFSUBGRADEREACTIONUNIT;
    }
    else if (arg == ".ACCELERATIONUNIT.") {
      m_unitType = IfcDerivedUnitEnum_ACCELERATIONUNIT;
    }
    else if (arg == ".CURVATUREUNIT.") {
      m_unitType = IfcDerivedUnitEnum_CURVATUREUNIT;
    }
    else if (arg == ".HEATINGVALUEUNIT.") {
      m_unitType = IfcDerivedUnitEnum_HEATINGVALUEUNIT;
    }
    else if (arg == ".IONCONCENTRATIONUNIT.") {
      m_unitType = IfcDerivedUnitEnum_IONCONCENTRATIONUNIT;
    }
    else if (arg == ".LUMINOUSINTENSITYDISTRIBUTIONUNIT.") {
      m_unitType = IfcDerivedUnitEnum_LUMINOUSINTENSITYDISTRIBUTIONUNIT;
    }
    else if (arg == ".MASSPERLENGTHUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MASSPERLENGTHUNIT;
    }
    else if (arg == ".MODULUSOFLINEARSUBGRADEREACTIONUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MODULUSOFLINEARSUBGRADEREACTIONUNIT;
    }
    else if (arg == ".MODULUSOFROTATIONALSUBGRADEREACTIONUNIT.") {
      m_unitType = IfcDerivedUnitEnum_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT;
    }
    else if (arg == ".PHUNIT.") {
      m_unitType = IfcDerivedUnitEnum_PHUNIT;
    }
    else if (arg == ".ROTATIONALMASSUNIT.") {
      m_unitType = IfcDerivedUnitEnum_ROTATIONALMASSUNIT;
    }
    else if (arg == ".SECTIONAREAINTEGRALUNIT.") {
      m_unitType = IfcDerivedUnitEnum_SECTIONAREAINTEGRALUNIT;
    }
    else if (arg == ".SECTIONMODULUSUNIT.") {
      m_unitType = IfcDerivedUnitEnum_SECTIONMODULUSUNIT;
    }
    else if (arg == ".SOUNDPOWERUNIT.") {
      m_unitType = IfcDerivedUnitEnum_SOUNDPOWERUNIT;
    }
    else if (arg == ".SOUNDPRESSUREUNIT.") {
      m_unitType = IfcDerivedUnitEnum_SOUNDPRESSUREUNIT;
    }
    else if (arg == ".TEMPERATUREGRADIENTUNIT.") {
      m_unitType = IfcDerivedUnitEnum_TEMPERATUREGRADIENTUNIT;
    }
    else if (arg == ".THERMALEXPANSIONCOEFFICIENTUNIT.") {
      m_unitType = IfcDerivedUnitEnum_THERMALEXPANSIONCOEFFICIENTUNIT;
    }
    else if (arg == ".WARPINGCONSTANTUNIT.") {
      m_unitType = IfcDerivedUnitEnum_WARPINGCONSTANTUNIT;
    }
    else if (arg == ".WARPINGMOMENTUNIT.") {
      m_unitType = IfcDerivedUnitEnum_WARPINGMOMENTUNIT;
    }
    else if (arg == ".USERDEFINED.") {
      m_unitType = IfcDerivedUnitEnum_USERDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedType = getUnset(m_userDefinedType);
  }
  else {
    m_userDefinedType = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDerivedUnit::s_type = new Step::ClassType_class("IfcDerivedUnit");
IfcDerivedUnit_Factory::IfcDerivedUnit_Factory() {
}

IfcDerivedUnit_Factory::~IfcDerivedUnit_Factory() {
  clear(true);
}

void IfcDerivedUnit_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDerivedUnit_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDerivedUnit_Factory::end() {
  return m_idMap.end();
}

IfcDerivedUnit *IfcDerivedUnit_Factory::get(Step::StepId id) {
  IfcDerivedUnit *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDerivedUnit * > (it->second);
  }
  else {
    LOG_ERROR("IfcDerivedUnit_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDerivedUnit * > (create(id));
  }
}

Step::BaseObject *IfcDerivedUnit_Factory::create(Step::StepId id) {
  IfcDerivedUnit *ret = new IfcDerivedUnit(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDerivedUnit_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDerivedUnit *ret = new IfcDerivedUnit(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDerivedUnit_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDerivedUnit *ret = new IfcDerivedUnit(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDerivedUnit *IfcDerivedUnit_Factory::generate() {
  return static_cast< IfcDerivedUnit * > (create(m_model->getNewId()));
}

IfcDerivedUnit *IfcDerivedUnit_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDerivedUnit * > (it->second);
  }
  else {
    return NULL;
  }
}

