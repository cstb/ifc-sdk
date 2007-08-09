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
#include <ifc2x3/IfcFilterType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFilterType::IfcFilterType(Step::SPFData *args) : IfcFlowTreatmentDeviceType(args) {
  m_predefinedType = IfcFilterTypeEnum_UNSET;
}


IfcFilterType::~IfcFilterType() {
}

bool IfcFilterType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFilterType(this);
}

const char *IfcFilterType::type() {
  return "IfcFilterType";
}

Step::ClassType IfcFilterType::getClassType() {
  return IfcFilterType::s_type;
}

Step::ClassType IfcFilterType::getType() const {
  return IfcFilterType::s_type;
}

bool IfcFilterType::isOfType(Step::ClassType t) {
  return IfcFilterType::s_type == t ? true : IfcFlowTreatmentDeviceType::isOfType(t);
}

IfcFilterTypeEnum IfcFilterType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcFilterTypeEnum_UNSET;
  }
}

void IfcFilterType::setPredefinedType(IfcFilterTypeEnum value) {
  m_predefinedType = value;
}

void IfcFilterType::release() {
  IfcFlowTreatmentDeviceType::release();
}

bool IfcFilterType::init() {
  bool status = IfcFlowTreatmentDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcFilterTypeEnum_UNSET;
  }
  else {
    if (arg == ".AIRPARTICLEFILTER.") {
      m_predefinedType = IfcFilterTypeEnum_AIRPARTICLEFILTER;
    }
    else if (arg == ".ODORFILTER.") {
      m_predefinedType = IfcFilterTypeEnum_ODORFILTER;
    }
    else if (arg == ".OILFILTER.") {
      m_predefinedType = IfcFilterTypeEnum_OILFILTER;
    }
    else if (arg == ".STRAINER.") {
      m_predefinedType = IfcFilterTypeEnum_STRAINER;
    }
    else if (arg == ".WATERFILTER.") {
      m_predefinedType = IfcFilterTypeEnum_WATERFILTER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcFilterTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcFilterTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFilterType::s_type = new Step::ClassType_class("IfcFilterType");
IfcFilterType_Factory::IfcFilterType_Factory() {
}

IfcFilterType_Factory::~IfcFilterType_Factory() {
  clear(true);
}

void IfcFilterType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFilterType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFilterType_Factory::end() {
  return m_idMap.end();
}

IfcFilterType *IfcFilterType_Factory::get(Step::StepId id) {
  IfcFilterType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFilterType * > (it->second);
  }
  else {
    LOG_ERROR("IfcFilterType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFilterType * > (create(id));
  }
}

Step::BaseObject *IfcFilterType_Factory::create(Step::StepId id) {
  IfcFilterType *ret = new IfcFilterType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFilterType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFilterType *ret = new IfcFilterType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFilterType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFilterType *ret = new IfcFilterType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFilterType *IfcFilterType_Factory::generate() {
  return static_cast< IfcFilterType * > (create(m_model->getNewId()));
}

IfcFilterType *IfcFilterType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFilterType * > (it->second);
  }
  else {
    return NULL;
  }
}

