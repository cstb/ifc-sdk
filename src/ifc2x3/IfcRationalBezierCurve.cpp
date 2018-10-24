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


#include <ifc2x3/IfcRationalBezierCurve.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRationalBezierCurve::IfcRationalBezierCurve(Step::Id id, Step::SPFData *args) : 
    IfcBezierCurve(id, args)
{
    m_WeightsData.setUnset(true);
}

IfcRationalBezierCurve::~IfcRationalBezierCurve()
{}

bool IfcRationalBezierCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRationalBezierCurve(this);
}


List_Real_2_n &IfcRationalBezierCurve::getWeightsData()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WeightsData;
    }
    else 
    {
        m_WeightsData.setUnset(true);
        return m_WeightsData;
    }    
}

const List_Real_2_n &IfcRationalBezierCurve::getWeightsData() const
{
    return const_cast<IfcRationalBezierCurve *>(this)->getWeightsData();
}

void IfcRationalBezierCurve::setWeightsData(const List_Real_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WeightsData = value;
}

void IfcRationalBezierCurve::unsetWeightsData()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WeightsData.clear();
    m_WeightsData.setUnset(true);
}

bool IfcRationalBezierCurve::testWeightsData() const
{
    return m_WeightsData.isUnset() == false;
}

bool IfcRationalBezierCurve::init()
{
    if (IfcBezierCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WeightsData.setUnset(true);
    }
    else
    {
        m_WeightsData.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_WeightsData.push_back(Step::spfToReal(str1)

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

void IfcRationalBezierCurve::copy(const IfcRationalBezierCurve &obj, const CopyOp &copyop)
{
    IfcBezierCurve::copy(obj, copyop);
    List_Real_2_n::const_iterator it_m_WeightsData;
    for (it_m_WeightsData = obj.m_WeightsData.begin(); it_m_WeightsData != obj.m_WeightsData.end(); ++it_m_WeightsData)
    {
        Step::Real copyTarget = (*it_m_WeightsData);
        m_WeightsData.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRationalBezierCurve, IfcBezierCurve)
