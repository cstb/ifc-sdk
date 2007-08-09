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
#include <ifc2x3/IfcShapeModel.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcShapeModel::IfcShapeModel(Step::SPFData *args) : IfcRepresentation(args) {
  m_ofShapeAspect.setUnset(true);
}


IfcShapeModel::~IfcShapeModel() {
}

bool IfcShapeModel::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcShapeModel(this);
}

const char *IfcShapeModel::type() {
  return "IfcShapeModel";
}

Step::ClassType IfcShapeModel::getClassType() {
  return IfcShapeModel::s_type;
}

Step::ClassType IfcShapeModel::getType() const {
  return IfcShapeModel::s_type;
}

bool IfcShapeModel::isOfType(Step::ClassType t) {
  return IfcShapeModel::s_type == t ? true : IfcRepresentation::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcShapeAspect > > &IfcShapeModel::getOfShapeAspect() {
  if (Step::BaseObject::inited()) {
    return m_ofShapeAspect;
  }
  else {
    m_ofShapeAspect.setUnset(true);
    return m_ofShapeAspect;
  }
}

void IfcShapeModel::setOfShapeAspect(const Step::StepSet< Step::RefPtr< IfcShapeAspect > > &value) {
  m_ofShapeAspect = value;
}

void IfcShapeModel::release() {
  IfcRepresentation::release();
}

bool IfcShapeModel::init() {
  bool status = IfcRepresentation::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcShapeAspect::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_ofShapeAspect.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_ofShapeAspect.insert(static_cast< IfcShapeAspect * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcShapeModel::s_type = new Step::ClassType_class("IfcShapeModel");
