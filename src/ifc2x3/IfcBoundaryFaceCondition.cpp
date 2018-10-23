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


#include <ifc2x3/IfcBoundaryFaceCondition.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoundaryFaceCondition::IfcBoundaryFaceCondition(Step::Id id, Step::SPFData *args) : 
    IfcBoundaryCondition(id, args)
{
    m_LinearStiffnessByAreaX = Step::getUnset(m_LinearStiffnessByAreaX);
    m_LinearStiffnessByAreaY = Step::getUnset(m_LinearStiffnessByAreaY);
    m_LinearStiffnessByAreaZ = Step::getUnset(m_LinearStiffnessByAreaZ);
}

IfcBoundaryFaceCondition::~IfcBoundaryFaceCondition()
{}

bool IfcBoundaryFaceCondition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoundaryFaceCondition(this);
}


IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessByAreaX;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessByAreaX);
    }    
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaX() const
{
    return const_cast<IfcBoundaryFaceCondition *>(this)->getLinearStiffnessByAreaX();
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaX(IfcModulusOfSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByAreaX = value;
}

void IfcBoundaryFaceCondition::unsetLinearStiffnessByAreaX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByAreaX = Step::getUnset(getLinearStiffnessByAreaX());
}

bool IfcBoundaryFaceCondition::testLinearStiffnessByAreaX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessByAreaX()) == false;
}


IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessByAreaY;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessByAreaY);
    }    
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaY() const
{
    return const_cast<IfcBoundaryFaceCondition *>(this)->getLinearStiffnessByAreaY();
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaY(IfcModulusOfSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByAreaY = value;
}

void IfcBoundaryFaceCondition::unsetLinearStiffnessByAreaY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByAreaY = Step::getUnset(getLinearStiffnessByAreaY());
}

bool IfcBoundaryFaceCondition::testLinearStiffnessByAreaY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessByAreaY()) == false;
}


IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessByAreaZ;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessByAreaZ);
    }    
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaZ() const
{
    return const_cast<IfcBoundaryFaceCondition *>(this)->getLinearStiffnessByAreaZ();
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaZ(IfcModulusOfSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByAreaZ = value;
}

void IfcBoundaryFaceCondition::unsetLinearStiffnessByAreaZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByAreaZ = Step::getUnset(getLinearStiffnessByAreaZ());
}

bool IfcBoundaryFaceCondition::testLinearStiffnessByAreaZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessByAreaZ()) == false;
}

bool IfcBoundaryFaceCondition::init()
{
    if (IfcBoundaryCondition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessByAreaX = Step::getUnset(m_LinearStiffnessByAreaX);
    }
    else
    {
        m_LinearStiffnessByAreaX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessByAreaY = Step::getUnset(m_LinearStiffnessByAreaY);
    }
    else
    {
        m_LinearStiffnessByAreaY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessByAreaZ = Step::getUnset(m_LinearStiffnessByAreaZ);
    }
    else
    {
        m_LinearStiffnessByAreaZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBoundaryFaceCondition::copy(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop)
{
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessByAreaX(obj.m_LinearStiffnessByAreaX);
    setLinearStiffnessByAreaY(obj.m_LinearStiffnessByAreaY);
    setLinearStiffnessByAreaZ(obj.m_LinearStiffnessByAreaZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoundaryFaceCondition, IfcBoundaryCondition)
