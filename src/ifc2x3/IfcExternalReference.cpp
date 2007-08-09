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
#include <ifc2x3/IfcExternalReference.h>

#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcExternalReference::IfcExternalReference(Step::SPFData *args) : Step::BaseObject(args) {
  m_location = getUnset(m_location);
  m_itemReference = getUnset(m_itemReference);
  m_name = getUnset(m_name);
}


IfcExternalReference::~IfcExternalReference() {
}

bool IfcExternalReference::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcExternalReference(this);
}

const char *IfcExternalReference::type() {
  return "IfcExternalReference";
}

Step::ClassType IfcExternalReference::getClassType() {
  return IfcExternalReference::s_type;
}

Step::ClassType IfcExternalReference::getType() const {
  return IfcExternalReference::s_type;
}

bool IfcExternalReference::isOfType(Step::ClassType t) {
  return IfcExternalReference::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcExternalReference::getLocation() {
  if (Step::BaseObject::inited()) {
    return m_location;
  }
  else {
    return getUnset(m_location);
  }
}

void IfcExternalReference::setLocation(const IfcLabel &value) {
  m_location = value;
}

IfcIdentifier IfcExternalReference::getItemReference() {
  if (Step::BaseObject::inited()) {
    return m_itemReference;
  }
  else {
    return getUnset(m_itemReference);
  }
}

void IfcExternalReference::setItemReference(const IfcIdentifier &value) {
  m_itemReference = value;
}

IfcLabel IfcExternalReference::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcExternalReference::setName(const IfcLabel &value) {
  m_name = value;
}

void IfcExternalReference::release() {
}

bool IfcExternalReference::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_location = getUnset(m_location);
  }
  else {
    m_location = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_itemReference = getUnset(m_itemReference);
  }
  else {
    m_itemReference = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternalReference::s_type = new Step::ClassType_class("IfcExternalReference");
