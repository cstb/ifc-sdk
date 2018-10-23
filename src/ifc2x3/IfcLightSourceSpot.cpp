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


#include <ifc2x3/IfcLightSourceSpot.h>

#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLightSourceSpot::IfcLightSourceSpot(Step::Id id, Step::SPFData *args) : 
    IfcLightSourcePositional(id, args)
{
    m_Orientation = NULL;
    m_ConcentrationExponent = Step::getUnset(m_ConcentrationExponent);
    m_SpreadAngle = Step::getUnset(m_SpreadAngle);
    m_BeamWidthAngle = Step::getUnset(m_BeamWidthAngle);
}

IfcLightSourceSpot::~IfcLightSourceSpot()
{}

bool IfcLightSourceSpot::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLightSourceSpot(this);
}


IfcDirection *IfcLightSourceSpot::getOrientation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Orientation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcLightSourceSpot::getOrientation() const
{
    return const_cast<IfcLightSourceSpot *>(this)->getOrientation();
}

void IfcLightSourceSpot::setOrientation(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = value;
}

void IfcLightSourceSpot::unsetOrientation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = Step::getUnset(getOrientation());
}

bool IfcLightSourceSpot::testOrientation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOrientation()) == false;
}


IfcReal IfcLightSourceSpot::getConcentrationExponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConcentrationExponent;
    }
    else 
    {
        return Step::getUnset(m_ConcentrationExponent);
    }    
}

IfcReal IfcLightSourceSpot::getConcentrationExponent() const
{
    return const_cast<IfcLightSourceSpot *>(this)->getConcentrationExponent();
}

void IfcLightSourceSpot::setConcentrationExponent(IfcReal value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConcentrationExponent = value;
}

void IfcLightSourceSpot::unsetConcentrationExponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConcentrationExponent = Step::getUnset(getConcentrationExponent());
}

bool IfcLightSourceSpot::testConcentrationExponent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConcentrationExponent()) == false;
}


IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getSpreadAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SpreadAngle;
    }
    else 
    {
        return Step::getUnset(m_SpreadAngle);
    }    
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getSpreadAngle() const
{
    return const_cast<IfcLightSourceSpot *>(this)->getSpreadAngle();
}

void IfcLightSourceSpot::setSpreadAngle(IfcPositivePlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpreadAngle = value;
}

void IfcLightSourceSpot::unsetSpreadAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SpreadAngle = Step::getUnset(getSpreadAngle());
}

bool IfcLightSourceSpot::testSpreadAngle() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSpreadAngle()) == false;
}


IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getBeamWidthAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BeamWidthAngle;
    }
    else 
    {
        return Step::getUnset(m_BeamWidthAngle);
    }    
}

IfcPositivePlaneAngleMeasure IfcLightSourceSpot::getBeamWidthAngle() const
{
    return const_cast<IfcLightSourceSpot *>(this)->getBeamWidthAngle();
}

void IfcLightSourceSpot::setBeamWidthAngle(IfcPositivePlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BeamWidthAngle = value;
}

void IfcLightSourceSpot::unsetBeamWidthAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BeamWidthAngle = Step::getUnset(getBeamWidthAngle());
}

bool IfcLightSourceSpot::testBeamWidthAngle() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBeamWidthAngle()) == false;
}

bool IfcLightSourceSpot::init()
{
    if (IfcLightSourcePositional::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Orientation = NULL;
    }
    else
    {
        m_Orientation = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConcentrationExponent = Step::getUnset(m_ConcentrationExponent);
    }
    else
    {
        m_ConcentrationExponent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SpreadAngle = Step::getUnset(m_SpreadAngle);
    }
    else
    {
        m_SpreadAngle = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BeamWidthAngle = Step::getUnset(m_BeamWidthAngle);
    }
    else
    {
        m_BeamWidthAngle = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcLightSourceSpot::copy(const IfcLightSourceSpot &obj, const CopyOp &copyop)
{
    IfcLightSourcePositional::copy(obj, copyop);
    setOrientation((IfcDirection*)copyop(obj.m_Orientation.get()));
    setConcentrationExponent(obj.m_ConcentrationExponent);
    setSpreadAngle(obj.m_SpreadAngle);
    setBeamWidthAngle(obj.m_BeamWidthAngle);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLightSourceSpot, IfcLightSourcePositional)
