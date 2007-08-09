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
#include <ifc2x3/IfcControl.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRelAssignsToControl.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcControl::IfcControl(Step::SPFData *args) : IfcObject(args) {
  m_controls.setUnset(true);
}


IfcControl::~IfcControl() {
}

bool IfcControl::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcControl(this);
}

const char *IfcControl::type() {
  return "IfcControl";
}

Step::ClassType IfcControl::getClassType() {
  return IfcControl::s_type;
}

Step::ClassType IfcControl::getType() const {
  return IfcControl::s_type;
}

bool IfcControl::isOfType(Step::ClassType t) {
  return IfcControl::s_type == t ? true : IfcObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelAssignsToControl > > &IfcControl::getControls() {
  if (Step::BaseObject::inited()) {
    return m_controls;
  }
  else {
    m_controls.setUnset(true);
    return m_controls;
  }
}

void IfcControl::setControls(const Step::StepSet< Step::RefPtr< IfcRelAssignsToControl > > &value) {
  m_controls = value;
}

void IfcControl::release() {
  IfcObject::release();
}

bool IfcControl::init() {
  bool status = IfcObject::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelAssignsToControl::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_controls.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_controls.insert(static_cast< IfcRelAssignsToControl * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcControl::s_type = new Step::ClassType_class("IfcControl");
