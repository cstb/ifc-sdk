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


#include <ifc2x3/IfcRelAssignsTasks.h>

#include <ifc2x3/IfcScheduleTimeControl.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssignsTasks::IfcRelAssignsTasks(Step::Id id, Step::SPFData *args) : 
    IfcRelAssignsToControl(id, args)
{
    m_TimeForTask = NULL;
}

IfcRelAssignsTasks::~IfcRelAssignsTasks()
{}

bool IfcRelAssignsTasks::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssignsTasks(this);
}

IfcScheduleTimeControl *IfcRelAssignsTasks::getTimeForTask()
{
    if (Step::BaseObject::inited())
    {
        return m_TimeForTask.get();
    }
    else
    {
        return NULL;
    }
}

const IfcScheduleTimeControl *IfcRelAssignsTasks::getTimeForTask() const
{
    return const_cast< IfcRelAssignsTasks * > (this)->getTimeForTask();
}

void IfcRelAssignsTasks::setTimeForTask(const Step::RefPtr< IfcScheduleTimeControl > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_TimeForTask.valid())
    {
        m_TimeForTask->m_ScheduleTimeControlAssigned = NULL;
    }
    if (value.valid() )
    {
        value->m_ScheduleTimeControlAssigned = this;
    }
    m_TimeForTask = value;
}

void IfcRelAssignsTasks::unsetTimeForTask()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeForTask = Step::getUnset(getTimeForTask());
}

bool IfcRelAssignsTasks::testTimeForTask() const
{
    return Step::isUnset(getTimeForTask()) == false;
}

bool IfcRelAssignsTasks::init()
{
    if (IfcRelAssignsToControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeForTask = NULL;
    }
    else
    {
        m_TimeForTask = static_cast< IfcScheduleTimeControl * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssignsTasks::copy(const IfcRelAssignsTasks &obj, const CopyOp &copyop)
{
    IfcRelAssignsToControl::copy(obj, copyop);
    setTimeForTask((IfcScheduleTimeControl*)copyop(obj.m_TimeForTask.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssignsTasks, IfcRelAssignsToControl)
