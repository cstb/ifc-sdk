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
#include <ifc2x3/IfcRelDecomposes.h>

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

IfcRelDecomposes::IfcRelDecomposes(Step::SPFData *args) : IfcRelationship(args) {
  m_relatingObject = NULL;
  m_relatedObjects.setUnset(true);
}


IfcRelDecomposes::~IfcRelDecomposes() {
}

bool IfcRelDecomposes::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelDecomposes(this);
}

const char *IfcRelDecomposes::type() {
  return "IfcRelDecomposes";
}

Step::ClassType IfcRelDecomposes::getClassType() {
  return IfcRelDecomposes::s_type;
}

Step::ClassType IfcRelDecomposes::getType() const {
  return IfcRelDecomposes::s_type;
}

bool IfcRelDecomposes::isOfType(Step::ClassType t) {
  return IfcRelDecomposes::s_type == t ? true : IfcRelationship::isOfType(t);
}

IfcObjectDefinition *IfcRelDecomposes::getRelatingObject() {
  if (Step::BaseObject::inited()) {
    return m_relatingObject.get();
  }
  else {
    return NULL;
  }
}

void IfcRelDecomposes::setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value) {
  m_relatingObject = value;
}

Step::StepSet< Step::RefPtr< IfcObjectDefinition > > &IfcRelDecomposes::getRelatedObjects() {
  if (Step::BaseObject::inited()) {
    return m_relatedObjects;
  }
  else {
    m_relatedObjects.setUnset(true);
    return m_relatedObjects;
  }
}

void IfcRelDecomposes::setRelatedObjects(const Step::StepSet< Step::RefPtr< IfcObjectDefinition > > &value) {
  m_relatedObjects = value;
}

void IfcRelDecomposes::release() {
  IfcRelationship::release();
  m_relatingObject.release();
  m_relatedObjects.clear();
}

bool IfcRelDecomposes::init() {
  bool status = IfcRelationship::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingObject = NULL;
  }
  else {
    m_relatingObject = static_cast< IfcObjectDefinition * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDecomposes::s_type = new Step::ClassType_class("IfcRelDecomposes");
