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


#include <ifc2x3/IfcConnectionPointEccentricity.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcConnectionPointEccentricity::IfcConnectionPointEccentricity(Step::Id id, Step::SPFData *args) : 
    IfcConnectionPointGeometry(id, args)
{
    m_EccentricityInX = Step::getUnset(m_EccentricityInX);
    m_EccentricityInY = Step::getUnset(m_EccentricityInY);
    m_EccentricityInZ = Step::getUnset(m_EccentricityInZ);
}

IfcConnectionPointEccentricity::~IfcConnectionPointEccentricity()
{}

bool IfcConnectionPointEccentricity::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConnectionPointEccentricity(this);
}


IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EccentricityInX;
    }
    else 
    {
        return Step::getUnset(m_EccentricityInX);
    }    
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInX() const
{
    return const_cast<IfcConnectionPointEccentricity *>(this)->getEccentricityInX();
}

void IfcConnectionPointEccentricity::setEccentricityInX(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EccentricityInX = value;
}

void IfcConnectionPointEccentricity::unsetEccentricityInX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EccentricityInX = Step::getUnset(getEccentricityInX());
}

bool IfcConnectionPointEccentricity::testEccentricityInX() const
{
    return Step::isUnset(getEccentricityInX()) == false;
}


IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EccentricityInY;
    }
    else 
    {
        return Step::getUnset(m_EccentricityInY);
    }    
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInY() const
{
    return const_cast<IfcConnectionPointEccentricity *>(this)->getEccentricityInY();
}

void IfcConnectionPointEccentricity::setEccentricityInY(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EccentricityInY = value;
}

void IfcConnectionPointEccentricity::unsetEccentricityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EccentricityInY = Step::getUnset(getEccentricityInY());
}

bool IfcConnectionPointEccentricity::testEccentricityInY() const
{
    return Step::isUnset(getEccentricityInY()) == false;
}


IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInZ()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EccentricityInZ;
    }
    else 
    {
        return Step::getUnset(m_EccentricityInZ);
    }    
}

IfcLengthMeasure IfcConnectionPointEccentricity::getEccentricityInZ() const
{
    return const_cast<IfcConnectionPointEccentricity *>(this)->getEccentricityInZ();
}

void IfcConnectionPointEccentricity::setEccentricityInZ(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EccentricityInZ = value;
}

void IfcConnectionPointEccentricity::unsetEccentricityInZ()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EccentricityInZ = Step::getUnset(getEccentricityInZ());
}

bool IfcConnectionPointEccentricity::testEccentricityInZ() const
{
    return Step::isUnset(getEccentricityInZ()) == false;
}

bool IfcConnectionPointEccentricity::init()
{
    if (IfcConnectionPointGeometry::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EccentricityInX = Step::getUnset(m_EccentricityInX);
    }
    else
    {
        m_EccentricityInX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EccentricityInY = Step::getUnset(m_EccentricityInY);
    }
    else
    {
        m_EccentricityInY = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EccentricityInZ = Step::getUnset(m_EccentricityInZ);
    }
    else
    {
        m_EccentricityInZ = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcConnectionPointEccentricity::copy(const IfcConnectionPointEccentricity &obj, const CopyOp &copyop)
{
    IfcConnectionPointGeometry::copy(obj, copyop);
    setEccentricityInX(obj.m_EccentricityInX);
    setEccentricityInY(obj.m_EccentricityInY);
    setEccentricityInZ(obj.m_EccentricityInZ);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConnectionPointEccentricity, IfcConnectionPointGeometry)
