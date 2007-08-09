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
#include <ifc2x3/IfcDoorStyle.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDoorStyle::IfcDoorStyle(Step::SPFData *args) : IfcTypeProduct(args) {
  m_operationType = IfcDoorStyleOperationEnum_UNSET;
  m_constructionType = IfcDoorStyleConstructionEnum_UNSET;
  m_parameterTakesPrecedence = getUnset(m_parameterTakesPrecedence);
  m_sizeable = getUnset(m_sizeable);
}


IfcDoorStyle::~IfcDoorStyle() {
}

bool IfcDoorStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDoorStyle(this);
}

const char *IfcDoorStyle::type() {
  return "IfcDoorStyle";
}

Step::ClassType IfcDoorStyle::getClassType() {
  return IfcDoorStyle::s_type;
}

Step::ClassType IfcDoorStyle::getType() const {
  return IfcDoorStyle::s_type;
}

bool IfcDoorStyle::isOfType(Step::ClassType t) {
  return IfcDoorStyle::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcDoorStyleOperationEnum IfcDoorStyle::getOperationType() {
  if (Step::BaseObject::inited()) {
    return m_operationType;
  }
  else {
    return IfcDoorStyleOperationEnum_UNSET;
  }
}

void IfcDoorStyle::setOperationType(IfcDoorStyleOperationEnum value) {
  m_operationType = value;
}

IfcDoorStyleConstructionEnum IfcDoorStyle::getConstructionType() {
  if (Step::BaseObject::inited()) {
    return m_constructionType;
  }
  else {
    return IfcDoorStyleConstructionEnum_UNSET;
  }
}

void IfcDoorStyle::setConstructionType(IfcDoorStyleConstructionEnum value) {
  m_constructionType = value;
}

Bool IfcDoorStyle::getParameterTakesPrecedence() {
  if (Step::BaseObject::inited()) {
    return m_parameterTakesPrecedence;
  }
  else {
    return getUnset(m_parameterTakesPrecedence);
  }
}

void IfcDoorStyle::setParameterTakesPrecedence(Bool value) {
  m_parameterTakesPrecedence = value;
}

Bool IfcDoorStyle::getSizeable() {
  if (Step::BaseObject::inited()) {
    return m_sizeable;
  }
  else {
    return getUnset(m_sizeable);
  }
}

void IfcDoorStyle::setSizeable(Bool value) {
  m_sizeable = value;
}

void IfcDoorStyle::release() {
  IfcTypeProduct::release();
}

bool IfcDoorStyle::init() {
  bool status = IfcTypeProduct::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_operationType = IfcDoorStyleOperationEnum_UNSET;
  }
  else {
    if (arg == ".SINGLE_SWING_LEFT.") {
      m_operationType = IfcDoorStyleOperationEnum_SINGLE_SWING_LEFT;
    }
    else if (arg == ".SINGLE_SWING_RIGHT.") {
      m_operationType = IfcDoorStyleOperationEnum_SINGLE_SWING_RIGHT;
    }
    else if (arg == ".DOUBLE_DOOR_SINGLE_SWING.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING;
    }
    else if (arg == ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT;
    }
    else if (arg == ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT;
    }
    else if (arg == ".DOUBLE_SWING_LEFT.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_SWING_LEFT;
    }
    else if (arg == ".DOUBLE_SWING_RIGHT.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_SWING_RIGHT;
    }
    else if (arg == ".DOUBLE_DOOR_DOUBLE_SWING.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_DOUBLE_SWING;
    }
    else if (arg == ".SLIDING_TO_LEFT.") {
      m_operationType = IfcDoorStyleOperationEnum_SLIDING_TO_LEFT;
    }
    else if (arg == ".SLIDING_TO_RIGHT.") {
      m_operationType = IfcDoorStyleOperationEnum_SLIDING_TO_RIGHT;
    }
    else if (arg == ".DOUBLE_DOOR_SLIDING.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SLIDING;
    }
    else if (arg == ".FOLDING_TO_LEFT.") {
      m_operationType = IfcDoorStyleOperationEnum_FOLDING_TO_LEFT;
    }
    else if (arg == ".FOLDING_TO_RIGHT.") {
      m_operationType = IfcDoorStyleOperationEnum_FOLDING_TO_RIGHT;
    }
    else if (arg == ".DOUBLE_DOOR_FOLDING.") {
      m_operationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_FOLDING;
    }
    else if (arg == ".REVOLVING.") {
      m_operationType = IfcDoorStyleOperationEnum_REVOLVING;
    }
    else if (arg == ".ROLLINGUP.") {
      m_operationType = IfcDoorStyleOperationEnum_ROLLINGUP;
    }
    else if (arg == ".USERDEFINED.") {
      m_operationType = IfcDoorStyleOperationEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_operationType = IfcDoorStyleOperationEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_constructionType = IfcDoorStyleConstructionEnum_UNSET;
  }
  else {
    if (arg == ".ALUMINIUM.") {
      m_constructionType = IfcDoorStyleConstructionEnum_ALUMINIUM;
    }
    else if (arg == ".HIGH_GRADE_STEEL.") {
      m_constructionType = IfcDoorStyleConstructionEnum_HIGH_GRADE_STEEL;
    }
    else if (arg == ".STEEL.") {
      m_constructionType = IfcDoorStyleConstructionEnum_STEEL;
    }
    else if (arg == ".WOOD.") {
      m_constructionType = IfcDoorStyleConstructionEnum_WOOD;
    }
    else if (arg == ".ALUMINIUM_WOOD.") {
      m_constructionType = IfcDoorStyleConstructionEnum_ALUMINIUM_WOOD;
    }
    else if (arg == ".ALUMINIUM_PLASTIC.") {
      m_constructionType = IfcDoorStyleConstructionEnum_ALUMINIUM_PLASTIC;
    }
    else if (arg == ".PLASTIC.") {
      m_constructionType = IfcDoorStyleConstructionEnum_PLASTIC;
    }
    else if (arg == ".USERDEFINED.") {
      m_constructionType = IfcDoorStyleConstructionEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_constructionType = IfcDoorStyleConstructionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_parameterTakesPrecedence = getUnset(m_parameterTakesPrecedence);
  }
  else {
    m_parameterTakesPrecedence = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sizeable = getUnset(m_sizeable);
  }
  else {
    m_sizeable = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoorStyle::s_type = new Step::ClassType_class("IfcDoorStyle");
IfcDoorStyle_Factory::IfcDoorStyle_Factory() {
}

IfcDoorStyle_Factory::~IfcDoorStyle_Factory() {
  clear(true);
}

void IfcDoorStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDoorStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDoorStyle_Factory::end() {
  return m_idMap.end();
}

IfcDoorStyle *IfcDoorStyle_Factory::get(Step::StepId id) {
  IfcDoorStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDoorStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcDoorStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDoorStyle * > (create(id));
  }
}

Step::BaseObject *IfcDoorStyle_Factory::create(Step::StepId id) {
  IfcDoorStyle *ret = new IfcDoorStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDoorStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDoorStyle *ret = new IfcDoorStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDoorStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDoorStyle *ret = new IfcDoorStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDoorStyle *IfcDoorStyle_Factory::generate() {
  return static_cast< IfcDoorStyle * > (create(m_model->getNewId()));
}

IfcDoorStyle *IfcDoorStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDoorStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

