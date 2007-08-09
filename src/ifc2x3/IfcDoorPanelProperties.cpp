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
#include <ifc2x3/IfcDoorPanelProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDoorPanelProperties::IfcDoorPanelProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_panelDepth = getUnset(m_panelDepth);
  m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
  m_panelWidth = getUnset(m_panelWidth);
  m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
  m_shapeAspectStyle = NULL;
}


IfcDoorPanelProperties::~IfcDoorPanelProperties() {
}

bool IfcDoorPanelProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDoorPanelProperties(this);
}

const char *IfcDoorPanelProperties::type() {
  return "IfcDoorPanelProperties";
}

Step::ClassType IfcDoorPanelProperties::getClassType() {
  return IfcDoorPanelProperties::s_type;
}

Step::ClassType IfcDoorPanelProperties::getType() const {
  return IfcDoorPanelProperties::s_type;
}

bool IfcDoorPanelProperties::isOfType(Step::ClassType t) {
  return IfcDoorPanelProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoorPanelProperties::getPanelDepth() {
  if (Step::BaseObject::inited()) {
    return m_panelDepth;
  }
  else {
    return getUnset(m_panelDepth);
  }
}

void IfcDoorPanelProperties::setPanelDepth(IfcPositiveLengthMeasure value) {
  m_panelDepth = value;
}

IfcDoorPanelOperationEnum IfcDoorPanelProperties::getPanelOperation() {
  if (Step::BaseObject::inited()) {
    return m_panelOperation;
  }
  else {
    return IfcDoorPanelOperationEnum_UNSET;
  }
}

void IfcDoorPanelProperties::setPanelOperation(IfcDoorPanelOperationEnum value) {
  m_panelOperation = value;
}

IfcNormalisedRatioMeasure IfcDoorPanelProperties::getPanelWidth() {
  if (Step::BaseObject::inited()) {
    return m_panelWidth;
  }
  else {
    return getUnset(m_panelWidth);
  }
}

void IfcDoorPanelProperties::setPanelWidth(IfcNormalisedRatioMeasure value) {
  m_panelWidth = value;
}

IfcDoorPanelPositionEnum IfcDoorPanelProperties::getPanelPosition() {
  if (Step::BaseObject::inited()) {
    return m_panelPosition;
  }
  else {
    return IfcDoorPanelPositionEnum_UNSET;
  }
}

void IfcDoorPanelProperties::setPanelPosition(IfcDoorPanelPositionEnum value) {
  m_panelPosition = value;
}

IfcShapeAspect *IfcDoorPanelProperties::getShapeAspectStyle() {
  if (Step::BaseObject::inited()) {
    return m_shapeAspectStyle.get();
  }
  else {
    return NULL;
  }
}

void IfcDoorPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
  m_shapeAspectStyle = value;
}

void IfcDoorPanelProperties::release() {
  IfcPropertySetDefinition::release();
  m_shapeAspectStyle.release();
}

bool IfcDoorPanelProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_panelDepth = getUnset(m_panelDepth);
  }
  else {
    m_panelDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
  }
  else {
    if (arg == ".SWINGING.") {
      m_panelOperation = IfcDoorPanelOperationEnum_SWINGING;
    }
    else if (arg == ".DOUBLE_ACTING.") {
      m_panelOperation = IfcDoorPanelOperationEnum_DOUBLE_ACTING;
    }
    else if (arg == ".SLIDING.") {
      m_panelOperation = IfcDoorPanelOperationEnum_SLIDING;
    }
    else if (arg == ".FOLDING.") {
      m_panelOperation = IfcDoorPanelOperationEnum_FOLDING;
    }
    else if (arg == ".REVOLVING.") {
      m_panelOperation = IfcDoorPanelOperationEnum_REVOLVING;
    }
    else if (arg == ".ROLLINGUP.") {
      m_panelOperation = IfcDoorPanelOperationEnum_ROLLINGUP;
    }
    else if (arg == ".USERDEFINED.") {
      m_panelOperation = IfcDoorPanelOperationEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_panelOperation = IfcDoorPanelOperationEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_panelWidth = getUnset(m_panelWidth);
  }
  else {
    m_panelWidth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
  }
  else {
    if (arg == ".LEFT.") {
      m_panelPosition = IfcDoorPanelPositionEnum_LEFT;
    }
    else if (arg == ".MIDDLE.") {
      m_panelPosition = IfcDoorPanelPositionEnum_MIDDLE;
    }
    else if (arg == ".RIGHT.") {
      m_panelPosition = IfcDoorPanelPositionEnum_RIGHT;
    }
    else if (arg == ".NOTDEFINED.") {
      m_panelPosition = IfcDoorPanelPositionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_shapeAspectStyle = NULL;
  }
  else {
    m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoorPanelProperties::s_type = new Step::ClassType_class("IfcDoorPanelProperties");
IfcDoorPanelProperties_Factory::IfcDoorPanelProperties_Factory() {
}

IfcDoorPanelProperties_Factory::~IfcDoorPanelProperties_Factory() {
  clear(true);
}

void IfcDoorPanelProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDoorPanelProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDoorPanelProperties_Factory::end() {
  return m_idMap.end();
}

IfcDoorPanelProperties *IfcDoorPanelProperties_Factory::get(Step::StepId id) {
  IfcDoorPanelProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDoorPanelProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcDoorPanelProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDoorPanelProperties * > (create(id));
  }
}

Step::BaseObject *IfcDoorPanelProperties_Factory::create(Step::StepId id) {
  IfcDoorPanelProperties *ret = new IfcDoorPanelProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDoorPanelProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDoorPanelProperties *ret = new IfcDoorPanelProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDoorPanelProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDoorPanelProperties *ret = new IfcDoorPanelProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDoorPanelProperties *IfcDoorPanelProperties_Factory::generate() {
  return static_cast< IfcDoorPanelProperties * > (create(m_model->getNewId()));
}

IfcDoorPanelProperties *IfcDoorPanelProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDoorPanelProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

