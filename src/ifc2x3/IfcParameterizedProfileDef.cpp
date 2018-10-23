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


#include <ifc2x3/IfcParameterizedProfileDef.h>

#include <ifc2x3/IfcAxis2Placement2D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcParameterizedProfileDef::IfcParameterizedProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcProfileDef(id, args)
{
    m_Position = NULL;
}

IfcParameterizedProfileDef::~IfcParameterizedProfileDef()
{}

bool IfcParameterizedProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcParameterizedProfileDef(this);
}


IfcAxis2Placement2D *IfcParameterizedProfileDef::getPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Position.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement2D *IfcParameterizedProfileDef::getPosition() const
{
    return const_cast<IfcParameterizedProfileDef *>(this)->getPosition();
}

void IfcParameterizedProfileDef::setPosition(const Step::RefPtr< IfcAxis2Placement2D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = value;
}

void IfcParameterizedProfileDef::unsetPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = Step::getUnset(getPosition());
}

bool IfcParameterizedProfileDef::testPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPosition()) == false;
}

bool IfcParameterizedProfileDef::init()
{
    if (IfcProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Position = NULL;
    }
    else
    {
        m_Position = static_cast< IfcAxis2Placement2D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcParameterizedProfileDef::copy(const IfcParameterizedProfileDef &obj, const CopyOp &copyop)
{
    IfcProfileDef::copy(obj, copyop);
    setPosition((IfcAxis2Placement2D*)copyop(obj.m_Position.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcParameterizedProfileDef, IfcProfileDef)
