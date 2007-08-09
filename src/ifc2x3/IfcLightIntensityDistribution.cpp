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
#include <ifc2x3/IfcLightIntensityDistribution.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcLightDistributionData.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLightIntensityDistribution::IfcLightIntensityDistribution(Step::SPFData *args) : Step::BaseObject(args) {
  m_lightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
  m_distributionData.setUnset(true);
}


IfcLightIntensityDistribution::~IfcLightIntensityDistribution() {
}

bool IfcLightIntensityDistribution::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightIntensityDistribution(this);
}

const char *IfcLightIntensityDistribution::type() {
  return "IfcLightIntensityDistribution";
}

Step::ClassType IfcLightIntensityDistribution::getClassType() {
  return IfcLightIntensityDistribution::s_type;
}

Step::ClassType IfcLightIntensityDistribution::getType() const {
  return IfcLightIntensityDistribution::s_type;
}

bool IfcLightIntensityDistribution::isOfType(Step::ClassType t) {
  return IfcLightIntensityDistribution::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLightDistributionCurveEnum IfcLightIntensityDistribution::getLightDistributionCurve() {
  if (Step::BaseObject::inited()) {
    return m_lightDistributionCurve;
  }
  else {
    return IfcLightDistributionCurveEnum_UNSET;
  }
}

void IfcLightIntensityDistribution::setLightDistributionCurve(IfcLightDistributionCurveEnum value) {
  m_lightDistributionCurve = value;
}

Step::StepList< Step::RefPtr< IfcLightDistributionData > > &IfcLightIntensityDistribution::getDistributionData() {
  if (Step::BaseObject::inited()) {
    return m_distributionData;
  }
  else {
    m_distributionData.setUnset(true);
    return m_distributionData;
  }
}

void IfcLightIntensityDistribution::setDistributionData(const Step::StepList< Step::RefPtr< IfcLightDistributionData > > &value) {
  m_distributionData = value;
}

void IfcLightIntensityDistribution::release() {
  m_distributionData.clear();
}

bool IfcLightIntensityDistribution::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lightDistributionCurve = IfcLightDistributionCurveEnum_UNSET;
  }
  else {
    if (arg == ".TYPE_A.") {
      m_lightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_A;
    }
    else if (arg == ".TYPE_B.") {
      m_lightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_B;
    }
    else if (arg == ".TYPE_C.") {
      m_lightDistributionCurve = IfcLightDistributionCurveEnum_TYPE_C;
    }
    else if (arg == ".NOTDEFINED.") {
      m_lightDistributionCurve = IfcLightDistributionCurveEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_distributionData.setUnset(true);
  }
  else {
    m_distributionData.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcLightDistributionData > attr2;
        attr2 = static_cast< IfcLightDistributionData * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_distributionData.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightIntensityDistribution::s_type = new Step::ClassType_class("IfcLightIntensityDistribution");
IfcLightIntensityDistribution_Factory::IfcLightIntensityDistribution_Factory() {
}

IfcLightIntensityDistribution_Factory::~IfcLightIntensityDistribution_Factory() {
  clear(true);
}

void IfcLightIntensityDistribution_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightIntensityDistribution_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLightIntensityDistribution_Factory::end() {
  return m_idMap.end();
}

IfcLightIntensityDistribution *IfcLightIntensityDistribution_Factory::get(Step::StepId id) {
  IfcLightIntensityDistribution *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLightIntensityDistribution * > (it->second);
  }
  else {
    LOG_ERROR("IfcLightIntensityDistribution_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLightIntensityDistribution * > (create(id));
  }
}

Step::BaseObject *IfcLightIntensityDistribution_Factory::create(Step::StepId id) {
  IfcLightIntensityDistribution *ret = new IfcLightIntensityDistribution(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLightIntensityDistribution_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLightIntensityDistribution *ret = new IfcLightIntensityDistribution(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLightIntensityDistribution_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLightIntensityDistribution *ret = new IfcLightIntensityDistribution(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLightIntensityDistribution *IfcLightIntensityDistribution_Factory::generate() {
  return static_cast< IfcLightIntensityDistribution * > (create(m_model->getNewId()));
}

IfcLightIntensityDistribution *IfcLightIntensityDistribution_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLightIntensityDistribution * > (it->second);
  }
  else {
    return NULL;
  }
}

