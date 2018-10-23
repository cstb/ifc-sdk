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


#include <ifc2x3/IfcLayeredItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentation.h>



using namespace ifc2x3;

IfcLayeredItem::IfcLayeredItem() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcLayeredItem::IfcLayeredItem(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcLayeredItem::~IfcLayeredItem()
{
    deleteUnion();
}

bool IfcLayeredItem::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLayeredItem(this);
}

bool IfcLayeredItem::init()
{
    return false;
}

void IfcLayeredItem::copy(const IfcLayeredItem &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCREPRESENTATIONITEM :
        setIfcRepresentationItem((IfcRepresentationItem*)(copyop(obj.m_union.m_IfcRepresentationItem)));
        break;
    case IFCREPRESENTATION :
        setIfcRepresentation((IfcRepresentation*)(copyop(obj.m_union.m_IfcRepresentation)));
        break;
    default:
        break;
    }
}

std::string IfcLayeredItem::currentTypeName() const
{
    switch(m_type)
    {
    case IFCREPRESENTATIONITEM :
        return "IfcRepresentationItem";
        break;
    case IFCREPRESENTATION :
        return "IfcRepresentation";
        break;
    default:
        return "UNSET";
    }
}

IfcLayeredItem::IfcLayeredItem_select IfcLayeredItem::currentType() const 
{
    return m_type;
}

void IfcLayeredItem::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCREPRESENTATIONITEM :
        m_union.m_IfcRepresentationItem->unref();
        break;
    case IFCREPRESENTATION :
        m_union.m_IfcRepresentation->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcRepresentationItem *IfcLayeredItem::getIfcRepresentationItem() const
{
    if (m_type == IFCREPRESENTATIONITEM ) 
    {
        return m_union.m_IfcRepresentationItem;
    }
    else 
    {
        return NULL;
    }    
}

void IfcLayeredItem::setIfcRepresentationItem(IfcRepresentationItem *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcRepresentationItem = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCREPRESENTATIONITEM ;
}

IfcRepresentation *IfcLayeredItem::getIfcRepresentation() const
{
    if (m_type == IFCREPRESENTATION ) 
    {
        return m_union.m_IfcRepresentation;
    }
    else 
    {
        return NULL;
    }    
}

void IfcLayeredItem::setIfcRepresentation(IfcRepresentation *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcRepresentation = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCREPRESENTATION ;
}

void IfcLayeredItem::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcRepresentationItem::getClassType())) 
        {
            setIfcRepresentationItem(static_cast< IfcRepresentationItem* > (v));
            return;
        }
        if (v->isOfType(IfcRepresentation::getClassType())) 
        {
            setIfcRepresentation(static_cast< IfcRepresentation* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcLayeredItem, Step::BaseObject)
