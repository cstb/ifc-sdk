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
#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion(Step::SPFData *args) : IfcSweptSurface(args) {
  m_extrudedDirection = NULL;
  m_depth = getUnset(m_depth);
}


IfcSurfaceOfLinearExtrusion::~IfcSurfaceOfLinearExtrusion() {
}

bool IfcSurfaceOfLinearExtrusion::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceOfLinearExtrusion(this);
}

const char *IfcSurfaceOfLinearExtrusion::type() {
  return "IfcSurfaceOfLinearExtrusion";
}

Step::ClassType IfcSurfaceOfLinearExtrusion::getClassType() {
  return IfcSurfaceOfLinearExtrusion::s_type;
}

Step::ClassType IfcSurfaceOfLinearExtrusion::getType() const {
  return IfcSurfaceOfLinearExtrusion::s_type;
}

bool IfcSurfaceOfLinearExtrusion::isOfType(Step::ClassType t) {
  return IfcSurfaceOfLinearExtrusion::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcDirection *IfcSurfaceOfLinearExtrusion::getExtrudedDirection() {
  if (Step::BaseObject::inited()) {
    return m_extrudedDirection.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceOfLinearExtrusion::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value) {
  m_extrudedDirection = value;
}

IfcLengthMeasure IfcSurfaceOfLinearExtrusion::getDepth() {
  if (Step::BaseObject::inited()) {
    return m_depth;
  }
  else {
    return getUnset(m_depth);
  }
}

void IfcSurfaceOfLinearExtrusion::setDepth(IfcLengthMeasure value) {
  m_depth = value;
}

void IfcSurfaceOfLinearExtrusion::release() {
  IfcSweptSurface::release();
  m_extrudedDirection.release();
}

bool IfcSurfaceOfLinearExtrusion::init() {
  bool status = IfcSweptSurface::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_extrudedDirection = NULL;
  }
  else {
    m_extrudedDirection = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_depth = getUnset(m_depth);
  }
  else {
    m_depth = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOfLinearExtrusion::s_type = new Step::ClassType_class("IfcSurfaceOfLinearExtrusion");
IfcSurfaceOfLinearExtrusion_Factory::IfcSurfaceOfLinearExtrusion_Factory() {
}

IfcSurfaceOfLinearExtrusion_Factory::~IfcSurfaceOfLinearExtrusion_Factory() {
  clear(true);
}

void IfcSurfaceOfLinearExtrusion_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceOfLinearExtrusion_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceOfLinearExtrusion_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceOfLinearExtrusion *IfcSurfaceOfLinearExtrusion_Factory::get(Step::StepId id) {
  IfcSurfaceOfLinearExtrusion *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceOfLinearExtrusion * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceOfLinearExtrusion_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceOfLinearExtrusion * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceOfLinearExtrusion_Factory::create(Step::StepId id) {
  IfcSurfaceOfLinearExtrusion *ret = new IfcSurfaceOfLinearExtrusion(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceOfLinearExtrusion_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceOfLinearExtrusion *ret = new IfcSurfaceOfLinearExtrusion(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceOfLinearExtrusion_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceOfLinearExtrusion *ret = new IfcSurfaceOfLinearExtrusion(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceOfLinearExtrusion *IfcSurfaceOfLinearExtrusion_Factory::generate() {
  return static_cast< IfcSurfaceOfLinearExtrusion * > (create(m_model->getNewId()));
}

IfcSurfaceOfLinearExtrusion *IfcSurfaceOfLinearExtrusion_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceOfLinearExtrusion * > (it->second);
  }
  else {
    return NULL;
  }
}

