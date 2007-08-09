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
#include <ifc2x3/IfcFaceSurface.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFaceSurface::IfcFaceSurface(Step::SPFData *args) : IfcFace(args) {
  m_faceSurface = NULL;
  m_sameSense = getUnset(m_sameSense);
}


IfcFaceSurface::~IfcFaceSurface() {
}

bool IfcFaceSurface::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFaceSurface(this);
}

const char *IfcFaceSurface::type() {
  return "IfcFaceSurface";
}

Step::ClassType IfcFaceSurface::getClassType() {
  return IfcFaceSurface::s_type;
}

Step::ClassType IfcFaceSurface::getType() const {
  return IfcFaceSurface::s_type;
}

bool IfcFaceSurface::isOfType(Step::ClassType t) {
  return IfcFaceSurface::s_type == t ? true : IfcFace::isOfType(t);
}

IfcSurface *IfcFaceSurface::getFaceSurface() {
  if (Step::BaseObject::inited()) {
    return m_faceSurface.get();
  }
  else {
    return NULL;
  }
}

void IfcFaceSurface::setFaceSurface(const Step::RefPtr< IfcSurface > &value) {
  m_faceSurface = value;
}

Bool IfcFaceSurface::getSameSense() {
  if (Step::BaseObject::inited()) {
    return m_sameSense;
  }
  else {
    return getUnset(m_sameSense);
  }
}

void IfcFaceSurface::setSameSense(Bool value) {
  m_sameSense = value;
}

void IfcFaceSurface::release() {
  IfcFace::release();
  m_faceSurface.release();
}

bool IfcFaceSurface::init() {
  bool status = IfcFace::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_faceSurface = NULL;
  }
  else {
    m_faceSurface = static_cast< IfcSurface * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sameSense = getUnset(m_sameSense);
  }
  else {
    m_sameSense = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceSurface::s_type = new Step::ClassType_class("IfcFaceSurface");
IfcFaceSurface_Factory::IfcFaceSurface_Factory() {
}

IfcFaceSurface_Factory::~IfcFaceSurface_Factory() {
  clear(true);
}

void IfcFaceSurface_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFaceSurface_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFaceSurface_Factory::end() {
  return m_idMap.end();
}

IfcFaceSurface *IfcFaceSurface_Factory::get(Step::StepId id) {
  IfcFaceSurface *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFaceSurface * > (it->second);
  }
  else {
    LOG_ERROR("IfcFaceSurface_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFaceSurface * > (create(id));
  }
}

Step::BaseObject *IfcFaceSurface_Factory::create(Step::StepId id) {
  IfcFaceSurface *ret = new IfcFaceSurface(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFaceSurface_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFaceSurface *ret = new IfcFaceSurface(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFaceSurface_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFaceSurface *ret = new IfcFaceSurface(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFaceSurface *IfcFaceSurface_Factory::generate() {
  return static_cast< IfcFaceSurface * > (create(m_model->getNewId()));
}

IfcFaceSurface *IfcFaceSurface_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFaceSurface * > (it->second);
  }
  else {
    return NULL;
  }
}

