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


#include <ifc2x3/IfcEdge.h>

#include <ifc2x3/IfcVertex.h>
#include <ifc2x3/IfcVertex.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEdge::IfcEdge(Step::Id id, Step::SPFData *args) : 
    IfcTopologicalRepresentationItem(id, args)
{
    m_EdgeStart = NULL;
    m_EdgeEnd = NULL;
}

IfcEdge::~IfcEdge()
{}

bool IfcEdge::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEdge(this);
}


IfcVertex *IfcEdge::getEdgeStart()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EdgeStart.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVertex *IfcEdge::getEdgeStart() const
{
    return const_cast<IfcEdge *>(this)->getEdgeStart();
}

void IfcEdge::setEdgeStart(const Step::RefPtr< IfcVertex > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeStart = value;
}

void IfcEdge::unsetEdgeStart()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeStart = Step::getUnset(getEdgeStart());
}

bool IfcEdge::testEdgeStart() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEdgeStart()) == false;
}


IfcVertex *IfcEdge::getEdgeEnd()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EdgeEnd.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVertex *IfcEdge::getEdgeEnd() const
{
    return const_cast<IfcEdge *>(this)->getEdgeEnd();
}

void IfcEdge::setEdgeEnd(const Step::RefPtr< IfcVertex > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeEnd = value;
}

void IfcEdge::unsetEdgeEnd()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeEnd = Step::getUnset(getEdgeEnd());
}

bool IfcEdge::testEdgeEnd() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEdgeEnd()) == false;
}

bool IfcEdge::init()
{
    if (IfcTopologicalRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EdgeStart = NULL;
    }
    else
    {
        m_EdgeStart = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EdgeEnd = NULL;
    }
    else
    {
        m_EdgeEnd = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcEdge::copy(const IfcEdge &obj, const CopyOp &copyop)
{
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setEdgeStart((IfcVertex*)copyop(obj.m_EdgeStart.get()));
    setEdgeEnd((IfcVertex*)copyop(obj.m_EdgeEnd.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEdge, IfcTopologicalRepresentationItem)
