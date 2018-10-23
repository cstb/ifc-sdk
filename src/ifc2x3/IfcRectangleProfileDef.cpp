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


#include <ifc2x3/IfcRectangleProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRectangleProfileDef::IfcRectangleProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_XDim = Step::getUnset(m_XDim);
    m_YDim = Step::getUnset(m_YDim);
}

IfcRectangleProfileDef::~IfcRectangleProfileDef()
{}

bool IfcRectangleProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRectangleProfileDef(this);
}


IfcPositiveLengthMeasure IfcRectangleProfileDef::getXDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_XDim;
    }
    else 
    {
        return Step::getUnset(m_XDim);
    }    
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getXDim() const
{
    return const_cast<IfcRectangleProfileDef *>(this)->getXDim();
}

void IfcRectangleProfileDef::setXDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XDim = value;
}

void IfcRectangleProfileDef::unsetXDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XDim = Step::getUnset(getXDim());
}

bool IfcRectangleProfileDef::testXDim() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getXDim()) == false;
}


IfcPositiveLengthMeasure IfcRectangleProfileDef::getYDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YDim;
    }
    else 
    {
        return Step::getUnset(m_YDim);
    }    
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getYDim() const
{
    return const_cast<IfcRectangleProfileDef *>(this)->getYDim();
}

void IfcRectangleProfileDef::setYDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YDim = value;
}

void IfcRectangleProfileDef::unsetYDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YDim = Step::getUnset(getYDim());
}

bool IfcRectangleProfileDef::testYDim() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getYDim()) == false;
}

bool IfcRectangleProfileDef::init()
{
    if (IfcParameterizedProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_XDim = Step::getUnset(m_XDim);
    }
    else
    {
        m_XDim = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YDim = Step::getUnset(m_YDim);
    }
    else
    {
        m_YDim = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcRectangleProfileDef::copy(const IfcRectangleProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setXDim(obj.m_XDim);
    setYDim(obj.m_YDim);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRectangleProfileDef, IfcParameterizedProfileDef)
