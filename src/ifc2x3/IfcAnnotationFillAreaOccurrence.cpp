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
#include <ifc2x3/IfcAnnotationFillAreaOccurrence.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAnnotationFillAreaOccurrence::IfcAnnotationFillAreaOccurrence(Step::SPFData *args) : IfcAnnotationOccurrence(args) {
  m_fillStyleTarget = NULL;
  m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}


IfcAnnotationFillAreaOccurrence::~IfcAnnotationFillAreaOccurrence() {
}

bool IfcAnnotationFillAreaOccurrence::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAnnotationFillAreaOccurrence(this);
}

const char *IfcAnnotationFillAreaOccurrence::type() {
  return "IfcAnnotationFillAreaOccurrence";
}

Step::ClassType IfcAnnotationFillAreaOccurrence::getClassType() {
  return IfcAnnotationFillAreaOccurrence::s_type;
}

Step::ClassType IfcAnnotationFillAreaOccurrence::getType() const {
  return IfcAnnotationFillAreaOccurrence::s_type;
}

bool IfcAnnotationFillAreaOccurrence::isOfType(Step::ClassType t) {
  return IfcAnnotationFillAreaOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

IfcPoint *IfcAnnotationFillAreaOccurrence::getFillStyleTarget() {
  if (Step::BaseObject::inited()) {
    return m_fillStyleTarget.get();
  }
  else {
    return NULL;
  }
}

void IfcAnnotationFillAreaOccurrence::setFillStyleTarget(const Step::RefPtr< IfcPoint > &value) {
  m_fillStyleTarget = value;
}

IfcGlobalOrLocalEnum IfcAnnotationFillAreaOccurrence::getGlobalOrLocal() {
  if (Step::BaseObject::inited()) {
    return m_globalOrLocal;
  }
  else {
    return IfcGlobalOrLocalEnum_UNSET;
  }
}

void IfcAnnotationFillAreaOccurrence::setGlobalOrLocal(IfcGlobalOrLocalEnum value) {
  m_globalOrLocal = value;
}

void IfcAnnotationFillAreaOccurrence::release() {
  IfcAnnotationOccurrence::release();
  m_fillStyleTarget.release();
}

bool IfcAnnotationFillAreaOccurrence::init() {
  bool status = IfcAnnotationOccurrence::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fillStyleTarget = NULL;
  }
  else {
    m_fillStyleTarget = static_cast< IfcPoint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
  }
  else {
    if (arg == ".GLOBAL_COORDS.") {
      m_globalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
    }
    else if (arg == ".LOCAL_COORDS.") {
      m_globalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationFillAreaOccurrence::s_type = new Step::ClassType_class("IfcAnnotationFillAreaOccurrence");
IfcAnnotationFillAreaOccurrence_Factory::IfcAnnotationFillAreaOccurrence_Factory() {
}

IfcAnnotationFillAreaOccurrence_Factory::~IfcAnnotationFillAreaOccurrence_Factory() {
  clear(true);
}

void IfcAnnotationFillAreaOccurrence_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationFillAreaOccurrence_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationFillAreaOccurrence_Factory::end() {
  return m_idMap.end();
}

IfcAnnotationFillAreaOccurrence *IfcAnnotationFillAreaOccurrence_Factory::get(Step::StepId id) {
  IfcAnnotationFillAreaOccurrence *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAnnotationFillAreaOccurrence * > (it->second);
  }
  else {
    LOG_ERROR("IfcAnnotationFillAreaOccurrence_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAnnotationFillAreaOccurrence * > (create(id));
  }
}

Step::BaseObject *IfcAnnotationFillAreaOccurrence_Factory::create(Step::StepId id) {
  IfcAnnotationFillAreaOccurrence *ret = new IfcAnnotationFillAreaOccurrence(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationFillAreaOccurrence_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAnnotationFillAreaOccurrence *ret = new IfcAnnotationFillAreaOccurrence(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationFillAreaOccurrence_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAnnotationFillAreaOccurrence *ret = new IfcAnnotationFillAreaOccurrence(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAnnotationFillAreaOccurrence *IfcAnnotationFillAreaOccurrence_Factory::generate() {
  return static_cast< IfcAnnotationFillAreaOccurrence * > (create(m_model->getNewId()));
}

IfcAnnotationFillAreaOccurrence *IfcAnnotationFillAreaOccurrence_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAnnotationFillAreaOccurrence * > (it->second);
  }
  else {
    return NULL;
  }
}

