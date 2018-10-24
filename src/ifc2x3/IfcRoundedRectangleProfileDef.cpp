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


#include <ifc2x3/IfcRoundedRectangleProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRoundedRectangleProfileDef::IfcRoundedRectangleProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcRectangleProfileDef(id, args)
{
    m_RoundingRadius = Step::getUnset(m_RoundingRadius);
}

IfcRoundedRectangleProfileDef::~IfcRoundedRectangleProfileDef()
{}

bool IfcRoundedRectangleProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRoundedRectangleProfileDef(this);
}


IfcPositiveLengthMeasure IfcRoundedRectangleProfileDef::getRoundingRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RoundingRadius;
    }
    else 
    {
        return Step::getUnset(m_RoundingRadius);
    }    
}

IfcPositiveLengthMeasure IfcRoundedRectangleProfileDef::getRoundingRadius() const
{
    return const_cast<IfcRoundedRectangleProfileDef *>(this)->getRoundingRadius();
}

void IfcRoundedRectangleProfileDef::setRoundingRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RoundingRadius = value;
}

void IfcRoundedRectangleProfileDef::unsetRoundingRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RoundingRadius = Step::getUnset(getRoundingRadius());
}

bool IfcRoundedRectangleProfileDef::testRoundingRadius() const
{
    return Step::isUnset(getRoundingRadius()) == false;
}

bool IfcRoundedRectangleProfileDef::init()
{
    if (IfcRectangleProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RoundingRadius = Step::getUnset(m_RoundingRadius);
    }
    else
    {
        m_RoundingRadius = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcRoundedRectangleProfileDef::copy(const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop)
{
    IfcRectangleProfileDef::copy(obj, copyop);
    setRoundingRadius(obj.m_RoundingRadius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRoundedRectangleProfileDef, IfcRectangleProfileDef)
