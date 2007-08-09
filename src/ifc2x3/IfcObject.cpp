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
#include <ifc2x3/IfcObject.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcRelDefines.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcObject::IfcObject(Step::SPFData *args) : IfcObjectDefinition(args) {
  m_objectType = getUnset(m_objectType);
  m_isDefinedBy.setUnset(true);
}


IfcObject::~IfcObject() {
}

bool IfcObject::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcObject(this);
}

const char *IfcObject::type() {
  return "IfcObject";
}

Step::ClassType IfcObject::getClassType() {
  return IfcObject::s_type;
}

Step::ClassType IfcObject::getType() const {
  return IfcObject::s_type;
}

bool IfcObject::isOfType(Step::ClassType t) {
  return IfcObject::s_type == t ? true : IfcObjectDefinition::isOfType(t);
}

IfcLabel IfcObject::getObjectType() {
  if (Step::BaseObject::inited()) {
    return m_objectType;
  }
  else {
    return getUnset(m_objectType);
  }
}

void IfcObject::setObjectType(const IfcLabel &value) {
  m_objectType = value;
}

Step::StepSet< Step::RefPtr< IfcRelDefines > > &IfcObject::getIsDefinedBy() {
  if (Step::BaseObject::inited()) {
    return m_isDefinedBy;
  }
  else {
    m_isDefinedBy.setUnset(true);
    return m_isDefinedBy;
  }
}

void IfcObject::setIsDefinedBy(const Step::StepSet< Step::RefPtr< IfcRelDefines > > &value) {
  m_isDefinedBy = value;
}

void IfcObject::release() {
  IfcObjectDefinition::release();
}

bool IfcObject::init() {
  bool status = IfcObjectDefinition::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_objectType = getUnset(m_objectType);
  }
  else {
    m_objectType = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcRelDefines::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_isDefinedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isDefinedBy.insert(static_cast< IfcRelDefines * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcObject::s_type = new Step::ClassType_class("IfcObject");
