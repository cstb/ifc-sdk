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
#include <ifc2x3/IfcSpaceHeaterType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSpaceHeaterType::IfcSpaceHeaterType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcSpaceHeaterTypeEnum_UNSET;
}


IfcSpaceHeaterType::~IfcSpaceHeaterType() {
}

bool IfcSpaceHeaterType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpaceHeaterType(this);
}

const char *IfcSpaceHeaterType::type() {
  return "IfcSpaceHeaterType";
}

Step::ClassType IfcSpaceHeaterType::getClassType() {
  return IfcSpaceHeaterType::s_type;
}

Step::ClassType IfcSpaceHeaterType::getType() const {
  return IfcSpaceHeaterType::s_type;
}

bool IfcSpaceHeaterType::isOfType(Step::ClassType t) {
  return IfcSpaceHeaterType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcSpaceHeaterTypeEnum IfcSpaceHeaterType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcSpaceHeaterTypeEnum_UNSET;
  }
}

void IfcSpaceHeaterType::setPredefinedType(IfcSpaceHeaterTypeEnum value) {
  m_predefinedType = value;
}

void IfcSpaceHeaterType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcSpaceHeaterType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcSpaceHeaterTypeEnum_UNSET;
  }
  else {
    if (arg == ".SECTIONALRADIATOR.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_SECTIONALRADIATOR;
    }
    else if (arg == ".PANELRADIATOR.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_PANELRADIATOR;
    }
    else if (arg == ".TUBULARRADIATOR.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_TUBULARRADIATOR;
    }
    else if (arg == ".CONVECTOR.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_CONVECTOR;
    }
    else if (arg == ".BASEBOARDHEATER.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_BASEBOARDHEATER;
    }
    else if (arg == ".FINNEDTUBEUNIT.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_FINNEDTUBEUNIT;
    }
    else if (arg == ".UNITHEATER.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_UNITHEATER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcSpaceHeaterTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceHeaterType::s_type = new Step::ClassType_class("IfcSpaceHeaterType");
IfcSpaceHeaterType_Factory::IfcSpaceHeaterType_Factory() {
}

IfcSpaceHeaterType_Factory::~IfcSpaceHeaterType_Factory() {
  clear(true);
}

void IfcSpaceHeaterType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceHeaterType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceHeaterType_Factory::end() {
  return m_idMap.end();
}

IfcSpaceHeaterType *IfcSpaceHeaterType_Factory::get(Step::StepId id) {
  IfcSpaceHeaterType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSpaceHeaterType * > (it->second);
  }
  else {
    LOG_ERROR("IfcSpaceHeaterType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSpaceHeaterType * > (create(id));
  }
}

Step::BaseObject *IfcSpaceHeaterType_Factory::create(Step::StepId id) {
  IfcSpaceHeaterType *ret = new IfcSpaceHeaterType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceHeaterType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSpaceHeaterType *ret = new IfcSpaceHeaterType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceHeaterType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSpaceHeaterType *ret = new IfcSpaceHeaterType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSpaceHeaterType *IfcSpaceHeaterType_Factory::generate() {
  return static_cast< IfcSpaceHeaterType * > (create(m_model->getNewId()));
}

IfcSpaceHeaterType *IfcSpaceHeaterType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSpaceHeaterType * > (it->second);
  }
  else {
    return NULL;
  }
}

