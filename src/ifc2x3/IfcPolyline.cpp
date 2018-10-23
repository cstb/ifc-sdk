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


#include <ifc2x3/IfcPolyline.h>

#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPolyline::IfcPolyline(Step::Id id, Step::SPFData *args) : 
    IfcBoundedCurve(id, args)
{
    m_Points.setUnset(true);
}

IfcPolyline::~IfcPolyline()
{}

bool IfcPolyline::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPolyline(this);
}


List_IfcCartesianPoint_2_n &IfcPolyline::getPoints()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Points;
    }
    else 
    {
        m_Points.setUnset(true);
        return m_Points;
    }    
}

const List_IfcCartesianPoint_2_n &IfcPolyline::getPoints() const
{
    return const_cast<IfcPolyline *>(this)->getPoints();
}

void IfcPolyline::setPoints(const List_IfcCartesianPoint_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Points = value;
}

void IfcPolyline::unsetPoints()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Points.clear();
    m_Points.setUnset(true);
}

bool IfcPolyline::testPoints() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Points.isUnset() == false;
}

bool IfcPolyline::init()
{
    if (IfcBoundedCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Points.setUnset(true);
    }
    else
    {
        m_Points.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Points.push_back(static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcPolyline::copy(const IfcPolyline &obj, const CopyOp &copyop)
{
    IfcBoundedCurve::copy(obj, copyop);
    List_IfcCartesianPoint_2_n::const_iterator it_m_Points;
    for (it_m_Points = obj.m_Points.begin(); it_m_Points != obj.m_Points.end(); ++it_m_Points)
    {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_Points).get()));
        m_Points.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPolyline, IfcBoundedCurve)
