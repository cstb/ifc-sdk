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


#include <ifc2x3/IfcStructuralLinearAction.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLinearAction::IfcStructuralLinearAction(Step::Id id, Step::SPFData *args) : 
    IfcStructuralAction(id, args)
{
    m_ProjectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

IfcStructuralLinearAction::~IfcStructuralLinearAction()
{}

bool IfcStructuralLinearAction::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLinearAction(this);
}


IfcProjectedOrTrueLengthEnum IfcStructuralLinearAction::getProjectedOrTrue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProjectedOrTrue;
    }
    else 
    {
        return IfcProjectedOrTrueLengthEnum_UNSET;
    }    
}

IfcProjectedOrTrueLengthEnum IfcStructuralLinearAction::getProjectedOrTrue() const
{
    return const_cast<IfcStructuralLinearAction *>(this)->getProjectedOrTrue();
}

void IfcStructuralLinearAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProjectedOrTrue = value;
}

void IfcStructuralLinearAction::unsetProjectedOrTrue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProjectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

bool IfcStructuralLinearAction::testProjectedOrTrue() const
{
    return Step::isUnset(getProjectedOrTrue()) == false;
}

bool IfcStructuralLinearAction::init()
{
    if (IfcStructuralAction::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProjectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
    }
    else
    {
        if (arg == ".PROJECTED_LENGTH.")
        {
            m_ProjectedOrTrue = IfcProjectedOrTrueLengthEnum_PROJECTED_LENGTH;
        }
        else if (arg == ".TRUE_LENGTH.")
        {
            m_ProjectedOrTrue = IfcProjectedOrTrueLengthEnum_TRUE_LENGTH;
        }
    }
    return true;
}

void IfcStructuralLinearAction::copy(const IfcStructuralLinearAction &obj, const CopyOp &copyop)
{
    IfcStructuralAction::copy(obj, copyop);
    setProjectedOrTrue(obj.m_ProjectedOrTrue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLinearAction, IfcStructuralAction)
