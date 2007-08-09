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
#include <ifc2x3/IfcWindowPanelProperties.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcWindowPanelProperties::IfcWindowPanelProperties(Step::SPFData *args) : IfcPropertySetDefinition(args) {
  m_operationType = IfcWindowPanelOperationEnum_UNSET;
  m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
  m_frameDepth = getUnset(m_frameDepth);
  m_frameThickness = getUnset(m_frameThickness);
  m_shapeAspectStyle = NULL;
}


IfcWindowPanelProperties::~IfcWindowPanelProperties() {
}

bool IfcWindowPanelProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcWindowPanelProperties(this);
}

const char *IfcWindowPanelProperties::type() {
  return "IfcWindowPanelProperties";
}

Step::ClassType IfcWindowPanelProperties::getClassType() {
  return IfcWindowPanelProperties::s_type;
}

Step::ClassType IfcWindowPanelProperties::getType() const {
  return IfcWindowPanelProperties::s_type;
}

bool IfcWindowPanelProperties::isOfType(Step::ClassType t) {
  return IfcWindowPanelProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcWindowPanelOperationEnum IfcWindowPanelProperties::getOperationType() {
  if (Step::BaseObject::inited()) {
    return m_operationType;
  }
  else {
    return IfcWindowPanelOperationEnum_UNSET;
  }
}

void IfcWindowPanelProperties::setOperationType(IfcWindowPanelOperationEnum value) {
  m_operationType = value;
}

IfcWindowPanelPositionEnum IfcWindowPanelProperties::getPanelPosition() {
  if (Step::BaseObject::inited()) {
    return m_panelPosition;
  }
  else {
    return IfcWindowPanelPositionEnum_UNSET;
  }
}

void IfcWindowPanelProperties::setPanelPosition(IfcWindowPanelPositionEnum value) {
  m_panelPosition = value;
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameDepth() {
  if (Step::BaseObject::inited()) {
    return m_frameDepth;
  }
  else {
    return getUnset(m_frameDepth);
  }
}

void IfcWindowPanelProperties::setFrameDepth(IfcPositiveLengthMeasure value) {
  m_frameDepth = value;
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameThickness() {
  if (Step::BaseObject::inited()) {
    return m_frameThickness;
  }
  else {
    return getUnset(m_frameThickness);
  }
}

void IfcWindowPanelProperties::setFrameThickness(IfcPositiveLengthMeasure value) {
  m_frameThickness = value;
}

IfcShapeAspect *IfcWindowPanelProperties::getShapeAspectStyle() {
  if (Step::BaseObject::inited()) {
    return m_shapeAspectStyle.get();
  }
  else {
    return NULL;
  }
}

void IfcWindowPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
  m_shapeAspectStyle = value;
}

void IfcWindowPanelProperties::release() {
  IfcPropertySetDefinition::release();
  m_shapeAspectStyle.release();
}

bool IfcWindowPanelProperties::init() {
  bool status = IfcPropertySetDefinition::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_operationType = IfcWindowPanelOperationEnum_UNSET;
  }
  else {
    if (arg == ".SIDEHUNGRIGHTHAND.") {
      m_operationType = IfcWindowPanelOperationEnum_SIDEHUNGRIGHTHAND;
    }
    else if (arg == ".SIDEHUNGLEFTHAND.") {
      m_operationType = IfcWindowPanelOperationEnum_SIDEHUNGLEFTHAND;
    }
    else if (arg == ".TILTANDTURNRIGHTHAND.") {
      m_operationType = IfcWindowPanelOperationEnum_TILTANDTURNRIGHTHAND;
    }
    else if (arg == ".TILTANDTURNLEFTHAND.") {
      m_operationType = IfcWindowPanelOperationEnum_TILTANDTURNLEFTHAND;
    }
    else if (arg == ".TOPHUNG.") {
      m_operationType = IfcWindowPanelOperationEnum_TOPHUNG;
    }
    else if (arg == ".BOTTOMHUNG.") {
      m_operationType = IfcWindowPanelOperationEnum_BOTTOMHUNG;
    }
    else if (arg == ".PIVOTHORIZONTAL.") {
      m_operationType = IfcWindowPanelOperationEnum_PIVOTHORIZONTAL;
    }
    else if (arg == ".PIVOTVERTICAL.") {
      m_operationType = IfcWindowPanelOperationEnum_PIVOTVERTICAL;
    }
    else if (arg == ".SLIDINGHORIZONTAL.") {
      m_operationType = IfcWindowPanelOperationEnum_SLIDINGHORIZONTAL;
    }
    else if (arg == ".SLIDINGVERTICAL.") {
      m_operationType = IfcWindowPanelOperationEnum_SLIDINGVERTICAL;
    }
    else if (arg == ".REMOVABLECASEMENT.") {
      m_operationType = IfcWindowPanelOperationEnum_REMOVABLECASEMENT;
    }
    else if (arg == ".FIXEDCASEMENT.") {
      m_operationType = IfcWindowPanelOperationEnum_FIXEDCASEMENT;
    }
    else if (arg == ".OTHEROPERATION.") {
      m_operationType = IfcWindowPanelOperationEnum_OTHEROPERATION;
    }
    else if (arg == ".NOTDEFINED.") {
      m_operationType = IfcWindowPanelOperationEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
  }
  else {
    if (arg == ".LEFT.") {
      m_panelPosition = IfcWindowPanelPositionEnum_LEFT;
    }
    else if (arg == ".MIDDLE.") {
      m_panelPosition = IfcWindowPanelPositionEnum_MIDDLE;
    }
    else if (arg == ".RIGHT.") {
      m_panelPosition = IfcWindowPanelPositionEnum_RIGHT;
    }
    else if (arg == ".BOTTOM.") {
      m_panelPosition = IfcWindowPanelPositionEnum_BOTTOM;
    }
    else if (arg == ".TOP.") {
      m_panelPosition = IfcWindowPanelPositionEnum_TOP;
    }
    else if (arg == ".NOTDEFINED.") {
      m_panelPosition = IfcWindowPanelPositionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_frameDepth = getUnset(m_frameDepth);
  }
  else {
    m_frameDepth = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_frameThickness = getUnset(m_frameThickness);
  }
  else {
    m_frameThickness = Step::spfToReal(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcWindowPanelProperties::s_type = new Step::ClassType_class("IfcWindowPanelProperties");
IfcWindowPanelProperties_Factory::IfcWindowPanelProperties_Factory() {
}

IfcWindowPanelProperties_Factory::~IfcWindowPanelProperties_Factory() {
  clear(true);
}

void IfcWindowPanelProperties_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindowPanelProperties_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcWindowPanelProperties_Factory::end() {
  return m_idMap.end();
}

IfcWindowPanelProperties *IfcWindowPanelProperties_Factory::get(Step::StepId id) {
  IfcWindowPanelProperties *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcWindowPanelProperties * > (it->second);
  }
  else {
    LOG_ERROR("IfcWindowPanelProperties_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcWindowPanelProperties * > (create(id));
  }
}

Step::BaseObject *IfcWindowPanelProperties_Factory::create(Step::StepId id) {
  IfcWindowPanelProperties *ret = new IfcWindowPanelProperties(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcWindowPanelProperties_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcWindowPanelProperties *ret = new IfcWindowPanelProperties(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcWindowPanelProperties_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcWindowPanelProperties *ret = new IfcWindowPanelProperties(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcWindowPanelProperties *IfcWindowPanelProperties_Factory::generate() {
  return static_cast< IfcWindowPanelProperties * > (create(m_model->getNewId()));
}

IfcWindowPanelProperties *IfcWindowPanelProperties_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcWindowPanelProperties * > (it->second);
  }
  else {
    return NULL;
  }
}

