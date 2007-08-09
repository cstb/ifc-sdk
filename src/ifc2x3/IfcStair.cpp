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
#include <ifc2x3/IfcStair.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStair::IfcStair(Step::SPFData *args) : IfcBuildingElement(args) {
  m_shapeType = IfcStairTypeEnum_UNSET;
}


IfcStair::~IfcStair() {
}

bool IfcStair::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStair(this);
}

const char *IfcStair::type() {
  return "IfcStair";
}

Step::ClassType IfcStair::getClassType() {
  return IfcStair::s_type;
}

Step::ClassType IfcStair::getType() const {
  return IfcStair::s_type;
}

bool IfcStair::isOfType(Step::ClassType t) {
  return IfcStair::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcStairTypeEnum IfcStair::getShapeType() {
  if (Step::BaseObject::inited()) {
    return m_shapeType;
  }
  else {
    return IfcStairTypeEnum_UNSET;
  }
}

void IfcStair::setShapeType(IfcStairTypeEnum value) {
  m_shapeType = value;
}

void IfcStair::release() {
  IfcBuildingElement::release();
}

bool IfcStair::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shapeType = IfcStairTypeEnum_UNSET;
  }
  else {
    if (arg == ".STRAIGHT_RUN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_STRAIGHT_RUN_STAIR;
    }
    else if (arg == ".TWO_STRAIGHT_RUN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_TWO_STRAIGHT_RUN_STAIR;
    }
    else if (arg == ".QUARTER_WINDING_STAIR.") {
      m_shapeType = IfcStairTypeEnum_QUARTER_WINDING_STAIR;
    }
    else if (arg == ".QUARTER_TURN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_QUARTER_TURN_STAIR;
    }
    else if (arg == ".HALF_WINDING_STAIR.") {
      m_shapeType = IfcStairTypeEnum_HALF_WINDING_STAIR;
    }
    else if (arg == ".HALF_TURN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_HALF_TURN_STAIR;
    }
    else if (arg == ".TWO_QUARTER_WINDING_STAIR.") {
      m_shapeType = IfcStairTypeEnum_TWO_QUARTER_WINDING_STAIR;
    }
    else if (arg == ".TWO_QUARTER_TURN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_TWO_QUARTER_TURN_STAIR;
    }
    else if (arg == ".THREE_QUARTER_WINDING_STAIR.") {
      m_shapeType = IfcStairTypeEnum_THREE_QUARTER_WINDING_STAIR;
    }
    else if (arg == ".THREE_QUARTER_TURN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_THREE_QUARTER_TURN_STAIR;
    }
    else if (arg == ".SPIRAL_STAIR.") {
      m_shapeType = IfcStairTypeEnum_SPIRAL_STAIR;
    }
    else if (arg == ".DOUBLE_RETURN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_DOUBLE_RETURN_STAIR;
    }
    else if (arg == ".CURVED_RUN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_CURVED_RUN_STAIR;
    }
    else if (arg == ".TWO_CURVED_RUN_STAIR.") {
      m_shapeType = IfcStairTypeEnum_TWO_CURVED_RUN_STAIR;
    }
    else if (arg == ".USERDEFINED.") {
      m_shapeType = IfcStairTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_shapeType = IfcStairTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStair::s_type = new Step::ClassType_class("IfcStair");
IfcStair_Factory::IfcStair_Factory() {
}

IfcStair_Factory::~IfcStair_Factory() {
  clear(true);
}

void IfcStair_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStair_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStair_Factory::end() {
  return m_idMap.end();
}

IfcStair *IfcStair_Factory::get(Step::StepId id) {
  IfcStair *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStair * > (it->second);
  }
  else {
    LOG_ERROR("IfcStair_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStair * > (create(id));
  }
}

Step::BaseObject *IfcStair_Factory::create(Step::StepId id) {
  IfcStair *ret = new IfcStair(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStair_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStair *ret = new IfcStair(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStair_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStair *ret = new IfcStair(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStair *IfcStair_Factory::generate() {
  return static_cast< IfcStair * > (create(m_model->getNewId()));
}

IfcStair *IfcStair_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStair * > (it->second);
  }
  else {
    return NULL;
  }
}

