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
#include <ifc2x3/IfcSurfaceStyleRefraction.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceStyleRefraction::IfcSurfaceStyleRefraction(Step::SPFData *args) : Step::BaseObject(args) {
  m_refractionIndex = getUnset(m_refractionIndex);
  m_dispersionFactor = getUnset(m_dispersionFactor);
}


IfcSurfaceStyleRefraction::~IfcSurfaceStyleRefraction() {
}

bool IfcSurfaceStyleRefraction::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyleRefraction(this);
}

const char *IfcSurfaceStyleRefraction::type() {
  return "IfcSurfaceStyleRefraction";
}

Step::ClassType IfcSurfaceStyleRefraction::getClassType() {
  return IfcSurfaceStyleRefraction::s_type;
}

Step::ClassType IfcSurfaceStyleRefraction::getType() const {
  return IfcSurfaceStyleRefraction::s_type;
}

bool IfcSurfaceStyleRefraction::isOfType(Step::ClassType t) {
  return IfcSurfaceStyleRefraction::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcReal IfcSurfaceStyleRefraction::getRefractionIndex() {
  if (Step::BaseObject::inited()) {
    return m_refractionIndex;
  }
  else {
    return getUnset(m_refractionIndex);
  }
}

void IfcSurfaceStyleRefraction::setRefractionIndex(IfcReal value) {
  m_refractionIndex = value;
}

IfcReal IfcSurfaceStyleRefraction::getDispersionFactor() {
  if (Step::BaseObject::inited()) {
    return m_dispersionFactor;
  }
  else {
    return getUnset(m_dispersionFactor);
  }
}

void IfcSurfaceStyleRefraction::setDispersionFactor(IfcReal value) {
  m_dispersionFactor = value;
}

void IfcSurfaceStyleRefraction::release() {
}

bool IfcSurfaceStyleRefraction::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_refractionIndex = getUnset(m_refractionIndex);
  }
  else {
    m_refractionIndex = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dispersionFactor = getUnset(m_dispersionFactor);
  }
  else {
    m_dispersionFactor = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleRefraction::s_type = new Step::ClassType_class("IfcSurfaceStyleRefraction");
IfcSurfaceStyleRefraction_Factory::IfcSurfaceStyleRefraction_Factory() {
}

IfcSurfaceStyleRefraction_Factory::~IfcSurfaceStyleRefraction_Factory() {
  clear(true);
}

void IfcSurfaceStyleRefraction_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleRefraction_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleRefraction_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceStyleRefraction *IfcSurfaceStyleRefraction_Factory::get(Step::StepId id) {
  IfcSurfaceStyleRefraction *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceStyleRefraction * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceStyleRefraction_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceStyleRefraction * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceStyleRefraction_Factory::create(Step::StepId id) {
  IfcSurfaceStyleRefraction *ret = new IfcSurfaceStyleRefraction(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleRefraction_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceStyleRefraction *ret = new IfcSurfaceStyleRefraction(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleRefraction_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceStyleRefraction *ret = new IfcSurfaceStyleRefraction(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceStyleRefraction *IfcSurfaceStyleRefraction_Factory::generate() {
  return static_cast< IfcSurfaceStyleRefraction * > (create(m_model->getNewId()));
}

IfcSurfaceStyleRefraction *IfcSurfaceStyleRefraction_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceStyleRefraction * > (it->second);
  }
  else {
    return NULL;
  }
}

