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
#include <ifc2x3/IfcTubeBundleType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTubeBundleType::IfcTubeBundleType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
}


IfcTubeBundleType::~IfcTubeBundleType() {
}

bool IfcTubeBundleType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTubeBundleType(this);
}

const char *IfcTubeBundleType::type() {
  return "IfcTubeBundleType";
}

Step::ClassType IfcTubeBundleType::getClassType() {
  return IfcTubeBundleType::s_type;
}

Step::ClassType IfcTubeBundleType::getType() const {
  return IfcTubeBundleType::s_type;
}

bool IfcTubeBundleType::isOfType(Step::ClassType t) {
  return IfcTubeBundleType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcTubeBundleTypeEnum IfcTubeBundleType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcTubeBundleTypeEnum_UNSET;
  }
}

void IfcTubeBundleType::setPredefinedType(IfcTubeBundleTypeEnum value) {
  m_predefinedType = value;
}

void IfcTubeBundleType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcTubeBundleType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
  }
  else {
    if (arg == ".FINNED.") {
      m_predefinedType = IfcTubeBundleTypeEnum_FINNED;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcTubeBundleTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcTubeBundleTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTubeBundleType::s_type = new Step::ClassType_class("IfcTubeBundleType");
IfcTubeBundleType_Factory::IfcTubeBundleType_Factory() {
}

IfcTubeBundleType_Factory::~IfcTubeBundleType_Factory() {
  clear(true);
}

void IfcTubeBundleType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTubeBundleType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTubeBundleType_Factory::end() {
  return m_idMap.end();
}

IfcTubeBundleType *IfcTubeBundleType_Factory::get(Step::StepId id) {
  IfcTubeBundleType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTubeBundleType * > (it->second);
  }
  else {
    LOG_ERROR("IfcTubeBundleType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTubeBundleType * > (create(id));
  }
}

Step::BaseObject *IfcTubeBundleType_Factory::create(Step::StepId id) {
  IfcTubeBundleType *ret = new IfcTubeBundleType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTubeBundleType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTubeBundleType *ret = new IfcTubeBundleType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTubeBundleType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTubeBundleType *ret = new IfcTubeBundleType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTubeBundleType *IfcTubeBundleType_Factory::generate() {
  return static_cast< IfcTubeBundleType * > (create(m_model->getNewId()));
}

IfcTubeBundleType *IfcTubeBundleType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTubeBundleType * > (it->second);
  }
  else {
    return NULL;
  }
}

