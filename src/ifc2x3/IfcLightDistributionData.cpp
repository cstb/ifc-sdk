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
#include <ifc2x3/IfcLightDistributionData.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLightDistributionData::IfcLightDistributionData(Step::SPFData *args) : Step::BaseObject(args) {
  m_mainPlaneAngle = getUnset(m_mainPlaneAngle);
  m_secondaryPlaneAngle.setUnset(true);
  m_luminousIntensity.setUnset(true);
}


IfcLightDistributionData::~IfcLightDistributionData() {
}

bool IfcLightDistributionData::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightDistributionData(this);
}

const char *IfcLightDistributionData::type() {
  return "IfcLightDistributionData";
}

Step::ClassType IfcLightDistributionData::getClassType() {
  return IfcLightDistributionData::s_type;
}

Step::ClassType IfcLightDistributionData::getType() const {
  return IfcLightDistributionData::s_type;
}

bool IfcLightDistributionData::isOfType(Step::ClassType t) {
  return IfcLightDistributionData::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPlaneAngleMeasure IfcLightDistributionData::getMainPlaneAngle() {
  if (Step::BaseObject::inited()) {
    return m_mainPlaneAngle;
  }
  else {
    return getUnset(m_mainPlaneAngle);
  }
}

void IfcLightDistributionData::setMainPlaneAngle(IfcPlaneAngleMeasure value) {
  m_mainPlaneAngle = value;
}

Step::StepList< IfcPlaneAngleMeasure > &IfcLightDistributionData::getSecondaryPlaneAngle() {
  if (Step::BaseObject::inited()) {
    return m_secondaryPlaneAngle;
  }
  else {
    m_secondaryPlaneAngle.setUnset(true);
    return m_secondaryPlaneAngle;
  }
}

void IfcLightDistributionData::setSecondaryPlaneAngle(const Step::StepList< IfcPlaneAngleMeasure > &value) {
  m_secondaryPlaneAngle = value;
}

Step::StepList< IfcLuminousIntensityDistributionMeasure > &IfcLightDistributionData::getLuminousIntensity() {
  if (Step::BaseObject::inited()) {
    return m_luminousIntensity;
  }
  else {
    m_luminousIntensity.setUnset(true);
    return m_luminousIntensity;
  }
}

void IfcLightDistributionData::setLuminousIntensity(const Step::StepList< IfcLuminousIntensityDistributionMeasure > &value) {
  m_luminousIntensity = value;
}

void IfcLightDistributionData::release() {
  m_secondaryPlaneAngle.clear();
  m_luminousIntensity.clear();
}

bool IfcLightDistributionData::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mainPlaneAngle = getUnset(m_mainPlaneAngle);
  }
  else {
    m_mainPlaneAngle = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_secondaryPlaneAngle.setUnset(true);
  }
  else {
    m_secondaryPlaneAngle.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcPlaneAngleMeasure attr2;
        attr2 = Step::spfToReal(str1);
        m_secondaryPlaneAngle.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_luminousIntensity.setUnset(true);
  }
  else {
    m_luminousIntensity.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        IfcLuminousIntensityDistributionMeasure attr2;
        attr2 = Step::spfToReal(str1);
        m_luminousIntensity.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightDistributionData::s_type = new Step::ClassType_class("IfcLightDistributionData");
IfcLightDistributionData_Factory::IfcLightDistributionData_Factory() {
}

IfcLightDistributionData_Factory::~IfcLightDistributionData_Factory() {
  clear(true);
}

void IfcLightDistributionData_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightDistributionData_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightDistributionData_Factory::end() {
  return m_idMap.end();
}

IfcLightDistributionData *IfcLightDistributionData_Factory::get(Step::StepId id) {
  IfcLightDistributionData *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLightDistributionData * > (it->second);
  }
  else {
    LOG_ERROR("IfcLightDistributionData_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLightDistributionData * > (create(id));
  }
}

Step::BaseObject *IfcLightDistributionData_Factory::create(Step::StepId id) {
  IfcLightDistributionData *ret = new IfcLightDistributionData(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLightDistributionData_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLightDistributionData *ret = new IfcLightDistributionData(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLightDistributionData_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLightDistributionData *ret = new IfcLightDistributionData(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLightDistributionData *IfcLightDistributionData_Factory::generate() {
  return static_cast< IfcLightDistributionData * > (create(m_model->getNewId()));
}

IfcLightDistributionData *IfcLightDistributionData_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLightDistributionData * > (it->second);
  }
  else {
    return NULL;
  }
}

