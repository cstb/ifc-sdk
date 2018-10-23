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


#include <ifc2x3/IfcMetricValueSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcCostValue.h>



using namespace ifc2x3;

IfcMetricValueSelect::IfcMetricValueSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcMetricValueSelect::IfcMetricValueSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcMetricValueSelect::~IfcMetricValueSelect()
{
    deleteUnion();
}

bool IfcMetricValueSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMetricValueSelect(this);
}

bool IfcMetricValueSelect::init()
{
    return false;
}

void IfcMetricValueSelect::copy(const IfcMetricValueSelect &obj, const CopyOp &copyop)
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
    case IFCMEASUREWITHUNIT :
        setIfcMeasureWithUnit((IfcMeasureWithUnit*)(copyop(obj.m_union.m_IfcMeasureWithUnit)));
        break;
    case IFCTABLE :
        setIfcTable((IfcTable*)(copyop(obj.m_union.m_IfcTable)));
        break;
    case IFCTEXT :
        setIfcText(*obj.m_union.m_IfcText);
        break;
    case IFCTIMESERIES :
        setIfcTimeSeries((IfcTimeSeries*)(copyop(obj.m_union.m_IfcTimeSeries)));
        break;
    case IFCCOSTVALUE :
        setIfcCostValue((IfcCostValue*)(copyop(obj.m_union.m_IfcCostValue)));
        break;
    default:
        break;
    }
}

std::string IfcMetricValueSelect::currentTypeName() const
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
    case IFCMEASUREWITHUNIT :
        return "IfcMeasureWithUnit";
        break;
    case IFCTABLE :
        return "IfcTable";
        break;
    case IFCTEXT :
        return "IfcText";
        break;
    case IFCTIMESERIES :
        return "IfcTimeSeries";
        break;
    case IFCCOSTVALUE :
        return "IfcCostValue";
        break;
    default:
        return "UNSET";
    }
}

IfcMetricValueSelect::IfcMetricValueSelect_select IfcMetricValueSelect::currentType() const 
{
    return m_type;
}

void IfcMetricValueSelect::deleteUnion() 
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
    case IFCMEASUREWITHUNIT :
        m_union.m_IfcMeasureWithUnit->unref();
        break;
    case IFCTABLE :
        m_union.m_IfcTable->unref();
        break;
    case IFCTEXT :
        delete m_union.m_IfcText;
        break;
    case IFCTIMESERIES :
        m_union.m_IfcTimeSeries->unref();
        break;
    case IFCCOSTVALUE :
        m_union.m_IfcCostValue->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcCalendarDate *IfcMetricValueSelect::getIfcCalendarDate() const
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

void IfcMetricValueSelect::setIfcCalendarDate(IfcCalendarDate *value)
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

IfcLocalTime *IfcMetricValueSelect::getIfcLocalTime() const
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

void IfcMetricValueSelect::setIfcLocalTime(IfcLocalTime *value)
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

IfcDateAndTime *IfcMetricValueSelect::getIfcDateAndTime() const
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

void IfcMetricValueSelect::setIfcDateAndTime(IfcDateAndTime *value)
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

IfcMeasureWithUnit *IfcMetricValueSelect::getIfcMeasureWithUnit() const
{
    if (m_type == IFCMEASUREWITHUNIT ) 
    {
        return m_union.m_IfcMeasureWithUnit;
    }
    else 
    {
        return NULL;
    }    
}

void IfcMetricValueSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcMeasureWithUnit = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCMEASUREWITHUNIT ;
}

IfcTable *IfcMetricValueSelect::getIfcTable() const
{
    if (m_type == IFCTABLE ) 
    {
        return m_union.m_IfcTable;
    }
    else 
    {
        return NULL;
    }    
}

void IfcMetricValueSelect::setIfcTable(IfcTable *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcTable = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCTABLE ;
}

IfcText IfcMetricValueSelect::getIfcText() const
{
    if (m_type == IFCTEXT ) 
    {
        return *m_union.m_IfcText;
    }
    else 
    {
        return Step::getUnset(*m_union.m_IfcText);
    }    
}

void IfcMetricValueSelect::setIfcText(const IfcText &value)
{
    m_union.m_IfcText = new IfcText(value);
    m_type = IFCTEXT ;
}

IfcTimeSeries *IfcMetricValueSelect::getIfcTimeSeries() const
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

void IfcMetricValueSelect::setIfcTimeSeries(IfcTimeSeries *value)
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

IfcCostValue *IfcMetricValueSelect::getIfcCostValue() const
{
    if (m_type == IFCCOSTVALUE ) 
    {
        return m_union.m_IfcCostValue;
    }
    else 
    {
        return NULL;
    }    
}

void IfcMetricValueSelect::setIfcCostValue(IfcCostValue *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcCostValue = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCOSTVALUE ;
}

void IfcMetricValueSelect::set(Step::BaseObject *v) 
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
        if (v->isOfType(IfcMeasureWithUnit::getClassType())) 
        {
            setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
            return;
        }
        if (v->isOfType(IfcTable::getClassType())) 
        {
            setIfcTable(static_cast< IfcTable* > (v));
            return;
        }
        if (v->isOfType(IfcTimeSeries::getClassType())) 
        {
            setIfcTimeSeries(static_cast< IfcTimeSeries* > (v));
            return;
        }
        if (v->isOfType(IfcCostValue::getClassType())) 
        {
            setIfcCostValue(static_cast< IfcCostValue* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcMetricValueSelect, Step::BaseObject)
