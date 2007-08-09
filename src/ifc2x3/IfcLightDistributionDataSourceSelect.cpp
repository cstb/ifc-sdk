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
#include <ifc2x3/IfcLightDistributionDataSourceSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/IfcLightIntensityDistribution.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcLightDistributionDataSourceSelect::~IfcLightDistributionDataSourceSelect() {
  deleteUnion();
}

bool IfcLightDistributionDataSourceSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLightDistributionDataSourceSelect(this);
}

bool IfcLightDistributionDataSourceSelect::init() {
  return false;
}

const char *IfcLightDistributionDataSourceSelect::type() {
  return "IfcLightDistributionDataSourceSelect";
}

Step::ClassType IfcLightDistributionDataSourceSelect::getClassType() {
  return IfcLightDistributionDataSourceSelect::s_type;
}

Step::ClassType IfcLightDistributionDataSourceSelect::getType() const {
  return IfcLightDistributionDataSourceSelect::s_type;
}

bool IfcLightDistributionDataSourceSelect::isOfType(Step::ClassType t) {
  return IfcLightDistributionDataSourceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcLightDistributionDataSourceSelect::currentTypeName() {
  switch(m_type) {
  case IFCEXTERNALREFERENCE:
    return "IfcExternalReference";
    break;
  case IFCLIGHTINTENSITYDISTRIBUTION:
    return "IfcLightIntensityDistribution";
    break;
  default:
    return "UNSET";
  }
}

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect_select IfcLightDistributionDataSourceSelect::currentType() {
  return m_type;
}

void IfcLightDistributionDataSourceSelect::deleteUnion() {
  switch(m_type) {
  case IFCEXTERNALREFERENCE:
    m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference->unref();
    break;
  case IFCLIGHTINTENSITYDISTRIBUTION:
    m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution->unref();
    break;
    }
  m_type = UNSET;
}

IfcExternalReference *IfcLightDistributionDataSourceSelect::getIfcExternalReference() {
  return m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference;
}

void IfcLightDistributionDataSourceSelect::setIfcExternalReference(IfcExternalReference *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference = value;
  if (value) {
    value->ref();
    m_type = IFCEXTERNALREFERENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEXTERNALREFERENCE;
}

IfcLightIntensityDistribution *IfcLightDistributionDataSourceSelect::getIfcLightIntensityDistribution() {
  return m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution;
}

void IfcLightDistributionDataSourceSelect::setIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution = value;
  if (value) {
    value->ref();
    m_type = IFCLIGHTINTENSITYDISTRIBUTION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCLIGHTINTENSITYDISTRIBUTION;
}

void IfcLightDistributionDataSourceSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcExternalReference::getClassType())) {
    setIfcExternalReference(static_cast< IfcExternalReference* > (v));
  }
  else if (v->isOfType(IfcLightIntensityDistribution::getClassType())) {
    setIfcLightIntensityDistribution(static_cast< IfcLightIntensityDistribution* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcLightDistributionDataSourceSelect::s_type = new Step::ClassType_class("IfcLightDistributionDataSourceSelect");
