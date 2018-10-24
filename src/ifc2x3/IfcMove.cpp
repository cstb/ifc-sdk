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


#include <ifc2x3/IfcMove.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcSpatialStructureElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMove::IfcMove(Step::Id id, Step::SPFData *args) : 
    IfcTask(id, args)
{
    m_MoveFrom = NULL;
    m_MoveTo = NULL;
    m_PunchList.setUnset(true);
}

IfcMove::~IfcMove()
{}

bool IfcMove::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMove(this);
}


IfcSpatialStructureElement *IfcMove::getMoveFrom()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MoveFrom.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSpatialStructureElement *IfcMove::getMoveFrom() const
{
    return const_cast<IfcMove *>(this)->getMoveFrom();
}

void IfcMove::setMoveFrom(const Step::RefPtr< IfcSpatialStructureElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MoveFrom = value;
}

void IfcMove::unsetMoveFrom()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MoveFrom = Step::getUnset(getMoveFrom());
}

bool IfcMove::testMoveFrom() const
{
    return Step::isUnset(getMoveFrom()) == false;
}


IfcSpatialStructureElement *IfcMove::getMoveTo()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MoveTo.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSpatialStructureElement *IfcMove::getMoveTo() const
{
    return const_cast<IfcMove *>(this)->getMoveTo();
}

void IfcMove::setMoveTo(const Step::RefPtr< IfcSpatialStructureElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MoveTo = value;
}

void IfcMove::unsetMoveTo()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MoveTo = Step::getUnset(getMoveTo());
}

bool IfcMove::testMoveTo() const
{
    return Step::isUnset(getMoveTo()) == false;
}


List_IfcText_1_n &IfcMove::getPunchList()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PunchList;
    }
    else 
    {
        m_PunchList.setUnset(true);
        return m_PunchList;
    }    
}

const List_IfcText_1_n &IfcMove::getPunchList() const
{
    return const_cast<IfcMove *>(this)->getPunchList();
}

void IfcMove::setPunchList(const List_IfcText_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PunchList = value;
}

void IfcMove::unsetPunchList()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PunchList.clear();
    m_PunchList.setUnset(true);
}

bool IfcMove::testPunchList() const
{
    return m_PunchList.isUnset() == false;
}

bool IfcMove::init()
{
    if (IfcTask::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MoveFrom = NULL;
    }
    else
    {
        m_MoveFrom = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MoveTo = NULL;
    }
    else
    {
        m_MoveTo = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PunchList.setUnset(true);
    }
    else
    {
        m_PunchList.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_PunchList.push_back(Step::String::fromSPF(str1)
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

void IfcMove::copy(const IfcMove &obj, const CopyOp &copyop)
{
    IfcTask::copy(obj, copyop);
    setMoveFrom((IfcSpatialStructureElement*)copyop(obj.m_MoveFrom.get()));
    setMoveTo((IfcSpatialStructureElement*)copyop(obj.m_MoveTo.get()));
    List_IfcText_1_n::const_iterator it_m_PunchList;
    for (it_m_PunchList = obj.m_PunchList.begin(); it_m_PunchList != obj.m_PunchList.end(); ++it_m_PunchList)
    {
        IfcText copyTarget = (*it_m_PunchList);
        m_PunchList.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMove, IfcTask)
