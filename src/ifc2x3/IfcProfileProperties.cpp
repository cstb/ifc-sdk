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
#include <ifc2x3/IfcProfileProperties.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcProfileProperties::IfcProfileProperties(Step::SPFData *args) : Step::BaseObject(args) {
  m_profileName = getUnset(m_profileName);
  m_profileDefinition = NULL;
}


IfcProfileProperties::~IfcProfileProperties() {
}

bool IfcProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProfileProperties(this);
}

const char *IfcProfileProperties::type() {
  return "IfcProfileProperties";
}

Step::ClassType IfcProfileProperties::getClassType() {
  return IfcProfileProperties::s_type;
}

Step::ClassType IfcProfileProperties::getType() const {
  return IfcProfileProperties::s_type;
}

bool IfcProfileProperties::isOfType(Step::ClassType t) {
  return IfcProfileProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcProfileProperties::getProfileName() {
  if (Step::BaseObject::inited()) {
    return m_profileName;
  }
  else {
    return getUnset(m_profileName);
  }
}

void IfcProfileProperties::setProfileName(const IfcLabel &value) {
  m_profileName = value;
}

IfcProfileDef *IfcProfileProperties::getProfileDefinition() {
  if (Step::BaseObject::inited()) {
    return m_profileDefinition.get();
  }
  else {
    return NULL;
  }
}

void IfcProfileProperties::setProfileDefinition(const Step::RefPtr< IfcProfileDef > &value) {
  m_profileDefinition = value;
}

void IfcProfileProperties::release() {
  m_profileDefinition.release();
}

bool IfcProfileProperties::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileName = getUnset(m_profileName);
  }
  else {
    m_profileName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileDefinition = NULL;
  }
  else {
    m_profileDefinition = static_cast< IfcProfileDef * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProfileProperties::s_type = new Step::ClassType_class("IfcProfileProperties");
