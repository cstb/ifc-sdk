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


#include <ifc2x3/IfcSweptSurface.h>

#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcAxis2Placement3D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSweptSurface::IfcSweptSurface(Step::Id id, Step::SPFData *args) : 
    IfcSurface(id, args)
{
    m_SweptCurve = NULL;
    m_Position = NULL;
}

IfcSweptSurface::~IfcSweptSurface()
{}

bool IfcSweptSurface::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSweptSurface(this);
}


IfcProfileDef *IfcSweptSurface::getSweptCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SweptCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcSweptSurface::getSweptCurve() const
{
    return const_cast<IfcSweptSurface *>(this)->getSweptCurve();
}

void IfcSweptSurface::setSweptCurve(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SweptCurve = value;
}

void IfcSweptSurface::unsetSweptCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SweptCurve = Step::getUnset(getSweptCurve());
}

bool IfcSweptSurface::testSweptCurve() const
{
    return Step::isUnset(getSweptCurve()) == false;
}


IfcAxis2Placement3D *IfcSweptSurface::getPosition()
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

const IfcAxis2Placement3D *IfcSweptSurface::getPosition() const
{
    return const_cast<IfcSweptSurface *>(this)->getPosition();
}

void IfcSweptSurface::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = value;
}

void IfcSweptSurface::unsetPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = Step::getUnset(getPosition());
}

bool IfcSweptSurface::testPosition() const
{
    return Step::isUnset(getPosition()) == false;
}

bool IfcSweptSurface::init()
{
    if (IfcSurface::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SweptCurve = NULL;
    }
    else
    {
        m_SweptCurve = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
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
    return true;
}

void IfcSweptSurface::copy(const IfcSweptSurface &obj, const CopyOp &copyop)
{
    IfcSurface::copy(obj, copyop);
    setSweptCurve((IfcProfileDef*)copyop(obj.m_SweptCurve.get()));
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_Position.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSweptSurface, IfcSurface)
