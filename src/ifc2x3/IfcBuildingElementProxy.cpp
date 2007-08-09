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
#include <ifc2x3/IfcBuildingElementProxy.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBuildingElementProxy::IfcBuildingElementProxy(Step::SPFData *args) : IfcBuildingElement(args) {
  m_compositionType = IfcElementCompositionEnum_UNSET;
}


IfcBuildingElementProxy::~IfcBuildingElementProxy() {
}

bool IfcBuildingElementProxy::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBuildingElementProxy(this);
}

const char *IfcBuildingElementProxy::type() {
  return "IfcBuildingElementProxy";
}

Step::ClassType IfcBuildingElementProxy::getClassType() {
  return IfcBuildingElementProxy::s_type;
}

Step::ClassType IfcBuildingElementProxy::getType() const {
  return IfcBuildingElementProxy::s_type;
}

bool IfcBuildingElementProxy::isOfType(Step::ClassType t) {
  return IfcBuildingElementProxy::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType() {
  if (Step::BaseObject::inited()) {
    return m_compositionType;
  }
  else {
    return IfcElementCompositionEnum_UNSET;
  }
}

void IfcBuildingElementProxy::setCompositionType(IfcElementCompositionEnum value) {
  m_compositionType = value;
}

void IfcBuildingElementProxy::release() {
  IfcBuildingElement::release();
}

bool IfcBuildingElementProxy::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_compositionType = IfcElementCompositionEnum_UNSET;
  }
  else {
    if (arg == ".COMPLEX.") {
      m_compositionType = IfcElementCompositionEnum_COMPLEX;
    }
    else if (arg == ".ELEMENT.") {
      m_compositionType = IfcElementCompositionEnum_ELEMENT;
    }
    else if (arg == ".PARTIAL.") {
      m_compositionType = IfcElementCompositionEnum_PARTIAL;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementProxy::s_type = new Step::ClassType_class("IfcBuildingElementProxy");
IfcBuildingElementProxy_Factory::IfcBuildingElementProxy_Factory() {
}

IfcBuildingElementProxy_Factory::~IfcBuildingElementProxy_Factory() {
  clear(true);
}

void IfcBuildingElementProxy_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuildingElementProxy_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuildingElementProxy_Factory::end() {
  return m_idMap.end();
}

IfcBuildingElementProxy *IfcBuildingElementProxy_Factory::get(Step::StepId id) {
  IfcBuildingElementProxy *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBuildingElementProxy * > (it->second);
  }
  else {
    LOG_ERROR("IfcBuildingElementProxy_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBuildingElementProxy * > (create(id));
  }
}

Step::BaseObject *IfcBuildingElementProxy_Factory::create(Step::StepId id) {
  IfcBuildingElementProxy *ret = new IfcBuildingElementProxy(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBuildingElementProxy_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBuildingElementProxy *ret = new IfcBuildingElementProxy(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBuildingElementProxy_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBuildingElementProxy *ret = new IfcBuildingElementProxy(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBuildingElementProxy *IfcBuildingElementProxy_Factory::generate() {
  return static_cast< IfcBuildingElementProxy * > (create(m_model->getNewId()));
}

IfcBuildingElementProxy *IfcBuildingElementProxy_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBuildingElementProxy * > (it->second);
  }
  else {
    return NULL;
  }
}

