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
#include <ifc2x3/IfcDamperType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDamperType::IfcDamperType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcDamperTypeEnum_UNSET;
}


IfcDamperType::~IfcDamperType() {
}

bool IfcDamperType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDamperType(this);
}

const char *IfcDamperType::type() {
  return "IfcDamperType";
}

Step::ClassType IfcDamperType::getClassType() {
  return IfcDamperType::s_type;
}

Step::ClassType IfcDamperType::getType() const {
  return IfcDamperType::s_type;
}

bool IfcDamperType::isOfType(Step::ClassType t) {
  return IfcDamperType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcDamperTypeEnum IfcDamperType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcDamperTypeEnum_UNSET;
  }
}

void IfcDamperType::setPredefinedType(IfcDamperTypeEnum value) {
  m_predefinedType = value;
}

void IfcDamperType::release() {
  IfcFlowControllerType::release();
}

bool IfcDamperType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcDamperTypeEnum_UNSET;
  }
  else {
    if (arg == ".CONTROLDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_CONTROLDAMPER;
    }
    else if (arg == ".FIREDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_FIREDAMPER;
    }
    else if (arg == ".SMOKEDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_SMOKEDAMPER;
    }
    else if (arg == ".FIRESMOKEDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_FIRESMOKEDAMPER;
    }
    else if (arg == ".BACKDRAFTDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_BACKDRAFTDAMPER;
    }
    else if (arg == ".RELIEFDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_RELIEFDAMPER;
    }
    else if (arg == ".BLASTDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_BLASTDAMPER;
    }
    else if (arg == ".GRAVITYDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_GRAVITYDAMPER;
    }
    else if (arg == ".GRAVITYRELIEFDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_GRAVITYRELIEFDAMPER;
    }
    else if (arg == ".BALANCINGDAMPER.") {
      m_predefinedType = IfcDamperTypeEnum_BALANCINGDAMPER;
    }
    else if (arg == ".FUMEHOODEXHAUST.") {
      m_predefinedType = IfcDamperTypeEnum_FUMEHOODEXHAUST;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcDamperTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcDamperTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDamperType::s_type = new Step::ClassType_class("IfcDamperType");
IfcDamperType_Factory::IfcDamperType_Factory() {
}

IfcDamperType_Factory::~IfcDamperType_Factory() {
  clear(true);
}

void IfcDamperType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDamperType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDamperType_Factory::end() {
  return m_idMap.end();
}

IfcDamperType *IfcDamperType_Factory::get(Step::StepId id) {
  IfcDamperType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDamperType * > (it->second);
  }
  else {
    LOG_ERROR("IfcDamperType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDamperType * > (create(id));
  }
}

Step::BaseObject *IfcDamperType_Factory::create(Step::StepId id) {
  IfcDamperType *ret = new IfcDamperType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDamperType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDamperType *ret = new IfcDamperType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDamperType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDamperType *ret = new IfcDamperType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDamperType *IfcDamperType_Factory::generate() {
  return static_cast< IfcDamperType * > (create(m_model->getNewId()));
}

IfcDamperType *IfcDamperType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDamperType * > (it->second);
  }
  else {
    return NULL;
  }
}

