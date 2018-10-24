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


#include <ifc2x3/IfcInventory.h>

#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcCostValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcInventory::IfcInventory(Step::Id id, Step::SPFData *args) : 
    IfcGroup(id, args)
{
    m_InventoryType = IfcInventoryTypeEnum_UNSET;
    m_Jurisdiction = NULL;
    m_ResponsiblePersons.setUnset(true);
    m_LastUpdateDate = NULL;
    m_CurrentValue = NULL;
    m_OriginalValue = NULL;
}

IfcInventory::~IfcInventory()
{}

bool IfcInventory::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcInventory(this);
}


IfcInventoryTypeEnum IfcInventory::getInventoryType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InventoryType;
    }
    else 
    {
        return IfcInventoryTypeEnum_UNSET;
    }    
}

IfcInventoryTypeEnum IfcInventory::getInventoryType() const
{
    return const_cast<IfcInventory *>(this)->getInventoryType();
}

void IfcInventory::setInventoryType(IfcInventoryTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InventoryType = value;
}

void IfcInventory::unsetInventoryType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InventoryType = IfcInventoryTypeEnum_UNSET;
}

bool IfcInventory::testInventoryType() const
{
    return Step::isUnset(getInventoryType()) == false;
}


IfcActorSelect *IfcInventory::getJurisdiction()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Jurisdiction.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcInventory::getJurisdiction() const
{
    return const_cast<IfcInventory *>(this)->getJurisdiction();
}

void IfcInventory::setJurisdiction(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Jurisdiction = value;
}

void IfcInventory::unsetJurisdiction()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Jurisdiction = Step::getUnset(getJurisdiction());
}

bool IfcInventory::testJurisdiction() const
{
    return Step::isUnset(getJurisdiction()) == false;
}


Set_IfcPerson_1_n &IfcInventory::getResponsiblePersons()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ResponsiblePersons;
    }
    else 
    {
        m_ResponsiblePersons.setUnset(true);
        return m_ResponsiblePersons;
    }    
}

const Set_IfcPerson_1_n &IfcInventory::getResponsiblePersons() const
{
    return const_cast<IfcInventory *>(this)->getResponsiblePersons();
}

void IfcInventory::setResponsiblePersons(const Set_IfcPerson_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResponsiblePersons = value;
}

void IfcInventory::unsetResponsiblePersons()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResponsiblePersons.clear();
    m_ResponsiblePersons.setUnset(true);
}

bool IfcInventory::testResponsiblePersons() const
{
    return m_ResponsiblePersons.isUnset() == false;
}


IfcCalendarDate *IfcInventory::getLastUpdateDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LastUpdateDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcInventory::getLastUpdateDate() const
{
    return const_cast<IfcInventory *>(this)->getLastUpdateDate();
}

void IfcInventory::setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastUpdateDate = value;
}

void IfcInventory::unsetLastUpdateDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LastUpdateDate = Step::getUnset(getLastUpdateDate());
}

bool IfcInventory::testLastUpdateDate() const
{
    return Step::isUnset(getLastUpdateDate()) == false;
}


IfcCostValue *IfcInventory::getCurrentValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurrentValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCostValue *IfcInventory::getCurrentValue() const
{
    return const_cast<IfcInventory *>(this)->getCurrentValue();
}

void IfcInventory::setCurrentValue(const Step::RefPtr< IfcCostValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurrentValue = value;
}

void IfcInventory::unsetCurrentValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurrentValue = Step::getUnset(getCurrentValue());
}

bool IfcInventory::testCurrentValue() const
{
    return Step::isUnset(getCurrentValue()) == false;
}


IfcCostValue *IfcInventory::getOriginalValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OriginalValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCostValue *IfcInventory::getOriginalValue() const
{
    return const_cast<IfcInventory *>(this)->getOriginalValue();
}

void IfcInventory::setOriginalValue(const Step::RefPtr< IfcCostValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OriginalValue = value;
}

void IfcInventory::unsetOriginalValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OriginalValue = Step::getUnset(getOriginalValue());
}

bool IfcInventory::testOriginalValue() const
{
    return Step::isUnset(getOriginalValue()) == false;
}

bool IfcInventory::init()
{
    if (IfcGroup::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InventoryType = IfcInventoryTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ASSETINVENTORY.")
        {
            m_InventoryType = IfcInventoryTypeEnum_ASSETINVENTORY;
        }
        else if (arg == ".SPACEINVENTORY.")
        {
            m_InventoryType = IfcInventoryTypeEnum_SPACEINVENTORY;
        }
        else if (arg == ".FURNITUREINVENTORY.")
        {
            m_InventoryType = IfcInventoryTypeEnum_FURNITUREINVENTORY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_InventoryType = IfcInventoryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_InventoryType = IfcInventoryTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Jurisdiction = NULL;
    }
    else
    {
        m_Jurisdiction = new IfcActorSelect;
        if (arg[0] == '#') {
            m_Jurisdiction->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_ResponsiblePersons.setUnset(true);
    }
    else
    {
        m_ResponsiblePersons.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ResponsiblePersons.insert(static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_LastUpdateDate = NULL;
    }
    else
    {
        m_LastUpdateDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CurrentValue = NULL;
    }
    else
    {
        m_CurrentValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OriginalValue = NULL;
    }
    else
    {
        m_OriginalValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcInventory::copy(const IfcInventory &obj, const CopyOp &copyop)
{
    IfcGroup::copy(obj, copyop);
    setInventoryType(obj.m_InventoryType);
    setJurisdiction((IfcActorSelect*)copyop(obj.m_Jurisdiction.get()));
    Set_IfcPerson_1_n::const_iterator it_m_ResponsiblePersons;
    for (it_m_ResponsiblePersons = obj.m_ResponsiblePersons.begin(); it_m_ResponsiblePersons != obj.m_ResponsiblePersons.end(); ++it_m_ResponsiblePersons)
    {
        Step::RefPtr< IfcPerson > copyTarget = (IfcPerson *) (copyop((*it_m_ResponsiblePersons).get()));
        m_ResponsiblePersons.insert(copyTarget);
    }
    
    setLastUpdateDate((IfcCalendarDate*)copyop(obj.m_LastUpdateDate.get()));
    setCurrentValue((IfcCostValue*)copyop(obj.m_CurrentValue.get()));
    setOriginalValue((IfcCostValue*)copyop(obj.m_OriginalValue.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcInventory, IfcGroup)
