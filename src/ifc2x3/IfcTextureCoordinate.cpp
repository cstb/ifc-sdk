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
#include <ifc2x3/IfcTextureCoordinate.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAnnotationSurface.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcTextureCoordinate::IfcTextureCoordinate(Step::SPFData *args) : Step::BaseObject(args) {
  m_annotatedSurface.setUnset(true);
}


IfcTextureCoordinate::~IfcTextureCoordinate() {
}

bool IfcTextureCoordinate::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTextureCoordinate(this);
}

const char *IfcTextureCoordinate::type() {
  return "IfcTextureCoordinate";
}

Step::ClassType IfcTextureCoordinate::getClassType() {
  return IfcTextureCoordinate::s_type;
}

Step::ClassType IfcTextureCoordinate::getType() const {
  return IfcTextureCoordinate::s_type;
}

bool IfcTextureCoordinate::isOfType(Step::ClassType t) {
  return IfcTextureCoordinate::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcAnnotationSurface > > &IfcTextureCoordinate::getAnnotatedSurface() {
  if (Step::BaseObject::inited()) {
    return m_annotatedSurface;
  }
  else {
    m_annotatedSurface.setUnset(true);
    return m_annotatedSurface;
  }
}

void IfcTextureCoordinate::setAnnotatedSurface(const Step::StepSet< Step::RefPtr< IfcAnnotationSurface > > &value) {
  m_annotatedSurface = value;
}

void IfcTextureCoordinate::release() {
}

bool IfcTextureCoordinate::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  inverses = m_args->getInverses(IfcAnnotationSurface::getClassType(), 1);
  if (inverses) {
    unsigned int i;
    m_annotatedSurface.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_annotatedSurface.insert(static_cast< IfcAnnotationSurface * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTextureCoordinate::s_type = new Step::ClassType_class("IfcTextureCoordinate");
