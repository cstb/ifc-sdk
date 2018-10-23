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


#include <ifc2x3/IfcStructuralLoadPlanarForce.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadPlanarForce::IfcStructuralLoadPlanarForce(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadStatic(id, args)
{
    m_PlanarForceX = Step::getUnset(m_PlanarForceX);
    m_PlanarForceY = Step::getUnset(m_PlanarForceY);
    m_PlanarForceZ = Step::getUnset(m_PlanarForceZ);
}

IfcStructuralLoadPlanarForce::~IfcStructuralLoadPlanarForce()
{}

bool IfcStructuralLoadPlanarForce::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadPlanarForce(this);
}


IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlanarForceX;
    }
    else 
    {
        return Step::getUnset(m_PlanarForceX);
    }    
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceX() const
{
    return const_cast<IfcStructuralLoadPlanarForce *>(this)->getPlanarForceX();
}

void IfcStructuralLoadPlanarForce::setPlanarForceX(IfcPlanarForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlanarForceX = value;
}

void IfcStructuralLoadPlanarForce::unsetPlanarForceX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlanarForceX = Step::getUnset(getPlanarForceX());
}

bool IfcStructuralLoadPlanarForce::testPlanarForceX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPlanarForceX()) == false;
}


IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlanarForceY;
    }
    else 
    {
        return Step::getUnset(m_PlanarForceY);
    }    
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceY() const
{
    return const_cast<IfcStructuralLoadPlanarForce *>(this)->getPlanarForceY();
}

void IfcStructuralLoadPlanarForce::setPlanarForceY(IfcPlanarForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlanarForceY = value;
}

void IfcStructuralLoadPlanarForce::unsetPlanarForceY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlanarForceY = Step::getUnset(getPlanarForceY());
}

bool IfcStructuralLoadPlanarForce::testPlanarForceY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPlanarForceY()) == false;
}


IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlanarForceZ;
    }
    else 
    {
        return Step::getUnset(m_PlanarForceZ);
    }    
}

IfcPlanarForceMeasure IfcStructuralLoadPlanarForce::getPlanarForceZ() const
{
    return const_cast<IfcStructuralLoadPlanarForce *>(this)->getPlanarForceZ();
}

void IfcStructuralLoadPlanarForce::setPlanarForceZ(IfcPlanarForceMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlanarForceZ = value;
}

void IfcStructuralLoadPlanarForce::unsetPlanarForceZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlanarForceZ = Step::getUnset(getPlanarForceZ());
}

bool IfcStructuralLoadPlanarForce::testPlanarForceZ() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPlanarForceZ()) == false;
}

bool IfcStructuralLoadPlanarForce::init()
{
    if (IfcStructuralLoadStatic::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlanarForceX = Step::getUnset(m_PlanarForceX);
    }
    else
    {
        m_PlanarForceX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlanarForceY = Step::getUnset(m_PlanarForceY);
    }
    else
    {
        m_PlanarForceY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlanarForceZ = Step::getUnset(m_PlanarForceZ);
    }
    else
    {
        m_PlanarForceZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadPlanarForce::copy(const IfcStructuralLoadPlanarForce &obj, const CopyOp &copyop)
{
    IfcStructuralLoadStatic::copy(obj, copyop);
    setPlanarForceX(obj.m_PlanarForceX);
    setPlanarForceY(obj.m_PlanarForceY);
    setPlanarForceZ(obj.m_PlanarForceZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadPlanarForce, IfcStructuralLoadStatic)
