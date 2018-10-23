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


#include <ifc2x3/IfcWorkControl.h>

#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWorkControl::IfcWorkControl(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_Identifier = Step::getUnset(m_Identifier);
    m_CreationDate = NULL;
    m_Creators.setUnset(true);
    m_Purpose = Step::getUnset(m_Purpose);
    m_Duration = Step::getUnset(m_Duration);
    m_TotalFloat = Step::getUnset(m_TotalFloat);
    m_StartTime = NULL;
    m_FinishTime = NULL;
    m_WorkControlType = IfcWorkControlTypeEnum_UNSET;
    m_UserDefinedControlType = Step::getUnset(m_UserDefinedControlType);
}

IfcWorkControl::~IfcWorkControl()
{}

bool IfcWorkControl::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWorkControl(this);
}


IfcIdentifier IfcWorkControl::getIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Identifier;
    }
    else 
    {
        return Step::getUnset(m_Identifier);
    }    
}

const IfcIdentifier IfcWorkControl::getIdentifier() const
{
    return const_cast<IfcWorkControl *>(this)->getIdentifier();
}

void IfcWorkControl::setIdentifier(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Identifier = value;
}

void IfcWorkControl::unsetIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Identifier = Step::getUnset(getIdentifier());
}

bool IfcWorkControl::testIdentifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIdentifier()) == false;
}


IfcDateTimeSelect *IfcWorkControl::getCreationDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CreationDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcWorkControl::getCreationDate() const
{
    return const_cast<IfcWorkControl *>(this)->getCreationDate();
}

void IfcWorkControl::setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationDate = value;
}

void IfcWorkControl::unsetCreationDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationDate = Step::getUnset(getCreationDate());
}

bool IfcWorkControl::testCreationDate() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCreationDate()) == false;
}


Set_IfcPerson_1_n &IfcWorkControl::getCreators()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Creators;
    }
    else 
    {
        m_Creators.setUnset(true);
        return m_Creators;
    }    
}

const Set_IfcPerson_1_n &IfcWorkControl::getCreators() const
{
    return const_cast<IfcWorkControl *>(this)->getCreators();
}

void IfcWorkControl::setCreators(const Set_IfcPerson_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Creators = value;
}

void IfcWorkControl::unsetCreators()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Creators.clear();
    m_Creators.setUnset(true);
}

bool IfcWorkControl::testCreators() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Creators.isUnset() == false;
}


IfcLabel IfcWorkControl::getPurpose()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Purpose;
    }
    else 
    {
        return Step::getUnset(m_Purpose);
    }    
}

const IfcLabel IfcWorkControl::getPurpose() const
{
    return const_cast<IfcWorkControl *>(this)->getPurpose();
}

void IfcWorkControl::setPurpose(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = value;
}

void IfcWorkControl::unsetPurpose()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Purpose = Step::getUnset(getPurpose());
}

bool IfcWorkControl::testPurpose() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPurpose()) == false;
}


IfcTimeMeasure IfcWorkControl::getDuration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Duration;
    }
    else 
    {
        return Step::getUnset(m_Duration);
    }    
}

IfcTimeMeasure IfcWorkControl::getDuration() const
{
    return const_cast<IfcWorkControl *>(this)->getDuration();
}

void IfcWorkControl::setDuration(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Duration = value;
}

void IfcWorkControl::unsetDuration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Duration = Step::getUnset(getDuration());
}

bool IfcWorkControl::testDuration() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDuration()) == false;
}


IfcTimeMeasure IfcWorkControl::getTotalFloat()
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

IfcTimeMeasure IfcWorkControl::getTotalFloat() const
{
    return const_cast<IfcWorkControl *>(this)->getTotalFloat();
}

void IfcWorkControl::setTotalFloat(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalFloat = value;
}

void IfcWorkControl::unsetTotalFloat()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalFloat = Step::getUnset(getTotalFloat());
}

bool IfcWorkControl::testTotalFloat() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTotalFloat()) == false;
}


IfcDateTimeSelect *IfcWorkControl::getStartTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StartTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcWorkControl::getStartTime() const
{
    return const_cast<IfcWorkControl *>(this)->getStartTime();
}

void IfcWorkControl::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartTime = value;
}

void IfcWorkControl::unsetStartTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartTime = Step::getUnset(getStartTime());
}

bool IfcWorkControl::testStartTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStartTime()) == false;
}


IfcDateTimeSelect *IfcWorkControl::getFinishTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FinishTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcWorkControl::getFinishTime() const
{
    return const_cast<IfcWorkControl *>(this)->getFinishTime();
}

void IfcWorkControl::setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FinishTime = value;
}

void IfcWorkControl::unsetFinishTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FinishTime = Step::getUnset(getFinishTime());
}

bool IfcWorkControl::testFinishTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFinishTime()) == false;
}


IfcWorkControlTypeEnum IfcWorkControl::getWorkControlType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WorkControlType;
    }
    else 
    {
        return IfcWorkControlTypeEnum_UNSET;
    }    
}

IfcWorkControlTypeEnum IfcWorkControl::getWorkControlType() const
{
    return const_cast<IfcWorkControl *>(this)->getWorkControlType();
}

void IfcWorkControl::setWorkControlType(IfcWorkControlTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WorkControlType = value;
}

void IfcWorkControl::unsetWorkControlType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WorkControlType = IfcWorkControlTypeEnum_UNSET;
}

bool IfcWorkControl::testWorkControlType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWorkControlType()) == false;
}


IfcLabel IfcWorkControl::getUserDefinedControlType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedControlType;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedControlType);
    }    
}

const IfcLabel IfcWorkControl::getUserDefinedControlType() const
{
    return const_cast<IfcWorkControl *>(this)->getUserDefinedControlType();
}

void IfcWorkControl::setUserDefinedControlType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedControlType = value;
}

void IfcWorkControl::unsetUserDefinedControlType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedControlType = Step::getUnset(getUserDefinedControlType());
}

bool IfcWorkControl::testUserDefinedControlType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUserDefinedControlType()) == false;
}

bool IfcWorkControl::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Identifier = Step::getUnset(m_Identifier);
    }
    else
    {
        m_Identifier = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CreationDate = NULL;
    }
    else
    {
        m_CreationDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_CreationDate->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_Creators.setUnset(true);
    }
    else
    {
        m_Creators.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Creators.insert(static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Purpose = Step::getUnset(m_Purpose);
    }
    else
    {
        m_Purpose = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Duration = Step::getUnset(m_Duration);
    }
    else
    {
        m_Duration = Step::spfToReal(arg)

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
        m_StartTime = NULL;
    }
    else
    {
        m_StartTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_StartTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_FinishTime = NULL;
    }
    else
    {
        m_FinishTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_FinishTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_WorkControlType = IfcWorkControlTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ACTUAL.")
        {
            m_WorkControlType = IfcWorkControlTypeEnum_ACTUAL;
        }
        else if (arg == ".BASELINE.")
        {
            m_WorkControlType = IfcWorkControlTypeEnum_BASELINE;
        }
        else if (arg == ".PLANNED.")
        {
            m_WorkControlType = IfcWorkControlTypeEnum_PLANNED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_WorkControlType = IfcWorkControlTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_WorkControlType = IfcWorkControlTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedControlType = Step::getUnset(m_UserDefinedControlType);
    }
    else
    {
        m_UserDefinedControlType = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcWorkControl::copy(const IfcWorkControl &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setIdentifier(obj.m_Identifier);
    setCreationDate((IfcDateTimeSelect*)copyop(obj.m_CreationDate.get()));
    Set_IfcPerson_1_n::const_iterator it_m_Creators;
    for (it_m_Creators = obj.m_Creators.begin(); it_m_Creators != obj.m_Creators.end(); ++it_m_Creators)
    {
        Step::RefPtr< IfcPerson > copyTarget = (IfcPerson *) (copyop((*it_m_Creators).get()));
        m_Creators.insert(copyTarget);
    }
    
    setPurpose(obj.m_Purpose);
    setDuration(obj.m_Duration);
    setTotalFloat(obj.m_TotalFloat);
    setStartTime((IfcDateTimeSelect*)copyop(obj.m_StartTime.get()));
    setFinishTime((IfcDateTimeSelect*)copyop(obj.m_FinishTime.get()));
    setWorkControlType(obj.m_WorkControlType);
    setUserDefinedControlType(obj.m_UserDefinedControlType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWorkControl, IfcControl)
