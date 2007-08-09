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
#include <ifc2x3/IfcMaterialProperties.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcMaterialProperties::IfcMaterialProperties(Step::SPFData *args) : Step::BaseObject(args) {
  m_material = NULL;
}


IfcMaterialProperties::~IfcMaterialProperties() {
}

bool IfcMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMaterialProperties(this);
}

const char *IfcMaterialProperties::type() {
  return "IfcMaterialProperties";
}

Step::ClassType IfcMaterialProperties::getClassType() {
  return IfcMaterialProperties::s_type;
}

Step::ClassType IfcMaterialProperties::getType() const {
  return IfcMaterialProperties::s_type;
}

bool IfcMaterialProperties::isOfType(Step::ClassType t) {
  return IfcMaterialProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterial *IfcMaterialProperties::getMaterial() {
  if (Step::BaseObject::inited()) {
    return m_material.get();
  }
  else {
    return NULL;
  }
}

void IfcMaterialProperties::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
  m_material = value;
}

void IfcMaterialProperties::release() {
  m_material.release();
}

bool IfcMaterialProperties::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_material = NULL;
  }
  else {
    m_material = static_cast< IfcMaterial * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMaterialProperties::s_type = new Step::ClassType_class("IfcMaterialProperties");
