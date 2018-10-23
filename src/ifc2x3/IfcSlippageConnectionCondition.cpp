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


#include <ifc2x3/IfcSlippageConnectionCondition.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSlippageConnectionCondition::IfcSlippageConnectionCondition(Step::Id id, Step::SPFData *args) : 
    IfcStructuralConnectionCondition(id, args)
{
    m_SlippageX = Step::getUnset(m_SlippageX);
    m_SlippageY = Step::getUnset(m_SlippageY);
    m_SlippageZ = Step::getUnset(m_SlippageZ);
}

IfcSlippageConnectionCondition::~IfcSlippageConnectionCondition()
{}

bool IfcSlippageConnectionCondition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSlippageConnectionCondition(this);
}


IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SlippageX;
    }
    else 
    {
        return Step::getUnset(m_SlippageX);
    }    
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageX() const
{
    return const_cast<IfcSlippageConnectionCondition *>(this)->getSlippageX();
}

void IfcSlippageConnectionCondition::setSlippageX(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SlippageX = value;
}

void IfcSlippageConnectionCondition::unsetSlippageX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SlippageX = Step::getUnset(getSlippageX());
}

bool IfcSlippageConnectionCondition::testSlippageX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSlippageX()) == false;
}


IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SlippageY;
    }
    else 
    {
        return Step::getUnset(m_SlippageY);
    }    
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageY() const
{
    return const_cast<IfcSlippageConnectionCondition *>(this)->getSlippageY();
}

void IfcSlippageConnectionCondition::setSlippageY(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SlippageY = value;
}

void IfcSlippageConnectionCondition::unsetSlippageY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SlippageY = Step::getUnset(getSlippageY());
}

bool IfcSlippageConnectionCondition::testSlippageY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSlippageY()) == false;
}


IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SlippageZ;
    }
    else 
    {
        return Step::getUnset(m_SlippageZ);
    }    
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageZ() const
{
    return const_cast<IfcSlippageConnectionCondition *>(this)->getSlippageZ();
}

void IfcSlippageConnectionCondition::setSlippageZ(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SlippageZ = value;
}

void IfcSlippageConnectionCondition::unsetSlippageZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SlippageZ = Step::getUnset(getSlippageZ());
}

bool IfcSlippageConnectionCondition::testSlippageZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSlippageZ()) == false;
}

bool IfcSlippageConnectionCondition::init()
{
    if (IfcStructuralConnectionCondition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SlippageX = Step::getUnset(m_SlippageX);
    }
    else
    {
        m_SlippageX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SlippageY = Step::getUnset(m_SlippageY);
    }
    else
    {
        m_SlippageY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SlippageZ = Step::getUnset(m_SlippageZ);
    }
    else
    {
        m_SlippageZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcSlippageConnectionCondition::copy(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop)
{
    IfcStructuralConnectionCondition::copy(obj, copyop);
    setSlippageX(obj.m_SlippageX);
    setSlippageY(obj.m_SlippageY);
    setSlippageZ(obj.m_SlippageZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSlippageConnectionCondition, IfcStructuralConnectionCondition)
