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


#include <ifc2x3/IfcRegularTimeSeries.h>

#include <ifc2x3/IfcTimeSeriesValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRegularTimeSeries::IfcRegularTimeSeries(Step::Id id, Step::SPFData *args) : 
    IfcTimeSeries(id, args)
{
    m_TimeStep = Step::getUnset(m_TimeStep);
    m_Values.setUnset(true);
}

IfcRegularTimeSeries::~IfcRegularTimeSeries()
{}

bool IfcRegularTimeSeries::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRegularTimeSeries(this);
}


IfcTimeMeasure IfcRegularTimeSeries::getTimeStep()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeStep;
    }
    else 
    {
        return Step::getUnset(m_TimeStep);
    }    
}

IfcTimeMeasure IfcRegularTimeSeries::getTimeStep() const
{
    return const_cast<IfcRegularTimeSeries *>(this)->getTimeStep();
}

void IfcRegularTimeSeries::setTimeStep(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeStep = value;
}

void IfcRegularTimeSeries::unsetTimeStep()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeStep = Step::getUnset(getTimeStep());
}

bool IfcRegularTimeSeries::testTimeStep() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTimeStep()) == false;
}


List_IfcTimeSeriesValue_1_n &IfcRegularTimeSeries::getValues()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Values;
    }
    else 
    {
        m_Values.setUnset(true);
        return m_Values;
    }    
}

const List_IfcTimeSeriesValue_1_n &IfcRegularTimeSeries::getValues() const
{
    return const_cast<IfcRegularTimeSeries *>(this)->getValues();
}

void IfcRegularTimeSeries::setValues(const List_IfcTimeSeriesValue_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Values = value;
}

void IfcRegularTimeSeries::unsetValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Values.clear();
    m_Values.setUnset(true);
}

bool IfcRegularTimeSeries::testValues() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Values.isUnset() == false;
}

bool IfcRegularTimeSeries::init()
{
    if (IfcTimeSeries::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeStep = Step::getUnset(m_TimeStep);
    }
    else
    {
        m_TimeStep = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Values.setUnset(true);
    }
    else
    {
        m_Values.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Values.push_back(static_cast< IfcTimeSeriesValue * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcRegularTimeSeries::copy(const IfcRegularTimeSeries &obj, const CopyOp &copyop)
{
    IfcTimeSeries::copy(obj, copyop);
    setTimeStep(obj.m_TimeStep);
    List_IfcTimeSeriesValue_1_n::const_iterator it_m_Values;
    for (it_m_Values = obj.m_Values.begin(); it_m_Values != obj.m_Values.end(); ++it_m_Values)
    {
        Step::RefPtr< IfcTimeSeriesValue > copyTarget = (IfcTimeSeriesValue *) (copyop((*it_m_Values).get()));
        m_Values.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRegularTimeSeries, IfcTimeSeries)
