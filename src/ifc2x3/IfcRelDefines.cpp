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
#include <ifc2x3/IfcRelDefines.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRelDefines::IfcRelDefines(Step::SPFData *args) : IfcRelationship(args) {
  m_relatedObjects.setUnset(true);
}


IfcRelDefines::~IfcRelDefines() {
}

bool IfcRelDefines::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelDefines(this);
}

const char *IfcRelDefines::type() {
  return "IfcRelDefines";
}

Step::ClassType IfcRelDefines::getClassType() {
  return IfcRelDefines::s_type;
}

Step::ClassType IfcRelDefines::getType() const {
  return IfcRelDefines::s_type;
}

bool IfcRelDefines::isOfType(Step::ClassType t) {
  return IfcRelDefines::s_type == t ? true : IfcRelationship::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcObject > > &IfcRelDefines::getRelatedObjects() {
  if (Step::BaseObject::inited()) {
    return m_relatedObjects;
  }
  else {
    m_relatedObjects.setUnset(true);
    return m_relatedObjects;
  }
}

void IfcRelDefines::setRelatedObjects(const Step::StepSet< Step::RefPtr< IfcObject > > &value) {
  m_relatedObjects = value;
}

void IfcRelDefines::release() {
  IfcRelationship::release();
  m_relatedObjects.clear();
}

bool IfcRelDefines::init() {
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
        Step::RefPtr< IfcObject > attr2;
        attr2 = static_cast< IfcObject * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedObjects.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefines::s_type = new Step::ClassType_class("IfcRelDefines");
