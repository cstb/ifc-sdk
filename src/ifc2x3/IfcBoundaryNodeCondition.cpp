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


#include <ifc2x3/IfcBoundaryNodeCondition.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoundaryNodeCondition::IfcBoundaryNodeCondition(Step::Id id, Step::SPFData *args) : 
    IfcBoundaryCondition(id, args)
{
    m_LinearStiffnessX = Step::getUnset(m_LinearStiffnessX);
    m_LinearStiffnessY = Step::getUnset(m_LinearStiffnessY);
    m_LinearStiffnessZ = Step::getUnset(m_LinearStiffnessZ);
    m_RotationalStiffnessX = Step::getUnset(m_RotationalStiffnessX);
    m_RotationalStiffnessY = Step::getUnset(m_RotationalStiffnessY);
    m_RotationalStiffnessZ = Step::getUnset(m_RotationalStiffnessZ);
}

IfcBoundaryNodeCondition::~IfcBoundaryNodeCondition()
{}

bool IfcBoundaryNodeCondition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoundaryNodeCondition(this);
}


IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessX;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessX);
    }    
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessX() const
{
    return const_cast<IfcBoundaryNodeCondition *>(this)->getLinearStiffnessX();
}

void IfcBoundaryNodeCondition::setLinearStiffnessX(IfcLinearStiffnessMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessX = value;
}

void IfcBoundaryNodeCondition::unsetLinearStiffnessX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessX = Step::getUnset(getLinearStiffnessX());
}

bool IfcBoundaryNodeCondition::testLinearStiffnessX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessX()) == false;
}


IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessY;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessY);
    }    
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessY() const
{
    return const_cast<IfcBoundaryNodeCondition *>(this)->getLinearStiffnessY();
}

void IfcBoundaryNodeCondition::setLinearStiffnessY(IfcLinearStiffnessMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessY = value;
}

void IfcBoundaryNodeCondition::unsetLinearStiffnessY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessY = Step::getUnset(getLinearStiffnessY());
}

bool IfcBoundaryNodeCondition::testLinearStiffnessY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessY()) == false;
}


IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessZ;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessZ);
    }    
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessZ() const
{
    return const_cast<IfcBoundaryNodeCondition *>(this)->getLinearStiffnessZ();
}

void IfcBoundaryNodeCondition::setLinearStiffnessZ(IfcLinearStiffnessMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessZ = value;
}

void IfcBoundaryNodeCondition::unsetLinearStiffnessZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessZ = Step::getUnset(getLinearStiffnessZ());
}

bool IfcBoundaryNodeCondition::testLinearStiffnessZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessZ()) == false;
}


IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalStiffnessX;
    }
    else 
    {
        return Step::getUnset(m_RotationalStiffnessX);
    }    
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessX() const
{
    return const_cast<IfcBoundaryNodeCondition *>(this)->getRotationalStiffnessX();
}

void IfcBoundaryNodeCondition::setRotationalStiffnessX(IfcRotationalStiffnessMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessX = value;
}

void IfcBoundaryNodeCondition::unsetRotationalStiffnessX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessX = Step::getUnset(getRotationalStiffnessX());
}

bool IfcBoundaryNodeCondition::testRotationalStiffnessX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalStiffnessX()) == false;
}


IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalStiffnessY;
    }
    else 
    {
        return Step::getUnset(m_RotationalStiffnessY);
    }    
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessY() const
{
    return const_cast<IfcBoundaryNodeCondition *>(this)->getRotationalStiffnessY();
}

void IfcBoundaryNodeCondition::setRotationalStiffnessY(IfcRotationalStiffnessMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessY = value;
}

void IfcBoundaryNodeCondition::unsetRotationalStiffnessY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessY = Step::getUnset(getRotationalStiffnessY());
}

bool IfcBoundaryNodeCondition::testRotationalStiffnessY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalStiffnessY()) == false;
}


IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalStiffnessZ;
    }
    else 
    {
        return Step::getUnset(m_RotationalStiffnessZ);
    }    
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessZ() const
{
    return const_cast<IfcBoundaryNodeCondition *>(this)->getRotationalStiffnessZ();
}

void IfcBoundaryNodeCondition::setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessZ = value;
}

void IfcBoundaryNodeCondition::unsetRotationalStiffnessZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessZ = Step::getUnset(getRotationalStiffnessZ());
}

bool IfcBoundaryNodeCondition::testRotationalStiffnessZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalStiffnessZ()) == false;
}

bool IfcBoundaryNodeCondition::init()
{
    if (IfcBoundaryCondition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessX = Step::getUnset(m_LinearStiffnessX);
    }
    else
    {
        m_LinearStiffnessX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessY = Step::getUnset(m_LinearStiffnessY);
    }
    else
    {
        m_LinearStiffnessY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessZ = Step::getUnset(m_LinearStiffnessZ);
    }
    else
    {
        m_LinearStiffnessZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalStiffnessX = Step::getUnset(m_RotationalStiffnessX);
    }
    else
    {
        m_RotationalStiffnessX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalStiffnessY = Step::getUnset(m_RotationalStiffnessY);
    }
    else
    {
        m_RotationalStiffnessY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalStiffnessZ = Step::getUnset(m_RotationalStiffnessZ);
    }
    else
    {
        m_RotationalStiffnessZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBoundaryNodeCondition::copy(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop)
{
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessX(obj.m_LinearStiffnessX);
    setLinearStiffnessY(obj.m_LinearStiffnessY);
    setLinearStiffnessZ(obj.m_LinearStiffnessZ);
    setRotationalStiffnessX(obj.m_RotationalStiffnessX);
    setRotationalStiffnessY(obj.m_RotationalStiffnessY);
    setRotationalStiffnessZ(obj.m_RotationalStiffnessZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoundaryNodeCondition, IfcBoundaryCondition)
