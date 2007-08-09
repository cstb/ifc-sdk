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
#include <ifc2x3/IfcSweptAreaSolid.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcSweptAreaSolid::IfcSweptAreaSolid(Step::SPFData *args) : IfcSolidModel(args) {
  m_sweptArea = NULL;
  m_position = NULL;
}


IfcSweptAreaSolid::~IfcSweptAreaSolid() {
}

bool IfcSweptAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSweptAreaSolid(this);
}

const char *IfcSweptAreaSolid::type() {
  return "IfcSweptAreaSolid";
}

Step::ClassType IfcSweptAreaSolid::getClassType() {
  return IfcSweptAreaSolid::s_type;
}

Step::ClassType IfcSweptAreaSolid::getType() const {
  return IfcSweptAreaSolid::s_type;
}

bool IfcSweptAreaSolid::isOfType(Step::ClassType t) {
  return IfcSweptAreaSolid::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcProfileDef *IfcSweptAreaSolid::getSweptArea() {
  if (Step::BaseObject::inited()) {
    return m_sweptArea.get();
  }
  else {
    return NULL;
  }
}

void IfcSweptAreaSolid::setSweptArea(const Step::RefPtr< IfcProfileDef > &value) {
  m_sweptArea = value;
}

IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition() {
  if (Step::BaseObject::inited()) {
    return m_position.get();
  }
  else {
    return NULL;
  }
}

void IfcSweptAreaSolid::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
  m_position = value;
}

void IfcSweptAreaSolid::release() {
  IfcSolidModel::release();
  m_sweptArea.release();
  m_position.release();
}

bool IfcSweptAreaSolid::init() {
  bool status = IfcSolidModel::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sweptArea = NULL;
  }
  else {
    m_sweptArea = static_cast< IfcProfileDef * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_position = NULL;
  }
  else {
    m_position = static_cast< IfcAxis2Placement3D * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSweptAreaSolid::s_type = new Step::ClassType_class("IfcSweptAreaSolid");
