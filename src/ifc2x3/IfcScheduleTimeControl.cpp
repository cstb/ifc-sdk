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


#include <ifc2x3/IfcScheduleTimeControl.h>

#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcRelAssignsTasks.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcScheduleTimeControl::IfcScheduleTimeControl(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_ActualStart = NULL;
    m_EarlyStart = NULL;
    m_LateStart = NULL;
    m_ScheduleStart = NULL;
    m_ActualFinish = NULL;
    m_EarlyFinish = NULL;
    m_LateFinish = NULL;
    m_ScheduleFinish = NULL;
    m_ScheduleDuration = Step::getUnset(m_ScheduleDuration);
    m_ActualDuration = Step::getUnset(m_ActualDuration);
    m_RemainingTime = Step::getUnset(m_RemainingTime);
    m_FreeFloat = Step::getUnset(m_FreeFloat);
    m_TotalFloat = Step::getUnset(m_TotalFloat);
    m_IsCritical = Step::getUnset(m_IsCritical);
    m_StatusTime = NULL;
    m_StartFloat = Step::getUnset(m_StartFloat);
    m_FinishFloat = Step::getUnset(m_FinishFloat);
    m_Completion = Step::getUnset(m_Completion);
}

IfcScheduleTimeControl::~IfcScheduleTimeControl()
{}

bool IfcScheduleTimeControl::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcScheduleTimeControl(this);
}


IfcDateTimeSelect *IfcScheduleTimeControl::getActualStart()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActualStart.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getActualStart() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getActualStart();
}

void IfcScheduleTimeControl::setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActualStart = value;
}

void IfcScheduleTimeControl::unsetActualStart()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActualStart = Step::getUnset(getActualStart());
}

bool IfcScheduleTimeControl::testActualStart() const
{
    return Step::isUnset(getActualStart()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyStart()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EarlyStart.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyStart() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getEarlyStart();
}

void IfcScheduleTimeControl::setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EarlyStart = value;
}

void IfcScheduleTimeControl::unsetEarlyStart()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EarlyStart = Step::getUnset(getEarlyStart());
}

bool IfcScheduleTimeControl::testEarlyStart() const
{
    return Step::isUnset(getEarlyStart()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getLateStart()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LateStart.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getLateStart() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getLateStart();
}

void IfcScheduleTimeControl::setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LateStart = value;
}

void IfcScheduleTimeControl::unsetLateStart()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LateStart = Step::getUnset(getLateStart());
}

bool IfcScheduleTimeControl::testLateStart() const
{
    return Step::isUnset(getLateStart()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleStart()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ScheduleStart.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleStart() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getScheduleStart();
}

void IfcScheduleTimeControl::setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ScheduleStart = value;
}

void IfcScheduleTimeControl::unsetScheduleStart()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ScheduleStart = Step::getUnset(getScheduleStart());
}

bool IfcScheduleTimeControl::testScheduleStart() const
{
    return Step::isUnset(getScheduleStart()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getActualFinish()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActualFinish.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getActualFinish() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getActualFinish();
}

void IfcScheduleTimeControl::setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActualFinish = value;
}

void IfcScheduleTimeControl::unsetActualFinish()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActualFinish = Step::getUnset(getActualFinish());
}

bool IfcScheduleTimeControl::testActualFinish() const
{
    return Step::isUnset(getActualFinish()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyFinish()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EarlyFinish.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyFinish() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getEarlyFinish();
}

void IfcScheduleTimeControl::setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EarlyFinish = value;
}

void IfcScheduleTimeControl::unsetEarlyFinish()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EarlyFinish = Step::getUnset(getEarlyFinish());
}

bool IfcScheduleTimeControl::testEarlyFinish() const
{
    return Step::isUnset(getEarlyFinish()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getLateFinish()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LateFinish.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getLateFinish() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getLateFinish();
}

void IfcScheduleTimeControl::setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LateFinish = value;
}

void IfcScheduleTimeControl::unsetLateFinish()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LateFinish = Step::getUnset(getLateFinish());
}

bool IfcScheduleTimeControl::testLateFinish() const
{
    return Step::isUnset(getLateFinish()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleFinish()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ScheduleFinish.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleFinish() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getScheduleFinish();
}

void IfcScheduleTimeControl::setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ScheduleFinish = value;
}

void IfcScheduleTimeControl::unsetScheduleFinish()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ScheduleFinish = Step::getUnset(getScheduleFinish());
}

bool IfcScheduleTimeControl::testScheduleFinish() const
{
    return Step::isUnset(getScheduleFinish()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getScheduleDuration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ScheduleDuration;
    }
    else 
    {
        return Step::getUnset(m_ScheduleDuration);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getScheduleDuration() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getScheduleDuration();
}

void IfcScheduleTimeControl::setScheduleDuration(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ScheduleDuration = value;
}

void IfcScheduleTimeControl::unsetScheduleDuration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ScheduleDuration = Step::getUnset(getScheduleDuration());
}

bool IfcScheduleTimeControl::testScheduleDuration() const
{
    return Step::isUnset(getScheduleDuration()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getActualDuration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActualDuration;
    }
    else 
    {
        return Step::getUnset(m_ActualDuration);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getActualDuration() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getActualDuration();
}

void IfcScheduleTimeControl::setActualDuration(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActualDuration = value;
}

void IfcScheduleTimeControl::unsetActualDuration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActualDuration = Step::getUnset(getActualDuration());
}

bool IfcScheduleTimeControl::testActualDuration() const
{
    return Step::isUnset(getActualDuration()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getRemainingTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RemainingTime;
    }
    else 
    {
        return Step::getUnset(m_RemainingTime);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getRemainingTime() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getRemainingTime();
}

void IfcScheduleTimeControl::setRemainingTime(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RemainingTime = value;
}

void IfcScheduleTimeControl::unsetRemainingTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RemainingTime = Step::getUnset(getRemainingTime());
}

bool IfcScheduleTimeControl::testRemainingTime() const
{
    return Step::isUnset(getRemainingTime()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getFreeFloat()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FreeFloat;
    }
    else 
    {
        return Step::getUnset(m_FreeFloat);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getFreeFloat() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getFreeFloat();
}

void IfcScheduleTimeControl::setFreeFloat(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FreeFloat = value;
}

void IfcScheduleTimeControl::unsetFreeFloat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FreeFloat = Step::getUnset(getFreeFloat());
}

bool IfcScheduleTimeControl::testFreeFloat() const
{
    return Step::isUnset(getFreeFloat()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getTotalFloat()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TotalFloat;
    }
    else 
    {
        return Step::getUnset(m_TotalFloat);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getTotalFloat() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getTotalFloat();
}

void IfcScheduleTimeControl::setTotalFloat(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalFloat = value;
}

void IfcScheduleTimeControl::unsetTotalFloat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalFloat = Step::getUnset(getTotalFloat());
}

bool IfcScheduleTimeControl::testTotalFloat() const
{
    return Step::isUnset(getTotalFloat()) == false;
}


Step::Boolean IfcScheduleTimeControl::getIsCritical()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsCritical;
    }
    else 
    {
        return Step::getUnset(m_IsCritical);
    }    
}

Step::Boolean IfcScheduleTimeControl::getIsCritical() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getIsCritical();
}

void IfcScheduleTimeControl::setIsCritical(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsCritical = value;
}

void IfcScheduleTimeControl::unsetIsCritical()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsCritical = Step::getUnset(getIsCritical());
}

bool IfcScheduleTimeControl::testIsCritical() const
{
    return Step::isUnset(getIsCritical()) == false;
}


IfcDateTimeSelect *IfcScheduleTimeControl::getStatusTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StatusTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getStatusTime() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getStatusTime();
}

void IfcScheduleTimeControl::setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StatusTime = value;
}

void IfcScheduleTimeControl::unsetStatusTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StatusTime = Step::getUnset(getStatusTime());
}

bool IfcScheduleTimeControl::testStatusTime() const
{
    return Step::isUnset(getStatusTime()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getStartFloat()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StartFloat;
    }
    else 
    {
        return Step::getUnset(m_StartFloat);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getStartFloat() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getStartFloat();
}

void IfcScheduleTimeControl::setStartFloat(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartFloat = value;
}

void IfcScheduleTimeControl::unsetStartFloat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartFloat = Step::getUnset(getStartFloat());
}

bool IfcScheduleTimeControl::testStartFloat() const
{
    return Step::isUnset(getStartFloat()) == false;
}


IfcTimeMeasure IfcScheduleTimeControl::getFinishFloat()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FinishFloat;
    }
    else 
    {
        return Step::getUnset(m_FinishFloat);
    }    
}

IfcTimeMeasure IfcScheduleTimeControl::getFinishFloat() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getFinishFloat();
}

void IfcScheduleTimeControl::setFinishFloat(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FinishFloat = value;
}

void IfcScheduleTimeControl::unsetFinishFloat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FinishFloat = Step::getUnset(getFinishFloat());
}

bool IfcScheduleTimeControl::testFinishFloat() const
{
    return Step::isUnset(getFinishFloat()) == false;
}


IfcPositiveRatioMeasure IfcScheduleTimeControl::getCompletion()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Completion;
    }
    else 
    {
        return Step::getUnset(m_Completion);
    }    
}

IfcPositiveRatioMeasure IfcScheduleTimeControl::getCompletion() const
{
    return const_cast<IfcScheduleTimeControl *>(this)->getCompletion();
}

void IfcScheduleTimeControl::setCompletion(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Completion = value;
}

void IfcScheduleTimeControl::unsetCompletion()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Completion = Step::getUnset(getCompletion());
}

bool IfcScheduleTimeControl::testCompletion() const
{
    return Step::isUnset(getCompletion()) == false;
}

IfcRelAssignsTasks *IfcScheduleTimeControl::getScheduleTimeControlAssigned()
{
    if (Step::BaseObject::inited())
    {
        return m_ScheduleTimeControlAssigned.get();
    }
 
    return NULL;
}

const IfcRelAssignsTasks *IfcScheduleTimeControl::getScheduleTimeControlAssigned() const
{
    return  const_cast< IfcScheduleTimeControl * > (this)->getScheduleTimeControlAssigned();
}

bool IfcScheduleTimeControl::testScheduleTimeControlAssigned() const
{
    return Step::isUnset(getScheduleTimeControlAssigned()) == false;
}

bool IfcScheduleTimeControl::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActualStart = NULL;
    }
    else
    {
        m_ActualStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_ActualStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EarlyStart = NULL;
    }
    else
    {
        m_EarlyStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_EarlyStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LateStart = NULL;
    }
    else
    {
        m_LateStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_LateStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ScheduleStart = NULL;
    }
    else
    {
        m_ScheduleStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_ScheduleStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActualFinish = NULL;
    }
    else
    {
        m_ActualFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_ActualFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EarlyFinish = NULL;
    }
    else
    {
        m_EarlyFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_EarlyFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LateFinish = NULL;
    }
    else
    {
        m_LateFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_LateFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ScheduleFinish = NULL;
    }
    else
    {
        m_ScheduleFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_ScheduleFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ScheduleDuration = Step::getUnset(m_ScheduleDuration);
    }
    else
    {
        m_ScheduleDuration = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActualDuration = Step::getUnset(m_ActualDuration);
    }
    else
    {
        m_ActualDuration = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RemainingTime = Step::getUnset(m_RemainingTime);
    }
    else
    {
        m_RemainingTime = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FreeFloat = Step::getUnset(m_FreeFloat);
    }
    else
    {
        m_FreeFloat = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TotalFloat = Step::getUnset(m_TotalFloat);
    }
    else
    {
        m_TotalFloat = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsCritical = Step::getUnset(m_IsCritical);
    }
    else
    {
        m_IsCritical = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StatusTime = NULL;
    }
    else
    {
        m_StatusTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_StatusTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StartFloat = Step::getUnset(m_StartFloat);
    }
    else
    {
        m_StartFloat = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FinishFloat = Step::getUnset(m_FinishFloat);
    }
    else
    {
        m_FinishFloat = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Completion = Step::getUnset(m_Completion);
    }
    else
    {
        m_Completion = Step::spfToReal(arg)

;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelAssignsTasks::getClassType(), 7);
    if (inverses)
    {
        m_ScheduleTimeControlAssigned = static_cast< IfcRelAssignsTasks * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcScheduleTimeControl::copy(const IfcScheduleTimeControl &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setActualStart((IfcDateTimeSelect*)copyop(obj.m_ActualStart.get()));
    setEarlyStart((IfcDateTimeSelect*)copyop(obj.m_EarlyStart.get()));
    setLateStart((IfcDateTimeSelect*)copyop(obj.m_LateStart.get()));
    setScheduleStart((IfcDateTimeSelect*)copyop(obj.m_ScheduleStart.get()));
    setActualFinish((IfcDateTimeSelect*)copyop(obj.m_ActualFinish.get()));
    setEarlyFinish((IfcDateTimeSelect*)copyop(obj.m_EarlyFinish.get()));
    setLateFinish((IfcDateTimeSelect*)copyop(obj.m_LateFinish.get()));
    setScheduleFinish((IfcDateTimeSelect*)copyop(obj.m_ScheduleFinish.get()));
    setScheduleDuration(obj.m_ScheduleDuration);
    setActualDuration(obj.m_ActualDuration);
    setRemainingTime(obj.m_RemainingTime);
    setFreeFloat(obj.m_FreeFloat);
    setTotalFloat(obj.m_TotalFloat);
    setIsCritical(obj.m_IsCritical);
    setStatusTime((IfcDateTimeSelect*)copyop(obj.m_StatusTime.get()));
    setStartFloat(obj.m_StartFloat);
    setFinishFloat(obj.m_FinishFloat);
    setCompletion(obj.m_Completion);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcScheduleTimeControl, IfcControl)
