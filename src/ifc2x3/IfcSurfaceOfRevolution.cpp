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
#include <ifc2x3/IfcSurfaceOfRevolution.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSurfaceOfRevolution::IfcSurfaceOfRevolution(Step::SPFData *args) : IfcSweptSurface(args) {
  m_axisPosition = NULL;
}


IfcSurfaceOfRevolution::~IfcSurfaceOfRevolution() {
}

bool IfcSurfaceOfRevolution::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSurfaceOfRevolution(this);
}

const char *IfcSurfaceOfRevolution::type() {
  return "IfcSurfaceOfRevolution";
}

Step::ClassType IfcSurfaceOfRevolution::getClassType() {
  return IfcSurfaceOfRevolution::s_type;
}

Step::ClassType IfcSurfaceOfRevolution::getType() const {
  return IfcSurfaceOfRevolution::s_type;
}

bool IfcSurfaceOfRevolution::isOfType(Step::ClassType t) {
  return IfcSurfaceOfRevolution::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() {
  if (Step::BaseObject::inited()) {
    return m_axisPosition.get();
  }
  else {
    return NULL;
  }
}

void IfcSurfaceOfRevolution::setAxisPosition(const Step::RefPtr< IfcAxis1Placement > &value) {
  m_axisPosition = value;
}

void IfcSurfaceOfRevolution::release() {
  IfcSweptSurface::release();
  m_axisPosition.release();
}

bool IfcSurfaceOfRevolution::init() {
  bool status = IfcSweptSurface::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axisPosition = NULL;
  }
  else {
    m_axisPosition = static_cast< IfcAxis1Placement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOfRevolution::s_type = new Step::ClassType_class("IfcSurfaceOfRevolution");
IfcSurfaceOfRevolution_Factory::IfcSurfaceOfRevolution_Factory() {
}

IfcSurfaceOfRevolution_Factory::~IfcSurfaceOfRevolution_Factory() {
  clear(true);
}

void IfcSurfaceOfRevolution_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceOfRevolution_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSurfaceOfRevolution_Factory::end() {
  return m_idMap.end();
}

IfcSurfaceOfRevolution *IfcSurfaceOfRevolution_Factory::get(Step::StepId id) {
  IfcSurfaceOfRevolution *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSurfaceOfRevolution * > (it->second);
  }
  else {
    LOG_ERROR("IfcSurfaceOfRevolution_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSurfaceOfRevolution * > (create(id));
  }
}

Step::BaseObject *IfcSurfaceOfRevolution_Factory::create(Step::StepId id) {
  IfcSurfaceOfRevolution *ret = new IfcSurfaceOfRevolution(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceOfRevolution_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSurfaceOfRevolution *ret = new IfcSurfaceOfRevolution(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSurfaceOfRevolution_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSurfaceOfRevolution *ret = new IfcSurfaceOfRevolution(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSurfaceOfRevolution *IfcSurfaceOfRevolution_Factory::generate() {
  return static_cast< IfcSurfaceOfRevolution * > (create(m_model->getNewId()));
}

IfcSurfaceOfRevolution *IfcSurfaceOfRevolution_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSurfaceOfRevolution * > (it->second);
  }
  else {
    return NULL;
  }
}

