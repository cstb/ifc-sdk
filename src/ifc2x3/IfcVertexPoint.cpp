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
#include <ifc2x3/IfcVertexPoint.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcVertexPoint::IfcVertexPoint(Step::SPFData *args) : IfcVertex(args) {
  m_vertexGeometry = NULL;
}


IfcVertexPoint::~IfcVertexPoint() {
}

bool IfcVertexPoint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcVertexPoint(this);
}

const char *IfcVertexPoint::type() {
  return "IfcVertexPoint";
}

Step::ClassType IfcVertexPoint::getClassType() {
  return IfcVertexPoint::s_type;
}

Step::ClassType IfcVertexPoint::getType() const {
  return IfcVertexPoint::s_type;
}

bool IfcVertexPoint::isOfType(Step::ClassType t) {
  return IfcVertexPoint::s_type == t ? true : IfcVertex::isOfType(t);
}

IfcPoint *IfcVertexPoint::getVertexGeometry() {
  if (Step::BaseObject::inited()) {
    return m_vertexGeometry.get();
  }
  else {
    return NULL;
  }
}

void IfcVertexPoint::setVertexGeometry(const Step::RefPtr< IfcPoint > &value) {
  m_vertexGeometry = value;
}

void IfcVertexPoint::release() {
  IfcVertex::release();
  m_vertexGeometry.release();
}

bool IfcVertexPoint::init() {
  bool status = IfcVertex::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_vertexGeometry = NULL;
  }
  else {
    m_vertexGeometry = static_cast< IfcPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexPoint::s_type = new Step::ClassType_class("IfcVertexPoint");
IfcVertexPoint_Factory::IfcVertexPoint_Factory() {
}

IfcVertexPoint_Factory::~IfcVertexPoint_Factory() {
  clear(true);
}

void IfcVertexPoint_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVertexPoint_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVertexPoint_Factory::end() {
  return m_idMap.end();
}

IfcVertexPoint *IfcVertexPoint_Factory::get(Step::StepId id) {
  IfcVertexPoint *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcVertexPoint * > (it->second);
  }
  else {
    LOG_ERROR("IfcVertexPoint_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcVertexPoint * > (create(id));
  }
}

Step::BaseObject *IfcVertexPoint_Factory::create(Step::StepId id) {
  IfcVertexPoint *ret = new IfcVertexPoint(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcVertexPoint_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcVertexPoint *ret = new IfcVertexPoint(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcVertexPoint_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcVertexPoint *ret = new IfcVertexPoint(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcVertexPoint *IfcVertexPoint_Factory::generate() {
  return static_cast< IfcVertexPoint * > (create(m_model->getNewId()));
}

IfcVertexPoint *IfcVertexPoint_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcVertexPoint * > (it->second);
  }
  else {
    return NULL;
  }
}

