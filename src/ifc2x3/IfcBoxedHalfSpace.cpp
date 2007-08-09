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
#include <ifc2x3/IfcBoxedHalfSpace.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBoundingBox.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoxedHalfSpace::IfcBoxedHalfSpace(Step::SPFData *args) : IfcHalfSpaceSolid(args) {
  m_enclosure = NULL;
}


IfcBoxedHalfSpace::~IfcBoxedHalfSpace() {
}

bool IfcBoxedHalfSpace::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoxedHalfSpace(this);
}

const char *IfcBoxedHalfSpace::type() {
  return "IfcBoxedHalfSpace";
}

Step::ClassType IfcBoxedHalfSpace::getClassType() {
  return IfcBoxedHalfSpace::s_type;
}

Step::ClassType IfcBoxedHalfSpace::getType() const {
  return IfcBoxedHalfSpace::s_type;
}

bool IfcBoxedHalfSpace::isOfType(Step::ClassType t) {
  return IfcBoxedHalfSpace::s_type == t ? true : IfcHalfSpaceSolid::isOfType(t);
}

IfcBoundingBox *IfcBoxedHalfSpace::getEnclosure() {
  if (Step::BaseObject::inited()) {
    return m_enclosure.get();
  }
  else {
    return NULL;
  }
}

void IfcBoxedHalfSpace::setEnclosure(const Step::RefPtr< IfcBoundingBox > &value) {
  m_enclosure = value;
}

void IfcBoxedHalfSpace::release() {
  IfcHalfSpaceSolid::release();
  m_enclosure.release();
}

bool IfcBoxedHalfSpace::init() {
  bool status = IfcHalfSpaceSolid::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_enclosure = NULL;
  }
  else {
    m_enclosure = static_cast< IfcBoundingBox * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoxedHalfSpace::s_type = new Step::ClassType_class("IfcBoxedHalfSpace");
IfcBoxedHalfSpace_Factory::IfcBoxedHalfSpace_Factory() {
}

IfcBoxedHalfSpace_Factory::~IfcBoxedHalfSpace_Factory() {
  clear(true);
}

void IfcBoxedHalfSpace_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoxedHalfSpace_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoxedHalfSpace_Factory::end() {
  return m_idMap.end();
}

IfcBoxedHalfSpace *IfcBoxedHalfSpace_Factory::get(Step::StepId id) {
  IfcBoxedHalfSpace *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoxedHalfSpace * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoxedHalfSpace_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoxedHalfSpace * > (create(id));
  }
}

Step::BaseObject *IfcBoxedHalfSpace_Factory::create(Step::StepId id) {
  IfcBoxedHalfSpace *ret = new IfcBoxedHalfSpace(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoxedHalfSpace_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoxedHalfSpace *ret = new IfcBoxedHalfSpace(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoxedHalfSpace_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoxedHalfSpace *ret = new IfcBoxedHalfSpace(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoxedHalfSpace *IfcBoxedHalfSpace_Factory::generate() {
  return static_cast< IfcBoxedHalfSpace * > (create(m_model->getNewId()));
}

IfcBoxedHalfSpace *IfcBoxedHalfSpace_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoxedHalfSpace * > (it->second);
  }
  else {
    return NULL;
  }
}

