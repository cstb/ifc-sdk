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


#include <ifc2x3/IfcObjective.h>

#include <ifc2x3/IfcMetric.h>
#include <ifc2x3/IfcMetric.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcObjective::IfcObjective(Step::Id id, Step::SPFData *args) : 
    IfcConstraint(id, args)
{
    m_BenchmarkValues = NULL;
    m_ResultValues = NULL;
    m_ObjectiveQualifier = IfcObjectiveEnum_UNSET;
    m_UserDefinedQualifier = Step::getUnset(m_UserDefinedQualifier);
}

IfcObjective::~IfcObjective()
{}

bool IfcObjective::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcObjective(this);
}


IfcMetric *IfcObjective::getBenchmarkValues()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BenchmarkValues.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMetric *IfcObjective::getBenchmarkValues() const
{
    return const_cast<IfcObjective *>(this)->getBenchmarkValues();
}

void IfcObjective::setBenchmarkValues(const Step::RefPtr< IfcMetric > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BenchmarkValues = value;
}

void IfcObjective::unsetBenchmarkValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BenchmarkValues = Step::getUnset(getBenchmarkValues());
}

bool IfcObjective::testBenchmarkValues() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBenchmarkValues()) == false;
}


IfcMetric *IfcObjective::getResultValues()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ResultValues.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMetric *IfcObjective::getResultValues() const
{
    return const_cast<IfcObjective *>(this)->getResultValues();
}

void IfcObjective::setResultValues(const Step::RefPtr< IfcMetric > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResultValues = value;
}

void IfcObjective::unsetResultValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResultValues = Step::getUnset(getResultValues());
}

bool IfcObjective::testResultValues() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getResultValues()) == false;
}


IfcObjectiveEnum IfcObjective::getObjectiveQualifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ObjectiveQualifier;
    }
    else 
    {
        return IfcObjectiveEnum_UNSET;
    }    
}

IfcObjectiveEnum IfcObjective::getObjectiveQualifier() const
{
    return const_cast<IfcObjective *>(this)->getObjectiveQualifier();
}

void IfcObjective::setObjectiveQualifier(IfcObjectiveEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ObjectiveQualifier = value;
}

void IfcObjective::unsetObjectiveQualifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ObjectiveQualifier = IfcObjectiveEnum_UNSET;
}

bool IfcObjective::testObjectiveQualifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getObjectiveQualifier()) == false;
}


IfcLabel IfcObjective::getUserDefinedQualifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedQualifier;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedQualifier);
    }    
}

const IfcLabel IfcObjective::getUserDefinedQualifier() const
{
    return const_cast<IfcObjective *>(this)->getUserDefinedQualifier();
}

void IfcObjective::setUserDefinedQualifier(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedQualifier = value;
}

void IfcObjective::unsetUserDefinedQualifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedQualifier = Step::getUnset(getUserDefinedQualifier());
}

bool IfcObjective::testUserDefinedQualifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUserDefinedQualifier()) == false;
}

bool IfcObjective::init()
{
    if (IfcConstraint::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BenchmarkValues = NULL;
    }
    else
    {
        m_BenchmarkValues = static_cast< IfcMetric * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ResultValues = NULL;
    }
    else
    {
        m_ResultValues = static_cast< IfcMetric * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ObjectiveQualifier = IfcObjectiveEnum_UNSET;
    }
    else
    {
        if (arg == ".CODECOMPLIANCE.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_CODECOMPLIANCE;
        }
        else if (arg == ".DESIGNINTENT.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_DESIGNINTENT;
        }
        else if (arg == ".HEALTHANDSAFETY.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_HEALTHANDSAFETY;
        }
        else if (arg == ".REQUIREMENT.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_REQUIREMENT;
        }
        else if (arg == ".SPECIFICATION.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_SPECIFICATION;
        }
        else if (arg == ".TRIGGERCONDITION.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_TRIGGERCONDITION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ObjectiveQualifier = IfcObjectiveEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedQualifier = Step::getUnset(m_UserDefinedQualifier);
    }
    else
    {
        m_UserDefinedQualifier = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcObjective::copy(const IfcObjective &obj, const CopyOp &copyop)
{
    IfcConstraint::copy(obj, copyop);
    setBenchmarkValues((IfcMetric*)copyop(obj.m_BenchmarkValues.get()));
    setResultValues((IfcMetric*)copyop(obj.m_ResultValues.get()));
    setObjectiveQualifier(obj.m_ObjectiveQualifier);
    setUserDefinedQualifier(obj.m_UserDefinedQualifier);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcObjective, IfcConstraint)
