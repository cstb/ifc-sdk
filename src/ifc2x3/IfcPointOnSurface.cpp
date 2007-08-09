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
#include <ifc2x3/IfcPointOnSurface.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPointOnSurface::IfcPointOnSurface(Step::SPFData *args) : IfcPoint(args) {
  m_basisSurface = NULL;
  m_pointParameterU = getUnset(m_pointParameterU);
  m_pointParameterV = getUnset(m_pointParameterV);
}


IfcPointOnSurface::~IfcPointOnSurface() {
}

bool IfcPointOnSurface::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPointOnSurface(this);
}

const char *IfcPointOnSurface::type() {
  return "IfcPointOnSurface";
}

Step::ClassType IfcPointOnSurface::getClassType() {
  return IfcPointOnSurface::s_type;
}

Step::ClassType IfcPointOnSurface::getType() const {
  return IfcPointOnSurface::s_type;
}

bool IfcPointOnSurface::isOfType(Step::ClassType t) {
  return IfcPointOnSurface::s_type == t ? true : IfcPoint::isOfType(t);
}

IfcSurface *IfcPointOnSurface::getBasisSurface() {
  if (Step::BaseObject::inited()) {
    return m_basisSurface.get();
  }
  else {
    return NULL;
  }
}

void IfcPointOnSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
  m_basisSurface = value;
}

IfcParameterValue IfcPointOnSurface::getPointParameterU() {
  if (Step::BaseObject::inited()) {
    return m_pointParameterU;
  }
  else {
    return getUnset(m_pointParameterU);
  }
}

void IfcPointOnSurface::setPointParameterU(IfcParameterValue value) {
  m_pointParameterU = value;
}

IfcParameterValue IfcPointOnSurface::getPointParameterV() {
  if (Step::BaseObject::inited()) {
    return m_pointParameterV;
  }
  else {
    return getUnset(m_pointParameterV);
  }
}

void IfcPointOnSurface::setPointParameterV(IfcParameterValue value) {
  m_pointParameterV = value;
}

void IfcPointOnSurface::release() {
  IfcPoint::release();
  m_basisSurface.release();
}

bool IfcPointOnSurface::init() {
  bool status = IfcPoint::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_basisSurface = NULL;
  }
  else {
    m_basisSurface = static_cast< IfcSurface * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pointParameterU = getUnset(m_pointParameterU);
  }
  else {
    m_pointParameterU = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_pointParameterV = getUnset(m_pointParameterV);
  }
  else {
    m_pointParameterV = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOnSurface::s_type = new Step::ClassType_class("IfcPointOnSurface");
IfcPointOnSurface_Factory::IfcPointOnSurface_Factory() {
}

IfcPointOnSurface_Factory::~IfcPointOnSurface_Factory() {
  clear(true);
}

void IfcPointOnSurface_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPointOnSurface_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPointOnSurface_Factory::end() {
  return m_idMap.end();
}

IfcPointOnSurface *IfcPointOnSurface_Factory::get(Step::StepId id) {
  IfcPointOnSurface *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPointOnSurface * > (it->second);
  }
  else {
    LOG_ERROR("IfcPointOnSurface_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPointOnSurface * > (create(id));
  }
}

Step::BaseObject *IfcPointOnSurface_Factory::create(Step::StepId id) {
  IfcPointOnSurface *ret = new IfcPointOnSurface(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPointOnSurface_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPointOnSurface *ret = new IfcPointOnSurface(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPointOnSurface_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPointOnSurface *ret = new IfcPointOnSurface(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPointOnSurface *IfcPointOnSurface_Factory::generate() {
  return static_cast< IfcPointOnSurface * > (create(m_model->getNewId()));
}

IfcPointOnSurface *IfcPointOnSurface_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPointOnSurface * > (it->second);
  }
  else {
    return NULL;
  }
}

