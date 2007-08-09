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
#include <ifc2x3/IfcConstructionResource.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcResource.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcConstructionResource::IfcConstructionResource(Step::SPFData *args) : IfcResource(args) {
  m_resourceIdentifier = getUnset(m_resourceIdentifier);
  m_resourceGroup = getUnset(m_resourceGroup);
  m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
  m_baseQuantity = NULL;
}


IfcConstructionResource::~IfcConstructionResource() {
}

bool IfcConstructionResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstructionResource(this);
}

const char *IfcConstructionResource::type() {
  return "IfcConstructionResource";
}

Step::ClassType IfcConstructionResource::getClassType() {
  return IfcConstructionResource::s_type;
}

Step::ClassType IfcConstructionResource::getType() const {
  return IfcConstructionResource::s_type;
}

bool IfcConstructionResource::isOfType(Step::ClassType t) {
  return IfcConstructionResource::s_type == t ? true : IfcResource::isOfType(t);
}

IfcIdentifier IfcConstructionResource::getResourceIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_resourceIdentifier;
  }
  else {
    return getUnset(m_resourceIdentifier);
  }
}

void IfcConstructionResource::setResourceIdentifier(const IfcIdentifier &value) {
  m_resourceIdentifier = value;
}

IfcLabel IfcConstructionResource::getResourceGroup() {
  if (Step::BaseObject::inited()) {
    return m_resourceGroup;
  }
  else {
    return getUnset(m_resourceGroup);
  }
}

void IfcConstructionResource::setResourceGroup(const IfcLabel &value) {
  m_resourceGroup = value;
}

IfcResourceConsumptionEnum IfcConstructionResource::getResourceConsumption() {
  if (Step::BaseObject::inited()) {
    return m_resourceConsumption;
  }
  else {
    return IfcResourceConsumptionEnum_UNSET;
  }
}

void IfcConstructionResource::setResourceConsumption(IfcResourceConsumptionEnum value) {
  m_resourceConsumption = value;
}

IfcMeasureWithUnit *IfcConstructionResource::getBaseQuantity() {
  if (Step::BaseObject::inited()) {
    return m_baseQuantity.get();
  }
  else {
    return NULL;
  }
}

void IfcConstructionResource::setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value) {
  m_baseQuantity = value;
}

void IfcConstructionResource::release() {
  IfcResource::release();
  m_baseQuantity.release();
}

bool IfcConstructionResource::init() {
  bool status = IfcResource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_resourceIdentifier = getUnset(m_resourceIdentifier);
  }
  else {
    m_resourceIdentifier = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_resourceGroup = getUnset(m_resourceGroup);
  }
  else {
    m_resourceGroup = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
  }
  else {
    if (arg == ".CONSUMED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_CONSUMED;
    }
    else if (arg == ".PARTIALLYCONSUMED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_PARTIALLYCONSUMED;
    }
    else if (arg == ".NOTCONSUMED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_NOTCONSUMED;
    }
    else if (arg == ".OCCUPIED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_OCCUPIED;
    }
    else if (arg == ".PARTIALLYOCCUPIED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_PARTIALLYOCCUPIED;
    }
    else if (arg == ".NOTOCCUPIED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_NOTOCCUPIED;
    }
    else if (arg == ".USERDEFINED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_resourceConsumption = IfcResourceConsumptionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_baseQuantity = NULL;
  }
  else {
    m_baseQuantity = static_cast< IfcMeasureWithUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionResource::s_type = new Step::ClassType_class("IfcConstructionResource");
