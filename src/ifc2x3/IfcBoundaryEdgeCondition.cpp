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


#include <ifc2x3/IfcBoundaryEdgeCondition.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoundaryEdgeCondition::IfcBoundaryEdgeCondition(Step::Id id, Step::SPFData *args) : 
    IfcBoundaryCondition(id, args)
{
    m_LinearStiffnessByLengthX = Step::getUnset(m_LinearStiffnessByLengthX);
    m_LinearStiffnessByLengthY = Step::getUnset(m_LinearStiffnessByLengthY);
    m_LinearStiffnessByLengthZ = Step::getUnset(m_LinearStiffnessByLengthZ);
    m_RotationalStiffnessByLengthX = Step::getUnset(m_RotationalStiffnessByLengthX);
    m_RotationalStiffnessByLengthY = Step::getUnset(m_RotationalStiffnessByLengthY);
    m_RotationalStiffnessByLengthZ = Step::getUnset(m_RotationalStiffnessByLengthZ);
}

IfcBoundaryEdgeCondition::~IfcBoundaryEdgeCondition()
{}

bool IfcBoundaryEdgeCondition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoundaryEdgeCondition(this);
}


IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessByLengthX;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessByLengthX);
    }    
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX() const
{
    return const_cast<IfcBoundaryEdgeCondition *>(this)->getLinearStiffnessByLengthX();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByLengthX = value;
}

void IfcBoundaryEdgeCondition::unsetLinearStiffnessByLengthX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByLengthX = Step::getUnset(getLinearStiffnessByLengthX());
}

bool IfcBoundaryEdgeCondition::testLinearStiffnessByLengthX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessByLengthX()) == false;
}


IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessByLengthY;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessByLengthY);
    }    
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY() const
{
    return const_cast<IfcBoundaryEdgeCondition *>(this)->getLinearStiffnessByLengthY();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByLengthY = value;
}

void IfcBoundaryEdgeCondition::unsetLinearStiffnessByLengthY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByLengthY = Step::getUnset(getLinearStiffnessByLengthY());
}

bool IfcBoundaryEdgeCondition::testLinearStiffnessByLengthY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessByLengthY()) == false;
}


IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearStiffnessByLengthZ;
    }
    else 
    {
        return Step::getUnset(m_LinearStiffnessByLengthZ);
    }    
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ() const
{
    return const_cast<IfcBoundaryEdgeCondition *>(this)->getLinearStiffnessByLengthZ();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByLengthZ = value;
}

void IfcBoundaryEdgeCondition::unsetLinearStiffnessByLengthZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearStiffnessByLengthZ = Step::getUnset(getLinearStiffnessByLengthZ());
}

bool IfcBoundaryEdgeCondition::testLinearStiffnessByLengthZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearStiffnessByLengthZ()) == false;
}


IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalStiffnessByLengthX;
    }
    else 
    {
        return Step::getUnset(m_RotationalStiffnessByLengthX);
    }    
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX() const
{
    return const_cast<IfcBoundaryEdgeCondition *>(this)->getRotationalStiffnessByLengthX();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessByLengthX = value;
}

void IfcBoundaryEdgeCondition::unsetRotationalStiffnessByLengthX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessByLengthX = Step::getUnset(getRotationalStiffnessByLengthX());
}

bool IfcBoundaryEdgeCondition::testRotationalStiffnessByLengthX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalStiffnessByLengthX()) == false;
}


IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalStiffnessByLengthY;
    }
    else 
    {
        return Step::getUnset(m_RotationalStiffnessByLengthY);
    }    
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY() const
{
    return const_cast<IfcBoundaryEdgeCondition *>(this)->getRotationalStiffnessByLengthY();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessByLengthY = value;
}

void IfcBoundaryEdgeCondition::unsetRotationalStiffnessByLengthY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessByLengthY = Step::getUnset(getRotationalStiffnessByLengthY());
}

bool IfcBoundaryEdgeCondition::testRotationalStiffnessByLengthY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalStiffnessByLengthY()) == false;
}


IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RotationalStiffnessByLengthZ;
    }
    else 
    {
        return Step::getUnset(m_RotationalStiffnessByLengthZ);
    }    
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ() const
{
    return const_cast<IfcBoundaryEdgeCondition *>(this)->getRotationalStiffnessByLengthZ();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessByLengthZ = value;
}

void IfcBoundaryEdgeCondition::unsetRotationalStiffnessByLengthZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RotationalStiffnessByLengthZ = Step::getUnset(getRotationalStiffnessByLengthZ());
}

bool IfcBoundaryEdgeCondition::testRotationalStiffnessByLengthZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRotationalStiffnessByLengthZ()) == false;
}

bool IfcBoundaryEdgeCondition::init()
{
    if (IfcBoundaryCondition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessByLengthX = Step::getUnset(m_LinearStiffnessByLengthX);
    }
    else
    {
        m_LinearStiffnessByLengthX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessByLengthY = Step::getUnset(m_LinearStiffnessByLengthY);
    }
    else
    {
        m_LinearStiffnessByLengthY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearStiffnessByLengthZ = Step::getUnset(m_LinearStiffnessByLengthZ);
    }
    else
    {
        m_LinearStiffnessByLengthZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalStiffnessByLengthX = Step::getUnset(m_RotationalStiffnessByLengthX);
    }
    else
    {
        m_RotationalStiffnessByLengthX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalStiffnessByLengthY = Step::getUnset(m_RotationalStiffnessByLengthY);
    }
    else
    {
        m_RotationalStiffnessByLengthY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RotationalStiffnessByLengthZ = Step::getUnset(m_RotationalStiffnessByLengthZ);
    }
    else
    {
        m_RotationalStiffnessByLengthZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBoundaryEdgeCondition::copy(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop)
{
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessByLengthX(obj.m_LinearStiffnessByLengthX);
    setLinearStiffnessByLengthY(obj.m_LinearStiffnessByLengthY);
    setLinearStiffnessByLengthZ(obj.m_LinearStiffnessByLengthZ);
    setRotationalStiffnessByLengthX(obj.m_RotationalStiffnessByLengthX);
    setRotationalStiffnessByLengthY(obj.m_RotationalStiffnessByLengthY);
    setRotationalStiffnessByLengthZ(obj.m_RotationalStiffnessByLengthZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoundaryEdgeCondition, IfcBoundaryCondition)
