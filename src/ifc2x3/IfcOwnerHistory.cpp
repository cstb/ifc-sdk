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


#include <ifc2x3/IfcOwnerHistory.h>

#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcApplication.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcApplication.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOwnerHistory::IfcOwnerHistory(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_OwningUser = NULL;
    m_OwningApplication = NULL;
    m_State = IfcStateEnum_UNSET;
    m_ChangeAction = IfcChangeActionEnum_UNSET;
    m_LastModifiedDate = Step::getUnset(m_LastModifiedDate);
    m_LastModifyingUser = NULL;
    m_LastModifyingApplication = NULL;
    m_CreationDate = Step::getUnset(m_CreationDate);
}

IfcOwnerHistory::~IfcOwnerHistory()
{}

bool IfcOwnerHistory::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOwnerHistory(this);
}


IfcPersonAndOrganization *IfcOwnerHistory::getOwningUser()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OwningUser.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPersonAndOrganization *IfcOwnerHistory::getOwningUser() const
{
    return const_cast<IfcOwnerHistory *>(this)->getOwningUser();
}

void IfcOwnerHistory::setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OwningUser = value;
}

void IfcOwnerHistory::unsetOwningUser()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OwningUser = Step::getUnset(getOwningUser());
}

bool IfcOwnerHistory::testOwningUser() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOwningUser()) == false;
}


IfcApplication *IfcOwnerHistory::getOwningApplication()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OwningApplication.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcApplication *IfcOwnerHistory::getOwningApplication() const
{
    return const_cast<IfcOwnerHistory *>(this)->getOwningApplication();
}

void IfcOwnerHistory::setOwningApplication(const Step::RefPtr< IfcApplication > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OwningApplication = value;
}

void IfcOwnerHistory::unsetOwningApplication()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OwningApplication = Step::getUnset(getOwningApplication());
}

bool IfcOwnerHistory::testOwningApplication() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOwningApplication()) == false;
}


IfcStateEnum IfcOwnerHistory::getState()
{
    if (Step::BaseObject::inited()) 
    {
        return m_State;
    }
    else 
    {
        return IfcStateEnum_UNSET;
    }    
}

IfcStateEnum IfcOwnerHistory::getState() const
{
    return const_cast<IfcOwnerHistory *>(this)->getState();
}

void IfcOwnerHistory::setState(IfcStateEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_State = value;
}

void IfcOwnerHistory::unsetState()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_State = IfcStateEnum_UNSET;
}

bool IfcOwnerHistory::testState() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getState()) == false;
}


IfcChangeActionEnum IfcOwnerHistory::getChangeAction()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ChangeAction;
    }
    else 
    {
        return IfcChangeActionEnum_UNSET;
    }    
}

IfcChangeActionEnum IfcOwnerHistory::getChangeAction() const
{
    return const_cast<IfcOwnerHistory *>(this)->getChangeAction();
}

void IfcOwnerHistory::setChangeAction(IfcChangeActionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ChangeAction = value;
}

void IfcOwnerHistory::unsetChangeAction()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ChangeAction = IfcChangeActionEnum_UNSET;
}

bool IfcOwnerHistory::testChangeAction() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getChangeAction()) == false;
}


IfcTimeStamp IfcOwnerHistory::getLastModifiedDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LastModifiedDate;
    }
    else 
    {
        return Step::getUnset(m_LastModifiedDate);
    }    
}

IfcTimeStamp IfcOwnerHistory::getLastModifiedDate() const
{
    return const_cast<IfcOwnerHistory *>(this)->getLastModifiedDate();
}

void IfcOwnerHistory::setLastModifiedDate(IfcTimeStamp value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastModifiedDate = value;
}

void IfcOwnerHistory::unsetLastModifiedDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastModifiedDate = Step::getUnset(getLastModifiedDate());
}

bool IfcOwnerHistory::testLastModifiedDate() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLastModifiedDate()) == false;
}


IfcPersonAndOrganization *IfcOwnerHistory::getLastModifyingUser()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LastModifyingUser.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPersonAndOrganization *IfcOwnerHistory::getLastModifyingUser() const
{
    return const_cast<IfcOwnerHistory *>(this)->getLastModifyingUser();
}

void IfcOwnerHistory::setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastModifyingUser = value;
}

void IfcOwnerHistory::unsetLastModifyingUser()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastModifyingUser = Step::getUnset(getLastModifyingUser());
}

bool IfcOwnerHistory::testLastModifyingUser() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLastModifyingUser()) == false;
}


IfcApplication *IfcOwnerHistory::getLastModifyingApplication()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LastModifyingApplication.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcApplication *IfcOwnerHistory::getLastModifyingApplication() const
{
    return const_cast<IfcOwnerHistory *>(this)->getLastModifyingApplication();
}

void IfcOwnerHistory::setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastModifyingApplication = value;
}

void IfcOwnerHistory::unsetLastModifyingApplication()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastModifyingApplication = Step::getUnset(getLastModifyingApplication());
}

bool IfcOwnerHistory::testLastModifyingApplication() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLastModifyingApplication()) == false;
}


IfcTimeStamp IfcOwnerHistory::getCreationDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CreationDate;
    }
    else 
    {
        return Step::getUnset(m_CreationDate);
    }    
}

IfcTimeStamp IfcOwnerHistory::getCreationDate() const
{
    return const_cast<IfcOwnerHistory *>(this)->getCreationDate();
}

void IfcOwnerHistory::setCreationDate(IfcTimeStamp value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationDate = value;
}

void IfcOwnerHistory::unsetCreationDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CreationDate = Step::getUnset(getCreationDate());
}

bool IfcOwnerHistory::testCreationDate() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCreationDate()) == false;
}

bool IfcOwnerHistory::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OwningUser = NULL;
    }
    else
    {
        m_OwningUser = static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OwningApplication = NULL;
    }
    else
    {
        m_OwningApplication = static_cast< IfcApplication * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_State = IfcStateEnum_UNSET;
    }
    else
    {
        if (arg == ".READWRITE.")
        {
            m_State = IfcStateEnum_READWRITE;
        }
        else if (arg == ".READONLY.")
        {
            m_State = IfcStateEnum_READONLY;
        }
        else if (arg == ".LOCKED.")
        {
            m_State = IfcStateEnum_LOCKED;
        }
        else if (arg == ".READWRITELOCKED.")
        {
            m_State = IfcStateEnum_READWRITELOCKED;
        }
        else if (arg == ".READONLYLOCKED.")
        {
            m_State = IfcStateEnum_READONLYLOCKED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ChangeAction = IfcChangeActionEnum_UNSET;
    }
    else
    {
        if (arg == ".NOCHANGE.")
        {
            m_ChangeAction = IfcChangeActionEnum_NOCHANGE;
        }
        else if (arg == ".MODIFIED.")
        {
            m_ChangeAction = IfcChangeActionEnum_MODIFIED;
        }
        else if (arg == ".ADDED.")
        {
            m_ChangeAction = IfcChangeActionEnum_ADDED;
        }
        else if (arg == ".DELETED.")
        {
            m_ChangeAction = IfcChangeActionEnum_DELETED;
        }
        else if (arg == ".MODIFIEDADDED.")
        {
            m_ChangeAction = IfcChangeActionEnum_MODIFIEDADDED;
        }
        else if (arg == ".MODIFIEDDELETED.")
        {
            m_ChangeAction = IfcChangeActionEnum_MODIFIEDDELETED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LastModifiedDate = Step::getUnset(m_LastModifiedDate);
    }
    else
    {
        m_LastModifiedDate = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LastModifyingUser = NULL;
    }
    else
    {
        m_LastModifyingUser = static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LastModifyingApplication = NULL;
    }
    else
    {
        m_LastModifyingApplication = static_cast< IfcApplication * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CreationDate = Step::getUnset(m_CreationDate);
    }
    else
    {
        m_CreationDate = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcOwnerHistory::copy(const IfcOwnerHistory &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setOwningUser((IfcPersonAndOrganization*)copyop(obj.m_OwningUser.get()));
    setOwningApplication((IfcApplication*)copyop(obj.m_OwningApplication.get()));
    setState(obj.m_State);
    setChangeAction(obj.m_ChangeAction);
    setLastModifiedDate(obj.m_LastModifiedDate);
    setLastModifyingUser((IfcPersonAndOrganization*)copyop(obj.m_LastModifyingUser.get()));
    setLastModifyingApplication((IfcApplication*)copyop(obj.m_LastModifyingApplication.get()));
    setCreationDate(obj.m_CreationDate);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOwnerHistory, Step::BaseEntity)
