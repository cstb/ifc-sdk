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
#include <ifc2x3/IfcRepresentationContext.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRepresentationContext::IfcRepresentationContext(Step::SPFData *args) : Step::BaseObject(args) {
  m_contextIdentifier = getUnset(m_contextIdentifier);
  m_contextType = getUnset(m_contextType);
  m_representationsInContext.setUnset(true);
}


IfcRepresentationContext::~IfcRepresentationContext() {
}

bool IfcRepresentationContext::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRepresentationContext(this);
}

const char *IfcRepresentationContext::type() {
  return "IfcRepresentationContext";
}

Step::ClassType IfcRepresentationContext::getClassType() {
  return IfcRepresentationContext::s_type;
}

Step::ClassType IfcRepresentationContext::getType() const {
  return IfcRepresentationContext::s_type;
}

bool IfcRepresentationContext::isOfType(Step::ClassType t) {
  return IfcRepresentationContext::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcRepresentationContext::getContextIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_contextIdentifier;
  }
  else {
    return getUnset(m_contextIdentifier);
  }
}

void IfcRepresentationContext::setContextIdentifier(const IfcLabel &value) {
  m_contextIdentifier = value;
}

IfcLabel IfcRepresentationContext::getContextType() {
  if (Step::BaseObject::inited()) {
    return m_contextType;
  }
  else {
    return getUnset(m_contextType);
  }
}

void IfcRepresentationContext::setContextType(const IfcLabel &value) {
  m_contextType = value;
}

Step::StepSet< Step::RefPtr< IfcRepresentation > > &IfcRepresentationContext::getRepresentationsInContext() {
  if (Step::BaseObject::inited()) {
    return m_representationsInContext;
  }
  else {
    m_representationsInContext.setUnset(true);
    return m_representationsInContext;
  }
}

void IfcRepresentationContext::setRepresentationsInContext(const Step::StepSet< Step::RefPtr< IfcRepresentation > > &value) {
  m_representationsInContext = value;
}

void IfcRepresentationContext::release() {
}

bool IfcRepresentationContext::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_contextIdentifier = getUnset(m_contextIdentifier);
  }
  else {
    m_contextIdentifier = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_contextType = getUnset(m_contextType);
  }
  else {
    m_contextType = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcRepresentation::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_representationsInContext.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_representationsInContext.insert(static_cast< IfcRepresentation * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationContext::s_type = new Step::ClassType_class("IfcRepresentationContext");
IfcRepresentationContext_Factory::IfcRepresentationContext_Factory() {
}

IfcRepresentationContext_Factory::~IfcRepresentationContext_Factory() {
  clear(true);
}

void IfcRepresentationContext_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRepresentationContext_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRepresentationContext_Factory::end() {
  return m_idMap.end();
}

IfcRepresentationContext *IfcRepresentationContext_Factory::get(Step::StepId id) {
  IfcRepresentationContext *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRepresentationContext * > (it->second);
  }
  else {
    LOG_ERROR("IfcRepresentationContext_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRepresentationContext * > (create(id));
  }
}

Step::BaseObject *IfcRepresentationContext_Factory::create(Step::StepId id) {
  IfcRepresentationContext *ret = new IfcRepresentationContext(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRepresentationContext_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRepresentationContext *ret = new IfcRepresentationContext(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRepresentationContext_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRepresentationContext *ret = new IfcRepresentationContext(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRepresentationContext *IfcRepresentationContext_Factory::generate() {
  return static_cast< IfcRepresentationContext * > (create(m_model->getNewId()));
}

IfcRepresentationContext *IfcRepresentationContext_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRepresentationContext * > (it->second);
  }
  else {
    return NULL;
  }
}

