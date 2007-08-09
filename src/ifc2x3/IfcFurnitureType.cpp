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
#include <ifc2x3/IfcFurnitureType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFurnitureType::IfcFurnitureType(Step::SPFData *args) : IfcFurnishingElementType(args) {
  m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
}


IfcFurnitureType::~IfcFurnitureType() {
}

bool IfcFurnitureType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFurnitureType(this);
}

const char *IfcFurnitureType::type() {
  return "IfcFurnitureType";
}

Step::ClassType IfcFurnitureType::getClassType() {
  return IfcFurnitureType::s_type;
}

Step::ClassType IfcFurnitureType::getType() const {
  return IfcFurnitureType::s_type;
}

bool IfcFurnitureType::isOfType(Step::ClassType t) {
  return IfcFurnitureType::s_type == t ? true : IfcFurnishingElementType::isOfType(t);
}

IfcAssemblyPlaceEnum IfcFurnitureType::getAssemblyPlace() {
  if (Step::BaseObject::inited()) {
    return m_assemblyPlace;
  }
  else {
    return IfcAssemblyPlaceEnum_UNSET;
  }
}

void IfcFurnitureType::setAssemblyPlace(IfcAssemblyPlaceEnum value) {
  m_assemblyPlace = value;
}

void IfcFurnitureType::release() {
  IfcFurnishingElementType::release();
}

bool IfcFurnitureType::init() {
  bool status = IfcFurnishingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
  }
  else {
    if (arg == ".SITE.") {
      m_assemblyPlace = IfcAssemblyPlaceEnum_SITE;
    }
    else if (arg == ".FACTORY.") {
      m_assemblyPlace = IfcAssemblyPlaceEnum_FACTORY;
    }
    else if (arg == ".NOTDEFINED.") {
      m_assemblyPlace = IfcAssemblyPlaceEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnitureType::s_type = new Step::ClassType_class("IfcFurnitureType");
IfcFurnitureType_Factory::IfcFurnitureType_Factory() {
}

IfcFurnitureType_Factory::~IfcFurnitureType_Factory() {
  clear(true);
}

void IfcFurnitureType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFurnitureType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFurnitureType_Factory::end() {
  return m_idMap.end();
}

IfcFurnitureType *IfcFurnitureType_Factory::get(Step::StepId id) {
  IfcFurnitureType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFurnitureType * > (it->second);
  }
  else {
    LOG_ERROR("IfcFurnitureType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFurnitureType * > (create(id));
  }
}

Step::BaseObject *IfcFurnitureType_Factory::create(Step::StepId id) {
  IfcFurnitureType *ret = new IfcFurnitureType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFurnitureType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFurnitureType *ret = new IfcFurnitureType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFurnitureType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFurnitureType *ret = new IfcFurnitureType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFurnitureType *IfcFurnitureType_Factory::generate() {
  return static_cast< IfcFurnitureType * > (create(m_model->getNewId()));
}

IfcFurnitureType *IfcFurnitureType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFurnitureType * > (it->second);
  }
  else {
    return NULL;
  }
}

