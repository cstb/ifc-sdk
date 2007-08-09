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
#include <ifc2x3/IfcSurfaceStyleShading.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceStyleShading::IfcSurfaceStyleShading(Step::SPFData *args) : Step::BaseObject(args) {
  m_surfaceColour = NULL;
}


IfcSurfaceStyleShading::~IfcSurfaceStyleShading() {
}

bool IfcSurfaceStyleShading::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceStyleShading(this);
}

const char *IfcSurfaceStyleShading::type() {
  return "IfcSurfaceStyleShading";
}

Step::ClassType IfcSurfaceStyleShading::getClassType() {
  return IfcSurfaceStyleShading::s_type;
}

Step::ClassType IfcSurfaceStyleShading::getType() const {
  return IfcSurfaceStyleShading::s_type;
}

bool IfcSurfaceStyleShading::isOfType(Step::ClassType t) {
  return IfcSurfaceStyleShading::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() {
  if (Step::BaseObject::inited()) {
    return m_surfaceColour.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceStyleShading::setSurfaceColour(const Step::RefPtr< IfcColourRgb > &value) {
  m_surfaceColour = value;
}

void IfcSurfaceStyleShading::release() {
  m_surfaceColour.release();
}

bool IfcSurfaceStyleShading::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_surfaceColour = NULL;
  }
  else {
    m_surfaceColour = static_cast< IfcColourRgb * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleShading::s_type = new Step::ClassType_class("IfcSurfaceStyleShading");
IfcSurfaceStyleShading_Factory::IfcSurfaceStyleShading_Factory() {
}

IfcSurfaceStyleShading_Factory::~IfcSurfaceStyleShading_Factory() {
  clear(true);
}

void IfcSurfaceStyleShading_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleShading_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceStyleShading_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceStyleShading *IfcSurfaceStyleShading_Factory::get(Step::StepId id) {
  IfcSurfaceStyleShading *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceStyleShading * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceStyleShading_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceStyleShading * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceStyleShading_Factory::create(Step::StepId id) {
  IfcSurfaceStyleShading *ret = new IfcSurfaceStyleShading(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleShading_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceStyleShading *ret = new IfcSurfaceStyleShading(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceStyleShading_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceStyleShading *ret = new IfcSurfaceStyleShading(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceStyleShading *IfcSurfaceStyleShading_Factory::generate() {
  return static_cast< IfcSurfaceStyleShading * > (create(m_model->getNewId()));
}

IfcSurfaceStyleShading *IfcSurfaceStyleShading_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceStyleShading * > (it->second);
  }
  else {
    return NULL;
  }
}

