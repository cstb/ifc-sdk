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


#include <ifc2x3/IfcEdgeCurve.h>

#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEdgeCurve::IfcEdgeCurve(Step::Id id, Step::SPFData *args) : 
    IfcEdge(id, args)
{
    m_EdgeGeometry = NULL;
    m_SameSense = Step::getUnset(m_SameSense);
}

IfcEdgeCurve::~IfcEdgeCurve()
{}

bool IfcEdgeCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEdgeCurve(this);
}


IfcCurve *IfcEdgeCurve::getEdgeGeometry()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EdgeGeometry.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcEdgeCurve::getEdgeGeometry() const
{
    return const_cast<IfcEdgeCurve *>(this)->getEdgeGeometry();
}

void IfcEdgeCurve::setEdgeGeometry(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeGeometry = value;
}

void IfcEdgeCurve::unsetEdgeGeometry()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeGeometry = Step::getUnset(getEdgeGeometry());
}

bool IfcEdgeCurve::testEdgeGeometry() const
{
    return Step::isUnset(getEdgeGeometry()) == false;
}


Step::Boolean IfcEdgeCurve::getSameSense()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SameSense;
    }
    else 
    {
        return Step::getUnset(m_SameSense);
    }    
}

Step::Boolean IfcEdgeCurve::getSameSense() const
{
    return const_cast<IfcEdgeCurve *>(this)->getSameSense();
}

void IfcEdgeCurve::setSameSense(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SameSense = value;
}

void IfcEdgeCurve::unsetSameSense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SameSense = Step::getUnset(getSameSense());
}

bool IfcEdgeCurve::testSameSense() const
{
    return Step::isUnset(getSameSense()) == false;
}

bool IfcEdgeCurve::init()
{
    if (IfcEdge::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EdgeGeometry = NULL;
    }
    else
    {
        m_EdgeGeometry = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SameSense = Step::getUnset(m_SameSense);
    }
    else
    {
        m_SameSense = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcEdgeCurve::copy(const IfcEdgeCurve &obj, const CopyOp &copyop)
{
    IfcEdge::copy(obj, copyop);
    setEdgeGeometry((IfcCurve*)copyop(obj.m_EdgeGeometry.get()));
    setSameSense(obj.m_SameSense);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEdgeCurve, IfcEdge)
