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


#include <ifc2x3/IfcStructuralLoadSingleForce.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadSingleForce::IfcStructuralLoadSingleForce(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadStatic(id, args)
{
    m_ForceX = Step::getUnset(m_ForceX);
    m_ForceY = Step::getUnset(m_ForceY);
    m_ForceZ = Step::getUnset(m_ForceZ);
    m_MomentX = Step::getUnset(m_MomentX);
    m_MomentY = Step::getUnset(m_MomentY);
    m_MomentZ = Step::getUnset(m_MomentZ);
}

IfcStructuralLoadSingleForce::~IfcStructuralLoadSingleForce()
{}

bool IfcStructuralLoadSingleForce::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadSingleForce(this);
}


IfcForceMeasure IfcStructuralLoadSingleForce::getForceX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ForceX;
    }
    else 
    {
        return Step::getUnset(m_ForceX);
    }    
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceX() const
{
    return const_cast<IfcStructuralLoadSingleForce *>(this)->getForceX();
}

void IfcStructuralLoadSingleForce::setForceX(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForceX = value;
}

void IfcStructuralLoadSingleForce::unsetForceX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForceX = Step::getUnset(getForceX());
}

bool IfcStructuralLoadSingleForce::testForceX() const
{
    return Step::isUnset(getForceX()) == false;
}


IfcForceMeasure IfcStructuralLoadSingleForce::getForceY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ForceY;
    }
    else 
    {
        return Step::getUnset(m_ForceY);
    }    
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceY() const
{
    return const_cast<IfcStructuralLoadSingleForce *>(this)->getForceY();
}

void IfcStructuralLoadSingleForce::setForceY(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForceY = value;
}

void IfcStructuralLoadSingleForce::unsetForceY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForceY = Step::getUnset(getForceY());
}

bool IfcStructuralLoadSingleForce::testForceY() const
{
    return Step::isUnset(getForceY()) == false;
}


IfcForceMeasure IfcStructuralLoadSingleForce::getForceZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ForceZ;
    }
    else 
    {
        return Step::getUnset(m_ForceZ);
    }    
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceZ() const
{
    return const_cast<IfcStructuralLoadSingleForce *>(this)->getForceZ();
}

void IfcStructuralLoadSingleForce::setForceZ(IfcForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForceZ = value;
}

void IfcStructuralLoadSingleForce::unsetForceZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ForceZ = Step::getUnset(getForceZ());
}

bool IfcStructuralLoadSingleForce::testForceZ() const
{
    return Step::isUnset(getForceZ()) == false;
}


IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MomentX;
    }
    else 
    {
        return Step::getUnset(m_MomentX);
    }    
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentX() const
{
    return const_cast<IfcStructuralLoadSingleForce *>(this)->getMomentX();
}

void IfcStructuralLoadSingleForce::setMomentX(IfcTorqueMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentX = value;
}

void IfcStructuralLoadSingleForce::unsetMomentX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentX = Step::getUnset(getMomentX());
}

bool IfcStructuralLoadSingleForce::testMomentX() const
{
    return Step::isUnset(getMomentX()) == false;
}


IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MomentY;
    }
    else 
    {
        return Step::getUnset(m_MomentY);
    }    
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentY() const
{
    return const_cast<IfcStructuralLoadSingleForce *>(this)->getMomentY();
}

void IfcStructuralLoadSingleForce::setMomentY(IfcTorqueMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentY = value;
}

void IfcStructuralLoadSingleForce::unsetMomentY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentY = Step::getUnset(getMomentY());
}

bool IfcStructuralLoadSingleForce::testMomentY() const
{
    return Step::isUnset(getMomentY()) == false;
}


IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MomentZ;
    }
    else 
    {
        return Step::getUnset(m_MomentZ);
    }    
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentZ() const
{
    return const_cast<IfcStructuralLoadSingleForce *>(this)->getMomentZ();
}

void IfcStructuralLoadSingleForce::setMomentZ(IfcTorqueMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentZ = value;
}

void IfcStructuralLoadSingleForce::unsetMomentZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MomentZ = Step::getUnset(getMomentZ());
}

bool IfcStructuralLoadSingleForce::testMomentZ() const
{
    return Step::isUnset(getMomentZ()) == false;
}

bool IfcStructuralLoadSingleForce::init()
{
    if (IfcStructuralLoadStatic::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ForceX = Step::getUnset(m_ForceX);
    }
    else
    {
        m_ForceX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ForceY = Step::getUnset(m_ForceY);
    }
    else
    {
        m_ForceY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ForceZ = Step::getUnset(m_ForceZ);
    }
    else
    {
        m_ForceZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MomentX = Step::getUnset(m_MomentX);
    }
    else
    {
        m_MomentX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MomentY = Step::getUnset(m_MomentY);
    }
    else
    {
        m_MomentY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MomentZ = Step::getUnset(m_MomentZ);
    }
    else
    {
        m_MomentZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadSingleForce::copy(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop)
{
    IfcStructuralLoadStatic::copy(obj, copyop);
    setForceX(obj.m_ForceX);
    setForceY(obj.m_ForceY);
    setForceZ(obj.m_ForceZ);
    setMomentX(obj.m_MomentX);
    setMomentY(obj.m_MomentY);
    setMomentZ(obj.m_MomentZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadSingleForce, IfcStructuralLoadStatic)
