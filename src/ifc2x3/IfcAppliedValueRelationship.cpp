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


#include <ifc2x3/IfcAppliedValueRelationship.h>

#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcAppliedValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcAppliedValueRelationship_Components_type::Inverted_IfcAppliedValueRelationship_Components_type()
{

}

void Inverted_IfcAppliedValueRelationship_Components_type::setOwner(IfcAppliedValueRelationship *owner)
{
    mOwner = owner;
}

void Inverted_IfcAppliedValueRelationship_Components_type::insert(const Step::RefPtr< IfcAppliedValue > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    Set_IfcAppliedValue_1_n::insert(value);
    inverse->m_IsComponentIn.insert(mOwner);
}


Inverted_IfcAppliedValueRelationship_Components_type::size_type Inverted_IfcAppliedValueRelationship_Components_type::erase(const Step::RefPtr< IfcAppliedValue > &value)
{
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    inverse->m_IsComponentIn.erase(mOwner);
    return Set_IfcAppliedValue_1_n::erase(value);
}

void Inverted_IfcAppliedValueRelationship_Components_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcAppliedValueRelationship::IfcAppliedValueRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ArithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_Components.setUnset(true);
    m_Components.setOwner(this);
    m_ComponentOfTotal = NULL;
}

IfcAppliedValueRelationship::~IfcAppliedValueRelationship()
{}

bool IfcAppliedValueRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAppliedValueRelationship(this);
}


IfcArithmeticOperatorEnum IfcAppliedValueRelationship::getArithmeticOperator()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ArithmeticOperator;
    }
    else 
    {
        return IfcArithmeticOperatorEnum_UNSET;
    }    
}

IfcArithmeticOperatorEnum IfcAppliedValueRelationship::getArithmeticOperator() const
{
    return const_cast<IfcAppliedValueRelationship *>(this)->getArithmeticOperator();
}

void IfcAppliedValueRelationship::setArithmeticOperator(IfcArithmeticOperatorEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ArithmeticOperator = value;
}

void IfcAppliedValueRelationship::unsetArithmeticOperator()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ArithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
}

bool IfcAppliedValueRelationship::testArithmeticOperator() const
{
    return Step::isUnset(getArithmeticOperator()) == false;
}


IfcLabel IfcAppliedValueRelationship::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcAppliedValueRelationship::getName() const
{
    return const_cast<IfcAppliedValueRelationship *>(this)->getName();
}

void IfcAppliedValueRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcAppliedValueRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcAppliedValueRelationship::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcAppliedValueRelationship::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcAppliedValueRelationship::getDescription() const
{
    return const_cast<IfcAppliedValueRelationship *>(this)->getDescription();
}

void IfcAppliedValueRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcAppliedValueRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcAppliedValueRelationship::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

Set_IfcAppliedValue_1_n &IfcAppliedValueRelationship::getComponents()
{
    if (Step::BaseObject::inited())
    {
        return m_Components;
    }
    else
    {
        m_Components.setUnset(true);
        return m_Components;
    }
}

const Set_IfcAppliedValue_1_n &IfcAppliedValueRelationship::getComponents() const
{
    return const_cast< IfcAppliedValueRelationship * > (this)->getComponents();
}

void IfcAppliedValueRelationship::unsetComponents()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Components.clear();
    m_Components.setUnset(true);
}

bool IfcAppliedValueRelationship::testComponents() const
{
    return m_Components.isUnset() == false;
}

IfcAppliedValue *IfcAppliedValueRelationship::getComponentOfTotal()
{
    if (Step::BaseObject::inited())
    {
        return m_ComponentOfTotal.get();
    }
    else
    {
        return NULL;
    }
}

const IfcAppliedValue *IfcAppliedValueRelationship::getComponentOfTotal() const
{
    return const_cast< IfcAppliedValueRelationship * > (this)->getComponentOfTotal();
}

void IfcAppliedValueRelationship::setComponentOfTotal(const Step::RefPtr< IfcAppliedValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ComponentOfTotal.valid())
    {
        m_ComponentOfTotal->m_ValueOfComponents.erase(this);
    }
    if (value.valid() )
    {
       value->m_ValueOfComponents.insert(this);
    }
    m_ComponentOfTotal = value;
}

void IfcAppliedValueRelationship::unsetComponentOfTotal()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ComponentOfTotal = Step::getUnset(getComponentOfTotal());
}

bool IfcAppliedValueRelationship::testComponentOfTotal() const
{
    return Step::isUnset(getComponentOfTotal()) == false;
}

bool IfcAppliedValueRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ArithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
    }
    else
    {
        if (arg == ".ADD.")
        {
            m_ArithmeticOperator = IfcArithmeticOperatorEnum_ADD;
        }
        else if (arg == ".DIVIDE.")
        {
            m_ArithmeticOperator = IfcArithmeticOperatorEnum_DIVIDE;
        }
        else if (arg == ".MULTIPLY.")
        {
            m_ArithmeticOperator = IfcArithmeticOperatorEnum_MULTIPLY;
        }
        else if (arg == ".SUBTRACT.")
        {
            m_ArithmeticOperator = IfcArithmeticOperatorEnum_SUBTRACT;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Components.setUnset(true);
    }
    else
    {
        m_Components.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Components.insert(static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_ComponentOfTotal = NULL;
    }
    else
    {
        m_ComponentOfTotal = static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcAppliedValueRelationship::copy(const IfcAppliedValueRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setArithmeticOperator(obj.m_ArithmeticOperator);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    Set_IfcAppliedValue_1_n::const_iterator it_m_Components;
    for (it_m_Components = obj.m_Components.begin(); it_m_Components != obj.m_Components.end(); ++it_m_Components)
    {
        Step::RefPtr< IfcAppliedValue > copyTarget = (IfcAppliedValue *) (copyop((*it_m_Components).get()));
        m_Components.insert(copyTarget);
    }
    
    setComponentOfTotal((IfcAppliedValue*)copyop(obj.m_ComponentOfTotal.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAppliedValueRelationship, Step::BaseEntity)
