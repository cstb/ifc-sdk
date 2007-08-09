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
#include <ifc2x3/IfcObjectPlacement.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcObjectPlacement::IfcObjectPlacement(Step::SPFData *args) : Step::BaseObject(args) {
  m_placesObject.setUnset(true);
  m_referencedByPlacements.setUnset(true);
}


IfcObjectPlacement::~IfcObjectPlacement() {
}

bool IfcObjectPlacement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcObjectPlacement(this);
}

const char *IfcObjectPlacement::type() {
  return "IfcObjectPlacement";
}

Step::ClassType IfcObjectPlacement::getClassType() {
  return IfcObjectPlacement::s_type;
}

Step::ClassType IfcObjectPlacement::getType() const {
  return IfcObjectPlacement::s_type;
}

bool IfcObjectPlacement::isOfType(Step::ClassType t) {
  return IfcObjectPlacement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProduct > > &IfcObjectPlacement::getPlacesObject() {
  if (Step::BaseObject::inited()) {
    return m_placesObject;
  }
  else {
    m_placesObject.setUnset(true);
    return m_placesObject;
  }
}

void IfcObjectPlacement::setPlacesObject(const Step::StepSet< Step::RefPtr< IfcProduct > > &value) {
  m_placesObject = value;
}

Step::StepSet< Step::RefPtr< IfcLocalPlacement > > &IfcObjectPlacement::getReferencedByPlacements() {
  if (Step::BaseObject::inited()) {
    return m_referencedByPlacements;
  }
  else {
    m_referencedByPlacements.setUnset(true);
    return m_referencedByPlacements;
  }
}

void IfcObjectPlacement::setReferencedByPlacements(const Step::StepSet< Step::RefPtr< IfcLocalPlacement > > &value) {
  m_referencedByPlacements = value;
}

void IfcObjectPlacement::release() {
}

bool IfcObjectPlacement::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  inverses = m_args->getInverses(IfcProduct::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_placesObject.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_placesObject.insert(static_cast< IfcProduct * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcLocalPlacement::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_referencedByPlacements.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referencedByPlacements.insert(static_cast< IfcLocalPlacement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjectPlacement::s_type = new Step::ClassType_class("IfcObjectPlacement");
