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


#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/IfcMonetaryUnit.h>



using namespace ifc2x3;

IfcUnit::IfcUnit() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcUnit::IfcUnit(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcUnit::~IfcUnit()
{
    deleteUnion();
}

bool IfcUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcUnit(this);
}

bool IfcUnit::init()
{
    return false;
}

void IfcUnit::copy(const IfcUnit &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCDERIVEDUNIT :
        setIfcDerivedUnit((IfcDerivedUnit*)(copyop(obj.m_union.m_IfcDerivedUnit)));
        break;
    case IFCNAMEDUNIT :
        setIfcNamedUnit((IfcNamedUnit*)(copyop(obj.m_union.m_IfcNamedUnit)));
        break;
    case IFCMONETARYUNIT :
        setIfcMonetaryUnit((IfcMonetaryUnit*)(copyop(obj.m_union.m_IfcMonetaryUnit)));
        break;
    default:
        break;
    }
}

std::string IfcUnit::currentTypeName() const
{
    switch(m_type)
    {
    case IFCDERIVEDUNIT :
        return "IfcDerivedUnit";
        break;
    case IFCNAMEDUNIT :
        return "IfcNamedUnit";
        break;
    case IFCMONETARYUNIT :
        return "IfcMonetaryUnit";
        break;
    default:
        return "UNSET";
    }
}

IfcUnit::IfcUnit_select IfcUnit::currentType() const 
{
    return m_type;
}

void IfcUnit::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCDERIVEDUNIT :
        m_union.m_IfcDerivedUnit->unref();
        break;
    case IFCNAMEDUNIT :
        m_union.m_IfcNamedUnit->unref();
        break;
    case IFCMONETARYUNIT :
        m_union.m_IfcMonetaryUnit->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcDerivedUnit *IfcUnit::getIfcDerivedUnit() const
{
    if (m_type == IFCDERIVEDUNIT ) 
    {
        return m_union.m_IfcDerivedUnit;
    }
    else 
    {
        return NULL;
    }    
}

void IfcUnit::setIfcDerivedUnit(IfcDerivedUnit *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcDerivedUnit = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCDERIVEDUNIT ;
}

IfcNamedUnit *IfcUnit::getIfcNamedUnit() const
{
    if (m_type == IFCNAMEDUNIT ) 
    {
        return m_union.m_IfcNamedUnit;
    }
    else 
    {
        return NULL;
    }    
}

void IfcUnit::setIfcNamedUnit(IfcNamedUnit *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcNamedUnit = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCNAMEDUNIT ;
}

IfcMonetaryUnit *IfcUnit::getIfcMonetaryUnit() const
{
    if (m_type == IFCMONETARYUNIT ) 
    {
        return m_union.m_IfcMonetaryUnit;
    }
    else 
    {
        return NULL;
    }    
}

void IfcUnit::setIfcMonetaryUnit(IfcMonetaryUnit *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcMonetaryUnit = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCMONETARYUNIT ;
}

void IfcUnit::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcDerivedUnit::getClassType())) 
        {
            setIfcDerivedUnit(static_cast< IfcDerivedUnit* > (v));
            return;
        }
        if (v->isOfType(IfcNamedUnit::getClassType())) 
        {
            setIfcNamedUnit(static_cast< IfcNamedUnit* > (v));
            return;
        }
        if (v->isOfType(IfcMonetaryUnit::getClassType())) 
        {
            setIfcMonetaryUnit(static_cast< IfcMonetaryUnit* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcUnit, Step::BaseObject)
