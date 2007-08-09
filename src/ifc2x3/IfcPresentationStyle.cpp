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
#include <ifc2x3/IfcPresentationStyle.h>

#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcPresentationStyle::IfcPresentationStyle(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
}


IfcPresentationStyle::~IfcPresentationStyle() {
}

bool IfcPresentationStyle::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPresentationStyle(this);
}

const char *IfcPresentationStyle::type() {
  return "IfcPresentationStyle";
}

Step::ClassType IfcPresentationStyle::getClassType() {
  return IfcPresentationStyle::s_type;
}

Step::ClassType IfcPresentationStyle::getType() const {
  return IfcPresentationStyle::s_type;
}

bool IfcPresentationStyle::isOfType(Step::ClassType t) {
  return IfcPresentationStyle::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPresentationStyle::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcPresentationStyle::setName(const IfcLabel &value) {
  m_name = value;
}

void IfcPresentationStyle::release() {
}

bool IfcPresentationStyle::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationStyle::s_type = new Step::ClassType_class("IfcPresentationStyle");
