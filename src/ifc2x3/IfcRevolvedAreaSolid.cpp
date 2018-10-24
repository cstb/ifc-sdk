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


#include <ifc2x3/IfcRevolvedAreaSolid.h>

#include <ifc2x3/IfcAxis1Placement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRevolvedAreaSolid::IfcRevolvedAreaSolid(Step::Id id, Step::SPFData *args) : 
    IfcSweptAreaSolid(id, args)
{
    m_Axis = NULL;
    m_Angle = Step::getUnset(m_Angle);
}

IfcRevolvedAreaSolid::~IfcRevolvedAreaSolid()
{}

bool IfcRevolvedAreaSolid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRevolvedAreaSolid(this);
}


IfcAxis1Placement *IfcRevolvedAreaSolid::getAxis()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Axis.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis1Placement *IfcRevolvedAreaSolid::getAxis() const
{
    return const_cast<IfcRevolvedAreaSolid *>(this)->getAxis();
}

void IfcRevolvedAreaSolid::setAxis(const Step::RefPtr< IfcAxis1Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis = value;
}

void IfcRevolvedAreaSolid::unsetAxis()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis = Step::getUnset(getAxis());
}

bool IfcRevolvedAreaSolid::testAxis() const
{
    return Step::isUnset(getAxis()) == false;
}


IfcPlaneAngleMeasure IfcRevolvedAreaSolid::getAngle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Angle;
    }
    else 
    {
        return Step::getUnset(m_Angle);
    }    
}

IfcPlaneAngleMeasure IfcRevolvedAreaSolid::getAngle() const
{
    return const_cast<IfcRevolvedAreaSolid *>(this)->getAngle();
}

void IfcRevolvedAreaSolid::setAngle(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Angle = value;
}

void IfcRevolvedAreaSolid::unsetAngle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Angle = Step::getUnset(getAngle());
}

bool IfcRevolvedAreaSolid::testAngle() const
{
    return Step::isUnset(getAngle()) == false;
}

bool IfcRevolvedAreaSolid::init()
{
    if (IfcSweptAreaSolid::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Axis = NULL;
    }
    else
    {
        m_Axis = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Angle = Step::getUnset(m_Angle);
    }
    else
    {
        m_Angle = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcRevolvedAreaSolid::copy(const IfcRevolvedAreaSolid &obj, const CopyOp &copyop)
{
    IfcSweptAreaSolid::copy(obj, copyop);
    setAxis((IfcAxis1Placement*)copyop(obj.m_Axis.get()));
    setAngle(obj.m_Angle);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRevolvedAreaSolid, IfcSweptAreaSolid)
