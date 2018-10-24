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


#include <ifc2x3/IfcOffsetCurve3D.h>

#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOffsetCurve3D::IfcOffsetCurve3D(Step::Id id, Step::SPFData *args) : 
    IfcCurve(id, args)
{
    m_BasisCurve = NULL;
    m_Distance = Step::getUnset(m_Distance);
    m_SelfIntersect = Step::getUnset(m_SelfIntersect);
    m_RefDirection = NULL;
}

IfcOffsetCurve3D::~IfcOffsetCurve3D()
{}

bool IfcOffsetCurve3D::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOffsetCurve3D(this);
}


IfcCurve *IfcOffsetCurve3D::getBasisCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BasisCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcOffsetCurve3D::getBasisCurve() const
{
    return const_cast<IfcOffsetCurve3D *>(this)->getBasisCurve();
}

void IfcOffsetCurve3D::setBasisCurve(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisCurve = value;
}

void IfcOffsetCurve3D::unsetBasisCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisCurve = Step::getUnset(getBasisCurve());
}

bool IfcOffsetCurve3D::testBasisCurve() const
{
    return Step::isUnset(getBasisCurve()) == false;
}


IfcLengthMeasure IfcOffsetCurve3D::getDistance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Distance;
    }
    else 
    {
        return Step::getUnset(m_Distance);
    }    
}

IfcLengthMeasure IfcOffsetCurve3D::getDistance() const
{
    return const_cast<IfcOffsetCurve3D *>(this)->getDistance();
}

void IfcOffsetCurve3D::setDistance(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Distance = value;
}

void IfcOffsetCurve3D::unsetDistance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Distance = Step::getUnset(getDistance());
}

bool IfcOffsetCurve3D::testDistance() const
{
    return Step::isUnset(getDistance()) == false;
}


Step::Logical IfcOffsetCurve3D::getSelfIntersect()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SelfIntersect;
    }
    else 
    {
        return Step::getUnset(m_SelfIntersect);
    }    
}

Step::Logical IfcOffsetCurve3D::getSelfIntersect() const
{
    return const_cast<IfcOffsetCurve3D *>(this)->getSelfIntersect();
}

void IfcOffsetCurve3D::setSelfIntersect(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SelfIntersect = value;
}

void IfcOffsetCurve3D::unsetSelfIntersect()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SelfIntersect = Step::getUnset(getSelfIntersect());
}

bool IfcOffsetCurve3D::testSelfIntersect() const
{
    return Step::isUnset(getSelfIntersect()) == false;
}


IfcDirection *IfcOffsetCurve3D::getRefDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RefDirection.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcOffsetCurve3D::getRefDirection() const
{
    return const_cast<IfcOffsetCurve3D *>(this)->getRefDirection();
}

void IfcOffsetCurve3D::setRefDirection(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefDirection = value;
}

void IfcOffsetCurve3D::unsetRefDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefDirection = Step::getUnset(getRefDirection());
}

bool IfcOffsetCurve3D::testRefDirection() const
{
    return Step::isUnset(getRefDirection()) == false;
}

bool IfcOffsetCurve3D::init()
{
    if (IfcCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BasisCurve = NULL;
    }
    else
    {
        m_BasisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Distance = Step::getUnset(m_Distance);
    }
    else
    {
        m_Distance = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SelfIntersect = Step::getUnset(m_SelfIntersect);
    }
    else
    {
        m_SelfIntersect = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RefDirection = NULL;
    }
    else
    {
        m_RefDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcOffsetCurve3D::copy(const IfcOffsetCurve3D &obj, const CopyOp &copyop)
{
    IfcCurve::copy(obj, copyop);
    setBasisCurve((IfcCurve*)copyop(obj.m_BasisCurve.get()));
    setDistance(obj.m_Distance);
    setSelfIntersect(obj.m_SelfIntersect);
    setRefDirection((IfcDirection*)copyop(obj.m_RefDirection.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOffsetCurve3D, IfcCurve)
