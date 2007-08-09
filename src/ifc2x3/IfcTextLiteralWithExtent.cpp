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
#include <ifc2x3/IfcTextLiteralWithExtent.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPlanarExtent.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTextLiteralWithExtent::IfcTextLiteralWithExtent(Step::SPFData *args) : IfcTextLiteral(args) {
  m_extent = NULL;
  m_boxAlignment = getUnset(m_boxAlignment);
}


IfcTextLiteralWithExtent::~IfcTextLiteralWithExtent() {
}

bool IfcTextLiteralWithExtent::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextLiteralWithExtent(this);
}

const char *IfcTextLiteralWithExtent::type() {
  return "IfcTextLiteralWithExtent";
}

Step::ClassType IfcTextLiteralWithExtent::getClassType() {
  return IfcTextLiteralWithExtent::s_type;
}

Step::ClassType IfcTextLiteralWithExtent::getType() const {
  return IfcTextLiteralWithExtent::s_type;
}

bool IfcTextLiteralWithExtent::isOfType(Step::ClassType t) {
  return IfcTextLiteralWithExtent::s_type == t ? true : IfcTextLiteral::isOfType(t);
}

IfcPlanarExtent *IfcTextLiteralWithExtent::getExtent() {
  if (Step::BaseObject::inited()) {
    return m_extent.get();
  }
  else {
    return NULL;
  }
}

void IfcTextLiteralWithExtent::setExtent(const Step::RefPtr< IfcPlanarExtent > &value) {
  m_extent = value;
}

IfcBoxAlignment IfcTextLiteralWithExtent::getBoxAlignment() {
  if (Step::BaseObject::inited()) {
    return m_boxAlignment;
  }
  else {
    return getUnset(m_boxAlignment);
  }
}

void IfcTextLiteralWithExtent::setBoxAlignment(const IfcBoxAlignment &value) {
  m_boxAlignment = value;
}

void IfcTextLiteralWithExtent::release() {
  IfcTextLiteral::release();
  m_extent.release();
}

bool IfcTextLiteralWithExtent::init() {
  bool status = IfcTextLiteral::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_extent = NULL;
  }
  else {
    m_extent = static_cast< IfcPlanarExtent * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_boxAlignment = getUnset(m_boxAlignment);
  }
  else {
    m_boxAlignment = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextLiteralWithExtent::s_type = new Step::ClassType_class("IfcTextLiteralWithExtent");
IfcTextLiteralWithExtent_Factory::IfcTextLiteralWithExtent_Factory() {
}

IfcTextLiteralWithExtent_Factory::~IfcTextLiteralWithExtent_Factory() {
  clear(true);
}

void IfcTextLiteralWithExtent_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextLiteralWithExtent_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTextLiteralWithExtent_Factory::end() {
  return m_idMap.end();
}

IfcTextLiteralWithExtent *IfcTextLiteralWithExtent_Factory::get(Step::StepId id) {
  IfcTextLiteralWithExtent *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTextLiteralWithExtent * > (it->second);
  }
  else {
    LOG_ERROR("IfcTextLiteralWithExtent_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTextLiteralWithExtent * > (create(id));
  }
}

Step::BaseObject *IfcTextLiteralWithExtent_Factory::create(Step::StepId id) {
  IfcTextLiteralWithExtent *ret = new IfcTextLiteralWithExtent(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTextLiteralWithExtent_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTextLiteralWithExtent *ret = new IfcTextLiteralWithExtent(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTextLiteralWithExtent_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTextLiteralWithExtent *ret = new IfcTextLiteralWithExtent(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTextLiteralWithExtent *IfcTextLiteralWithExtent_Factory::generate() {
  return static_cast< IfcTextLiteralWithExtent * > (create(m_model->getNewId()));
}

IfcTextLiteralWithExtent *IfcTextLiteralWithExtent_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTextLiteralWithExtent * > (it->second);
  }
  else {
    return NULL;
  }
}

