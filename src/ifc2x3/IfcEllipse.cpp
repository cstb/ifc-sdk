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


#include <ifc2x3/IfcEllipse.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEllipse::IfcEllipse(Step::Id id, Step::SPFData *args) : 
    IfcConic(id, args)
{
    m_SemiAxis1 = Step::getUnset(m_SemiAxis1);
    m_SemiAxis2 = Step::getUnset(m_SemiAxis2);
}

IfcEllipse::~IfcEllipse()
{}

bool IfcEllipse::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEllipse(this);
}


IfcPositiveLengthMeasure IfcEllipse::getSemiAxis1()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SemiAxis1;
    }
    else 
    {
        return Step::getUnset(m_SemiAxis1);
    }    
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis1() const
{
    return const_cast<IfcEllipse *>(this)->getSemiAxis1();
}

void IfcEllipse::setSemiAxis1(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis1 = value;
}

void IfcEllipse::unsetSemiAxis1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis1 = Step::getUnset(getSemiAxis1());
}

bool IfcEllipse::testSemiAxis1() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSemiAxis1()) == false;
}


IfcPositiveLengthMeasure IfcEllipse::getSemiAxis2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SemiAxis2;
    }
    else 
    {
        return Step::getUnset(m_SemiAxis2);
    }    
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis2() const
{
    return const_cast<IfcEllipse *>(this)->getSemiAxis2();
}

void IfcEllipse::setSemiAxis2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis2 = value;
}

void IfcEllipse::unsetSemiAxis2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis2 = Step::getUnset(getSemiAxis2());
}

bool IfcEllipse::testSemiAxis2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSemiAxis2()) == false;
}

bool IfcEllipse::init()
{
    if (IfcConic::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SemiAxis1 = Step::getUnset(m_SemiAxis1);
    }
    else
    {
        m_SemiAxis1 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SemiAxis2 = Step::getUnset(m_SemiAxis2);
    }
    else
    {
        m_SemiAxis2 = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcEllipse::copy(const IfcEllipse &obj, const CopyOp &copyop)
{
    IfcConic::copy(obj, copyop);
    setSemiAxis1(obj.m_SemiAxis1);
    setSemiAxis2(obj.m_SemiAxis2);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEllipse, IfcConic)
