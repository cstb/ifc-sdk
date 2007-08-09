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
#include <ifc2x3/IfcPolygonalBoundedHalfSpace.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace(Step::SPFData *args) : IfcHalfSpaceSolid(args) {
  m_position = NULL;
  m_polygonalBoundary = NULL;
}


IfcPolygonalBoundedHalfSpace::~IfcPolygonalBoundedHalfSpace() {
}

bool IfcPolygonalBoundedHalfSpace::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPolygonalBoundedHalfSpace(this);
}

const char *IfcPolygonalBoundedHalfSpace::type() {
  return "IfcPolygonalBoundedHalfSpace";
}

Step::ClassType IfcPolygonalBoundedHalfSpace::getClassType() {
  return IfcPolygonalBoundedHalfSpace::s_type;
}

Step::ClassType IfcPolygonalBoundedHalfSpace::getType() const {
  return IfcPolygonalBoundedHalfSpace::s_type;
}

bool IfcPolygonalBoundedHalfSpace::isOfType(Step::ClassType t) {
  return IfcPolygonalBoundedHalfSpace::s_type == t ? true : IfcHalfSpaceSolid::isOfType(t);
}

IfcAxis2Placement3D *IfcPolygonalBoundedHalfSpace::getPosition() {
  if (Step::BaseObject::inited()) {
    return m_position.get();
  }
  else {
    return NULL;
  }
}

void IfcPolygonalBoundedHalfSpace::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
  m_position = value;
}

IfcBoundedCurve *IfcPolygonalBoundedHalfSpace::getPolygonalBoundary() {
  if (Step::BaseObject::inited()) {
    return m_polygonalBoundary.get();
  }
  else {
    return NULL;
  }
}

void IfcPolygonalBoundedHalfSpace::setPolygonalBoundary(const Step::RefPtr< IfcBoundedCurve > &value) {
  m_polygonalBoundary = value;
}

void IfcPolygonalBoundedHalfSpace::release() {
  IfcHalfSpaceSolid::release();
  m_position.release();
  m_polygonalBoundary.release();
}

bool IfcPolygonalBoundedHalfSpace::init() {
  bool status = IfcHalfSpaceSolid::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_position = NULL;
  }
  else {
    m_position = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_polygonalBoundary = NULL;
  }
  else {
    m_polygonalBoundary = static_cast< IfcBoundedCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolygonalBoundedHalfSpace::s_type = new Step::ClassType_class("IfcPolygonalBoundedHalfSpace");
IfcPolygonalBoundedHalfSpace_Factory::IfcPolygonalBoundedHalfSpace_Factory() {
}

IfcPolygonalBoundedHalfSpace_Factory::~IfcPolygonalBoundedHalfSpace_Factory() {
  clear(true);
}

void IfcPolygonalBoundedHalfSpace_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPolygonalBoundedHalfSpace_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPolygonalBoundedHalfSpace_Factory::end() {
  return m_idMap.end();
}

IfcPolygonalBoundedHalfSpace *IfcPolygonalBoundedHalfSpace_Factory::get(Step::StepId id) {
  IfcPolygonalBoundedHalfSpace *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPolygonalBoundedHalfSpace * > (it->second);
  }
  else {
    LOG_ERROR("IfcPolygonalBoundedHalfSpace_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPolygonalBoundedHalfSpace * > (create(id));
  }
}

Step::BaseObject *IfcPolygonalBoundedHalfSpace_Factory::create(Step::StepId id) {
  IfcPolygonalBoundedHalfSpace *ret = new IfcPolygonalBoundedHalfSpace(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPolygonalBoundedHalfSpace_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPolygonalBoundedHalfSpace *ret = new IfcPolygonalBoundedHalfSpace(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPolygonalBoundedHalfSpace_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPolygonalBoundedHalfSpace *ret = new IfcPolygonalBoundedHalfSpace(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPolygonalBoundedHalfSpace *IfcPolygonalBoundedHalfSpace_Factory::generate() {
  return static_cast< IfcPolygonalBoundedHalfSpace * > (create(m_model->getNewId()));
}

IfcPolygonalBoundedHalfSpace *IfcPolygonalBoundedHalfSpace_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPolygonalBoundedHalfSpace * > (it->second);
  }
  else {
    return NULL;
  }
}

