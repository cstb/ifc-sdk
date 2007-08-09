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
#include <ifc2x3/IfcDuctSilencerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDuctSilencerType::IfcDuctSilencerType(Step::SPFData *args) : IfcFlowTreatmentDeviceType(args) {
  m_predefinedType = IfcDuctSilencerTypeEnum_UNSET;
}


IfcDuctSilencerType::~IfcDuctSilencerType() {
}

bool IfcDuctSilencerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDuctSilencerType(this);
}

const char *IfcDuctSilencerType::type() {
  return "IfcDuctSilencerType";
}

Step::ClassType IfcDuctSilencerType::getClassType() {
  return IfcDuctSilencerType::s_type;
}

Step::ClassType IfcDuctSilencerType::getType() const {
  return IfcDuctSilencerType::s_type;
}

bool IfcDuctSilencerType::isOfType(Step::ClassType t) {
  return IfcDuctSilencerType::s_type == t ? true : IfcFlowTreatmentDeviceType::isOfType(t);
}

IfcDuctSilencerTypeEnum IfcDuctSilencerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcDuctSilencerTypeEnum_UNSET;
  }
}

void IfcDuctSilencerType::setPredefinedType(IfcDuctSilencerTypeEnum value) {
  m_predefinedType = value;
}

void IfcDuctSilencerType::release() {
  IfcFlowTreatmentDeviceType::release();
}

bool IfcDuctSilencerType::init() {
  bool status = IfcFlowTreatmentDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcDuctSilencerTypeEnum_UNSET;
  }
  else {
    if (arg == ".FLATOVAL.") {
      m_predefinedType = IfcDuctSilencerTypeEnum_FLATOVAL;
    }
    else if (arg == ".RECTANGULAR.") {
      m_predefinedType = IfcDuctSilencerTypeEnum_RECTANGULAR;
    }
    else if (arg == ".ROUND.") {
      m_predefinedType = IfcDuctSilencerTypeEnum_ROUND;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcDuctSilencerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcDuctSilencerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDuctSilencerType::s_type = new Step::ClassType_class("IfcDuctSilencerType");
IfcDuctSilencerType_Factory::IfcDuctSilencerType_Factory() {
}

IfcDuctSilencerType_Factory::~IfcDuctSilencerType_Factory() {
  clear(true);
}

void IfcDuctSilencerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDuctSilencerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDuctSilencerType_Factory::end() {
  return m_idMap.end();
}

IfcDuctSilencerType *IfcDuctSilencerType_Factory::get(Step::StepId id) {
  IfcDuctSilencerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDuctSilencerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcDuctSilencerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDuctSilencerType * > (create(id));
  }
}

Step::BaseObject *IfcDuctSilencerType_Factory::create(Step::StepId id) {
  IfcDuctSilencerType *ret = new IfcDuctSilencerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDuctSilencerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDuctSilencerType *ret = new IfcDuctSilencerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDuctSilencerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDuctSilencerType *ret = new IfcDuctSilencerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDuctSilencerType *IfcDuctSilencerType_Factory::generate() {
  return static_cast< IfcDuctSilencerType * > (create(m_model->getNewId()));
}

IfcDuctSilencerType *IfcDuctSilencerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDuctSilencerType * > (it->second);
  }
  else {
    return NULL;
  }
}

