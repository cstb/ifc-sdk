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
#include <ifc2x3/IfcElectricApplianceType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricApplianceType::IfcElectricApplianceType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcElectricApplianceTypeEnum_UNSET;
}


IfcElectricApplianceType::~IfcElectricApplianceType() {
}

bool IfcElectricApplianceType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricApplianceType(this);
}

const char *IfcElectricApplianceType::type() {
  return "IfcElectricApplianceType";
}

Step::ClassType IfcElectricApplianceType::getClassType() {
  return IfcElectricApplianceType::s_type;
}

Step::ClassType IfcElectricApplianceType::getType() const {
  return IfcElectricApplianceType::s_type;
}

bool IfcElectricApplianceType::isOfType(Step::ClassType t) {
  return IfcElectricApplianceType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcElectricApplianceTypeEnum IfcElectricApplianceType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElectricApplianceTypeEnum_UNSET;
  }
}

void IfcElectricApplianceType::setPredefinedType(IfcElectricApplianceTypeEnum value) {
  m_predefinedType = value;
}

void IfcElectricApplianceType::release() {
  IfcFlowTerminalType::release();
}

bool IfcElectricApplianceType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElectricApplianceTypeEnum_UNSET;
  }
  else {
    if (arg == ".COMPUTER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_COMPUTER;
    }
    else if (arg == ".DIRECTWATERHEATER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_DIRECTWATERHEATER;
    }
    else if (arg == ".DISHWASHER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_DISHWASHER;
    }
    else if (arg == ".ELECTRICCOOKER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_ELECTRICCOOKER;
    }
    else if (arg == ".ELECTRICHEATER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_ELECTRICHEATER;
    }
    else if (arg == ".FACSIMILE.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_FACSIMILE;
    }
    else if (arg == ".FREESTANDINGFAN.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_FREESTANDINGFAN;
    }
    else if (arg == ".FREEZER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_FREEZER;
    }
    else if (arg == ".FRIDGE_FREEZER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_FRIDGE_FREEZER;
    }
    else if (arg == ".HANDDRYER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_HANDDRYER;
    }
    else if (arg == ".INDIRECTWATERHEATER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_INDIRECTWATERHEATER;
    }
    else if (arg == ".MICROWAVE.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_MICROWAVE;
    }
    else if (arg == ".PHOTOCOPIER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_PHOTOCOPIER;
    }
    else if (arg == ".PRINTER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_PRINTER;
    }
    else if (arg == ".REFRIGERATOR.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_REFRIGERATOR;
    }
    else if (arg == ".RADIANTHEATER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_RADIANTHEATER;
    }
    else if (arg == ".SCANNER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_SCANNER;
    }
    else if (arg == ".TELEPHONE.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_TELEPHONE;
    }
    else if (arg == ".TUMBLEDRYER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_TUMBLEDRYER;
    }
    else if (arg == ".TV.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_TV;
    }
    else if (arg == ".VENDINGMACHINE.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_VENDINGMACHINE;
    }
    else if (arg == ".WASHINGMACHINE.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_WASHINGMACHINE;
    }
    else if (arg == ".WATERHEATER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_WATERHEATER;
    }
    else if (arg == ".WATERCOOLER.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_WATERCOOLER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElectricApplianceTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricApplianceType::s_type = new Step::ClassType_class("IfcElectricApplianceType");
IfcElectricApplianceType_Factory::IfcElectricApplianceType_Factory() {
}

IfcElectricApplianceType_Factory::~IfcElectricApplianceType_Factory() {
  clear(true);
}

void IfcElectricApplianceType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricApplianceType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricApplianceType_Factory::end() {
  return m_idMap.end();
}

IfcElectricApplianceType *IfcElectricApplianceType_Factory::get(Step::StepId id) {
  IfcElectricApplianceType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricApplianceType * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricApplianceType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricApplianceType * > (create(id));
  }
}

Step::BaseObject *IfcElectricApplianceType_Factory::create(Step::StepId id) {
  IfcElectricApplianceType *ret = new IfcElectricApplianceType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricApplianceType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricApplianceType *ret = new IfcElectricApplianceType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricApplianceType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricApplianceType *ret = new IfcElectricApplianceType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricApplianceType *IfcElectricApplianceType_Factory::generate() {
  return static_cast< IfcElectricApplianceType * > (create(m_model->getNewId()));
}

IfcElectricApplianceType *IfcElectricApplianceType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricApplianceType * > (it->second);
  }
  else {
    return NULL;
  }
}

