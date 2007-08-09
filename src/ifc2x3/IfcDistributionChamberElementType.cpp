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
#include <ifc2x3/IfcDistributionChamberElementType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDistributionChamberElementType::IfcDistributionChamberElementType(Step::SPFData *args) : IfcDistributionFlowElementType(args) {
  m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
}


IfcDistributionChamberElementType::~IfcDistributionChamberElementType() {
}

bool IfcDistributionChamberElementType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDistributionChamberElementType(this);
}

const char *IfcDistributionChamberElementType::type() {
  return "IfcDistributionChamberElementType";
}

Step::ClassType IfcDistributionChamberElementType::getClassType() {
  return IfcDistributionChamberElementType::s_type;
}

Step::ClassType IfcDistributionChamberElementType::getType() const {
  return IfcDistributionChamberElementType::s_type;
}

bool IfcDistributionChamberElementType::isOfType(Step::ClassType t) {
  return IfcDistributionChamberElementType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

IfcDistributionChamberElementTypeEnum IfcDistributionChamberElementType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcDistributionChamberElementTypeEnum_UNSET;
  }
}

void IfcDistributionChamberElementType::setPredefinedType(IfcDistributionChamberElementTypeEnum value) {
  m_predefinedType = value;
}

void IfcDistributionChamberElementType::release() {
  IfcDistributionFlowElementType::release();
}

bool IfcDistributionChamberElementType::init() {
  bool status = IfcDistributionFlowElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
  }
  else {
    if (arg == ".FORMEDDUCT.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_FORMEDDUCT;
    }
    else if (arg == ".INSPECTIONCHAMBER.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONCHAMBER;
    }
    else if (arg == ".INSPECTIONPIT.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONPIT;
    }
    else if (arg == ".MANHOLE.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_MANHOLE;
    }
    else if (arg == ".METERCHAMBER.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_METERCHAMBER;
    }
    else if (arg == ".SUMP.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_SUMP;
    }
    else if (arg == ".TRENCH.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_TRENCH;
    }
    else if (arg == ".VALVECHAMBER.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_VALVECHAMBER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcDistributionChamberElementTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionChamberElementType::s_type = new Step::ClassType_class("IfcDistributionChamberElementType");
IfcDistributionChamberElementType_Factory::IfcDistributionChamberElementType_Factory() {
}

IfcDistributionChamberElementType_Factory::~IfcDistributionChamberElementType_Factory() {
  clear(true);
}

void IfcDistributionChamberElementType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionChamberElementType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionChamberElementType_Factory::end() {
  return m_idMap.end();
}

IfcDistributionChamberElementType *IfcDistributionChamberElementType_Factory::get(Step::StepId id) {
  IfcDistributionChamberElementType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDistributionChamberElementType * > (it->second);
  }
  else {
    LOG_ERROR("IfcDistributionChamberElementType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDistributionChamberElementType * > (create(id));
  }
}

Step::BaseObject *IfcDistributionChamberElementType_Factory::create(Step::StepId id) {
  IfcDistributionChamberElementType *ret = new IfcDistributionChamberElementType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionChamberElementType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDistributionChamberElementType *ret = new IfcDistributionChamberElementType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionChamberElementType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDistributionChamberElementType *ret = new IfcDistributionChamberElementType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDistributionChamberElementType *IfcDistributionChamberElementType_Factory::generate() {
  return static_cast< IfcDistributionChamberElementType * > (create(m_model->getNewId()));
}

IfcDistributionChamberElementType *IfcDistributionChamberElementType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDistributionChamberElementType * > (it->second);
  }
  else {
    return NULL;
  }
}

