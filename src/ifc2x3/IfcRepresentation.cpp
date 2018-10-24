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


#include <ifc2x3/IfcRepresentation.h>

#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRepresentation::IfcRepresentation(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RepresentationIdentifier = Step::getUnset(m_RepresentationIdentifier);
    m_RepresentationType = Step::getUnset(m_RepresentationType);
    m_Items.setUnset(true);
    m_ContextOfItems = NULL;
}

IfcRepresentation::~IfcRepresentation()
{}

bool IfcRepresentation::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRepresentation(this);
}


IfcLabel IfcRepresentation::getRepresentationIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepresentationIdentifier;
    }
    else 
    {
        return Step::getUnset(m_RepresentationIdentifier);
    }    
}

const IfcLabel IfcRepresentation::getRepresentationIdentifier() const
{
    return const_cast<IfcRepresentation *>(this)->getRepresentationIdentifier();
}

void IfcRepresentation::setRepresentationIdentifier(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationIdentifier = value;
}

void IfcRepresentation::unsetRepresentationIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationIdentifier = Step::getUnset(getRepresentationIdentifier());
}

bool IfcRepresentation::testRepresentationIdentifier() const
{
    return Step::isUnset(getRepresentationIdentifier()) == false;
}


IfcLabel IfcRepresentation::getRepresentationType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RepresentationType;
    }
    else 
    {
        return Step::getUnset(m_RepresentationType);
    }    
}

const IfcLabel IfcRepresentation::getRepresentationType() const
{
    return const_cast<IfcRepresentation *>(this)->getRepresentationType();
}

void IfcRepresentation::setRepresentationType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationType = value;
}

void IfcRepresentation::unsetRepresentationType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RepresentationType = Step::getUnset(getRepresentationType());
}

bool IfcRepresentation::testRepresentationType() const
{
    return Step::isUnset(getRepresentationType()) == false;
}


Set_IfcRepresentationItem_1_n &IfcRepresentation::getItems()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Items;
    }
    else 
    {
        m_Items.setUnset(true);
        return m_Items;
    }    
}

const Set_IfcRepresentationItem_1_n &IfcRepresentation::getItems() const
{
    return const_cast<IfcRepresentation *>(this)->getItems();
}

void IfcRepresentation::setItems(const Set_IfcRepresentationItem_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Items = value;
}

void IfcRepresentation::unsetItems()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Items.clear();
    m_Items.setUnset(true);
}

bool IfcRepresentation::testItems() const
{
    return m_Items.isUnset() == false;
}

IfcRepresentationContext *IfcRepresentation::getContextOfItems()
{
    if (Step::BaseObject::inited())
    {
        return m_ContextOfItems.get();
    }
    else
    {
        return NULL;
    }
}

const IfcRepresentationContext *IfcRepresentation::getContextOfItems() const
{
    return const_cast< IfcRepresentation * > (this)->getContextOfItems();
}

void IfcRepresentation::setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ContextOfItems.valid())
    {
        m_ContextOfItems->m_RepresentationsInContext.erase(this);
    }
    if (value.valid() )
    {
       value->m_RepresentationsInContext.insert(this);
    }
    m_ContextOfItems = value;
}

void IfcRepresentation::unsetContextOfItems()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ContextOfItems = Step::getUnset(getContextOfItems());
}

bool IfcRepresentation::testContextOfItems() const
{
    return Step::isUnset(getContextOfItems()) == false;
}

Inverse_Set_IfcProductRepresentation_0_1 &IfcRepresentation::getOfProductRepresentation()
{
    if (Step::BaseObject::inited())
    {
        return m_OfProductRepresentation;
    }
 
    m_OfProductRepresentation.setUnset(true);
    return m_OfProductRepresentation;
}

const Inverse_Set_IfcProductRepresentation_0_1 &IfcRepresentation::getOfProductRepresentation() const
{
    return  const_cast< IfcRepresentation * > (this)->getOfProductRepresentation();
}

bool IfcRepresentation::testOfProductRepresentation() const
{
    return m_OfProductRepresentation.isUnset() == false;
}

Inverse_Set_IfcRepresentationMap_0_1 &IfcRepresentation::getRepresentationMap()
{
    if (Step::BaseObject::inited())
    {
        return m_RepresentationMap;
    }
 
    m_RepresentationMap.setUnset(true);
    return m_RepresentationMap;
}

const Inverse_Set_IfcRepresentationMap_0_1 &IfcRepresentation::getRepresentationMap() const
{
    return  const_cast< IfcRepresentation * > (this)->getRepresentationMap();
}

bool IfcRepresentation::testRepresentationMap() const
{
    return m_RepresentationMap.isUnset() == false;
}

Inverse_Set_IfcPresentationLayerAssignment_0_n &IfcRepresentation::getLayerAssignments()
{
    if (Step::BaseObject::inited())
    {
        return m_LayerAssignments;
    }
 
    m_LayerAssignments.setUnset(true);
    return m_LayerAssignments;
}

const Inverse_Set_IfcPresentationLayerAssignment_0_n &IfcRepresentation::getLayerAssignments() const
{
    return  const_cast< IfcRepresentation * > (this)->getLayerAssignments();
}

bool IfcRepresentation::testLayerAssignments() const
{
    return m_LayerAssignments.isUnset() == false;
}

bool IfcRepresentation::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepresentationIdentifier = Step::getUnset(m_RepresentationIdentifier);
    }
    else
    {
        m_RepresentationIdentifier = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RepresentationType = Step::getUnset(m_RepresentationType);
    }
    else
    {
        m_RepresentationType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Items.setUnset(true);
    }
    else
    {
        m_Items.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Items.insert(static_cast< IfcRepresentationItem * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_ContextOfItems = NULL;
    }
    else
    {
        m_ContextOfItems = static_cast< IfcRepresentationContext * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcProductRepresentation::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_OfProductRepresentation.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_OfProductRepresentation.insert(static_cast< IfcProductRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRepresentationMap::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_RepresentationMap.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_RepresentationMap.insert(static_cast< IfcRepresentationMap * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_LayerAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_LayerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentation::copy(const IfcRepresentation &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRepresentationIdentifier(obj.m_RepresentationIdentifier);
    setRepresentationType(obj.m_RepresentationType);
    Set_IfcRepresentationItem_1_n::const_iterator it_m_Items;
    for (it_m_Items = obj.m_Items.begin(); it_m_Items != obj.m_Items.end(); ++it_m_Items)
    {
        Step::RefPtr< IfcRepresentationItem > copyTarget = (IfcRepresentationItem *) (copyop((*it_m_Items).get()));
        m_Items.insert(copyTarget);
    }
    
    setContextOfItems((IfcRepresentationContext*)copyop(obj.m_ContextOfItems.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRepresentation, Step::BaseEntity)
