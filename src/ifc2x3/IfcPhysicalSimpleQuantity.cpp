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
#include <ifc2x3/IfcPhysicalSimpleQuantity.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcPhysicalSimpleQuantity::IfcPhysicalSimpleQuantity(Step::SPFData *args) : IfcPhysicalQuantity(args) {
  m_unit = NULL;
}


IfcPhysicalSimpleQuantity::~IfcPhysicalSimpleQuantity() {
}

bool IfcPhysicalSimpleQuantity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPhysicalSimpleQuantity(this);
}

const char *IfcPhysicalSimpleQuantity::type() {
  return "IfcPhysicalSimpleQuantity";
}

Step::ClassType IfcPhysicalSimpleQuantity::getClassType() {
  return IfcPhysicalSimpleQuantity::s_type;
}

Step::ClassType IfcPhysicalSimpleQuantity::getType() const {
  return IfcPhysicalSimpleQuantity::s_type;
}

bool IfcPhysicalSimpleQuantity::isOfType(Step::ClassType t) {
  return IfcPhysicalSimpleQuantity::s_type == t ? true : IfcPhysicalQuantity::isOfType(t);
}

IfcNamedUnit *IfcPhysicalSimpleQuantity::getUnit() {
  if (Step::BaseObject::inited()) {
    return m_unit.get();
  }
  else {
    return NULL;
  }
}

void IfcPhysicalSimpleQuantity::setUnit(const Step::RefPtr< IfcNamedUnit > &value) {
  m_unit = value;
}

void IfcPhysicalSimpleQuantity::release() {
  IfcPhysicalQuantity::release();
  m_unit.release();
}

bool IfcPhysicalSimpleQuantity::init() {
  bool status = IfcPhysicalQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unit = NULL;
  }
  else {
    m_unit = static_cast< IfcNamedUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalSimpleQuantity::s_type = new Step::ClassType_class("IfcPhysicalSimpleQuantity");
