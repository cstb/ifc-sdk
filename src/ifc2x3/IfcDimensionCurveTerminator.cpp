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


#include <ifc2x3/IfcDimensionCurveTerminator.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDimensionCurveTerminator::IfcDimensionCurveTerminator(Step::Id id, Step::SPFData *args) : 
    IfcTerminatorSymbol(id, args)
{
    m_Role = IfcDimensionExtentUsage_UNSET;
}

IfcDimensionCurveTerminator::~IfcDimensionCurveTerminator()
{}

bool IfcDimensionCurveTerminator::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDimensionCurveTerminator(this);
}


IfcDimensionExtentUsage IfcDimensionCurveTerminator::getRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Role;
    }
    else 
    {
        return IfcDimensionExtentUsage_UNSET;
    }    
}

IfcDimensionExtentUsage IfcDimensionCurveTerminator::getRole() const
{
    return const_cast<IfcDimensionCurveTerminator *>(this)->getRole();
}

void IfcDimensionCurveTerminator::setRole(IfcDimensionExtentUsage value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Role = value;
}

void IfcDimensionCurveTerminator::unsetRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Role = IfcDimensionExtentUsage_UNSET;
}

bool IfcDimensionCurveTerminator::testRole() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRole()) == false;
}

bool IfcDimensionCurveTerminator::init()
{
    if (IfcTerminatorSymbol::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Role = IfcDimensionExtentUsage_UNSET;
    }
    else
    {
        if (arg == ".ORIGIN.")
        {
            m_Role = IfcDimensionExtentUsage_ORIGIN;
        }
        else if (arg == ".TARGET.")
        {
            m_Role = IfcDimensionExtentUsage_TARGET;
        }
    }
    return true;
}

void IfcDimensionCurveTerminator::copy(const IfcDimensionCurveTerminator &obj, const CopyOp &copyop)
{
    IfcTerminatorSymbol::copy(obj, copyop);
    setRole(obj.m_Role);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDimensionCurveTerminator, IfcTerminatorSymbol)
