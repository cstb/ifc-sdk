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


#include <ifc2x3/IfcVertexLoop.h>

#include <ifc2x3/IfcVertex.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcVertexLoop::IfcVertexLoop(Step::Id id, Step::SPFData *args) : 
    IfcLoop(id, args)
{
    m_LoopVertex = NULL;
}

IfcVertexLoop::~IfcVertexLoop()
{}

bool IfcVertexLoop::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcVertexLoop(this);
}


IfcVertex *IfcVertexLoop::getLoopVertex()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LoopVertex.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVertex *IfcVertexLoop::getLoopVertex() const
{
    return const_cast<IfcVertexLoop *>(this)->getLoopVertex();
}

void IfcVertexLoop::setLoopVertex(const Step::RefPtr< IfcVertex > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LoopVertex = value;
}

void IfcVertexLoop::unsetLoopVertex()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LoopVertex = Step::getUnset(getLoopVertex());
}

bool IfcVertexLoop::testLoopVertex() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLoopVertex()) == false;
}

bool IfcVertexLoop::init()
{
    if (IfcLoop::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LoopVertex = NULL;
    }
    else
    {
        m_LoopVertex = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcVertexLoop::copy(const IfcVertexLoop &obj, const CopyOp &copyop)
{
    IfcLoop::copy(obj, copyop);
    setLoopVertex((IfcVertex*)copyop(obj.m_LoopVertex.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcVertexLoop, IfcLoop)
