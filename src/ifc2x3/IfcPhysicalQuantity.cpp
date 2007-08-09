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
#include <ifc2x3/IfcPhysicalQuantity.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPhysicalComplexQuantity.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcPhysicalQuantity::IfcPhysicalQuantity(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_partOfComplex.setUnset(true);
}


IfcPhysicalQuantity::~IfcPhysicalQuantity() {
}

bool IfcPhysicalQuantity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPhysicalQuantity(this);
}

const char *IfcPhysicalQuantity::type() {
  return "IfcPhysicalQuantity";
}

Step::ClassType IfcPhysicalQuantity::getClassType() {
  return IfcPhysicalQuantity::s_type;
}

Step::ClassType IfcPhysicalQuantity::getType() const {
  return IfcPhysicalQuantity::s_type;
}

bool IfcPhysicalQuantity::isOfType(Step::ClassType t) {
  return IfcPhysicalQuantity::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPhysicalQuantity::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcPhysicalQuantity::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcPhysicalQuantity::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcPhysicalQuantity::setDescription(const IfcText &value) {
  m_description = value;
}

Step::StepSet< Step::RefPtr< IfcPhysicalComplexQuantity > > &IfcPhysicalQuantity::getPartOfComplex() {
  if (Step::BaseObject::inited()) {
    return m_partOfComplex;
  }
  else {
    m_partOfComplex.setUnset(true);
    return m_partOfComplex;
  }
}

void IfcPhysicalQuantity::setPartOfComplex(const Step::StepSet< Step::RefPtr< IfcPhysicalComplexQuantity > > &value) {
  m_partOfComplex = value;
}

void IfcPhysicalQuantity::release() {
}

bool IfcPhysicalQuantity::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
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
  inverses = m_args->getInverses(IfcPhysicalComplexQuantity::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_partOfComplex.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_partOfComplex.insert(static_cast< IfcPhysicalComplexQuantity * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPhysicalQuantity::s_type = new Step::ClassType_class("IfcPhysicalQuantity");
