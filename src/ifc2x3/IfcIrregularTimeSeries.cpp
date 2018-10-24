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


#include <ifc2x3/IfcIrregularTimeSeries.h>

#include <ifc2x3/IfcIrregularTimeSeriesValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcIrregularTimeSeries::IfcIrregularTimeSeries(Step::Id id, Step::SPFData *args) : 
    IfcTimeSeries(id, args)
{
    m_Values.setUnset(true);
}

IfcIrregularTimeSeries::~IfcIrregularTimeSeries()
{}

bool IfcIrregularTimeSeries::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcIrregularTimeSeries(this);
}


List_IfcIrregularTimeSeriesValue_1_n &IfcIrregularTimeSeries::getValues()
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

const List_IfcIrregularTimeSeriesValue_1_n &IfcIrregularTimeSeries::getValues() const
{
    return const_cast<IfcIrregularTimeSeries *>(this)->getValues();
}

void IfcIrregularTimeSeries::setValues(const List_IfcIrregularTimeSeriesValue_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Values = value;
}

void IfcIrregularTimeSeries::unsetValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Values.clear();
    m_Values.setUnset(true);
}

bool IfcIrregularTimeSeries::testValues() const
{
    return m_Values.isUnset() == false;
}

bool IfcIrregularTimeSeries::init()
{
    if (IfcTimeSeries::init() == false)
    {
        return false;
    }
    std::string arg;
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
                m_Values.push_back(static_cast< IfcIrregularTimeSeriesValue * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcIrregularTimeSeries::copy(const IfcIrregularTimeSeries &obj, const CopyOp &copyop)
{
    IfcTimeSeries::copy(obj, copyop);
    List_IfcIrregularTimeSeriesValue_1_n::const_iterator it_m_Values;
    for (it_m_Values = obj.m_Values.begin(); it_m_Values != obj.m_Values.end(); ++it_m_Values)
    {
        Step::RefPtr< IfcIrregularTimeSeriesValue > copyTarget = (IfcIrregularTimeSeriesValue *) (copyop((*it_m_Values).get()));
        m_Values.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcIrregularTimeSeries, IfcTimeSeries)
