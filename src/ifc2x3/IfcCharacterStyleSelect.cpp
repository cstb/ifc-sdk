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


#include <ifc2x3/IfcCharacterStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcTextStyleForDefinedFont.h>



using namespace ifc2x3;

IfcCharacterStyleSelect::IfcCharacterStyleSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcCharacterStyleSelect::IfcCharacterStyleSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcCharacterStyleSelect::~IfcCharacterStyleSelect()
{
    deleteUnion();
}

bool IfcCharacterStyleSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCharacterStyleSelect(this);
}

bool IfcCharacterStyleSelect::init()
{
    return false;
}

void IfcCharacterStyleSelect::copy(const IfcCharacterStyleSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCTEXTSTYLEFORDEFINEDFONT :
        setIfcTextStyleForDefinedFont((IfcTextStyleForDefinedFont*)(copyop(obj.m_union.m_IfcTextStyleForDefinedFont)));
        break;
    default:
        break;
    }
}

std::string IfcCharacterStyleSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCTEXTSTYLEFORDEFINEDFONT :
        return "IfcTextStyleForDefinedFont";
        break;
    default:
        return "UNSET";
    }
}

IfcCharacterStyleSelect::IfcCharacterStyleSelect_select IfcCharacterStyleSelect::currentType() const 
{
    return m_type;
}

void IfcCharacterStyleSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCTEXTSTYLEFORDEFINEDFONT :
        m_union.m_IfcTextStyleForDefinedFont->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcTextStyleForDefinedFont *IfcCharacterStyleSelect::getIfcTextStyleForDefinedFont() const
{
    if (m_type == IFCTEXTSTYLEFORDEFINEDFONT ) 
    {
        return m_union.m_IfcTextStyleForDefinedFont;
    }
    else 
    {
        return NULL;
    }    
}

void IfcCharacterStyleSelect::setIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcTextStyleForDefinedFont = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCTEXTSTYLEFORDEFINEDFONT ;
}

void IfcCharacterStyleSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcTextStyleForDefinedFont::getClassType())) 
        {
            setIfcTextStyleForDefinedFont(static_cast< IfcTextStyleForDefinedFont* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcCharacterStyleSelect, Step::BaseObject)
