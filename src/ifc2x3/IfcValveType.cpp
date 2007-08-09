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
#include <ifc2x3/IfcValveType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcValveType::IfcValveType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcValveTypeEnum_UNSET;
}


IfcValveType::~IfcValveType() {
}

bool IfcValveType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcValveType(this);
}

const char *IfcValveType::type() {
  return "IfcValveType";
}

Step::ClassType IfcValveType::getClassType() {
  return IfcValveType::s_type;
}

Step::ClassType IfcValveType::getType() const {
  return IfcValveType::s_type;
}

bool IfcValveType::isOfType(Step::ClassType t) {
  return IfcValveType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcValveTypeEnum IfcValveType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcValveTypeEnum_UNSET;
  }
}

void IfcValveType::setPredefinedType(IfcValveTypeEnum value) {
  m_predefinedType = value;
}

void IfcValveType::release() {
  IfcFlowControllerType::release();
}

bool IfcValveType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcValveTypeEnum_UNSET;
  }
  else {
    if (arg == ".AIRRELEASE.") {
      m_predefinedType = IfcValveTypeEnum_AIRRELEASE;
    }
    else if (arg == ".ANTIVACUUM.") {
      m_predefinedType = IfcValveTypeEnum_ANTIVACUUM;
    }
    else if (arg == ".CHANGEOVER.") {
      m_predefinedType = IfcValveTypeEnum_CHANGEOVER;
    }
    else if (arg == ".CHECK.") {
      m_predefinedType = IfcValveTypeEnum_CHECK;
    }
    else if (arg == ".COMMISSIONING.") {
      m_predefinedType = IfcValveTypeEnum_COMMISSIONING;
    }
    else if (arg == ".DIVERTING.") {
      m_predefinedType = IfcValveTypeEnum_DIVERTING;
    }
    else if (arg == ".DRAWOFFCOCK.") {
      m_predefinedType = IfcValveTypeEnum_DRAWOFFCOCK;
    }
    else if (arg == ".DOUBLECHECK.") {
      m_predefinedType = IfcValveTypeEnum_DOUBLECHECK;
    }
    else if (arg == ".DOUBLEREGULATING.") {
      m_predefinedType = IfcValveTypeEnum_DOUBLEREGULATING;
    }
    else if (arg == ".FAUCET.") {
      m_predefinedType = IfcValveTypeEnum_FAUCET;
    }
    else if (arg == ".FLUSHING.") {
      m_predefinedType = IfcValveTypeEnum_FLUSHING;
    }
    else if (arg == ".GASCOCK.") {
      m_predefinedType = IfcValveTypeEnum_GASCOCK;
    }
    else if (arg == ".GASTAP.") {
      m_predefinedType = IfcValveTypeEnum_GASTAP;
    }
    else if (arg == ".ISOLATING.") {
      m_predefinedType = IfcValveTypeEnum_ISOLATING;
    }
    else if (arg == ".MIXING.") {
      m_predefinedType = IfcValveTypeEnum_MIXING;
    }
    else if (arg == ".PRESSUREREDUCING.") {
      m_predefinedType = IfcValveTypeEnum_PRESSUREREDUCING;
    }
    else if (arg == ".PRESSURERELIEF.") {
      m_predefinedType = IfcValveTypeEnum_PRESSURERELIEF;
    }
    else if (arg == ".REGULATING.") {
      m_predefinedType = IfcValveTypeEnum_REGULATING;
    }
    else if (arg == ".SAFETYCUTOFF.") {
      m_predefinedType = IfcValveTypeEnum_SAFETYCUTOFF;
    }
    else if (arg == ".STEAMTRAP.") {
      m_predefinedType = IfcValveTypeEnum_STEAMTRAP;
    }
    else if (arg == ".STOPCOCK.") {
      m_predefinedType = IfcValveTypeEnum_STOPCOCK;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcValveTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcValveTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcValveType::s_type = new Step::ClassType_class("IfcValveType");
IfcValveType_Factory::IfcValveType_Factory() {
}

IfcValveType_Factory::~IfcValveType_Factory() {
  clear(true);
}

void IfcValveType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcValveType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcValveType_Factory::end() {
  return m_idMap.end();
}

IfcValveType *IfcValveType_Factory::get(Step::StepId id) {
  IfcValveType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcValveType * > (it->second);
  }
  else {
    LOG_ERROR("IfcValveType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcValveType * > (create(id));
  }
}

Step::BaseObject *IfcValveType_Factory::create(Step::StepId id) {
  IfcValveType *ret = new IfcValveType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcValveType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcValveType *ret = new IfcValveType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcValveType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcValveType *ret = new IfcValveType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcValveType *IfcValveType_Factory::generate() {
  return static_cast< IfcValveType * > (create(m_model->getNewId()));
}

IfcValveType *IfcValveType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcValveType * > (it->second);
  }
  else {
    return NULL;
  }
}

