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


#include <ifc2x3/IfcLightSourcePositional.h>

#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLightSourcePositional::IfcLightSourcePositional(Step::Id id, Step::SPFData *args) : 
    IfcLightSource(id, args)
{
    m_Position = NULL;
    m_Radius = Step::getUnset(m_Radius);
    m_ConstantAttenuation = Step::getUnset(m_ConstantAttenuation);
    m_DistanceAttenuation = Step::getUnset(m_DistanceAttenuation);
    m_QuadricAttenuation = Step::getUnset(m_QuadricAttenuation);
}

IfcLightSourcePositional::~IfcLightSourcePositional()
{}

bool IfcLightSourcePositional::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLightSourcePositional(this);
}


IfcCartesianPoint *IfcLightSourcePositional::getPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Position.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcLightSourcePositional::getPosition() const
{
    return const_cast<IfcLightSourcePositional *>(this)->getPosition();
}

void IfcLightSourcePositional::setPosition(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = value;
}

void IfcLightSourcePositional::unsetPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = Step::getUnset(getPosition());
}

bool IfcLightSourcePositional::testPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPosition()) == false;
}


IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Radius;
    }
    else 
    {
        return Step::getUnset(m_Radius);
    }    
}

IfcPositiveLengthMeasure IfcLightSourcePositional::getRadius() const
{
    return const_cast<IfcLightSourcePositional *>(this)->getRadius();
}

void IfcLightSourcePositional::setRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = value;
}

void IfcLightSourcePositional::unsetRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = Step::getUnset(getRadius());
}

bool IfcLightSourcePositional::testRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRadius()) == false;
}


IfcReal IfcLightSourcePositional::getConstantAttenuation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConstantAttenuation;
    }
    else 
    {
        return Step::getUnset(m_ConstantAttenuation);
    }    
}

IfcReal IfcLightSourcePositional::getConstantAttenuation() const
{
    return const_cast<IfcLightSourcePositional *>(this)->getConstantAttenuation();
}

void IfcLightSourcePositional::setConstantAttenuation(IfcReal value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstantAttenuation = value;
}

void IfcLightSourcePositional::unsetConstantAttenuation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstantAttenuation = Step::getUnset(getConstantAttenuation());
}

bool IfcLightSourcePositional::testConstantAttenuation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConstantAttenuation()) == false;
}


IfcReal IfcLightSourcePositional::getDistanceAttenuation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DistanceAttenuation;
    }
    else 
    {
        return Step::getUnset(m_DistanceAttenuation);
    }    
}

IfcReal IfcLightSourcePositional::getDistanceAttenuation() const
{
    return const_cast<IfcLightSourcePositional *>(this)->getDistanceAttenuation();
}

void IfcLightSourcePositional::setDistanceAttenuation(IfcReal value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DistanceAttenuation = value;
}

void IfcLightSourcePositional::unsetDistanceAttenuation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DistanceAttenuation = Step::getUnset(getDistanceAttenuation());
}

bool IfcLightSourcePositional::testDistanceAttenuation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDistanceAttenuation()) == false;
}


IfcReal IfcLightSourcePositional::getQuadricAttenuation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_QuadricAttenuation;
    }
    else 
    {
        return Step::getUnset(m_QuadricAttenuation);
    }    
}

IfcReal IfcLightSourcePositional::getQuadricAttenuation() const
{
    return const_cast<IfcLightSourcePositional *>(this)->getQuadricAttenuation();
}

void IfcLightSourcePositional::setQuadricAttenuation(IfcReal value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_QuadricAttenuation = value;
}

void IfcLightSourcePositional::unsetQuadricAttenuation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_QuadricAttenuation = Step::getUnset(getQuadricAttenuation());
}

bool IfcLightSourcePositional::testQuadricAttenuation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getQuadricAttenuation()) == false;
}

bool IfcLightSourcePositional::init()
{
    if (IfcLightSource::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Position = NULL;
    }
    else
    {
        m_Position = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Radius = Step::getUnset(m_Radius);
    }
    else
    {
        m_Radius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConstantAttenuation = Step::getUnset(m_ConstantAttenuation);
    }
    else
    {
        m_ConstantAttenuation = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DistanceAttenuation = Step::getUnset(m_DistanceAttenuation);
    }
    else
    {
        m_DistanceAttenuation = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_QuadricAttenuation = Step::getUnset(m_QuadricAttenuation);
    }
    else
    {
        m_QuadricAttenuation = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcLightSourcePositional::copy(const IfcLightSourcePositional &obj, const CopyOp &copyop)
{
    IfcLightSource::copy(obj, copyop);
    setPosition((IfcCartesianPoint*)copyop(obj.m_Position.get()));
    setRadius(obj.m_Radius);
    setConstantAttenuation(obj.m_ConstantAttenuation);
    setDistanceAttenuation(obj.m_DistanceAttenuation);
    setQuadricAttenuation(obj.m_QuadricAttenuation);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLightSourcePositional, IfcLightSource)
