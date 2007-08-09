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
#include <ifc2x3/IfcAxis2Placement2D.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAxis2Placement2D::IfcAxis2Placement2D(Step::SPFData *args) : IfcPlacement(args) {
  m_refDirection = NULL;
}


IfcAxis2Placement2D::~IfcAxis2Placement2D() {
}

bool IfcAxis2Placement2D::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAxis2Placement2D(this);
}

const char *IfcAxis2Placement2D::type() {
  return "IfcAxis2Placement2D";
}

Step::ClassType IfcAxis2Placement2D::getClassType() {
  return IfcAxis2Placement2D::s_type;
}

Step::ClassType IfcAxis2Placement2D::getType() const {
  return IfcAxis2Placement2D::s_type;
}

bool IfcAxis2Placement2D::isOfType(Step::ClassType t) {
  return IfcAxis2Placement2D::s_type == t ? true : IfcPlacement::isOfType(t);
}

IfcDirection *IfcAxis2Placement2D::getRefDirection() {
  if (Step::BaseObject::inited()) {
    return m_refDirection.get();
  }
  else {
    return NULL;
  }
}

void IfcAxis2Placement2D::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
  m_refDirection = value;
}

void IfcAxis2Placement2D::release() {
  IfcPlacement::release();
  m_refDirection.release();
}

bool IfcAxis2Placement2D::init() {
  bool status = IfcPlacement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_refDirection = NULL;
  }
  else {
    m_refDirection = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAxis2Placement2D::s_type = new Step::ClassType_class("IfcAxis2Placement2D");
IfcAxis2Placement2D_Factory::IfcAxis2Placement2D_Factory() {
}

IfcAxis2Placement2D_Factory::~IfcAxis2Placement2D_Factory() {
  clear(true);
}

void IfcAxis2Placement2D_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAxis2Placement2D_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAxis2Placement2D_Factory::end() {
  return m_idMap.end();
}

IfcAxis2Placement2D *IfcAxis2Placement2D_Factory::get(Step::StepId id) {
  IfcAxis2Placement2D *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAxis2Placement2D * > (it->second);
  }
  else {
    LOG_ERROR("IfcAxis2Placement2D_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAxis2Placement2D * > (create(id));
  }
}

Step::BaseObject *IfcAxis2Placement2D_Factory::create(Step::StepId id) {
  IfcAxis2Placement2D *ret = new IfcAxis2Placement2D(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAxis2Placement2D_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAxis2Placement2D *ret = new IfcAxis2Placement2D(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAxis2Placement2D_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAxis2Placement2D *ret = new IfcAxis2Placement2D(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAxis2Placement2D *IfcAxis2Placement2D_Factory::generate() {
  return static_cast< IfcAxis2Placement2D * > (create(m_model->getNewId()));
}

IfcAxis2Placement2D *IfcAxis2Placement2D_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAxis2Placement2D * > (it->second);
  }
  else {
    return NULL;
  }
}

