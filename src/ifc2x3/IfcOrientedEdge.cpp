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


#include <ifc2x3/IfcOrientedEdge.h>

#include <ifc2x3/IfcEdge.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOrientedEdge::IfcOrientedEdge(Step::Id id, Step::SPFData *args) : 
    IfcEdge(id, args)
{
    m_EdgeElement = NULL;
    m_Orientation = Step::getUnset(m_Orientation);
}

IfcOrientedEdge::~IfcOrientedEdge()
{}

bool IfcOrientedEdge::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOrientedEdge(this);
}


IfcEdge *IfcOrientedEdge::getEdgeElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EdgeElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcEdge *IfcOrientedEdge::getEdgeElement() const
{
    return const_cast<IfcOrientedEdge *>(this)->getEdgeElement();
}

void IfcOrientedEdge::setEdgeElement(const Step::RefPtr< IfcEdge > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeElement = value;
}

void IfcOrientedEdge::unsetEdgeElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeElement = Step::getUnset(getEdgeElement());
}

bool IfcOrientedEdge::testEdgeElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEdgeElement()) == false;
}


Step::Boolean IfcOrientedEdge::getOrientation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Orientation;
    }
    else 
    {
        return Step::getUnset(m_Orientation);
    }    
}

Step::Boolean IfcOrientedEdge::getOrientation() const
{
    return const_cast<IfcOrientedEdge *>(this)->getOrientation();
}

void IfcOrientedEdge::setOrientation(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = value;
}

void IfcOrientedEdge::unsetOrientation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = Step::getUnset(getOrientation());
}

bool IfcOrientedEdge::testOrientation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOrientation()) == false;
}

bool IfcOrientedEdge::init()
{
    if (IfcEdge::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EdgeElement = NULL;
    }
    else
    {
        m_EdgeElement = static_cast< IfcEdge * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Orientation = Step::getUnset(m_Orientation);
    }
    else
    {
        m_Orientation = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcOrientedEdge::copy(const IfcOrientedEdge &obj, const CopyOp &copyop)
{
    IfcEdge::copy(obj, copyop);
    setEdgeElement((IfcEdge*)copyop(obj.m_EdgeElement.get()));
    setOrientation(obj.m_Orientation);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOrientedEdge, IfcEdge)
