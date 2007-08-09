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
#include <ifc2x3/IfcWindowStyle.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWindowStyle::IfcWindowStyle(Step::SPFData *args) : IfcTypeProduct(args) {
  m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
  m_operationType = IfcWindowStyleOperationEnum_UNSET;
  m_parameterTakesPrecedence = getUnset(m_parameterTakesPrecedence);
  m_sizeable = getUnset(m_sizeable);
}


IfcWindowStyle::~IfcWindowStyle() {
}

bool IfcWindowStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWindowStyle(this);
}

const char *IfcWindowStyle::type() {
  return "IfcWindowStyle";
}

Step::ClassType IfcWindowStyle::getClassType() {
  return IfcWindowStyle::s_type;
}

Step::ClassType IfcWindowStyle::getType() const {
  return IfcWindowStyle::s_type;
}

bool IfcWindowStyle::isOfType(Step::ClassType t) {
  return IfcWindowStyle::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcWindowStyleConstructionEnum IfcWindowStyle::getConstructionType() {
  if (Step::BaseObject::inited()) {
    return m_constructionType;
  }
  else {
    return IfcWindowStyleConstructionEnum_UNSET;
  }
}

void IfcWindowStyle::setConstructionType(IfcWindowStyleConstructionEnum value) {
  m_constructionType = value;
}

IfcWindowStyleOperationEnum IfcWindowStyle::getOperationType() {
  if (Step::BaseObject::inited()) {
    return m_operationType;
  }
  else {
    return IfcWindowStyleOperationEnum_UNSET;
  }
}

void IfcWindowStyle::setOperationType(IfcWindowStyleOperationEnum value) {
  m_operationType = value;
}

Bool IfcWindowStyle::getParameterTakesPrecedence() {
  if (Step::BaseObject::inited()) {
    return m_parameterTakesPrecedence;
  }
  else {
    return getUnset(m_parameterTakesPrecedence);
  }
}

void IfcWindowStyle::setParameterTakesPrecedence(Bool value) {
  m_parameterTakesPrecedence = value;
}

Bool IfcWindowStyle::getSizeable() {
  if (Step::BaseObject::inited()) {
    return m_sizeable;
  }
  else {
    return getUnset(m_sizeable);
  }
}

void IfcWindowStyle::setSizeable(Bool value) {
  m_sizeable = value;
}

void IfcWindowStyle::release() {
  IfcTypeProduct::release();
}

bool IfcWindowStyle::init() {
  bool status = IfcTypeProduct::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
  }
  else {
    if (arg == ".ALUMINIUM.") {
      m_constructionType = IfcWindowStyleConstructionEnum_ALUMINIUM;
    }
    else if (arg == ".HIGH_GRADE_STEEL.") {
      m_constructionType = IfcWindowStyleConstructionEnum_HIGH_GRADE_STEEL;
    }
    else if (arg == ".STEEL.") {
      m_constructionType = IfcWindowStyleConstructionEnum_STEEL;
    }
    else if (arg == ".WOOD.") {
      m_constructionType = IfcWindowStyleConstructionEnum_WOOD;
    }
    else if (arg == ".ALUMINIUM_WOOD.") {
      m_constructionType = IfcWindowStyleConstructionEnum_ALUMINIUM_WOOD;
    }
    else if (arg == ".PLASTIC.") {
      m_constructionType = IfcWindowStyleConstructionEnum_PLASTIC;
    }
    else if (arg == ".OTHER_CONSTRUCTION.") {
      m_constructionType = IfcWindowStyleConstructionEnum_OTHER_CONSTRUCTION;
    }
    else if (arg == ".NOTDEFINED.") {
      m_constructionType = IfcWindowStyleConstructionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_operationType = IfcWindowStyleOperationEnum_UNSET;
  }
  else {
    if (arg == ".SINGLE_PANEL.") {
      m_operationType = IfcWindowStyleOperationEnum_SINGLE_PANEL;
    }
    else if (arg == ".DOUBLE_PANEL_VERTICAL.") {
      m_operationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_VERTICAL;
    }
    else if (arg == ".DOUBLE_PANEL_HORIZONTAL.") {
      m_operationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_HORIZONTAL;
    }
    else if (arg == ".TRIPLE_PANEL_VERTICAL.") {
      m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_VERTICAL;
    }
    else if (arg == ".TRIPLE_PANEL_BOTTOM.") {
      m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_BOTTOM;
    }
    else if (arg == ".TRIPLE_PANEL_TOP.") {
      m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_TOP;
    }
    else if (arg == ".TRIPLE_PANEL_LEFT.") {
      m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_LEFT;
    }
    else if (arg == ".TRIPLE_PANEL_RIGHT.") {
      m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_RIGHT;
    }
    else if (arg == ".TRIPLE_PANEL_HORIZONTAL.") {
      m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_HORIZONTAL;
    }
    else if (arg == ".USERDEFINED.") {
      m_operationType = IfcWindowStyleOperationEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_operationType = IfcWindowStyleOperationEnum_NOTDEFINED;
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

IFC2X3_DLL_DEF Step::ClassType IfcWindowStyle::s_type = new Step::ClassType_class("IfcWindowStyle");
IfcWindowStyle_Factory::IfcWindowStyle_Factory() {
}

IfcWindowStyle_Factory::~IfcWindowStyle_Factory() {
  clear(true);
}

void IfcWindowStyle_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindowStyle_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindowStyle_Factory::end() {
  return m_idMap.end();
}

IfcWindowStyle *IfcWindowStyle_Factory::get(Step::StepId id) {
  IfcWindowStyle *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWindowStyle * > (it->second);
  }
  else {
    LOG_ERROR("IfcWindowStyle_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWindowStyle * > (create(id));
  }
}

Step::BaseObject *IfcWindowStyle_Factory::create(Step::StepId id) {
  IfcWindowStyle *ret = new IfcWindowStyle(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWindowStyle_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWindowStyle *ret = new IfcWindowStyle(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWindowStyle_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWindowStyle *ret = new IfcWindowStyle(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWindowStyle *IfcWindowStyle_Factory::generate() {
  return static_cast< IfcWindowStyle * > (create(m_model->getNewId()));
}

IfcWindowStyle *IfcWindowStyle_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWindowStyle * > (it->second);
  }
  else {
    return NULL;
  }
}

