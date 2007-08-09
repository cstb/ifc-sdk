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
#include <ifc2x3/IfcRepresentationItem.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcStyledItem.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcRepresentationItem::IfcRepresentationItem(Step::SPFData *args) : Step::BaseObject(args) {
  m_layerAssignments.setUnset(true);
  m_styledByItem.setUnset(true);
}


IfcRepresentationItem::~IfcRepresentationItem() {
}

bool IfcRepresentationItem::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRepresentationItem(this);
}

const char *IfcRepresentationItem::type() {
  return "IfcRepresentationItem";
}

Step::ClassType IfcRepresentationItem::getClassType() {
  return IfcRepresentationItem::s_type;
}

Step::ClassType IfcRepresentationItem::getType() const {
  return IfcRepresentationItem::s_type;
}

bool IfcRepresentationItem::isOfType(Step::ClassType t) {
  return IfcRepresentationItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > &IfcRepresentationItem::getLayerAssignments() {
  if (Step::BaseObject::inited()) {
    return m_layerAssignments;
  }
  else {
    m_layerAssignments.setUnset(true);
    return m_layerAssignments;
  }
}

void IfcRepresentationItem::setLayerAssignments(const Step::StepSet< Step::RefPtr< IfcPresentationLayerAssignment > > &value) {
  m_layerAssignments = value;
}

Step::StepSet< Step::RefPtr< IfcStyledItem > > &IfcRepresentationItem::getStyledByItem() {
  if (Step::BaseObject::inited()) {
    return m_styledByItem;
  }
  else {
    m_styledByItem.setUnset(true);
    return m_styledByItem;
  }
}

void IfcRepresentationItem::setStyledByItem(const Step::StepSet< Step::RefPtr< IfcStyledItem > > &value) {
  m_styledByItem = value;
}

void IfcRepresentationItem::release() {
}

bool IfcRepresentationItem::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
  if (inverses) {
    unsigned int i;
    m_layerAssignments.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_layerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcStyledItem::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_styledByItem.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_styledByItem.insert(static_cast< IfcStyledItem * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRepresentationItem::s_type = new Step::ClassType_class("IfcRepresentationItem");
