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


#include <ifc2x3/IfcTextFontSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcPreDefinedTextFont.h>
#include <ifc2x3/IfcExternallyDefinedTextFont.h>



using namespace ifc2x3;

IfcTextFontSelect::IfcTextFontSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcTextFontSelect::IfcTextFontSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcTextFontSelect::~IfcTextFontSelect()
{
    deleteUnion();
}

bool IfcTextFontSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextFontSelect(this);
}

bool IfcTextFontSelect::init()
{
    return false;
}

void IfcTextFontSelect::copy(const IfcTextFontSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCPREDEFINEDTEXTFONT :
        setIfcPreDefinedTextFont((IfcPreDefinedTextFont*)(copyop(obj.m_union.m_IfcPreDefinedTextFont)));
        break;
    case IFCEXTERNALLYDEFINEDTEXTFONT :
        setIfcExternallyDefinedTextFont((IfcExternallyDefinedTextFont*)(copyop(obj.m_union.m_IfcExternallyDefinedTextFont)));
        break;
    default:
        break;
    }
}

std::string IfcTextFontSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCPREDEFINEDTEXTFONT :
        return "IfcPreDefinedTextFont";
        break;
    case IFCEXTERNALLYDEFINEDTEXTFONT :
        return "IfcExternallyDefinedTextFont";
        break;
    default:
        return "UNSET";
    }
}

IfcTextFontSelect::IfcTextFontSelect_select IfcTextFontSelect::currentType() const 
{
    return m_type;
}

void IfcTextFontSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCPREDEFINEDTEXTFONT :
        m_union.m_IfcPreDefinedTextFont->unref();
        break;
    case IFCEXTERNALLYDEFINEDTEXTFONT :
        m_union.m_IfcExternallyDefinedTextFont->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcPreDefinedTextFont *IfcTextFontSelect::getIfcPreDefinedTextFont() const
{
    if (m_type == IFCPREDEFINEDTEXTFONT ) 
    {
        return m_union.m_IfcPreDefinedTextFont;
    }
    else 
    {
        return NULL;
    }    
}

void IfcTextFontSelect::setIfcPreDefinedTextFont(IfcPreDefinedTextFont *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcPreDefinedTextFont = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCPREDEFINEDTEXTFONT ;
}

IfcExternallyDefinedTextFont *IfcTextFontSelect::getIfcExternallyDefinedTextFont() const
{
    if (m_type == IFCEXTERNALLYDEFINEDTEXTFONT ) 
    {
        return m_union.m_IfcExternallyDefinedTextFont;
    }
    else 
    {
        return NULL;
    }    
}

void IfcTextFontSelect::setIfcExternallyDefinedTextFont(IfcExternallyDefinedTextFont *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcExternallyDefinedTextFont = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCEXTERNALLYDEFINEDTEXTFONT ;
}

void IfcTextFontSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcPreDefinedTextFont::getClassType())) 
        {
            setIfcPreDefinedTextFont(static_cast< IfcPreDefinedTextFont* > (v));
            return;
        }
        if (v->isOfType(IfcExternallyDefinedTextFont::getClassType())) 
        {
            setIfcExternallyDefinedTextFont(static_cast< IfcExternallyDefinedTextFont* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcTextFontSelect, Step::BaseObject)
