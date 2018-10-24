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


#include <ifc2x3/IfcTimeSeries.h>

#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/IfcTimeSeriesReferenceRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTimeSeries::IfcTimeSeries(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_StartTime = NULL;
    m_EndTime = NULL;
    m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
    m_DataOrigin = IfcDataOriginEnum_UNSET;
    m_UserDefinedDataOrigin = Step::getUnset(m_UserDefinedDataOrigin);
    m_Unit = NULL;
}

IfcTimeSeries::~IfcTimeSeries()
{}

bool IfcTimeSeries::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTimeSeries(this);
}


IfcLabel IfcTimeSeries::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcTimeSeries::getName() const
{
    return const_cast<IfcTimeSeries *>(this)->getName();
}

void IfcTimeSeries::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcTimeSeries::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcTimeSeries::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcTimeSeries::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcTimeSeries::getDescription() const
{
    return const_cast<IfcTimeSeries *>(this)->getDescription();
}

void IfcTimeSeries::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcTimeSeries::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcTimeSeries::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}


IfcDateTimeSelect *IfcTimeSeries::getStartTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StartTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcTimeSeries::getStartTime() const
{
    return const_cast<IfcTimeSeries *>(this)->getStartTime();
}

void IfcTimeSeries::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartTime = value;
}

void IfcTimeSeries::unsetStartTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartTime = Step::getUnset(getStartTime());
}

bool IfcTimeSeries::testStartTime() const
{
    return Step::isUnset(getStartTime()) == false;
}


IfcDateTimeSelect *IfcTimeSeries::getEndTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EndTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcTimeSeries::getEndTime() const
{
    return const_cast<IfcTimeSeries *>(this)->getEndTime();
}

void IfcTimeSeries::setEndTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndTime = value;
}

void IfcTimeSeries::unsetEndTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndTime = Step::getUnset(getEndTime());
}

bool IfcTimeSeries::testEndTime() const
{
    return Step::isUnset(getEndTime()) == false;
}


IfcTimeSeriesDataTypeEnum IfcTimeSeries::getTimeSeriesDataType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeSeriesDataType;
    }
    else 
    {
        return IfcTimeSeriesDataTypeEnum_UNSET;
    }    
}

IfcTimeSeriesDataTypeEnum IfcTimeSeries::getTimeSeriesDataType() const
{
    return const_cast<IfcTimeSeries *>(this)->getTimeSeriesDataType();
}

void IfcTimeSeries::setTimeSeriesDataType(IfcTimeSeriesDataTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeriesDataType = value;
}

void IfcTimeSeries::unsetTimeSeriesDataType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
}

bool IfcTimeSeries::testTimeSeriesDataType() const
{
    return Step::isUnset(getTimeSeriesDataType()) == false;
}


IfcDataOriginEnum IfcTimeSeries::getDataOrigin()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DataOrigin;
    }
    else 
    {
        return IfcDataOriginEnum_UNSET;
    }    
}

IfcDataOriginEnum IfcTimeSeries::getDataOrigin() const
{
    return const_cast<IfcTimeSeries *>(this)->getDataOrigin();
}

void IfcTimeSeries::setDataOrigin(IfcDataOriginEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DataOrigin = value;
}

void IfcTimeSeries::unsetDataOrigin()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DataOrigin = IfcDataOriginEnum_UNSET;
}

bool IfcTimeSeries::testDataOrigin() const
{
    return Step::isUnset(getDataOrigin()) == false;
}


IfcLabel IfcTimeSeries::getUserDefinedDataOrigin()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedDataOrigin;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedDataOrigin);
    }    
}

const IfcLabel IfcTimeSeries::getUserDefinedDataOrigin() const
{
    return const_cast<IfcTimeSeries *>(this)->getUserDefinedDataOrigin();
}

void IfcTimeSeries::setUserDefinedDataOrigin(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedDataOrigin = value;
}

void IfcTimeSeries::unsetUserDefinedDataOrigin()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedDataOrigin = Step::getUnset(getUserDefinedDataOrigin());
}

bool IfcTimeSeries::testUserDefinedDataOrigin() const
{
    return Step::isUnset(getUserDefinedDataOrigin()) == false;
}


IfcUnit *IfcTimeSeries::getUnit()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Unit.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcUnit *IfcTimeSeries::getUnit() const
{
    return const_cast<IfcTimeSeries *>(this)->getUnit();
}

void IfcTimeSeries::setUnit(const Step::RefPtr< IfcUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = value;
}

void IfcTimeSeries::unsetUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = Step::getUnset(getUnit());
}

bool IfcTimeSeries::testUnit() const
{
    return Step::isUnset(getUnit()) == false;
}

Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &IfcTimeSeries::getDocumentedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_DocumentedBy;
    }
 
    m_DocumentedBy.setUnset(true);
    return m_DocumentedBy;
}

const Inverse_Set_IfcTimeSeriesReferenceRelationship_0_1 &IfcTimeSeries::getDocumentedBy() const
{
    return  const_cast< IfcTimeSeries * > (this)->getDocumentedBy();
}

bool IfcTimeSeries::testDocumentedBy() const
{
    return m_DocumentedBy.isUnset() == false;
}

bool IfcTimeSeries::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StartTime = NULL;
    }
    else
    {
        m_StartTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_StartTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EndTime = NULL;
    }
    else
    {
        m_EndTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_EndTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CONTINUOUS.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_CONTINUOUS;
        }
        else if (arg == ".DISCRETE.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_DISCRETE;
        }
        else if (arg == ".DISCRETEBINARY.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_DISCRETEBINARY;
        }
        else if (arg == ".PIECEWISEBINARY.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_PIECEWISEBINARY;
        }
        else if (arg == ".PIECEWISECONSTANT.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_PIECEWISECONSTANT;
        }
        else if (arg == ".PIECEWISECONTINUOUS.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_PIECEWISECONTINUOUS;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DataOrigin = IfcDataOriginEnum_UNSET;
    }
    else
    {
        if (arg == ".MEASURED.")
        {
            m_DataOrigin = IfcDataOriginEnum_MEASURED;
        }
        else if (arg == ".PREDICTED.")
        {
            m_DataOrigin = IfcDataOriginEnum_PREDICTED;
        }
        else if (arg == ".SIMULATED.")
        {
            m_DataOrigin = IfcDataOriginEnum_SIMULATED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_DataOrigin = IfcDataOriginEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_DataOrigin = IfcDataOriginEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedDataOrigin = Step::getUnset(m_UserDefinedDataOrigin);
    }
    else
    {
        m_UserDefinedDataOrigin = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Unit = NULL;
    }
    else
    {
        m_Unit = new IfcUnit;
        if (arg[0] == '#') {
            m_Unit->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcTimeSeriesReferenceRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_DocumentedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_DocumentedBy.insert(static_cast< IfcTimeSeriesReferenceRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTimeSeries::copy(const IfcTimeSeries &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setStartTime((IfcDateTimeSelect*)copyop(obj.m_StartTime.get()));
    setEndTime((IfcDateTimeSelect*)copyop(obj.m_EndTime.get()));
    setTimeSeriesDataType(obj.m_TimeSeriesDataType);
    setDataOrigin(obj.m_DataOrigin);
    setUserDefinedDataOrigin(obj.m_UserDefinedDataOrigin);
    setUnit((IfcUnit*)copyop(obj.m_Unit.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTimeSeries, Step::BaseEntity)
