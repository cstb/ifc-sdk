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
#include <ifc2x3/IfcProcess.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRelAssignsToProcess.h>
#include <ifc2x3/IfcRelSequence.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcProcess::IfcProcess(Step::SPFData *args) : IfcObject(args) {
  m_operatesOn.setUnset(true);
  m_isSuccessorFrom.setUnset(true);
  m_isPredecessorTo.setUnset(true);
}


IfcProcess::~IfcProcess() {
}

bool IfcProcess::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProcess(this);
}

const char *IfcProcess::type() {
  return "IfcProcess";
}

Step::ClassType IfcProcess::getClassType() {
  return IfcProcess::s_type;
}

Step::ClassType IfcProcess::getType() const {
  return IfcProcess::s_type;
}

bool IfcProcess::isOfType(Step::ClassType t) {
  return IfcProcess::s_type == t ? true : IfcObject::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcRelAssignsToProcess > > &IfcProcess::getOperatesOn() {
  if (Step::BaseObject::inited()) {
    return m_operatesOn;
  }
  else {
    m_operatesOn.setUnset(true);
    return m_operatesOn;
  }
}

void IfcProcess::setOperatesOn(const Step::StepSet< Step::RefPtr< IfcRelAssignsToProcess > > &value) {
  m_operatesOn = value;
}

Step::StepSet< Step::RefPtr< IfcRelSequence > > &IfcProcess::getIsSuccessorFrom() {
  if (Step::BaseObject::inited()) {
    return m_isSuccessorFrom;
  }
  else {
    m_isSuccessorFrom.setUnset(true);
    return m_isSuccessorFrom;
  }
}

void IfcProcess::setIsSuccessorFrom(const Step::StepSet< Step::RefPtr< IfcRelSequence > > &value) {
  m_isSuccessorFrom = value;
}

Step::StepSet< Step::RefPtr< IfcRelSequence > > &IfcProcess::getIsPredecessorTo() {
  if (Step::BaseObject::inited()) {
    return m_isPredecessorTo;
  }
  else {
    m_isPredecessorTo.setUnset(true);
    return m_isPredecessorTo;
  }
}

void IfcProcess::setIsPredecessorTo(const Step::StepSet< Step::RefPtr< IfcRelSequence > > &value) {
  m_isPredecessorTo = value;
}

void IfcProcess::release() {
  IfcObject::release();
}

bool IfcProcess::init() {
  bool status = IfcObject::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelAssignsToProcess::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_operatesOn.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_operatesOn.insert(static_cast< IfcRelAssignsToProcess * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelSequence::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_isSuccessorFrom.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isSuccessorFrom.insert(static_cast< IfcRelSequence * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelSequence::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_isPredecessorTo.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isPredecessorTo.insert(static_cast< IfcRelSequence * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProcess::s_type = new Step::ClassType_class("IfcProcess");
