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
#include <ifc2x3/IfcDistributionPort.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDistributionPort::IfcDistributionPort(Step::SPFData *args) : IfcPort(args) {
  m_flowDirection = IfcFlowDirectionEnum_UNSET;
}


IfcDistributionPort::~IfcDistributionPort() {
}

bool IfcDistributionPort::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDistributionPort(this);
}

const char *IfcDistributionPort::type() {
  return "IfcDistributionPort";
}

Step::ClassType IfcDistributionPort::getClassType() {
  return IfcDistributionPort::s_type;
}

Step::ClassType IfcDistributionPort::getType() const {
  return IfcDistributionPort::s_type;
}

bool IfcDistributionPort::isOfType(Step::ClassType t) {
  return IfcDistributionPort::s_type == t ? true : IfcPort::isOfType(t);
}

IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection() {
  if (Step::BaseObject::inited()) {
    return m_flowDirection;
  }
  else {
    return IfcFlowDirectionEnum_UNSET;
  }
}

void IfcDistributionPort::setFlowDirection(IfcFlowDirectionEnum value) {
  m_flowDirection = value;
}

void IfcDistributionPort::release() {
  IfcPort::release();
}

bool IfcDistributionPort::init() {
  bool status = IfcPort::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_flowDirection = IfcFlowDirectionEnum_UNSET;
  }
  else {
    if (arg == ".SOURCE.") {
      m_flowDirection = IfcFlowDirectionEnum_SOURCE;
    }
    else if (arg == ".SINK.") {
      m_flowDirection = IfcFlowDirectionEnum_SINK;
    }
    else if (arg == ".SOURCEANDSINK.") {
      m_flowDirection = IfcFlowDirectionEnum_SOURCEANDSINK;
    }
    else if (arg == ".NOTDEFINED.") {
      m_flowDirection = IfcFlowDirectionEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionPort::s_type = new Step::ClassType_class("IfcDistributionPort");
IfcDistributionPort_Factory::IfcDistributionPort_Factory() {
}

IfcDistributionPort_Factory::~IfcDistributionPort_Factory() {
  clear(true);
}

void IfcDistributionPort_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionPort_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionPort_Factory::end() {
  return m_idMap.end();
}

IfcDistributionPort *IfcDistributionPort_Factory::get(Step::StepId id) {
  IfcDistributionPort *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDistributionPort * > (it->second);
  }
  else {
    LOG_ERROR("IfcDistributionPort_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDistributionPort * > (create(id));
  }
}

Step::BaseObject *IfcDistributionPort_Factory::create(Step::StepId id) {
  IfcDistributionPort *ret = new IfcDistributionPort(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionPort_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDistributionPort *ret = new IfcDistributionPort(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionPort_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDistributionPort *ret = new IfcDistributionPort(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDistributionPort *IfcDistributionPort_Factory::generate() {
  return static_cast< IfcDistributionPort * > (create(m_model->getNewId()));
}

IfcDistributionPort *IfcDistributionPort_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDistributionPort * > (it->second);
  }
  else {
    return NULL;
  }
}

