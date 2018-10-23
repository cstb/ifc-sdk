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


#include <ifc2x3/IfcEllipseProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEllipseProfileDef::IfcEllipseProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_SemiAxis1 = Step::getUnset(m_SemiAxis1);
    m_SemiAxis2 = Step::getUnset(m_SemiAxis2);
}

IfcEllipseProfileDef::~IfcEllipseProfileDef()
{}

bool IfcEllipseProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEllipseProfileDef(this);
}


IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis1()
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

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis1() const
{
    return const_cast<IfcEllipseProfileDef *>(this)->getSemiAxis1();
}

void IfcEllipseProfileDef::setSemiAxis1(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis1 = value;
}

void IfcEllipseProfileDef::unsetSemiAxis1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis1 = Step::getUnset(getSemiAxis1());
}

bool IfcEllipseProfileDef::testSemiAxis1() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSemiAxis1()) == false;
}


IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis2()
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

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis2() const
{
    return const_cast<IfcEllipseProfileDef *>(this)->getSemiAxis2();
}

void IfcEllipseProfileDef::setSemiAxis2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis2 = value;
}

void IfcEllipseProfileDef::unsetSemiAxis2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SemiAxis2 = Step::getUnset(getSemiAxis2());
}

bool IfcEllipseProfileDef::testSemiAxis2() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSemiAxis2()) == false;
}

bool IfcEllipseProfileDef::init()
{
    if (IfcParameterizedProfileDef::init() == false)
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

void IfcEllipseProfileDef::copy(const IfcEllipseProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setSemiAxis1(obj.m_SemiAxis1);
    setSemiAxis2(obj.m_SemiAxis2);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEllipseProfileDef, IfcParameterizedProfileDef)
