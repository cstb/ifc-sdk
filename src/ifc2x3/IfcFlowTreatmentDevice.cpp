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
#include <ifc2x3/IfcFlowTreatmentDevice.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFlowTreatmentDevice::IfcFlowTreatmentDevice(Step::SPFData *args) : IfcDistributionFlowElement(args) {
}


IfcFlowTreatmentDevice::~IfcFlowTreatmentDevice() {
}

bool IfcFlowTreatmentDevice::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFlowTreatmentDevice(this);
}

const char *IfcFlowTreatmentDevice::type() {
  return "IfcFlowTreatmentDevice";
}

Step::ClassType IfcFlowTreatmentDevice::getClassType() {
  return IfcFlowTreatmentDevice::s_type;
}

Step::ClassType IfcFlowTreatmentDevice::getType() const {
  return IfcFlowTreatmentDevice::s_type;
}

bool IfcFlowTreatmentDevice::isOfType(Step::ClassType t) {
  return IfcFlowTreatmentDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcFlowTreatmentDevice::release() {
  IfcDistributionFlowElement::release();
}

bool IfcFlowTreatmentDevice::init() {
  bool status = IfcDistributionFlowElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowTreatmentDevice::s_type = new Step::ClassType_class("IfcFlowTreatmentDevice");
IfcFlowTreatmentDevice_Factory::IfcFlowTreatmentDevice_Factory() {
}

IfcFlowTreatmentDevice_Factory::~IfcFlowTreatmentDevice_Factory() {
  clear(true);
}

void IfcFlowTreatmentDevice_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFlowTreatmentDevice_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFlowTreatmentDevice_Factory::end() {
  return m_idMap.end();
}

IfcFlowTreatmentDevice *IfcFlowTreatmentDevice_Factory::get(Step::StepId id) {
  IfcFlowTreatmentDevice *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFlowTreatmentDevice * > (it->second);
  }
  else {
    LOG_ERROR("IfcFlowTreatmentDevice_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFlowTreatmentDevice * > (create(id));
  }
}

Step::BaseObject *IfcFlowTreatmentDevice_Factory::create(Step::StepId id) {
  IfcFlowTreatmentDevice *ret = new IfcFlowTreatmentDevice(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFlowTreatmentDevice_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFlowTreatmentDevice *ret = new IfcFlowTreatmentDevice(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFlowTreatmentDevice_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFlowTreatmentDevice *ret = new IfcFlowTreatmentDevice(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFlowTreatmentDevice *IfcFlowTreatmentDevice_Factory::generate() {
  return static_cast< IfcFlowTreatmentDevice * > (create(m_model->getNewId()));
}

IfcFlowTreatmentDevice *IfcFlowTreatmentDevice_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFlowTreatmentDevice * > (it->second);
  }
  else {
    return NULL;
  }
}

