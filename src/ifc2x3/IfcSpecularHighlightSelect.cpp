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


#include <ifc2x3/IfcSpecularHighlightSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>




using namespace ifc2x3;

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcSpecularHighlightSelect::~IfcSpecularHighlightSelect()
{
    deleteUnion();
}

bool IfcSpecularHighlightSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpecularHighlightSelect(this);
}

bool IfcSpecularHighlightSelect::init()
{
    return false;
}

void IfcSpecularHighlightSelect::copy(const IfcSpecularHighlightSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCSPECULAREXPONENT :
        setIfcSpecularExponent(obj.m_union.m_IfcSpecularExponent);
        break;
    case IFCSPECULARROUGHNESS :
        setIfcSpecularRoughness(obj.m_union.m_IfcSpecularRoughness);
        break;
    default:
        break;
    }
}

std::string IfcSpecularHighlightSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCSPECULAREXPONENT :
        return "IfcSpecularExponent";
        break;
    case IFCSPECULARROUGHNESS :
        return "IfcSpecularRoughness";
        break;
    default:
        return "UNSET";
    }
}

IfcSpecularHighlightSelect::IfcSpecularHighlightSelect_select IfcSpecularHighlightSelect::currentType() const 
{
    return m_type;
}

void IfcSpecularHighlightSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    default:
        break;
    }
    m_type = UNSET;
}


IfcSpecularExponent IfcSpecularHighlightSelect::getIfcSpecularExponent() const
{
    if (m_type == IFCSPECULAREXPONENT ) 
    {
        return m_union.m_IfcSpecularExponent;
    }
    else 
    {
        return Step::getUnset(m_union.m_IfcSpecularExponent);
    }    
}

void IfcSpecularHighlightSelect::setIfcSpecularExponent(IfcSpecularExponent value)
{
    m_union.m_IfcSpecularExponent = value;
    m_type = IFCSPECULAREXPONENT ;
}

IfcSpecularRoughness IfcSpecularHighlightSelect::getIfcSpecularRoughness() const
{
    if (m_type == IFCSPECULARROUGHNESS ) 
    {
        return m_union.m_IfcSpecularRoughness;
    }
    else 
    {
        return Step::getUnset(m_union.m_IfcSpecularRoughness);
    }    
}

void IfcSpecularHighlightSelect::setIfcSpecularRoughness(IfcSpecularRoughness value)
{
    m_union.m_IfcSpecularRoughness = value;
    m_type = IFCSPECULARROUGHNESS ;
}

void IfcSpecularHighlightSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcSpecularHighlightSelect, Step::BaseObject)
