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


#include <ifc2x3/IfcDirection.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDirection::IfcDirection(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_DirectionRatios.setUnset(true);
}

IfcDirection::~IfcDirection()
{}

bool IfcDirection::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDirection(this);
}


List_Real_2_3 &IfcDirection::getDirectionRatios()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DirectionRatios;
    }
    else 
    {
        m_DirectionRatios.setUnset(true);
        return m_DirectionRatios;
    }    
}

const List_Real_2_3 &IfcDirection::getDirectionRatios() const
{
    return const_cast<IfcDirection *>(this)->getDirectionRatios();
}

void IfcDirection::setDirectionRatios(const List_Real_2_3 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DirectionRatios = value;
}

void IfcDirection::unsetDirectionRatios()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DirectionRatios.clear();
    m_DirectionRatios.setUnset(true);
}

bool IfcDirection::testDirectionRatios() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_DirectionRatios.isUnset() == false;
}

bool IfcDirection::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DirectionRatios.setUnset(true);
    }
    else
    {
        m_DirectionRatios.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_DirectionRatios.push_back(Step::spfToReal(str1)

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

void IfcDirection::copy(const IfcDirection &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    List_Real_2_3::const_iterator it_m_DirectionRatios;
    for (it_m_DirectionRatios = obj.m_DirectionRatios.begin(); it_m_DirectionRatios != obj.m_DirectionRatios.end(); ++it_m_DirectionRatios)
    {
        Step::Real copyTarget = (*it_m_DirectionRatios);
        m_DirectionRatios.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDirection, IfcGeometricRepresentationItem)
