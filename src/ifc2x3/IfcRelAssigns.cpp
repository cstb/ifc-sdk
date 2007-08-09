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
#include <ifc2x3/IfcRelAssigns.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRelAssigns::IfcRelAssigns(Step::SPFData *args) : IfcRelationship(args) {
  m_relatedObjects.setUnset(true);
  m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
}


IfcRelAssigns::~IfcRelAssigns() {
}

bool IfcRelAssigns::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssigns(this);
}

const char *IfcRelAssigns::type() {
  return "IfcRelAssigns";
}

Step::ClassType IfcRelAssigns::getClassType() {
  return IfcRelAssigns::s_type;
}

Step::ClassType IfcRelAssigns::getType() const {
  return IfcRelAssigns::s_type;
}

bool IfcRelAssigns::isOfType(Step::ClassType t) {
  return IfcRelAssigns::s_type == t ? true : IfcRelationship::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcObjectDefinition > > &IfcRelAssigns::getRelatedObjects() {
  if (Step::BaseObject::inited()) {
    return m_relatedObjects;
  }
  else {
    m_relatedObjects.setUnset(true);
    return m_relatedObjects;
  }
}

void IfcRelAssigns::setRelatedObjects(const Step::StepSet< Step::RefPtr< IfcObjectDefinition > > &value) {
  m_relatedObjects = value;
}

IfcObjectTypeEnum IfcRelAssigns::getRelatedObjectsType() {
  if (Step::BaseObject::inited()) {
    return m_relatedObjectsType;
  }
  else {
    return IfcObjectTypeEnum_UNSET;
  }
}

void IfcRelAssigns::setRelatedObjectsType(IfcObjectTypeEnum value) {
  m_relatedObjectsType = value;
}

void IfcRelAssigns::release() {
  IfcRelationship::release();
  m_relatedObjects.clear();
}

bool IfcRelAssigns::init() {
  bool status = IfcRelationship::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedObjects.setUnset(true);
  }
  else {
    m_relatedObjects.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcObjectDefinition > attr2;
        attr2 = static_cast< IfcObjectDefinition * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedObjects.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
  }
  else {
    if (arg == ".PRODUCT.") {
      m_relatedObjectsType = IfcObjectTypeEnum_PRODUCT;
    }
    else if (arg == ".PROCESS.") {
      m_relatedObjectsType = IfcObjectTypeEnum_PROCESS;
    }
    else if (arg == ".CONTROL.") {
      m_relatedObjectsType = IfcObjectTypeEnum_CONTROL;
    }
    else if (arg == ".RESOURCE.") {
      m_relatedObjectsType = IfcObjectTypeEnum_RESOURCE;
    }
    else if (arg == ".ACTOR.") {
      m_relatedObjectsType = IfcObjectTypeEnum_ACTOR;
    }
    else if (arg == ".GROUP.") {
      m_relatedObjectsType = IfcObjectTypeEnum_GROUP;
    }
    else if (arg == ".PROJECT.") {
      m_relatedObjectsType = IfcObjectTypeEnum_PROJECT;
    }
    else if (arg == ".NOTDEFINED.") {
      m_relatedObjectsType = IfcObjectTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssigns::s_type = new Step::ClassType_class("IfcRelAssigns");
