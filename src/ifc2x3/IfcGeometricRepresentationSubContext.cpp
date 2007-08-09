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
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGeometricRepresentationSubContext::IfcGeometricRepresentationSubContext(Step::SPFData *args) : IfcGeometricRepresentationContext(args) {
  m_parentContext = NULL;
  m_targetScale = getUnset(m_targetScale);
  m_targetView = IfcGeometricProjectionEnum_UNSET;
  m_userDefinedTargetView = getUnset(m_userDefinedTargetView);
}


IfcGeometricRepresentationSubContext::~IfcGeometricRepresentationSubContext() {
}

bool IfcGeometricRepresentationSubContext::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGeometricRepresentationSubContext(this);
}

const char *IfcGeometricRepresentationSubContext::type() {
  return "IfcGeometricRepresentationSubContext";
}

Step::ClassType IfcGeometricRepresentationSubContext::getClassType() {
  return IfcGeometricRepresentationSubContext::s_type;
}

Step::ClassType IfcGeometricRepresentationSubContext::getType() const {
  return IfcGeometricRepresentationSubContext::s_type;
}

bool IfcGeometricRepresentationSubContext::isOfType(Step::ClassType t) {
  return IfcGeometricRepresentationSubContext::s_type == t ? true : IfcGeometricRepresentationContext::isOfType(t);
}

IfcGeometricRepresentationContext *IfcGeometricRepresentationSubContext::getParentContext() {
  if (Step::BaseObject::inited()) {
    return m_parentContext.get();
  }
  else {
    return NULL;
  }
}

void IfcGeometricRepresentationSubContext::setParentContext(const Step::RefPtr< IfcGeometricRepresentationContext > &value) {
  m_parentContext = value;
}

IfcPositiveRatioMeasure IfcGeometricRepresentationSubContext::getTargetScale() {
  if (Step::BaseObject::inited()) {
    return m_targetScale;
  }
  else {
    return getUnset(m_targetScale);
  }
}

void IfcGeometricRepresentationSubContext::setTargetScale(IfcPositiveRatioMeasure value) {
  m_targetScale = value;
}

IfcGeometricProjectionEnum IfcGeometricRepresentationSubContext::getTargetView() {
  if (Step::BaseObject::inited()) {
    return m_targetView;
  }
  else {
    return IfcGeometricProjectionEnum_UNSET;
  }
}

void IfcGeometricRepresentationSubContext::setTargetView(IfcGeometricProjectionEnum value) {
  m_targetView = value;
}

IfcLabel IfcGeometricRepresentationSubContext::getUserDefinedTargetView() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedTargetView;
  }
  else {
    return getUnset(m_userDefinedTargetView);
  }
}

void IfcGeometricRepresentationSubContext::setUserDefinedTargetView(const IfcLabel &value) {
  m_userDefinedTargetView = value;
}

void IfcGeometricRepresentationSubContext::release() {
  IfcGeometricRepresentationContext::release();
  m_parentContext.release();
}

bool IfcGeometricRepresentationSubContext::init() {
  bool status = IfcGeometricRepresentationContext::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_parentContext = NULL;
  }
  else {
    m_parentContext = static_cast< IfcGeometricRepresentationContext * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_targetScale = getUnset(m_targetScale);
  }
  else {
    m_targetScale = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_targetView = IfcGeometricProjectionEnum_UNSET;
  }
  else {
    if (arg == ".GRAPH_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_GRAPH_VIEW;
    }
    else if (arg == ".SKETCH_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_SKETCH_VIEW;
    }
    else if (arg == ".MODEL_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_MODEL_VIEW;
    }
    else if (arg == ".PLAN_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_PLAN_VIEW;
    }
    else if (arg == ".REFLECTED_PLAN_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_REFLECTED_PLAN_VIEW;
    }
    else if (arg == ".SECTION_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_SECTION_VIEW;
    }
    else if (arg == ".ELEVATION_VIEW.") {
      m_targetView = IfcGeometricProjectionEnum_ELEVATION_VIEW;
    }
    else if (arg == ".USERDEFINED.") {
      m_targetView = IfcGeometricProjectionEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_targetView = IfcGeometricProjectionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedTargetView = getUnset(m_userDefinedTargetView);
  }
  else {
    m_userDefinedTargetView = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricRepresentationSubContext::s_type = new Step::ClassType_class("IfcGeometricRepresentationSubContext");
IfcGeometricRepresentationSubContext_Factory::IfcGeometricRepresentationSubContext_Factory() {
}

IfcGeometricRepresentationSubContext_Factory::~IfcGeometricRepresentationSubContext_Factory() {
  clear(true);
}

void IfcGeometricRepresentationSubContext_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeometricRepresentationSubContext_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGeometricRepresentationSubContext_Factory::end() {
  return m_idMap.end();
}

IfcGeometricRepresentationSubContext *IfcGeometricRepresentationSubContext_Factory::get(Step::StepId id) {
  IfcGeometricRepresentationSubContext *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGeometricRepresentationSubContext * > (it->second);
  }
  else {
    LOG_ERROR("IfcGeometricRepresentationSubContext_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGeometricRepresentationSubContext * > (create(id));
  }
}

Step::BaseObject *IfcGeometricRepresentationSubContext_Factory::create(Step::StepId id) {
  IfcGeometricRepresentationSubContext *ret = new IfcGeometricRepresentationSubContext(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGeometricRepresentationSubContext_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGeometricRepresentationSubContext *ret = new IfcGeometricRepresentationSubContext(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGeometricRepresentationSubContext_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGeometricRepresentationSubContext *ret = new IfcGeometricRepresentationSubContext(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGeometricRepresentationSubContext *IfcGeometricRepresentationSubContext_Factory::generate() {
  return static_cast< IfcGeometricRepresentationSubContext * > (create(m_model->getNewId()));
}

IfcGeometricRepresentationSubContext *IfcGeometricRepresentationSubContext_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGeometricRepresentationSubContext * > (it->second);
  }
  else {
    return NULL;
  }
}

