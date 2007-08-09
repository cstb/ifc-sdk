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
#include <ifc2x3/IfcObjectDefinition.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelAssigns.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRelDecomposes.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcObjectDefinition::IfcObjectDefinition(Step::SPFData *args) : IfcRoot(args) {
  m_hasAssignments.setUnset(true);
  m_isDecomposedBy.setUnset(true);
  m_decomposes.setUnset(true);
  m_hasAssociations.setUnset(true);
}


IfcObjectDefinition::~IfcObjectDefinition() {
}

bool IfcObjectDefinition::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcObjectDefinition(this);
}

const char *IfcObjectDefinition::type() {
  return "IfcObjectDefinition";
}

Step::ClassType IfcObjectDefinition::getClassType() {
  return IfcObjectDefinition::s_type;
}

Step::ClassType IfcObjectDefinition::getType() const {
  return IfcObjectDefinition::s_type;
}

bool IfcObjectDefinition::isOfType(Step::ClassType t) {
  return IfcObjectDefinition::s_type == t ? true : IfcRoot::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelAssigns > > &IfcObjectDefinition::getHasAssignments() {
  if (Step::BaseObject::inited()) {
    return m_hasAssignments;
  }
  else {
    m_hasAssignments.setUnset(true);
    return m_hasAssignments;
  }
}

void IfcObjectDefinition::setHasAssignments(const Step::StepSet< Step::RefPtr< IfcRelAssigns > > &value) {
  m_hasAssignments = value;
}

Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &IfcObjectDefinition::getIsDecomposedBy() {
  if (Step::BaseObject::inited()) {
    return m_isDecomposedBy;
  }
  else {
    m_isDecomposedBy.setUnset(true);
    return m_isDecomposedBy;
  }
}

void IfcObjectDefinition::setIsDecomposedBy(const Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &value) {
  m_isDecomposedBy = value;
}

Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &IfcObjectDefinition::getDecomposes() {
  if (Step::BaseObject::inited()) {
    return m_decomposes;
  }
  else {
    m_decomposes.setUnset(true);
    return m_decomposes;
  }
}

void IfcObjectDefinition::setDecomposes(const Step::StepSet< Step::RefPtr< IfcRelDecomposes > > &value) {
  m_decomposes = value;
}

Step::StepSet< Step::RefPtr< IfcRelAssociates > > &IfcObjectDefinition::getHasAssociations() {
  if (Step::BaseObject::inited()) {
    return m_hasAssociations;
  }
  else {
    m_hasAssociations.setUnset(true);
    return m_hasAssociations;
  }
}

void IfcObjectDefinition::setHasAssociations(const Step::StepSet< Step::RefPtr< IfcRelAssociates > > &value) {
  m_hasAssociations = value;
}

void IfcObjectDefinition::release() {
  IfcRoot::release();
}

bool IfcObjectDefinition::init() {
  bool status = IfcRoot::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelAssigns::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasAssignments.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasAssignments.insert(static_cast< IfcRelAssigns * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_isDecomposedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isDecomposedBy.insert(static_cast< IfcRelDecomposes * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_decomposes.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_decomposes.insert(static_cast< IfcRelDecomposes * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasAssociations.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasAssociations.insert(static_cast< IfcRelAssociates * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjectDefinition::s_type = new Step::ClassType_class("IfcObjectDefinition");
