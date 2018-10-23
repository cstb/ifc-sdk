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


#include <ifc2x3/IfcCircleHollowProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCircleHollowProfileDef::IfcCircleHollowProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcCircleProfileDef(id, args)
{
    m_WallThickness = Step::getUnset(m_WallThickness);
}

IfcCircleHollowProfileDef::~IfcCircleHollowProfileDef()
{}

bool IfcCircleHollowProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCircleHollowProfileDef(this);
}


IfcPositiveLengthMeasure IfcCircleHollowProfileDef::getWallThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WallThickness;
    }
    else 
    {
        return Step::getUnset(m_WallThickness);
    }    
}

IfcPositiveLengthMeasure IfcCircleHollowProfileDef::getWallThickness() const
{
    return const_cast<IfcCircleHollowProfileDef *>(this)->getWallThickness();
}

void IfcCircleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WallThickness = value;
}

void IfcCircleHollowProfileDef::unsetWallThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WallThickness = Step::getUnset(getWallThickness());
}

bool IfcCircleHollowProfileDef::testWallThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWallThickness()) == false;
}

bool IfcCircleHollowProfileDef::init()
{
    if (IfcCircleProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WallThickness = Step::getUnset(m_WallThickness);
    }
    else
    {
        m_WallThickness = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCircleHollowProfileDef::copy(const IfcCircleHollowProfileDef &obj, const CopyOp &copyop)
{
    IfcCircleProfileDef::copy(obj, copyop);
    setWallThickness(obj.m_WallThickness);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCircleHollowProfileDef, IfcCircleProfileDef)
