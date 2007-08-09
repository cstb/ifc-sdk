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
#include <ifc2x3/IfcRoot.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOwnerHistory.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRoot::IfcRoot(Step::SPFData *args) : Step::BaseObject(args) {
  m_globalId = getUnset(m_globalId);
  m_ownerHistory = NULL;
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
}


IfcRoot::~IfcRoot() {
}

bool IfcRoot::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRoot(this);
}

const char *IfcRoot::type() {
  return "IfcRoot";
}

Step::ClassType IfcRoot::getClassType() {
  return IfcRoot::s_type;
}

Step::ClassType IfcRoot::getType() const {
  return IfcRoot::s_type;
}

bool IfcRoot::isOfType(Step::ClassType t) {
  return IfcRoot::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcGloballyUniqueId IfcRoot::getGlobalId() {
  if (Step::BaseObject::inited()) {
    return m_globalId;
  }
  else {
    return getUnset(m_globalId);
  }
}

void IfcRoot::setGlobalId(const IfcGloballyUniqueId &value) {
  m_globalId = value;
}

IfcOwnerHistory *IfcRoot::getOwnerHistory() {
  if (Step::BaseObject::inited()) {
    return m_ownerHistory.get();
  }
  else {
    return NULL;
  }
}

void IfcRoot::setOwnerHistory(const Step::RefPtr< IfcOwnerHistory > &value) {
  m_ownerHistory = value;
}

IfcLabel IfcRoot::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcRoot::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcRoot::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcRoot::setDescription(const IfcText &value) {
  m_description = value;
}

void IfcRoot::release() {
  m_ownerHistory.release();
}

bool IfcRoot::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_globalId = getUnset(m_globalId);
  }
  else {
    m_globalId = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_ownerHistory = NULL;
  }
  else {
    m_ownerHistory = static_cast< IfcOwnerHistory * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoot::s_type = new Step::ClassType_class("IfcRoot");
