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


#include <ifc2x3/IfcDateTimeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcDateAndTime.h>



using namespace ifc2x3;

IfcDateTimeSelect::IfcDateTimeSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcDateTimeSelect::IfcDateTimeSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcDateTimeSelect::~IfcDateTimeSelect()
{
    deleteUnion();
}

bool IfcDateTimeSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDateTimeSelect(this);
}

bool IfcDateTimeSelect::init()
{
    return false;
}

void IfcDateTimeSelect::copy(const IfcDateTimeSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCCALENDARDATE :
        setIfcCalendarDate((IfcCalendarDate*)(copyop(obj.m_union.m_IfcCalendarDate)));
        break;
    case IFCLOCALTIME :
        setIfcLocalTime((IfcLocalTime*)(copyop(obj.m_union.m_IfcLocalTime)));
        break;
    case IFCDATEANDTIME :
        setIfcDateAndTime((IfcDateAndTime*)(copyop(obj.m_union.m_IfcDateAndTime)));
        break;
    default:
        break;
    }
}

std::string IfcDateTimeSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCCALENDARDATE :
        return "IfcCalendarDate";
        break;
    case IFCLOCALTIME :
        return "IfcLocalTime";
        break;
    case IFCDATEANDTIME :
        return "IfcDateAndTime";
        break;
    default:
        return "UNSET";
    }
}

IfcDateTimeSelect::IfcDateTimeSelect_select IfcDateTimeSelect::currentType() const 
{
    return m_type;
}

void IfcDateTimeSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCCALENDARDATE :
        m_union.m_IfcCalendarDate->unref();
        break;
    case IFCLOCALTIME :
        m_union.m_IfcLocalTime->unref();
        break;
    case IFCDATEANDTIME :
        m_union.m_IfcDateAndTime->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcCalendarDate *IfcDateTimeSelect::getIfcCalendarDate() const
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

void IfcDateTimeSelect::setIfcCalendarDate(IfcCalendarDate *value)
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

IfcLocalTime *IfcDateTimeSelect::getIfcLocalTime() const
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

void IfcDateTimeSelect::setIfcLocalTime(IfcLocalTime *value)
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

IfcDateAndTime *IfcDateTimeSelect::getIfcDateAndTime() const
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

void IfcDateTimeSelect::setIfcDateAndTime(IfcDateAndTime *value)
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

void IfcDateTimeSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
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
        if (v->isOfType(IfcDateAndTime::getClassType())) 
        {
            setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcDateTimeSelect, Step::BaseObject)
