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


#include <ifc2x3/IfcCartesianPoint.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCartesianPoint::IfcCartesianPoint(Step::Id id, Step::SPFData *args) : 
    IfcPoint(id, args)
{
    m_Coordinates.setUnset(true);
}

IfcCartesianPoint::~IfcCartesianPoint()
{}

bool IfcCartesianPoint::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCartesianPoint(this);
}


List_IfcLengthMeasure_1_3 &IfcCartesianPoint::getCoordinates()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Coordinates;
    }
    else 
    {
        m_Coordinates.setUnset(true);
        return m_Coordinates;
    }    
}

const List_IfcLengthMeasure_1_3 &IfcCartesianPoint::getCoordinates() const
{
    return const_cast<IfcCartesianPoint *>(this)->getCoordinates();
}

void IfcCartesianPoint::setCoordinates(const List_IfcLengthMeasure_1_3 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Coordinates = value;
}

void IfcCartesianPoint::unsetCoordinates()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Coordinates.clear();
    m_Coordinates.setUnset(true);
}

bool IfcCartesianPoint::testCoordinates() const
{
    return m_Coordinates.isUnset() == false;
}

bool IfcCartesianPoint::init()
{
    if (IfcPoint::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Coordinates.setUnset(true);
    }
    else
    {
        m_Coordinates.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Coordinates.push_back(Step::spfToReal(str1)

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

void IfcCartesianPoint::copy(const IfcCartesianPoint &obj, const CopyOp &copyop)
{
    IfcPoint::copy(obj, copyop);
    List_IfcLengthMeasure_1_3::const_iterator it_m_Coordinates;
    for (it_m_Coordinates = obj.m_Coordinates.begin(); it_m_Coordinates != obj.m_Coordinates.end(); ++it_m_Coordinates)
    {
        IfcLengthMeasure copyTarget = (*it_m_Coordinates);
        m_Coordinates.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCartesianPoint, IfcPoint)
