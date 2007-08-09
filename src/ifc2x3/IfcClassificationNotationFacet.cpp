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
#include <ifc2x3/IfcClassificationNotationFacet.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcClassificationNotationFacet::IfcClassificationNotationFacet(Step::SPFData *args) : Step::BaseObject(args) {
  m_notationValue = getUnset(m_notationValue);
}


IfcClassificationNotationFacet::~IfcClassificationNotationFacet() {
}

bool IfcClassificationNotationFacet::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcClassificationNotationFacet(this);
}

const char *IfcClassificationNotationFacet::type() {
  return "IfcClassificationNotationFacet";
}

Step::ClassType IfcClassificationNotationFacet::getClassType() {
  return IfcClassificationNotationFacet::s_type;
}

Step::ClassType IfcClassificationNotationFacet::getType() const {
  return IfcClassificationNotationFacet::s_type;
}

bool IfcClassificationNotationFacet::isOfType(Step::ClassType t) {
  return IfcClassificationNotationFacet::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcClassificationNotationFacet::getNotationValue() {
  if (Step::BaseObject::inited()) {
    return m_notationValue;
  }
  else {
    return getUnset(m_notationValue);
  }
}

void IfcClassificationNotationFacet::setNotationValue(const IfcLabel &value) {
  m_notationValue = value;
}

void IfcClassificationNotationFacet::release() {
}

bool IfcClassificationNotationFacet::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_notationValue = getUnset(m_notationValue);
  }
  else {
    m_notationValue = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationNotationFacet::s_type = new Step::ClassType_class("IfcClassificationNotationFacet");
IfcClassificationNotationFacet_Factory::IfcClassificationNotationFacet_Factory() {
}

IfcClassificationNotationFacet_Factory::~IfcClassificationNotationFacet_Factory() {
  clear(true);
}

void IfcClassificationNotationFacet_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationNotationFacet_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcClassificationNotationFacet_Factory::end() {
  return m_idMap.end();
}

IfcClassificationNotationFacet *IfcClassificationNotationFacet_Factory::get(Step::StepId id) {
  IfcClassificationNotationFacet *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcClassificationNotationFacet * > (it->second);
  }
  else {
    LOG_ERROR("IfcClassificationNotationFacet_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcClassificationNotationFacet * > (create(id));
  }
}

Step::BaseObject *IfcClassificationNotationFacet_Factory::create(Step::StepId id) {
  IfcClassificationNotationFacet *ret = new IfcClassificationNotationFacet(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationNotationFacet_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcClassificationNotationFacet *ret = new IfcClassificationNotationFacet(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcClassificationNotationFacet_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcClassificationNotationFacet *ret = new IfcClassificationNotationFacet(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcClassificationNotationFacet *IfcClassificationNotationFacet_Factory::generate() {
  return static_cast< IfcClassificationNotationFacet * > (create(m_model->getNewId()));
}

IfcClassificationNotationFacet *IfcClassificationNotationFacet_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcClassificationNotationFacet * > (it->second);
  }
  else {
    return NULL;
  }
}

