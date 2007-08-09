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
#include <ifc2x3/IfcRamp.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRamp::IfcRamp(Step::SPFData *args) : IfcBuildingElement(args) {
  m_shapeType = IfcRampTypeEnum_UNSET;
}


IfcRamp::~IfcRamp() {
}

bool IfcRamp::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRamp(this);
}

const char *IfcRamp::type() {
  return "IfcRamp";
}

Step::ClassType IfcRamp::getClassType() {
  return IfcRamp::s_type;
}

Step::ClassType IfcRamp::getType() const {
  return IfcRamp::s_type;
}

bool IfcRamp::isOfType(Step::ClassType t) {
  return IfcRamp::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRampTypeEnum IfcRamp::getShapeType() {
  if (Step::BaseObject::inited()) {
    return m_shapeType;
  }
  else {
    return IfcRampTypeEnum_UNSET;
  }
}

void IfcRamp::setShapeType(IfcRampTypeEnum value) {
  m_shapeType = value;
}

void IfcRamp::release() {
  IfcBuildingElement::release();
}

bool IfcRamp::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shapeType = IfcRampTypeEnum_UNSET;
  }
  else {
    if (arg == ".STRAIGHT_RUN_RAMP.") {
      m_shapeType = IfcRampTypeEnum_STRAIGHT_RUN_RAMP;
    }
    else if (arg == ".TWO_STRAIGHT_RUN_RAMP.") {
      m_shapeType = IfcRampTypeEnum_TWO_STRAIGHT_RUN_RAMP;
    }
    else if (arg == ".QUARTER_TURN_RAMP.") {
      m_shapeType = IfcRampTypeEnum_QUARTER_TURN_RAMP;
    }
    else if (arg == ".TWO_QUARTER_TURN_RAMP.") {
      m_shapeType = IfcRampTypeEnum_TWO_QUARTER_TURN_RAMP;
    }
    else if (arg == ".HALF_TURN_RAMP.") {
      m_shapeType = IfcRampTypeEnum_HALF_TURN_RAMP;
    }
    else if (arg == ".SPIRAL_RAMP.") {
      m_shapeType = IfcRampTypeEnum_SPIRAL_RAMP;
    }
    else if (arg == ".USERDEFINED.") {
      m_shapeType = IfcRampTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_shapeType = IfcRampTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRamp::s_type = new Step::ClassType_class("IfcRamp");
IfcRamp_Factory::IfcRamp_Factory() {
}

IfcRamp_Factory::~IfcRamp_Factory() {
  clear(true);
}

void IfcRamp_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRamp_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRamp_Factory::end() {
  return m_idMap.end();
}

IfcRamp *IfcRamp_Factory::get(Step::StepId id) {
  IfcRamp *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRamp * > (it->second);
  }
  else {
    LOG_ERROR("IfcRamp_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRamp * > (create(id));
  }
}

Step::BaseObject *IfcRamp_Factory::create(Step::StepId id) {
  IfcRamp *ret = new IfcRamp(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRamp_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRamp *ret = new IfcRamp(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRamp_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRamp *ret = new IfcRamp(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRamp *IfcRamp_Factory::generate() {
  return static_cast< IfcRamp * > (create(m_model->getNewId()));
}

IfcRamp *IfcRamp_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRamp * > (it->second);
  }
  else {
    return NULL;
  }
}

