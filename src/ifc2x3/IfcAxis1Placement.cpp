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


#include <ifc2x3/IfcAxis1Placement.h>

#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAxis1Placement::IfcAxis1Placement(Step::Id id, Step::SPFData *args) : 
    IfcPlacement(id, args)
{
    m_Axis = NULL;
}

IfcAxis1Placement::~IfcAxis1Placement()
{}

bool IfcAxis1Placement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAxis1Placement(this);
}


IfcDirection *IfcAxis1Placement::getAxis()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Axis.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcAxis1Placement::getAxis() const
{
    return const_cast<IfcAxis1Placement *>(this)->getAxis();
}

void IfcAxis1Placement::setAxis(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis = value;
}

void IfcAxis1Placement::unsetAxis()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis = Step::getUnset(getAxis());
}

bool IfcAxis1Placement::testAxis() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAxis()) == false;
}

bool IfcAxis1Placement::init()
{
    if (IfcPlacement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Axis = NULL;
    }
    else
    {
        m_Axis = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcAxis1Placement::copy(const IfcAxis1Placement &obj, const CopyOp &copyop)
{
    IfcPlacement::copy(obj, copyop);
    setAxis((IfcDirection*)copyop(obj.m_Axis.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAxis1Placement, IfcPlacement)
