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
#include <ifc2x3/IfcPort.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcRelConnectsPorts.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcPort::IfcPort(Step::SPFData *args) : IfcProduct(args) {
  m_containedIn = NULL;
  m_connectedFrom.setUnset(true);
  m_connectedTo.setUnset(true);
}


IfcPort::~IfcPort() {
}

bool IfcPort::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPort(this);
}

const char *IfcPort::type() {
  return "IfcPort";
}

Step::ClassType IfcPort::getClassType() {
  return IfcPort::s_type;
}

Step::ClassType IfcPort::getType() const {
  return IfcPort::s_type;
}

bool IfcPort::isOfType(Step::ClassType t) {
  return IfcPort::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcRelConnectsPortToElement *IfcPort::getContainedIn() {
  if (Step::BaseObject::inited()) {
    return m_containedIn.get();
  }
  else {
    return NULL;
  }
}

void IfcPort::setContainedIn(const Step::RefPtr< IfcRelConnectsPortToElement > &value) {
  m_containedIn = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsPorts > > &IfcPort::getConnectedFrom() {
  if (Step::BaseObject::inited()) {
    return m_connectedFrom;
  }
  else {
    m_connectedFrom.setUnset(true);
    return m_connectedFrom;
  }
}

void IfcPort::setConnectedFrom(const Step::StepSet< Step::RefPtr< IfcRelConnectsPorts > > &value) {
  m_connectedFrom = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsPorts > > &IfcPort::getConnectedTo() {
  if (Step::BaseObject::inited()) {
    return m_connectedTo;
  }
  else {
    m_connectedTo.setUnset(true);
    return m_connectedTo;
  }
}

void IfcPort::setConnectedTo(const Step::StepSet< Step::RefPtr< IfcRelConnectsPorts > > &value) {
  m_connectedTo = value;
}

void IfcPort::release() {
  IfcProduct::release();
}

bool IfcPort::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 4);
  if (inverses) {
    m_containedIn = static_cast< IfcRelConnectsPortToElement * > (m_model->getObjectById((*inverses)[0]));
  }
  inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_connectedFrom.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_connectedFrom.insert(static_cast< IfcRelConnectsPorts * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_connectedTo.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_connectedTo.insert(static_cast< IfcRelConnectsPorts * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPort::s_type = new Step::ClassType_class("IfcPort");
