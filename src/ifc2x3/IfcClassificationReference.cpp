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
#include <ifc2x3/IfcClassificationReference.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcClassificationReference::IfcClassificationReference(Step::SPFData *args) : IfcExternalReference(args) {
  m_referencedSource = NULL;
}


IfcClassificationReference::~IfcClassificationReference() {
}

bool IfcClassificationReference::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassificationReference(this);
}

const char *IfcClassificationReference::type() {
  return "IfcClassificationReference";
}

Step::ClassType IfcClassificationReference::getClassType() {
  return IfcClassificationReference::s_type;
}

Step::ClassType IfcClassificationReference::getType() const {
  return IfcClassificationReference::s_type;
}

bool IfcClassificationReference::isOfType(Step::ClassType t) {
  return IfcClassificationReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

IfcClassification *IfcClassificationReference::getReferencedSource() {
  if (Step::BaseObject::inited()) {
    return m_referencedSource.get();
  }
  else {
    return NULL;
  }
}

void IfcClassificationReference::setReferencedSource(const Step::RefPtr< IfcClassification > &value) {
  m_referencedSource = value;
}

void IfcClassificationReference::release() {
  IfcExternalReference::release();
  m_referencedSource.release();
}

bool IfcClassificationReference::init() {
  bool status = IfcExternalReference::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_referencedSource = NULL;
  }
  else {
    m_referencedSource = static_cast< IfcClassification * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationReference::s_type = new Step::ClassType_class("IfcClassificationReference");
IfcClassificationReference_Factory::IfcClassificationReference_Factory() {
}

IfcClassificationReference_Factory::~IfcClassificationReference_Factory() {
  clear(true);
}

void IfcClassificationReference_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationReference_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationReference_Factory::end() {
  return m_idMap.end();
}

IfcClassificationReference *IfcClassificationReference_Factory::get(Step::StepId id) {
  IfcClassificationReference *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcClassificationReference * > (it->second);
  }
  else {
    LOG_ERROR("IfcClassificationReference_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcClassificationReference * > (create(id));
  }
}

Step::BaseObject *IfcClassificationReference_Factory::create(Step::StepId id) {
  IfcClassificationReference *ret = new IfcClassificationReference(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationReference_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcClassificationReference *ret = new IfcClassificationReference(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationReference_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcClassificationReference *ret = new IfcClassificationReference(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcClassificationReference *IfcClassificationReference_Factory::generate() {
  return static_cast< IfcClassificationReference * > (create(m_model->getNewId()));
}

IfcClassificationReference *IfcClassificationReference_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcClassificationReference * > (it->second);
  }
  else {
    return NULL;
  }
}

