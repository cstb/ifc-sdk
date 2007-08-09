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
#include <ifc2x3/IfcProduct.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcRelAssignsToProduct.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcProduct::IfcProduct(Step::SPFData *args) : IfcObject(args) {
  m_objectPlacement = NULL;
  m_representation = NULL;
  m_referencedBy.setUnset(true);
}


IfcProduct::~IfcProduct() {
}

bool IfcProduct::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProduct(this);
}

const char *IfcProduct::type() {
  return "IfcProduct";
}

Step::ClassType IfcProduct::getClassType() {
  return IfcProduct::s_type;
}

Step::ClassType IfcProduct::getType() const {
  return IfcProduct::s_type;
}

bool IfcProduct::isOfType(Step::ClassType t) {
  return IfcProduct::s_type == t ? true : IfcObject::isOfType(t);
}

IfcObjectPlacement *IfcProduct::getObjectPlacement() {
  if (Step::BaseObject::inited()) {
    return m_objectPlacement.get();
  }
  else {
    return NULL;
  }
}

void IfcProduct::setObjectPlacement(const Step::RefPtr< IfcObjectPlacement > &value) {
  m_objectPlacement = value;
}

IfcProductRepresentation *IfcProduct::getRepresentation() {
  if (Step::BaseObject::inited()) {
    return m_representation.get();
  }
  else {
    return NULL;
  }
}

void IfcProduct::setRepresentation(const Step::RefPtr< IfcProductRepresentation > &value) {
  m_representation = value;
}

Step::StepSet< Step::RefPtr< IfcRelAssignsToProduct > > &IfcProduct::getReferencedBy() {
  if (Step::BaseObject::inited()) {
    return m_referencedBy;
  }
  else {
    m_referencedBy.setUnset(true);
    return m_referencedBy;
  }
}

void IfcProduct::setReferencedBy(const Step::StepSet< Step::RefPtr< IfcRelAssignsToProduct > > &value) {
  m_referencedBy = value;
}

void IfcProduct::release() {
  IfcObject::release();
  m_objectPlacement.release();
  m_representation.release();
}

bool IfcProduct::init() {
  bool status = IfcObject::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_objectPlacement = NULL;
  }
  else {
    m_objectPlacement = static_cast< IfcObjectPlacement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_representation = NULL;
  }
  else {
    m_representation = static_cast< IfcProductRepresentation * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  inverses = m_args->getInverses(IfcRelAssignsToProduct::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_referencedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referencedBy.insert(static_cast< IfcRelAssignsToProduct * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProduct::s_type = new Step::ClassType_class("IfcProduct");
