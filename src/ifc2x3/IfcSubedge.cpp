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


#include <ifc2x3/IfcSubedge.h>

#include <ifc2x3/IfcEdge.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSubedge::IfcSubedge(Step::Id id, Step::SPFData *args) : 
    IfcEdge(id, args)
{
    m_ParentEdge = NULL;
}

IfcSubedge::~IfcSubedge()
{}

bool IfcSubedge::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSubedge(this);
}


IfcEdge *IfcSubedge::getParentEdge()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ParentEdge.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcEdge *IfcSubedge::getParentEdge() const
{
    return const_cast<IfcSubedge *>(this)->getParentEdge();
}

void IfcSubedge::setParentEdge(const Step::RefPtr< IfcEdge > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentEdge = value;
}

void IfcSubedge::unsetParentEdge()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentEdge = Step::getUnset(getParentEdge());
}

bool IfcSubedge::testParentEdge() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getParentEdge()) == false;
}

bool IfcSubedge::init()
{
    if (IfcEdge::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ParentEdge = NULL;
    }
    else
    {
        m_ParentEdge = static_cast< IfcEdge * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSubedge::copy(const IfcSubedge &obj, const CopyOp &copyop)
{
    IfcEdge::copy(obj, copyop);
    setParentEdge((IfcEdge*)copyop(obj.m_ParentEdge.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSubedge, IfcEdge)
