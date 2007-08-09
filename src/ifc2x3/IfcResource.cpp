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
#include <ifc2x3/IfcResource.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRelAssignsToResource.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcResource::IfcResource(Step::SPFData *args) : IfcObject(args) {
  m_resourceOf.setUnset(true);
}


IfcResource::~IfcResource() {
}

bool IfcResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcResource(this);
}

const char *IfcResource::type() {
  return "IfcResource";
}

Step::ClassType IfcResource::getClassType() {
  return IfcResource::s_type;
}

Step::ClassType IfcResource::getType() const {
  return IfcResource::s_type;
}

bool IfcResource::isOfType(Step::ClassType t) {
  return IfcResource::s_type == t ? true : IfcObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelAssignsToResource > > &IfcResource::getResourceOf() {
  if (Step::BaseObject::inited()) {
    return m_resourceOf;
  }
  else {
    m_resourceOf.setUnset(true);
    return m_resourceOf;
  }
}

void IfcResource::setResourceOf(const Step::StepSet< Step::RefPtr< IfcRelAssignsToResource > > &value) {
  m_resourceOf = value;
}

void IfcResource::release() {
  IfcObject::release();
}

bool IfcResource::init() {
  bool status = IfcObject::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelAssignsToResource::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_resourceOf.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_resourceOf.insert(static_cast< IfcRelAssignsToResource * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcResource::s_type = new Step::ClassType_class("IfcResource");
