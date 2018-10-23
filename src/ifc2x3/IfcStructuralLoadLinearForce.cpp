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


#include <ifc2x3/IfcStructuralLoadLinearForce.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadLinearForce::IfcStructuralLoadLinearForce(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadStatic(id, args)
{
    m_LinearForceX = Step::getUnset(m_LinearForceX);
    m_LinearForceY = Step::getUnset(m_LinearForceY);
    m_LinearForceZ = Step::getUnset(m_LinearForceZ);
    m_LinearMomentX = Step::getUnset(m_LinearMomentX);
    m_LinearMomentY = Step::getUnset(m_LinearMomentY);
    m_LinearMomentZ = Step::getUnset(m_LinearMomentZ);
}

IfcStructuralLoadLinearForce::~IfcStructuralLoadLinearForce()
{}

bool IfcStructuralLoadLinearForce::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadLinearForce(this);
}


IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearForceX;
    }
    else 
    {
        return Step::getUnset(m_LinearForceX);
    }    
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceX() const
{
    return const_cast<IfcStructuralLoadLinearForce *>(this)->getLinearForceX();
}

void IfcStructuralLoadLinearForce::setLinearForceX(IfcLinearForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearForceX = value;
}

void IfcStructuralLoadLinearForce::unsetLinearForceX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearForceX = Step::getUnset(getLinearForceX());
}

bool IfcStructuralLoadLinearForce::testLinearForceX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearForceX()) == false;
}


IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearForceY;
    }
    else 
    {
        return Step::getUnset(m_LinearForceY);
    }    
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceY() const
{
    return const_cast<IfcStructuralLoadLinearForce *>(this)->getLinearForceY();
}

void IfcStructuralLoadLinearForce::setLinearForceY(IfcLinearForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearForceY = value;
}

void IfcStructuralLoadLinearForce::unsetLinearForceY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearForceY = Step::getUnset(getLinearForceY());
}

bool IfcStructuralLoadLinearForce::testLinearForceY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearForceY()) == false;
}


IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearForceZ;
    }
    else 
    {
        return Step::getUnset(m_LinearForceZ);
    }    
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceZ() const
{
    return const_cast<IfcStructuralLoadLinearForce *>(this)->getLinearForceZ();
}

void IfcStructuralLoadLinearForce::setLinearForceZ(IfcLinearForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearForceZ = value;
}

void IfcStructuralLoadLinearForce::unsetLinearForceZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearForceZ = Step::getUnset(getLinearForceZ());
}

bool IfcStructuralLoadLinearForce::testLinearForceZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearForceZ()) == false;
}


IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearMomentX;
    }
    else 
    {
        return Step::getUnset(m_LinearMomentX);
    }    
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentX() const
{
    return const_cast<IfcStructuralLoadLinearForce *>(this)->getLinearMomentX();
}

void IfcStructuralLoadLinearForce::setLinearMomentX(IfcLinearMomentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearMomentX = value;
}

void IfcStructuralLoadLinearForce::unsetLinearMomentX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearMomentX = Step::getUnset(getLinearMomentX());
}

bool IfcStructuralLoadLinearForce::testLinearMomentX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearMomentX()) == false;
}


IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearMomentY;
    }
    else 
    {
        return Step::getUnset(m_LinearMomentY);
    }    
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentY() const
{
    return const_cast<IfcStructuralLoadLinearForce *>(this)->getLinearMomentY();
}

void IfcStructuralLoadLinearForce::setLinearMomentY(IfcLinearMomentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearMomentY = value;
}

void IfcStructuralLoadLinearForce::unsetLinearMomentY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearMomentY = Step::getUnset(getLinearMomentY());
}

bool IfcStructuralLoadLinearForce::testLinearMomentY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearMomentY()) == false;
}


IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LinearMomentZ;
    }
    else 
    {
        return Step::getUnset(m_LinearMomentZ);
    }    
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentZ() const
{
    return const_cast<IfcStructuralLoadLinearForce *>(this)->getLinearMomentZ();
}

void IfcStructuralLoadLinearForce::setLinearMomentZ(IfcLinearMomentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearMomentZ = value;
}

void IfcStructuralLoadLinearForce::unsetLinearMomentZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LinearMomentZ = Step::getUnset(getLinearMomentZ());
}

bool IfcStructuralLoadLinearForce::testLinearMomentZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLinearMomentZ()) == false;
}

bool IfcStructuralLoadLinearForce::init()
{
    if (IfcStructuralLoadStatic::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearForceX = Step::getUnset(m_LinearForceX);
    }
    else
    {
        m_LinearForceX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearForceY = Step::getUnset(m_LinearForceY);
    }
    else
    {
        m_LinearForceY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearForceZ = Step::getUnset(m_LinearForceZ);
    }
    else
    {
        m_LinearForceZ = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearMomentX = Step::getUnset(m_LinearMomentX);
    }
    else
    {
        m_LinearMomentX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearMomentY = Step::getUnset(m_LinearMomentY);
    }
    else
    {
        m_LinearMomentY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LinearMomentZ = Step::getUnset(m_LinearMomentZ);
    }
    else
    {
        m_LinearMomentZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadLinearForce::copy(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop)
{
    IfcStructuralLoadStatic::copy(obj, copyop);
    setLinearForceX(obj.m_LinearForceX);
    setLinearForceY(obj.m_LinearForceY);
    setLinearForceZ(obj.m_LinearForceZ);
    setLinearMomentX(obj.m_LinearMomentX);
    setLinearMomentY(obj.m_LinearMomentY);
    setLinearMomentZ(obj.m_LinearMomentZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadLinearForce, IfcStructuralLoadStatic)
