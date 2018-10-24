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


#include <ifc2x3/IfcPresentationLayerAssignment.h>

#include <ifc2x3/IfcLayeredItem.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentationItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcPresentationLayerAssignment_AssignedItems_type::Inverted_IfcPresentationLayerAssignment_AssignedItems_type()
{

}

void Inverted_IfcPresentationLayerAssignment_AssignedItems_type::setOwner(IfcPresentationLayerAssignment *owner)
{
    mOwner = owner;
}

void Inverted_IfcPresentationLayerAssignment_AssignedItems_type::insert(const Step::RefPtr< IfcLayeredItem > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcLayeredItem *inverse = const_cast< IfcLayeredItem * > (value.get());
    Set_IfcLayeredItem_1_n::insert(value);
    if (inverse->getIfcRepresentationItem() != NULL) 
    {
        IfcRepresentationItem *object = inverse->getIfcRepresentationItem();
        object->getLayerAssignments().insert(mOwner);
    }
    else if (inverse->getIfcRepresentation() != NULL) 
    {
        IfcRepresentation *object = inverse->getIfcRepresentation();
        object->getLayerAssignments().insert(mOwner);
    }
}


Inverted_IfcPresentationLayerAssignment_AssignedItems_type::size_type Inverted_IfcPresentationLayerAssignment_AssignedItems_type::erase(const Step::RefPtr< IfcLayeredItem > &value)
{
    IfcLayeredItem *inverse = const_cast< IfcLayeredItem * > (value.get());
    if (inverse->getIfcRepresentationItem() != NULL) 
    {
        IfcRepresentationItem *object = inverse->getIfcRepresentationItem();
        object->getLayerAssignments().erase(mOwner);
        object->getLayerAssignments().erase(mOwner);
    }
    else if (inverse->getIfcRepresentation() != NULL) 
    {
        IfcRepresentation *object = inverse->getIfcRepresentation();
        object->getLayerAssignments().erase(mOwner);
        object->getLayerAssignments().erase(mOwner);
    }
    return Set_IfcLayeredItem_1_n::erase(value);
}

void Inverted_IfcPresentationLayerAssignment_AssignedItems_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcPresentationLayerAssignment::IfcPresentationLayerAssignment(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_Identifier = Step::getUnset(m_Identifier);
    m_AssignedItems.setUnset(true);
    m_AssignedItems.setOwner(this);
}

IfcPresentationLayerAssignment::~IfcPresentationLayerAssignment()
{}

bool IfcPresentationLayerAssignment::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPresentationLayerAssignment(this);
}


IfcLabel IfcPresentationLayerAssignment::getName()
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

const IfcLabel IfcPresentationLayerAssignment::getName() const
{
    return const_cast<IfcPresentationLayerAssignment *>(this)->getName();
}

void IfcPresentationLayerAssignment::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcPresentationLayerAssignment::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcPresentationLayerAssignment::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcPresentationLayerAssignment::getDescription()
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

const IfcText IfcPresentationLayerAssignment::getDescription() const
{
    return const_cast<IfcPresentationLayerAssignment *>(this)->getDescription();
}

void IfcPresentationLayerAssignment::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcPresentationLayerAssignment::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcPresentationLayerAssignment::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}


IfcIdentifier IfcPresentationLayerAssignment::getIdentifier()
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

const IfcIdentifier IfcPresentationLayerAssignment::getIdentifier() const
{
    return const_cast<IfcPresentationLayerAssignment *>(this)->getIdentifier();
}

void IfcPresentationLayerAssignment::setIdentifier(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Identifier = value;
}

void IfcPresentationLayerAssignment::unsetIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Identifier = Step::getUnset(getIdentifier());
}

bool IfcPresentationLayerAssignment::testIdentifier() const
{
    return Step::isUnset(getIdentifier()) == false;
}

Set_IfcLayeredItem_1_n &IfcPresentationLayerAssignment::getAssignedItems()
{
    if (Step::BaseObject::inited())
    {
        return m_AssignedItems;
    }
    else
    {
        m_AssignedItems.setUnset(true);
        return m_AssignedItems;
    }
}

const Set_IfcLayeredItem_1_n &IfcPresentationLayerAssignment::getAssignedItems() const
{
    return const_cast< IfcPresentationLayerAssignment * > (this)->getAssignedItems();
}

void IfcPresentationLayerAssignment::unsetAssignedItems()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssignedItems.clear();
    m_AssignedItems.setUnset(true);
}

bool IfcPresentationLayerAssignment::testAssignedItems() const
{
    return m_AssignedItems.isUnset() == false;
}

bool IfcPresentationLayerAssignment::init()
{
    std::string arg;
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
        m_AssignedItems.setUnset(true);
    }
    else
    {
        m_AssignedItems.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcLayeredItem > attr2 = new IfcLayeredItem();
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
                    m_AssignedItems.insert(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcPresentationLayerAssignment::copy(const IfcPresentationLayerAssignment &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setIdentifier(obj.m_Identifier);
    Set_IfcLayeredItem_1_n::const_iterator it_m_AssignedItems;
    for (it_m_AssignedItems = obj.m_AssignedItems.begin(); it_m_AssignedItems != obj.m_AssignedItems.end(); ++it_m_AssignedItems)
    {
        Step::RefPtr< IfcLayeredItem > copyTarget = new IfcLayeredItem;
        copyTarget->copy(*((*it_m_AssignedItems).get()), copyop);
        m_AssignedItems.insert(copyTarget.get());
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPresentationLayerAssignment, Step::BaseEntity)
