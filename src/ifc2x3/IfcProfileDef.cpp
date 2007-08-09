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
#include <ifc2x3/IfcProfileDef.h>

#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcProfileDef::IfcProfileDef(Step::SPFData *args) : Step::BaseObject(args) {
  m_profileType = IfcProfileTypeEnum_UNSET;
  m_profileName = getUnset(m_profileName);
}


IfcProfileDef::~IfcProfileDef() {
}

bool IfcProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProfileDef(this);
}

const char *IfcProfileDef::type() {
  return "IfcProfileDef";
}

Step::ClassType IfcProfileDef::getClassType() {
  return IfcProfileDef::s_type;
}

Step::ClassType IfcProfileDef::getType() const {
  return IfcProfileDef::s_type;
}

bool IfcProfileDef::isOfType(Step::ClassType t) {
  return IfcProfileDef::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcProfileTypeEnum IfcProfileDef::getProfileType() {
  if (Step::BaseObject::inited()) {
    return m_profileType;
  }
  else {
    return IfcProfileTypeEnum_UNSET;
  }
}

void IfcProfileDef::setProfileType(IfcProfileTypeEnum value) {
  m_profileType = value;
}

IfcLabel IfcProfileDef::getProfileName() {
  if (Step::BaseObject::inited()) {
    return m_profileName;
  }
  else {
    return getUnset(m_profileName);
  }
}

void IfcProfileDef::setProfileName(const IfcLabel &value) {
  m_profileName = value;
}

void IfcProfileDef::release() {
}

bool IfcProfileDef::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileType = IfcProfileTypeEnum_UNSET;
  }
  else {
    if (arg == ".CURVE.") {
      m_profileType = IfcProfileTypeEnum_CURVE;
    }
    else if (arg == ".AREA.") {
      m_profileType = IfcProfileTypeEnum_AREA;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_profileName = getUnset(m_profileName);
  }
  else {
    m_profileName = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProfileDef::s_type = new Step::ClassType_class("IfcProfileDef");
