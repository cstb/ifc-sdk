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
#include <ifc2x3/IfcElementType.h>

#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcTypeProduct.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcElementType::IfcElementType(Step::SPFData *args) : IfcTypeProduct(args) {
  m_elementType = getUnset(m_elementType);
}


IfcElementType::~IfcElementType() {
}

bool IfcElementType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElementType(this);
}

const char *IfcElementType::type() {
  return "IfcElementType";
}

Step::ClassType IfcElementType::getClassType() {
  return IfcElementType::s_type;
}

Step::ClassType IfcElementType::getType() const {
  return IfcElementType::s_type;
}

bool IfcElementType::isOfType(Step::ClassType t) {
  return IfcElementType::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcLabel IfcElementType::getElementType() {
  if (Step::BaseObject::inited()) {
    return m_elementType;
  }
  else {
    return getUnset(m_elementType);
  }
}

void IfcElementType::setElementType(const IfcLabel &value) {
  m_elementType = value;
}

void IfcElementType::release() {
  IfcTypeProduct::release();
}

bool IfcElementType::init() {
  bool status = IfcTypeProduct::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elementType = getUnset(m_elementType);
  }
  else {
    m_elementType = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementType::s_type = new Step::ClassType_class("IfcElementType");
