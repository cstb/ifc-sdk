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
#include <ifc2x3/IfcEvaporativeCoolerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEvaporativeCoolerType::IfcEvaporativeCoolerType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
}


IfcEvaporativeCoolerType::~IfcEvaporativeCoolerType() {
}

bool IfcEvaporativeCoolerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEvaporativeCoolerType(this);
}

const char *IfcEvaporativeCoolerType::type() {
  return "IfcEvaporativeCoolerType";
}

Step::ClassType IfcEvaporativeCoolerType::getClassType() {
  return IfcEvaporativeCoolerType::s_type;
}

Step::ClassType IfcEvaporativeCoolerType::getType() const {
  return IfcEvaporativeCoolerType::s_type;
}

bool IfcEvaporativeCoolerType::isOfType(Step::ClassType t) {
  return IfcEvaporativeCoolerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcEvaporativeCoolerTypeEnum IfcEvaporativeCoolerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcEvaporativeCoolerTypeEnum_UNSET;
  }
}

void IfcEvaporativeCoolerType::setPredefinedType(IfcEvaporativeCoolerTypeEnum value) {
  m_predefinedType = value;
}

void IfcEvaporativeCoolerType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcEvaporativeCoolerType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
  }
  else {
    if (arg == ".DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER;
    }
    else if (arg == ".DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER;
    }
    else if (arg == ".DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER;
    }
    else if (arg == ".DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER;
    }
    else if (arg == ".DIRECTEVAPORATIVEAIRWASHER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEAIRWASHER;
    }
    else if (arg == ".INDIRECTEVAPORATIVEPACKAGEAIRCOOLER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEPACKAGEAIRCOOLER;
    }
    else if (arg == ".INDIRECTEVAPORATIVEWETCOIL.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEWETCOIL;
    }
    else if (arg == ".INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER;
    }
    else if (arg == ".INDIRECTDIRECTCOMBINATION.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTDIRECTCOMBINATION;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcEvaporativeCoolerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEvaporativeCoolerType::s_type = new Step::ClassType_class("IfcEvaporativeCoolerType");
IfcEvaporativeCoolerType_Factory::IfcEvaporativeCoolerType_Factory() {
}

IfcEvaporativeCoolerType_Factory::~IfcEvaporativeCoolerType_Factory() {
  clear(true);
}

void IfcEvaporativeCoolerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEvaporativeCoolerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEvaporativeCoolerType_Factory::end() {
  return m_idMap.end();
}

IfcEvaporativeCoolerType *IfcEvaporativeCoolerType_Factory::get(Step::StepId id) {
  IfcEvaporativeCoolerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEvaporativeCoolerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcEvaporativeCoolerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEvaporativeCoolerType * > (create(id));
  }
}

Step::BaseObject *IfcEvaporativeCoolerType_Factory::create(Step::StepId id) {
  IfcEvaporativeCoolerType *ret = new IfcEvaporativeCoolerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEvaporativeCoolerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEvaporativeCoolerType *ret = new IfcEvaporativeCoolerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEvaporativeCoolerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEvaporativeCoolerType *ret = new IfcEvaporativeCoolerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEvaporativeCoolerType *IfcEvaporativeCoolerType_Factory::generate() {
  return static_cast< IfcEvaporativeCoolerType * > (create(m_model->getNewId()));
}

IfcEvaporativeCoolerType *IfcEvaporativeCoolerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEvaporativeCoolerType * > (it->second);
  }
  else {
    return NULL;
  }
}

