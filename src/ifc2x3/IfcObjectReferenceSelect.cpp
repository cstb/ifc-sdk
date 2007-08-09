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
#include <ifc2x3/IfcObjectReferenceSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcObjectReferenceSelect::IfcObjectReferenceSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcObjectReferenceSelect::IfcObjectReferenceSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcObjectReferenceSelect::~IfcObjectReferenceSelect() {
  deleteUnion();
}

bool IfcObjectReferenceSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcObjectReferenceSelect(this);
}

bool IfcObjectReferenceSelect::init() {
  return false;
}

const char *IfcObjectReferenceSelect::type() {
  return "IfcObjectReferenceSelect";
}

Step::ClassType IfcObjectReferenceSelect::getClassType() {
  return IfcObjectReferenceSelect::s_type;
}

Step::ClassType IfcObjectReferenceSelect::getType() const {
  return IfcObjectReferenceSelect::s_type;
}

bool IfcObjectReferenceSelect::isOfType(Step::ClassType t) {
  return IfcObjectReferenceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcObjectReferenceSelect::currentTypeName() {
  switch(m_type) {
  case IFCMATERIAL:
    return "IfcMaterial";
    break;
  case IFCPERSON:
    return "IfcPerson";
    break;
  case IFCDATEANDTIME:
    return "IfcDateAndTime";
    break;
  case IFCMATERIALLIST:
    return "IfcMaterialList";
    break;
  case IFCORGANIZATION:
    return "IfcOrganization";
    break;
  case IFCCALENDARDATE:
    return "IfcCalendarDate";
    break;
  case IFCLOCALTIME:
    return "IfcLocalTime";
    break;
  case IFCPERSONANDORGANIZATION:
    return "IfcPersonAndOrganization";
    break;
  case IFCMATERIALLAYER:
    return "IfcMaterialLayer";
    break;
  case IFCEXTERNALREFERENCE:
    return "IfcExternalReference";
    break;
  case IFCTIMESERIES:
    return "IfcTimeSeries";
    break;
  case IFCADDRESS:
    return "IfcAddress";
    break;
  case IFCAPPLIEDVALUE:
    return "IfcAppliedValue";
    break;
  default:
    return "UNSET";
  }
}

IfcObjectReferenceSelect::IfcObjectReferenceSelect_select IfcObjectReferenceSelect::currentType() {
  return m_type;
}

void IfcObjectReferenceSelect::deleteUnion() {
  switch(m_type) {
  case IFCMATERIAL:
    m_IfcObjectReferenceSelect_union.m_IfcMaterial->unref();
    break;
  case IFCPERSON:
    m_IfcObjectReferenceSelect_union.m_IfcPerson->unref();
    break;
  case IFCDATEANDTIME:
    m_IfcObjectReferenceSelect_union.m_IfcDateAndTime->unref();
    break;
  case IFCMATERIALLIST:
    m_IfcObjectReferenceSelect_union.m_IfcMaterialList->unref();
    break;
  case IFCORGANIZATION:
    m_IfcObjectReferenceSelect_union.m_IfcOrganization->unref();
    break;
  case IFCCALENDARDATE:
    m_IfcObjectReferenceSelect_union.m_IfcCalendarDate->unref();
    break;
  case IFCLOCALTIME:
    m_IfcObjectReferenceSelect_union.m_IfcLocalTime->unref();
    break;
  case IFCPERSONANDORGANIZATION:
    m_IfcObjectReferenceSelect_union.m_IfcPersonAndOrganization->unref();
    break;
  case IFCMATERIALLAYER:
    m_IfcObjectReferenceSelect_union.m_IfcMaterialLayer->unref();
    break;
  case IFCEXTERNALREFERENCE:
    m_IfcObjectReferenceSelect_union.m_IfcExternalReference->unref();
    break;
  case IFCTIMESERIES:
    m_IfcObjectReferenceSelect_union.m_IfcTimeSeries->unref();
    break;
  case IFCADDRESS:
    m_IfcObjectReferenceSelect_union.m_IfcAddress->unref();
    break;
  case IFCAPPLIEDVALUE:
    m_IfcObjectReferenceSelect_union.m_IfcAppliedValue->unref();
    break;
    }
  m_type = UNSET;
}

IfcMaterial *IfcObjectReferenceSelect::getIfcMaterial() {
  return m_IfcObjectReferenceSelect_union.m_IfcMaterial;
}

void IfcObjectReferenceSelect::setIfcMaterial(IfcMaterial *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcMaterial = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIAL;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIAL;
}

IfcPerson *IfcObjectReferenceSelect::getIfcPerson() {
  return m_IfcObjectReferenceSelect_union.m_IfcPerson;
}

void IfcObjectReferenceSelect::setIfcPerson(IfcPerson *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcPerson = value;
  if (value) {
    value->ref();
    m_type = IFCPERSON;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPERSON;
}

IfcDateAndTime *IfcObjectReferenceSelect::getIfcDateAndTime() {
  return m_IfcObjectReferenceSelect_union.m_IfcDateAndTime;
}

void IfcObjectReferenceSelect::setIfcDateAndTime(IfcDateAndTime *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcDateAndTime = value;
  if (value) {
    value->ref();
    m_type = IFCDATEANDTIME;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCDATEANDTIME;
}

IfcMaterialList *IfcObjectReferenceSelect::getIfcMaterialList() {
  return m_IfcObjectReferenceSelect_union.m_IfcMaterialList;
}

void IfcObjectReferenceSelect::setIfcMaterialList(IfcMaterialList *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcMaterialList = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIALLIST;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIALLIST;
}

IfcOrganization *IfcObjectReferenceSelect::getIfcOrganization() {
  return m_IfcObjectReferenceSelect_union.m_IfcOrganization;
}

void IfcObjectReferenceSelect::setIfcOrganization(IfcOrganization *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcOrganization = value;
  if (value) {
    value->ref();
    m_type = IFCORGANIZATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCORGANIZATION;
}

IfcCalendarDate *IfcObjectReferenceSelect::getIfcCalendarDate() {
  return m_IfcObjectReferenceSelect_union.m_IfcCalendarDate;
}

void IfcObjectReferenceSelect::setIfcCalendarDate(IfcCalendarDate *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcCalendarDate = value;
  if (value) {
    value->ref();
    m_type = IFCCALENDARDATE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCALENDARDATE;
}

IfcLocalTime *IfcObjectReferenceSelect::getIfcLocalTime() {
  return m_IfcObjectReferenceSelect_union.m_IfcLocalTime;
}

void IfcObjectReferenceSelect::setIfcLocalTime(IfcLocalTime *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcLocalTime = value;
  if (value) {
    value->ref();
    m_type = IFCLOCALTIME;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCLOCALTIME;
}

IfcPersonAndOrganization *IfcObjectReferenceSelect::getIfcPersonAndOrganization() {
  return m_IfcObjectReferenceSelect_union.m_IfcPersonAndOrganization;
}

void IfcObjectReferenceSelect::setIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcPersonAndOrganization = value;
  if (value) {
    value->ref();
    m_type = IFCPERSONANDORGANIZATION;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPERSONANDORGANIZATION;
}

IfcMaterialLayer *IfcObjectReferenceSelect::getIfcMaterialLayer() {
  return m_IfcObjectReferenceSelect_union.m_IfcMaterialLayer;
}

void IfcObjectReferenceSelect::setIfcMaterialLayer(IfcMaterialLayer *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcMaterialLayer = value;
  if (value) {
    value->ref();
    m_type = IFCMATERIALLAYER;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCMATERIALLAYER;
}

IfcExternalReference *IfcObjectReferenceSelect::getIfcExternalReference() {
  return m_IfcObjectReferenceSelect_union.m_IfcExternalReference;
}

void IfcObjectReferenceSelect::setIfcExternalReference(IfcExternalReference *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcExternalReference = value;
  if (value) {
    value->ref();
    m_type = IFCEXTERNALREFERENCE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCEXTERNALREFERENCE;
}

IfcTimeSeries *IfcObjectReferenceSelect::getIfcTimeSeries() {
  return m_IfcObjectReferenceSelect_union.m_IfcTimeSeries;
}

void IfcObjectReferenceSelect::setIfcTimeSeries(IfcTimeSeries *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcTimeSeries = value;
  if (value) {
    value->ref();
    m_type = IFCTIMESERIES;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTIMESERIES;
}

IfcAddress *IfcObjectReferenceSelect::getIfcAddress() {
  return m_IfcObjectReferenceSelect_union.m_IfcAddress;
}

void IfcObjectReferenceSelect::setIfcAddress(IfcAddress *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcAddress = value;
  if (value) {
    value->ref();
    m_type = IFCADDRESS;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCADDRESS;
}

IfcAppliedValue *IfcObjectReferenceSelect::getIfcAppliedValue() {
  return m_IfcObjectReferenceSelect_union.m_IfcAppliedValue;
}

void IfcObjectReferenceSelect::setIfcAppliedValue(IfcAppliedValue *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcObjectReferenceSelect_union.m_IfcAppliedValue = value;
  if (value) {
    value->ref();
    m_type = IFCAPPLIEDVALUE;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCAPPLIEDVALUE;
}

void IfcObjectReferenceSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcMaterial::getClassType())) {
    setIfcMaterial(static_cast< IfcMaterial* > (v));
  }
  else if (v->isOfType(IfcPerson::getClassType())) {
    setIfcPerson(static_cast< IfcPerson* > (v));
  }
  else if (v->isOfType(IfcDateAndTime::getClassType())) {
    setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
  }
  else if (v->isOfType(IfcMaterialList::getClassType())) {
    setIfcMaterialList(static_cast< IfcMaterialList* > (v));
  }
  else if (v->isOfType(IfcOrganization::getClassType())) {
    setIfcOrganization(static_cast< IfcOrganization* > (v));
  }
  else if (v->isOfType(IfcCalendarDate::getClassType())) {
    setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
  }
  else if (v->isOfType(IfcLocalTime::getClassType())) {
    setIfcLocalTime(static_cast< IfcLocalTime* > (v));
  }
  else if (v->isOfType(IfcPersonAndOrganization::getClassType())) {
    setIfcPersonAndOrganization(static_cast< IfcPersonAndOrganization* > (v));
  }
  else if (v->isOfType(IfcMaterialLayer::getClassType())) {
    setIfcMaterialLayer(static_cast< IfcMaterialLayer* > (v));
  }
  else if (v->isOfType(IfcExternalReference::getClassType())) {
    setIfcExternalReference(static_cast< IfcExternalReference* > (v));
  }
  else if (v->isOfType(IfcTimeSeries::getClassType())) {
    setIfcTimeSeries(static_cast< IfcTimeSeries* > (v));
  }
  else if (v->isOfType(IfcAddress::getClassType())) {
    setIfcAddress(static_cast< IfcAddress* > (v));
  }
  else if (v->isOfType(IfcAppliedValue::getClassType())) {
    setIfcAppliedValue(static_cast< IfcAppliedValue* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcObjectReferenceSelect::s_type = new Step::ClassType_class("IfcObjectReferenceSelect");
