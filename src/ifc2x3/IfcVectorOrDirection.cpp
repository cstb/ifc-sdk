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


#include <ifc2x3/IfcVectorOrDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcVector.h>



using namespace ifc2x3;

IfcVectorOrDirection::IfcVectorOrDirection() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcVectorOrDirection::IfcVectorOrDirection(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcVectorOrDirection::~IfcVectorOrDirection()
{
    deleteUnion();
}

bool IfcVectorOrDirection::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcVectorOrDirection(this);
}

bool IfcVectorOrDirection::init()
{
    return false;
}

void IfcVectorOrDirection::copy(const IfcVectorOrDirection &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCDIRECTION :
        setIfcDirection((IfcDirection*)(copyop(obj.m_union.m_IfcDirection)));
        break;
    case IFCVECTOR :
        setIfcVector((IfcVector*)(copyop(obj.m_union.m_IfcVector)));
        break;
    default:
        break;
    }
}

std::string IfcVectorOrDirection::currentTypeName() const
{
    switch(m_type)
    {
    case IFCDIRECTION :
        return "IfcDirection";
        break;
    case IFCVECTOR :
        return "IfcVector";
        break;
    default:
        return "UNSET";
    }
}

IfcVectorOrDirection::IfcVectorOrDirection_select IfcVectorOrDirection::currentType() const 
{
    return m_type;
}

void IfcVectorOrDirection::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCDIRECTION :
        m_union.m_IfcDirection->unref();
        break;
    case IFCVECTOR :
        m_union.m_IfcVector->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcDirection *IfcVectorOrDirection::getIfcDirection() const
{
    if (m_type == IFCDIRECTION ) 
    {
        return m_union.m_IfcDirection;
    }
    else 
    {
        return NULL;
    }    
}

void IfcVectorOrDirection::setIfcDirection(IfcDirection *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcDirection = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCDIRECTION ;
}

IfcVector *IfcVectorOrDirection::getIfcVector() const
{
    if (m_type == IFCVECTOR ) 
    {
        return m_union.m_IfcVector;
    }
    else 
    {
        return NULL;
    }    
}

void IfcVectorOrDirection::setIfcVector(IfcVector *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcVector = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCVECTOR ;
}

void IfcVectorOrDirection::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcDirection::getClassType())) 
        {
            setIfcDirection(static_cast< IfcDirection* > (v));
            return;
        }
        if (v->isOfType(IfcVector::getClassType())) 
        {
            setIfcVector(static_cast< IfcVector* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcVectorOrDirection, Step::BaseObject)
