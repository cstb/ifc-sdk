// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.


#include <ifc2x3/IfcObjectReferenceSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcMaterialList.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcMaterialLayer.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcAppliedValue.h>



using namespace ifc2x3;

IfcObjectReferenceSelect::IfcObjectReferenceSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcObjectReferenceSelect::IfcObjectReferenceSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcObjectReferenceSelect::~IfcObjectReferenceSelect()
{
    deleteUnion();
}

bool IfcObjectReferenceSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcObjectReferenceSelect(this);
}

bool IfcObjectReferenceSelect::init()
{
    return false;
}

void IfcObjectReferenceSelect::copy(const IfcObjectReferenceSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCMATERIAL :
        setIfcMaterial((IfcMaterial*)(copyop(obj.m_union.m_IfcMaterial)));
        break;
    case IFCPERSON :
        setIfcPerson((IfcPerson*)(copyop(obj.m_union.m_IfcPerson)));
        break;
    case IFCDATEANDTIME :
        setIfcDateAndTime((IfcDateAndTime*)(copyop(obj.m_union.m_IfcDateAndTime)));
        break;
    case IFCMATERIALLIST :
        setIfcMaterialList((IfcMaterialList*)(copyop(obj.m_union.m_IfcMaterialList)));
        break;
    case IFCORGANIZATION :
        setIfcOrganization((IfcOrganization*)(copyop(obj.m_union.m_IfcOrganization)));
        break;
    case IFCCALENDARDATE :
        setIfcCalendarDate((IfcCalendarDate*)(copyop(obj.m_union.m_IfcCalendarDate)));
        break;
    case IFCLOCALTIME :
        setIfcLocalTime((IfcLocalTime*)(copyop(obj.m_union.m_IfcLocalTime)));
        break;
    case IFCPERSONANDORGANIZATION :
        setIfcPersonAndOrganization((IfcPersonAndOrganization*)(copyop(obj.m_union.m_IfcPersonAndOrganization)));
        break;
    case IFCMATERIALLAYER :
        setIfcMaterialLayer((IfcMaterialLayer*)(copyop(obj.m_union.m_IfcMaterialLayer)));
        break;
    case IFCEXTERNALREFERENCE :
        setIfcExternalReference((IfcExternalReference*)(copyop(obj.m_union.m_IfcExternalReference)));
        break;
    case IFCTIMESERIES :
        setIfcTimeSeries((IfcTimeSeries*)(copyop(obj.m_union.m_IfcTimeSeries)));
        break;
    case IFCADDRESS :
        setIfcAddress((IfcAddress*)(copyop(obj.m_union.m_IfcAddress)));
        break;
    case IFCAPPLIEDVALUE :
        setIfcAppliedValue((IfcAppliedValue*)(copyop(obj.m_union.m_IfcAppliedValue)));
        break;
    default:
        break;
    }
}

std::string IfcObjectReferenceSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCMATERIAL :
        return "IfcMaterial";
        break;
    case IFCPERSON :
        return "IfcPerson";
        break;
    case IFCDATEANDTIME :
        return "IfcDateAndTime";
        break;
    case IFCMATERIALLIST :
        return "IfcMaterialList";
        break;
    case IFCORGANIZATION :
        return "IfcOrganization";
        break;
    case IFCCALENDARDATE :
        return "IfcCalendarDate";
        break;
    case IFCLOCALTIME :
        return "IfcLocalTime";
        break;
    case IFCPERSONANDORGANIZATION :
        return "IfcPersonAndOrganization";
        break;
    case IFCMATERIALLAYER :
        return "IfcMaterialLayer";
        break;
    case IFCEXTERNALREFERENCE :
        return "IfcExternalReference";
        break;
    case IFCTIMESERIES :
        return "IfcTimeSeries";
        break;
    case IFCADDRESS :
        return "IfcAddress";
        break;
    case IFCAPPLIEDVALUE :
        return "IfcAppliedValue";
        break;
    default:
        return "UNSET";
    }
}

IfcObjectReferenceSelect::IfcObjectReferenceSelect_select IfcObjectReferenceSelect::currentType() const 
{
    return m_type;
}

void IfcObjectReferenceSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCMATERIAL :
        m_union.m_IfcMaterial->unref();
        break;
    case IFCPERSON :
        m_union.m_IfcPerson->unref();
        break;
    case IFCDATEANDTIME :
        m_union.m_IfcDateAndTime->unref();
        break;
    case IFCMATERIALLIST :
        m_union.m_IfcMaterialList->unref();
        break;
    case IFCORGANIZATION :
        m_union.m_IfcOrganization->unref();
        break;
    case IFCCALENDARDATE :
        m_union.m_IfcCalendarDate->unref();
        break;
    case IFCLOCALTIME :
        m_union.m_IfcLocalTime->unref();
        break;
    case IFCPERSONANDORGANIZATION :
        m_union.m_IfcPersonAndOrganization->unref();
        break;
    case IFCMATERIALLAYER :
        m_union.m_IfcMaterialLayer->unref();
        break;
    case IFCEXTERNALREFERENCE :
        m_union.m_IfcExternalReference->unref();
        break;
    case IFCTIMESERIES :
        m_union.m_IfcTimeSeries->unref();
        break;
    case IFCADDRESS :
        m_union.m_IfcAddress->unref();
        break;
    case IFCAPPLIEDVALUE :
        m_union.m_IfcAppliedValue->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcMaterial *IfcObjectReferenceSelect::getIfcMaterial() const
{
    if (m_type == IFCMATERIAL ) 
    {
        return m_union.m_IfcMaterial;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcMaterial(IfcMaterial *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcMaterial = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCMATERIAL ;
}

IfcPerson *IfcObjectReferenceSelect::getIfcPerson() const
{
    if (m_type == IFCPERSON ) 
    {
        return m_union.m_IfcPerson;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcPerson(IfcPerson *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcPerson = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCPERSON ;
}

IfcDateAndTime *IfcObjectReferenceSelect::getIfcDateAndTime() const
{
    if (m_type == IFCDATEANDTIME ) 
    {
        return m_union.m_IfcDateAndTime;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcDateAndTime(IfcDateAndTime *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcDateAndTime = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCDATEANDTIME ;
}

IfcMaterialList *IfcObjectReferenceSelect::getIfcMaterialList() const
{
    if (m_type == IFCMATERIALLIST ) 
    {
        return m_union.m_IfcMaterialList;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcMaterialList(IfcMaterialList *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcMaterialList = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCMATERIALLIST ;
}

IfcOrganization *IfcObjectReferenceSelect::getIfcOrganization() const
{
    if (m_type == IFCORGANIZATION ) 
    {
        return m_union.m_IfcOrganization;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcOrganization(IfcOrganization *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcOrganization = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCORGANIZATION ;
}

IfcCalendarDate *IfcObjectReferenceSelect::getIfcCalendarDate() const
{
    if (m_type == IFCCALENDARDATE ) 
    {
        return m_union.m_IfcCalendarDate;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcCalendarDate(IfcCalendarDate *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcCalendarDate = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCALENDARDATE ;
}

IfcLocalTime *IfcObjectReferenceSelect::getIfcLocalTime() const
{
    if (m_type == IFCLOCALTIME ) 
    {
        return m_union.m_IfcLocalTime;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcLocalTime(IfcLocalTime *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcLocalTime = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCLOCALTIME ;
}

IfcPersonAndOrganization *IfcObjectReferenceSelect::getIfcPersonAndOrganization() const
{
    if (m_type == IFCPERSONANDORGANIZATION ) 
    {
        return m_union.m_IfcPersonAndOrganization;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcPersonAndOrganization(IfcPersonAndOrganization *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcPersonAndOrganization = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCPERSONANDORGANIZATION ;
}

IfcMaterialLayer *IfcObjectReferenceSelect::getIfcMaterialLayer() const
{
    if (m_type == IFCMATERIALLAYER ) 
    {
        return m_union.m_IfcMaterialLayer;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcMaterialLayer(IfcMaterialLayer *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcMaterialLayer = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCMATERIALLAYER ;
}

IfcExternalReference *IfcObjectReferenceSelect::getIfcExternalReference() const
{
    if (m_type == IFCEXTERNALREFERENCE ) 
    {
        return m_union.m_IfcExternalReference;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcExternalReference(IfcExternalReference *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcExternalReference = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCEXTERNALREFERENCE ;
}

IfcTimeSeries *IfcObjectReferenceSelect::getIfcTimeSeries() const
{
    if (m_type == IFCTIMESERIES ) 
    {
        return m_union.m_IfcTimeSeries;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcTimeSeries(IfcTimeSeries *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcTimeSeries = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCTIMESERIES ;
}

IfcAddress *IfcObjectReferenceSelect::getIfcAddress() const
{
    if (m_type == IFCADDRESS ) 
    {
        return m_union.m_IfcAddress;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcAddress(IfcAddress *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcAddress = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCADDRESS ;
}

IfcAppliedValue *IfcObjectReferenceSelect::getIfcAppliedValue() const
{
    if (m_type == IFCAPPLIEDVALUE ) 
    {
        return m_union.m_IfcAppliedValue;
    }
    else 
    {
        return NULL;
    }    
}

void IfcObjectReferenceSelect::setIfcAppliedValue(IfcAppliedValue *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcAppliedValue = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCAPPLIEDVALUE ;
}

void IfcObjectReferenceSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcMaterial::getClassType())) 
        {
            setIfcMaterial(static_cast< IfcMaterial* > (v));
            return;
        }
        if (v->isOfType(IfcPerson::getClassType())) 
        {
            setIfcPerson(static_cast< IfcPerson* > (v));
            return;
        }
        if (v->isOfType(IfcDateAndTime::getClassType())) 
        {
            setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
            return;
        }
        if (v->isOfType(IfcMaterialList::getClassType())) 
        {
            setIfcMaterialList(static_cast< IfcMaterialList* > (v));
            return;
        }
        if (v->isOfType(IfcOrganization::getClassType())) 
        {
            setIfcOrganization(static_cast< IfcOrganization* > (v));
            return;
        }
        if (v->isOfType(IfcCalendarDate::getClassType())) 
        {
            setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
            return;
        }
        if (v->isOfType(IfcLocalTime::getClassType())) 
        {
            setIfcLocalTime(static_cast< IfcLocalTime* > (v));
            return;
        }
        if (v->isOfType(IfcPersonAndOrganization::getClassType())) 
        {
            setIfcPersonAndOrganization(static_cast< IfcPersonAndOrganization* > (v));
            return;
        }
        if (v->isOfType(IfcMaterialLayer::getClassType())) 
        {
            setIfcMaterialLayer(static_cast< IfcMaterialLayer* > (v));
            return;
        }
        if (v->isOfType(IfcExternalReference::getClassType())) 
        {
            setIfcExternalReference(static_cast< IfcExternalReference* > (v));
            return;
        }
        if (v->isOfType(IfcTimeSeries::getClassType())) 
        {
            setIfcTimeSeries(static_cast< IfcTimeSeries* > (v));
            return;
        }
        if (v->isOfType(IfcAddress::getClassType())) 
        {
            setIfcAddress(static_cast< IfcAddress* > (v));
            return;
        }
        if (v->isOfType(IfcAppliedValue::getClassType())) 
        {
            setIfcAppliedValue(static_cast< IfcAppliedValue* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcObjectReferenceSelect, Step::BaseObject)
