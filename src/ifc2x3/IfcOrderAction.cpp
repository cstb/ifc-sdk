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


#include <ifc2x3/IfcOrderAction.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOrderAction::IfcOrderAction(Step::Id id, Step::SPFData *args) : 
    IfcTask(id, args)
{
    m_ActionID = Step::getUnset(m_ActionID);
}

IfcOrderAction::~IfcOrderAction()
{}

bool IfcOrderAction::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOrderAction(this);
}


IfcIdentifier IfcOrderAction::getActionID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActionID;
    }
    else 
    {
        return Step::getUnset(m_ActionID);
    }    
}

const IfcIdentifier IfcOrderAction::getActionID() const
{
    return const_cast<IfcOrderAction *>(this)->getActionID();
}

void IfcOrderAction::setActionID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActionID = value;
}

void IfcOrderAction::unsetActionID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActionID = Step::getUnset(getActionID());
}

bool IfcOrderAction::testActionID() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getActionID()) == false;
}

bool IfcOrderAction::init()
{
    if (IfcTask::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActionID = Step::getUnset(m_ActionID);
    }
    else
    {
        m_ActionID = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcOrderAction::copy(const IfcOrderAction &obj, const CopyOp &copyop)
{
    IfcTask::copy(obj, copyop);
    setActionID(obj.m_ActionID);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOrderAction, IfcTask)
