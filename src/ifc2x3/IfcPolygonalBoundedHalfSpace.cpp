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


#include <ifc2x3/IfcPolygonalBoundedHalfSpace.h>

#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcBoundedCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace(Step::Id id, Step::SPFData *args) : 
    IfcHalfSpaceSolid(id, args)
{
    m_Position = NULL;
    m_PolygonalBoundary = NULL;
}

IfcPolygonalBoundedHalfSpace::~IfcPolygonalBoundedHalfSpace()
{}

bool IfcPolygonalBoundedHalfSpace::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPolygonalBoundedHalfSpace(this);
}


IfcAxis2Placement3D *IfcPolygonalBoundedHalfSpace::getPosition()
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

const IfcAxis2Placement3D *IfcPolygonalBoundedHalfSpace::getPosition() const
{
    return const_cast<IfcPolygonalBoundedHalfSpace *>(this)->getPosition();
}

void IfcPolygonalBoundedHalfSpace::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = value;
}

void IfcPolygonalBoundedHalfSpace::unsetPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = Step::getUnset(getPosition());
}

bool IfcPolygonalBoundedHalfSpace::testPosition() const
{
    return Step::isUnset(getPosition()) == false;
}


IfcBoundedCurve *IfcPolygonalBoundedHalfSpace::getPolygonalBoundary()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PolygonalBoundary.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcBoundedCurve *IfcPolygonalBoundedHalfSpace::getPolygonalBoundary() const
{
    return const_cast<IfcPolygonalBoundedHalfSpace *>(this)->getPolygonalBoundary();
}

void IfcPolygonalBoundedHalfSpace::setPolygonalBoundary(const Step::RefPtr< IfcBoundedCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PolygonalBoundary = value;
}

void IfcPolygonalBoundedHalfSpace::unsetPolygonalBoundary()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PolygonalBoundary = Step::getUnset(getPolygonalBoundary());
}

bool IfcPolygonalBoundedHalfSpace::testPolygonalBoundary() const
{
    return Step::isUnset(getPolygonalBoundary()) == false;
}

bool IfcPolygonalBoundedHalfSpace::init()
{
    if (IfcHalfSpaceSolid::init() == false)
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
        m_Position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PolygonalBoundary = NULL;
    }
    else
    {
        m_PolygonalBoundary = static_cast< IfcBoundedCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcPolygonalBoundedHalfSpace::copy(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop)
{
    IfcHalfSpaceSolid::copy(obj, copyop);
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_Position.get()));
    setPolygonalBoundary((IfcBoundedCurve*)copyop(obj.m_PolygonalBoundary.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPolygonalBoundedHalfSpace, IfcHalfSpaceSolid)
