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


#include <ifc2x3/IfcCostSchedule.h>

#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcDateTimeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCostSchedule::IfcCostSchedule(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_SubmittedBy = NULL;
    m_PreparedBy = NULL;
    m_SubmittedOn = NULL;
    m_Status = Step::getUnset(m_Status);
    m_TargetUsers.setUnset(true);
    m_UpdateDate = NULL;
    m_ID = Step::getUnset(m_ID);
    m_PredefinedType = IfcCostScheduleTypeEnum_UNSET;
}

IfcCostSchedule::~IfcCostSchedule()
{}

bool IfcCostSchedule::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCostSchedule(this);
}


IfcActorSelect *IfcCostSchedule::getSubmittedBy()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SubmittedBy.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcCostSchedule::getSubmittedBy() const
{
    return const_cast<IfcCostSchedule *>(this)->getSubmittedBy();
}

void IfcCostSchedule::setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubmittedBy = value;
}

void IfcCostSchedule::unsetSubmittedBy()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubmittedBy = Step::getUnset(getSubmittedBy());
}

bool IfcCostSchedule::testSubmittedBy() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSubmittedBy()) == false;
}


IfcActorSelect *IfcCostSchedule::getPreparedBy()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PreparedBy.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcCostSchedule::getPreparedBy() const
{
    return const_cast<IfcCostSchedule *>(this)->getPreparedBy();
}

void IfcCostSchedule::setPreparedBy(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PreparedBy = value;
}

void IfcCostSchedule::unsetPreparedBy()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PreparedBy = Step::getUnset(getPreparedBy());
}

bool IfcCostSchedule::testPreparedBy() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPreparedBy()) == false;
}


IfcDateTimeSelect *IfcCostSchedule::getSubmittedOn()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SubmittedOn.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcCostSchedule::getSubmittedOn() const
{
    return const_cast<IfcCostSchedule *>(this)->getSubmittedOn();
}

void IfcCostSchedule::setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubmittedOn = value;
}

void IfcCostSchedule::unsetSubmittedOn()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubmittedOn = Step::getUnset(getSubmittedOn());
}

bool IfcCostSchedule::testSubmittedOn() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSubmittedOn()) == false;
}


IfcLabel IfcCostSchedule::getStatus()
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

const IfcLabel IfcCostSchedule::getStatus() const
{
    return const_cast<IfcCostSchedule *>(this)->getStatus();
}

void IfcCostSchedule::setStatus(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = value;
}

void IfcCostSchedule::unsetStatus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = Step::getUnset(getStatus());
}

bool IfcCostSchedule::testStatus() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStatus()) == false;
}


Set_IfcActorSelect_1_n &IfcCostSchedule::getTargetUsers()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TargetUsers;
    }
    else 
    {
        m_TargetUsers.setUnset(true);
        return m_TargetUsers;
    }    
}

const Set_IfcActorSelect_1_n &IfcCostSchedule::getTargetUsers() const
{
    return const_cast<IfcCostSchedule *>(this)->getTargetUsers();
}

void IfcCostSchedule::setTargetUsers(const Set_IfcActorSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TargetUsers = value;
}

void IfcCostSchedule::unsetTargetUsers()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TargetUsers.clear();
    m_TargetUsers.setUnset(true);
}

bool IfcCostSchedule::testTargetUsers() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_TargetUsers.isUnset() == false;
}


IfcDateTimeSelect *IfcCostSchedule::getUpdateDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UpdateDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcCostSchedule::getUpdateDate() const
{
    return const_cast<IfcCostSchedule *>(this)->getUpdateDate();
}

void IfcCostSchedule::setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpdateDate = value;
}

void IfcCostSchedule::unsetUpdateDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpdateDate = Step::getUnset(getUpdateDate());
}

bool IfcCostSchedule::testUpdateDate() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUpdateDate()) == false;
}


IfcIdentifier IfcCostSchedule::getID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ID;
    }
    else 
    {
        return Step::getUnset(m_ID);
    }    
}

const IfcIdentifier IfcCostSchedule::getID() const
{
    return const_cast<IfcCostSchedule *>(this)->getID();
}

void IfcCostSchedule::setID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ID = value;
}

void IfcCostSchedule::unsetID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ID = Step::getUnset(getID());
}

bool IfcCostSchedule::testID() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getID()) == false;
}


IfcCostScheduleTypeEnum IfcCostSchedule::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCostScheduleTypeEnum_UNSET;
    }    
}

IfcCostScheduleTypeEnum IfcCostSchedule::getPredefinedType() const
{
    return const_cast<IfcCostSchedule *>(this)->getPredefinedType();
}

void IfcCostSchedule::setPredefinedType(IfcCostScheduleTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCostSchedule::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCostScheduleTypeEnum_UNSET;
}

bool IfcCostSchedule::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCostSchedule::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SubmittedBy = NULL;
    }
    else
    {
        m_SubmittedBy = new IfcActorSelect;
        if (arg[0] == '#') {
            m_SubmittedBy->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_PreparedBy = NULL;
    }
    else
    {
        m_PreparedBy = new IfcActorSelect;
        if (arg[0] == '#') {
            m_PreparedBy->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_SubmittedOn = NULL;
    }
    else
    {
        m_SubmittedOn = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_SubmittedOn->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_TargetUsers.setUnset(true);
    }
    else
    {
        m_TargetUsers.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcActorSelect > attr2 = new IfcActorSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_TargetUsers.insert(attr2);
                }
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
        m_UpdateDate = NULL;
    }
    else
    {
        m_UpdateDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_UpdateDate->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_ID = Step::getUnset(m_ID);
    }
    else
    {
        m_ID = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCostScheduleTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BUDGET.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_BUDGET;
        }
        else if (arg == ".COSTPLAN.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_COSTPLAN;
        }
        else if (arg == ".ESTIMATE.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_ESTIMATE;
        }
        else if (arg == ".TENDER.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_TENDER;
        }
        else if (arg == ".PRICEDBILLOFQUANTITIES.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_PRICEDBILLOFQUANTITIES;
        }
        else if (arg == ".UNPRICEDBILLOFQUANTITIES.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_UNPRICEDBILLOFQUANTITIES;
        }
        else if (arg == ".SCHEDULEOFRATES.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_SCHEDULEOFRATES;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCostScheduleTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCostSchedule::copy(const IfcCostSchedule &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setSubmittedBy((IfcActorSelect*)copyop(obj.m_SubmittedBy.get()));
    setPreparedBy((IfcActorSelect*)copyop(obj.m_PreparedBy.get()));
    setSubmittedOn((IfcDateTimeSelect*)copyop(obj.m_SubmittedOn.get()));
    setStatus(obj.m_Status);
    Set_IfcActorSelect_1_n::const_iterator it_m_TargetUsers;
    for (it_m_TargetUsers = obj.m_TargetUsers.begin(); it_m_TargetUsers != obj.m_TargetUsers.end(); ++it_m_TargetUsers)
    {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_TargetUsers).get()), copyop);
        m_TargetUsers.insert(copyTarget.get());
    }
    
    setUpdateDate((IfcDateTimeSelect*)copyop(obj.m_UpdateDate.get()));
    setID(obj.m_ID);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCostSchedule, IfcControl)
