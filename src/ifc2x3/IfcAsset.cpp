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


#include <ifc2x3/IfcAsset.h>

#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCostValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAsset::IfcAsset(Step::Id id, Step::SPFData *args) : 
    IfcGroup(id, args)
{
    m_AssetID = Step::getUnset(m_AssetID);
    m_OriginalValue = NULL;
    m_CurrentValue = NULL;
    m_TotalReplacementCost = NULL;
    m_Owner = NULL;
    m_User = NULL;
    m_ResponsiblePerson = NULL;
    m_IncorporationDate = NULL;
    m_DepreciatedValue = NULL;
}

IfcAsset::~IfcAsset()
{}

bool IfcAsset::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAsset(this);
}


IfcIdentifier IfcAsset::getAssetID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AssetID;
    }
    else 
    {
        return Step::getUnset(m_AssetID);
    }    
}

const IfcIdentifier IfcAsset::getAssetID() const
{
    return const_cast<IfcAsset *>(this)->getAssetID();
}

void IfcAsset::setAssetID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssetID = value;
}

void IfcAsset::unsetAssetID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssetID = Step::getUnset(getAssetID());
}

bool IfcAsset::testAssetID() const
{
    return Step::isUnset(getAssetID()) == false;
}


IfcCostValue *IfcAsset::getOriginalValue()
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

const IfcCostValue *IfcAsset::getOriginalValue() const
{
    return const_cast<IfcAsset *>(this)->getOriginalValue();
}

void IfcAsset::setOriginalValue(const Step::RefPtr< IfcCostValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OriginalValue = value;
}

void IfcAsset::unsetOriginalValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OriginalValue = Step::getUnset(getOriginalValue());
}

bool IfcAsset::testOriginalValue() const
{
    return Step::isUnset(getOriginalValue()) == false;
}


IfcCostValue *IfcAsset::getCurrentValue()
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

const IfcCostValue *IfcAsset::getCurrentValue() const
{
    return const_cast<IfcAsset *>(this)->getCurrentValue();
}

void IfcAsset::setCurrentValue(const Step::RefPtr< IfcCostValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurrentValue = value;
}

void IfcAsset::unsetCurrentValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurrentValue = Step::getUnset(getCurrentValue());
}

bool IfcAsset::testCurrentValue() const
{
    return Step::isUnset(getCurrentValue()) == false;
}


IfcCostValue *IfcAsset::getTotalReplacementCost()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TotalReplacementCost.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCostValue *IfcAsset::getTotalReplacementCost() const
{
    return const_cast<IfcAsset *>(this)->getTotalReplacementCost();
}

void IfcAsset::setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalReplacementCost = value;
}

void IfcAsset::unsetTotalReplacementCost()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalReplacementCost = Step::getUnset(getTotalReplacementCost());
}

bool IfcAsset::testTotalReplacementCost() const
{
    return Step::isUnset(getTotalReplacementCost()) == false;
}


IfcActorSelect *IfcAsset::getOwner()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Owner.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcAsset::getOwner() const
{
    return const_cast<IfcAsset *>(this)->getOwner();
}

void IfcAsset::setOwner(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Owner = value;
}

void IfcAsset::unsetOwner()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Owner = Step::getUnset(getOwner());
}

bool IfcAsset::testOwner() const
{
    return Step::isUnset(getOwner()) == false;
}


IfcActorSelect *IfcAsset::getUser()
{
    if (Step::BaseObject::inited()) 
    {
        return m_User.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcAsset::getUser() const
{
    return const_cast<IfcAsset *>(this)->getUser();
}

void IfcAsset::setUser(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_User = value;
}

void IfcAsset::unsetUser()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_User = Step::getUnset(getUser());
}

bool IfcAsset::testUser() const
{
    return Step::isUnset(getUser()) == false;
}


IfcPerson *IfcAsset::getResponsiblePerson()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ResponsiblePerson.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPerson *IfcAsset::getResponsiblePerson() const
{
    return const_cast<IfcAsset *>(this)->getResponsiblePerson();
}

void IfcAsset::setResponsiblePerson(const Step::RefPtr< IfcPerson > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResponsiblePerson = value;
}

void IfcAsset::unsetResponsiblePerson()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ResponsiblePerson = Step::getUnset(getResponsiblePerson());
}

bool IfcAsset::testResponsiblePerson() const
{
    return Step::isUnset(getResponsiblePerson()) == false;
}


IfcCalendarDate *IfcAsset::getIncorporationDate()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IncorporationDate.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcAsset::getIncorporationDate() const
{
    return const_cast<IfcAsset *>(this)->getIncorporationDate();
}

void IfcAsset::setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IncorporationDate = value;
}

void IfcAsset::unsetIncorporationDate()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IncorporationDate = Step::getUnset(getIncorporationDate());
}

bool IfcAsset::testIncorporationDate() const
{
    return Step::isUnset(getIncorporationDate()) == false;
}


IfcCostValue *IfcAsset::getDepreciatedValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DepreciatedValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCostValue *IfcAsset::getDepreciatedValue() const
{
    return const_cast<IfcAsset *>(this)->getDepreciatedValue();
}

void IfcAsset::setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DepreciatedValue = value;
}

void IfcAsset::unsetDepreciatedValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DepreciatedValue = Step::getUnset(getDepreciatedValue());
}

bool IfcAsset::testDepreciatedValue() const
{
    return Step::isUnset(getDepreciatedValue()) == false;
}

bool IfcAsset::init()
{
    if (IfcGroup::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AssetID = Step::getUnset(m_AssetID);
    }
    else
    {
        m_AssetID = Step::String::fromSPF(arg)
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
        m_TotalReplacementCost = NULL;
    }
    else
    {
        m_TotalReplacementCost = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Owner = NULL;
    }
    else
    {
        m_Owner = new IfcActorSelect;
        if (arg[0] == '#') {
            m_Owner->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_User = NULL;
    }
    else
    {
        m_User = new IfcActorSelect;
        if (arg[0] == '#') {
            m_User->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_ResponsiblePerson = NULL;
    }
    else
    {
        m_ResponsiblePerson = static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IncorporationDate = NULL;
    }
    else
    {
        m_IncorporationDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DepreciatedValue = NULL;
    }
    else
    {
        m_DepreciatedValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcAsset::copy(const IfcAsset &obj, const CopyOp &copyop)
{
    IfcGroup::copy(obj, copyop);
    setAssetID(obj.m_AssetID);
    setOriginalValue((IfcCostValue*)copyop(obj.m_OriginalValue.get()));
    setCurrentValue((IfcCostValue*)copyop(obj.m_CurrentValue.get()));
    setTotalReplacementCost((IfcCostValue*)copyop(obj.m_TotalReplacementCost.get()));
    setOwner((IfcActorSelect*)copyop(obj.m_Owner.get()));
    setUser((IfcActorSelect*)copyop(obj.m_User.get()));
    setResponsiblePerson((IfcPerson*)copyop(obj.m_ResponsiblePerson.get()));
    setIncorporationDate((IfcCalendarDate*)copyop(obj.m_IncorporationDate.get()));
    setDepreciatedValue((IfcCostValue*)copyop(obj.m_DepreciatedValue.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAsset, IfcGroup)
