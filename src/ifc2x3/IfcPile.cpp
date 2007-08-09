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
#include <ifc2x3/IfcPile.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPile::IfcPile(Step::SPFData *args) : IfcBuildingElement(args) {
  m_predefinedType = IfcPileTypeEnum_UNSET;
  m_constructionType = IfcPileConstructionEnum_UNSET;
}


IfcPile::~IfcPile() {
}

bool IfcPile::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPile(this);
}

const char *IfcPile::type() {
  return "IfcPile";
}

Step::ClassType IfcPile::getClassType() {
  return IfcPile::s_type;
}

Step::ClassType IfcPile::getType() const {
  return IfcPile::s_type;
}

bool IfcPile::isOfType(Step::ClassType t) {
  return IfcPile::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPileTypeEnum IfcPile::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcPileTypeEnum_UNSET;
  }
}

void IfcPile::setPredefinedType(IfcPileTypeEnum value) {
  m_predefinedType = value;
}

IfcPileConstructionEnum IfcPile::getConstructionType() {
  if (Step::BaseObject::inited()) {
    return m_constructionType;
  }
  else {
    return IfcPileConstructionEnum_UNSET;
  }
}

void IfcPile::setConstructionType(IfcPileConstructionEnum value) {
  m_constructionType = value;
}

void IfcPile::release() {
  IfcBuildingElement::release();
}

bool IfcPile::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcPileTypeEnum_UNSET;
  }
  else {
    if (arg == ".COHESION.") {
      m_predefinedType = IfcPileTypeEnum_COHESION;
    }
    else if (arg == ".FRICTION.") {
      m_predefinedType = IfcPileTypeEnum_FRICTION;
    }
    else if (arg == ".SUPPORT.") {
      m_predefinedType = IfcPileTypeEnum_SUPPORT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcPileTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcPileTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_constructionType = IfcPileConstructionEnum_UNSET;
  }
  else {
    if (arg == ".CAST_IN_PLACE.") {
      m_constructionType = IfcPileConstructionEnum_CAST_IN_PLACE;
    }
    else if (arg == ".COMPOSITE.") {
      m_constructionType = IfcPileConstructionEnum_COMPOSITE;
    }
    else if (arg == ".PRECAST_CONCRETE.") {
      m_constructionType = IfcPileConstructionEnum_PRECAST_CONCRETE;
    }
    else if (arg == ".PREFAB_STEEL.") {
      m_constructionType = IfcPileConstructionEnum_PREFAB_STEEL;
    }
    else if (arg == ".USERDEFINED.") {
      m_constructionType = IfcPileConstructionEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_constructionType = IfcPileConstructionEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPile::s_type = new Step::ClassType_class("IfcPile");
IfcPile_Factory::IfcPile_Factory() {
}

IfcPile_Factory::~IfcPile_Factory() {
  clear(true);
}

void IfcPile_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPile_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPile_Factory::end() {
  return m_idMap.end();
}

IfcPile *IfcPile_Factory::get(Step::StepId id) {
  IfcPile *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPile * > (it->second);
  }
  else {
    LOG_ERROR("IfcPile_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPile * > (create(id));
  }
}

Step::BaseObject *IfcPile_Factory::create(Step::StepId id) {
  IfcPile *ret = new IfcPile(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPile_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPile *ret = new IfcPile(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPile_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPile *ret = new IfcPile(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPile *IfcPile_Factory::generate() {
  return static_cast< IfcPile * > (create(m_model->getNewId()));
}

IfcPile *IfcPile_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPile * > (it->second);
  }
  else {
    return NULL;
  }
}

