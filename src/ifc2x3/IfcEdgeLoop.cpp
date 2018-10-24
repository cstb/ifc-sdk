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


#include <ifc2x3/IfcEdgeLoop.h>

#include <ifc2x3/IfcOrientedEdge.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEdgeLoop::IfcEdgeLoop(Step::Id id, Step::SPFData *args) : 
    IfcLoop(id, args)
{
    m_EdgeList.setUnset(true);
}

IfcEdgeLoop::~IfcEdgeLoop()
{}

bool IfcEdgeLoop::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEdgeLoop(this);
}


List_IfcOrientedEdge_1_n &IfcEdgeLoop::getEdgeList()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EdgeList;
    }
    else 
    {
        m_EdgeList.setUnset(true);
        return m_EdgeList;
    }    
}

const List_IfcOrientedEdge_1_n &IfcEdgeLoop::getEdgeList() const
{
    return const_cast<IfcEdgeLoop *>(this)->getEdgeList();
}

void IfcEdgeLoop::setEdgeList(const List_IfcOrientedEdge_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeList = value;
}

void IfcEdgeLoop::unsetEdgeList()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeList.clear();
    m_EdgeList.setUnset(true);
}

bool IfcEdgeLoop::testEdgeList() const
{
    return m_EdgeList.isUnset() == false;
}

bool IfcEdgeLoop::init()
{
    if (IfcLoop::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EdgeList.setUnset(true);
    }
    else
    {
        m_EdgeList.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_EdgeList.push_back(static_cast< IfcOrientedEdge * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcEdgeLoop::copy(const IfcEdgeLoop &obj, const CopyOp &copyop)
{
    IfcLoop::copy(obj, copyop);
    List_IfcOrientedEdge_1_n::const_iterator it_m_EdgeList;
    for (it_m_EdgeList = obj.m_EdgeList.begin(); it_m_EdgeList != obj.m_EdgeList.end(); ++it_m_EdgeList)
    {
        Step::RefPtr< IfcOrientedEdge > copyTarget = (IfcOrientedEdge *) (copyop((*it_m_EdgeList).get()));
        m_EdgeList.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEdgeLoop, IfcLoop)
