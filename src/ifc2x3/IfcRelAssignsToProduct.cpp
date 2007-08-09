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
#include <ifc2x3/IfcRelAssignsToProduct.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToProduct::IfcRelAssignsToProduct(Step::SPFData *args) : IfcRelAssigns(args) {
  m_relatingProduct = NULL;
}


IfcRelAssignsToProduct::~IfcRelAssignsToProduct() {
}

bool IfcRelAssignsToProduct::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToProduct(this);
}

const char *IfcRelAssignsToProduct::type() {
  return "IfcRelAssignsToProduct";
}

Step::ClassType IfcRelAssignsToProduct::getClassType() {
  return IfcRelAssignsToProduct::s_type;
}

Step::ClassType IfcRelAssignsToProduct::getType() const {
  return IfcRelAssignsToProduct::s_type;
}

bool IfcRelAssignsToProduct::isOfType(Step::ClassType t) {
  return IfcRelAssignsToProduct::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcProduct *IfcRelAssignsToProduct::getRelatingProduct() {
  if (Step::BaseObject::inited()) {
    return m_relatingProduct.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToProduct::setRelatingProduct(const Step::RefPtr< IfcProduct > &value) {
  m_relatingProduct = value;
}

void IfcRelAssignsToProduct::release() {
  IfcRelAssigns::release();
  m_relatingProduct.release();
}

bool IfcRelAssignsToProduct::init() {
  bool status = IfcRelAssigns::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingProduct = NULL;
  }
  else {
    m_relatingProduct = static_cast< IfcProduct * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProduct::s_type = new Step::ClassType_class("IfcRelAssignsToProduct");
IfcRelAssignsToProduct_Factory::IfcRelAssignsToProduct_Factory() {
}

IfcRelAssignsToProduct_Factory::~IfcRelAssignsToProduct_Factory() {
  clear(true);
}

void IfcRelAssignsToProduct_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToProduct_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToProduct_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToProduct *IfcRelAssignsToProduct_Factory::get(Step::StepId id) {
  IfcRelAssignsToProduct *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToProduct * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToProduct_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToProduct * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToProduct_Factory::create(Step::StepId id) {
  IfcRelAssignsToProduct *ret = new IfcRelAssignsToProduct(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToProduct_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToProduct *ret = new IfcRelAssignsToProduct(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToProduct_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToProduct *ret = new IfcRelAssignsToProduct(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToProduct *IfcRelAssignsToProduct_Factory::generate() {
  return static_cast< IfcRelAssignsToProduct * > (create(m_model->getNewId()));
}

IfcRelAssignsToProduct *IfcRelAssignsToProduct_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToProduct * > (it->second);
  }
  else {
    return NULL;
  }
}

