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


#include <ifc2x3/IfcTrapeziumProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTrapeziumProfileDef::IfcTrapeziumProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_BottomXDim = Step::getUnset(m_BottomXDim);
    m_TopXDim = Step::getUnset(m_TopXDim);
    m_YDim = Step::getUnset(m_YDim);
    m_TopXOffset = Step::getUnset(m_TopXOffset);
}

IfcTrapeziumProfileDef::~IfcTrapeziumProfileDef()
{}

bool IfcTrapeziumProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTrapeziumProfileDef(this);
}


IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getBottomXDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BottomXDim;
    }
    else 
    {
        return Step::getUnset(m_BottomXDim);
    }    
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getBottomXDim() const
{
    return const_cast<IfcTrapeziumProfileDef *>(this)->getBottomXDim();
}

void IfcTrapeziumProfileDef::setBottomXDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BottomXDim = value;
}

void IfcTrapeziumProfileDef::unsetBottomXDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BottomXDim = Step::getUnset(getBottomXDim());
}

bool IfcTrapeziumProfileDef::testBottomXDim() const
{
    return Step::isUnset(getBottomXDim()) == false;
}


IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getTopXDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TopXDim;
    }
    else 
    {
        return Step::getUnset(m_TopXDim);
    }    
}

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getTopXDim() const
{
    return const_cast<IfcTrapeziumProfileDef *>(this)->getTopXDim();
}

void IfcTrapeziumProfileDef::setTopXDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopXDim = value;
}

void IfcTrapeziumProfileDef::unsetTopXDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopXDim = Step::getUnset(getTopXDim());
}

bool IfcTrapeziumProfileDef::testTopXDim() const
{
    return Step::isUnset(getTopXDim()) == false;
}


IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getYDim()
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

IfcPositiveLengthMeasure IfcTrapeziumProfileDef::getYDim() const
{
    return const_cast<IfcTrapeziumProfileDef *>(this)->getYDim();
}

void IfcTrapeziumProfileDef::setYDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YDim = value;
}

void IfcTrapeziumProfileDef::unsetYDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YDim = Step::getUnset(getYDim());
}

bool IfcTrapeziumProfileDef::testYDim() const
{
    return Step::isUnset(getYDim()) == false;
}


IfcLengthMeasure IfcTrapeziumProfileDef::getTopXOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TopXOffset;
    }
    else 
    {
        return Step::getUnset(m_TopXOffset);
    }    
}

IfcLengthMeasure IfcTrapeziumProfileDef::getTopXOffset() const
{
    return const_cast<IfcTrapeziumProfileDef *>(this)->getTopXOffset();
}

void IfcTrapeziumProfileDef::setTopXOffset(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopXOffset = value;
}

void IfcTrapeziumProfileDef::unsetTopXOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopXOffset = Step::getUnset(getTopXOffset());
}

bool IfcTrapeziumProfileDef::testTopXOffset() const
{
    return Step::isUnset(getTopXOffset()) == false;
}

bool IfcTrapeziumProfileDef::init()
{
    if (IfcParameterizedProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BottomXDim = Step::getUnset(m_BottomXDim);
    }
    else
    {
        m_BottomXDim = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TopXDim = Step::getUnset(m_TopXDim);
    }
    else
    {
        m_TopXDim = Step::spfToReal(arg)

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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TopXOffset = Step::getUnset(m_TopXOffset);
    }
    else
    {
        m_TopXOffset = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcTrapeziumProfileDef::copy(const IfcTrapeziumProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setBottomXDim(obj.m_BottomXDim);
    setTopXDim(obj.m_TopXDim);
    setYDim(obj.m_YDim);
    setTopXOffset(obj.m_TopXOffset);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTrapeziumProfileDef, IfcParameterizedProfileDef)
