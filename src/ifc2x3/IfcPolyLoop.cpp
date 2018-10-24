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


#include <ifc2x3/IfcPolyLoop.h>

#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPolyLoop::IfcPolyLoop(Step::Id id, Step::SPFData *args) : 
    IfcLoop(id, args)
{
    m_Polygon.setUnset(true);
}

IfcPolyLoop::~IfcPolyLoop()
{}

bool IfcPolyLoop::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPolyLoop(this);
}


List_IfcCartesianPoint_3_n &IfcPolyLoop::getPolygon()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Polygon;
    }
    else 
    {
        m_Polygon.setUnset(true);
        return m_Polygon;
    }    
}

const List_IfcCartesianPoint_3_n &IfcPolyLoop::getPolygon() const
{
    return const_cast<IfcPolyLoop *>(this)->getPolygon();
}

void IfcPolyLoop::setPolygon(const List_IfcCartesianPoint_3_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Polygon = value;
}

void IfcPolyLoop::unsetPolygon()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Polygon.clear();
    m_Polygon.setUnset(true);
}

bool IfcPolyLoop::testPolygon() const
{
    return m_Polygon.isUnset() == false;
}

bool IfcPolyLoop::init()
{
    if (IfcLoop::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Polygon.setUnset(true);
    }
    else
    {
        m_Polygon.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Polygon.push_back(static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcPolyLoop::copy(const IfcPolyLoop &obj, const CopyOp &copyop)
{
    IfcLoop::copy(obj, copyop);
    List_IfcCartesianPoint_3_n::const_iterator it_m_Polygon;
    for (it_m_Polygon = obj.m_Polygon.begin(); it_m_Polygon != obj.m_Polygon.end(); ++it_m_Polygon)
    {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_Polygon).get()));
        m_Polygon.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPolyLoop, IfcLoop)
