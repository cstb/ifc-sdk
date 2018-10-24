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


#include <ifc2x3/IfcTask.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTask::IfcTask(Step::Id id, Step::SPFData *args) : 
    IfcProcess(id, args)
{
    m_TaskId = Step::getUnset(m_TaskId);
    m_Status = Step::getUnset(m_Status);
    m_WorkMethod = Step::getUnset(m_WorkMethod);
    m_IsMilestone = Step::getUnset(m_IsMilestone);
    m_Priority = Step::getUnset(m_Priority);
}

IfcTask::~IfcTask()
{}

bool IfcTask::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTask(this);
}


IfcIdentifier IfcTask::getTaskId()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TaskId;
    }
    else 
    {
        return Step::getUnset(m_TaskId);
    }    
}

const IfcIdentifier IfcTask::getTaskId() const
{
    return const_cast<IfcTask *>(this)->getTaskId();
}

void IfcTask::setTaskId(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TaskId = value;
}

void IfcTask::unsetTaskId()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TaskId = Step::getUnset(getTaskId());
}

bool IfcTask::testTaskId() const
{
    return Step::isUnset(getTaskId()) == false;
}


IfcLabel IfcTask::getStatus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Status;
    }
    else 
    {
        return Step::getUnset(m_Status);
    }    
}

const IfcLabel IfcTask::getStatus() const
{
    return const_cast<IfcTask *>(this)->getStatus();
}

void IfcTask::setStatus(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = value;
}

void IfcTask::unsetStatus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = Step::getUnset(getStatus());
}

bool IfcTask::testStatus() const
{
    return Step::isUnset(getStatus()) == false;
}


IfcLabel IfcTask::getWorkMethod()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WorkMethod;
    }
    else 
    {
        return Step::getUnset(m_WorkMethod);
    }    
}

const IfcLabel IfcTask::getWorkMethod() const
{
    return const_cast<IfcTask *>(this)->getWorkMethod();
}

void IfcTask::setWorkMethod(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WorkMethod = value;
}

void IfcTask::unsetWorkMethod()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WorkMethod = Step::getUnset(getWorkMethod());
}

bool IfcTask::testWorkMethod() const
{
    return Step::isUnset(getWorkMethod()) == false;
}


Step::Boolean IfcTask::getIsMilestone()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsMilestone;
    }
    else 
    {
        return Step::getUnset(m_IsMilestone);
    }    
}

Step::Boolean IfcTask::getIsMilestone() const
{
    return const_cast<IfcTask *>(this)->getIsMilestone();
}

void IfcTask::setIsMilestone(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsMilestone = value;
}

void IfcTask::unsetIsMilestone()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsMilestone = Step::getUnset(getIsMilestone());
}

bool IfcTask::testIsMilestone() const
{
    return Step::isUnset(getIsMilestone()) == false;
}


Step::Integer IfcTask::getPriority()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Priority;
    }
    else 
    {
        return Step::getUnset(m_Priority);
    }    
}

Step::Integer IfcTask::getPriority() const
{
    return const_cast<IfcTask *>(this)->getPriority();
}

void IfcTask::setPriority(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Priority = value;
}

void IfcTask::unsetPriority()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Priority = Step::getUnset(getPriority());
}

bool IfcTask::testPriority() const
{
    return Step::isUnset(getPriority()) == false;
}

bool IfcTask::init()
{
    if (IfcProcess::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TaskId = Step::getUnset(m_TaskId);
    }
    else
    {
        m_TaskId = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Status = Step::getUnset(m_Status);
    }
    else
    {
        m_Status = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WorkMethod = Step::getUnset(m_WorkMethod);
    }
    else
    {
        m_WorkMethod = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsMilestone = Step::getUnset(m_IsMilestone);
    }
    else
    {
        m_IsMilestone = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Priority = Step::getUnset(m_Priority);
    }
    else
    {
        m_Priority = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcTask::copy(const IfcTask &obj, const CopyOp &copyop)
{
    IfcProcess::copy(obj, copyop);
    setTaskId(obj.m_TaskId);
    setStatus(obj.m_Status);
    setWorkMethod(obj.m_WorkMethod);
    setIsMilestone(obj.m_IsMilestone);
    setPriority(obj.m_Priority);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTask, IfcProcess)
