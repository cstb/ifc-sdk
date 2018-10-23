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


#include <ifc2x3/IfcShell.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcOpenShell.h>



using namespace ifc2x3;

IfcShell::IfcShell() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcShell::IfcShell(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcShell::~IfcShell()
{
    deleteUnion();
}

bool IfcShell::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcShell(this);
}

bool IfcShell::init()
{
    return false;
}

void IfcShell::copy(const IfcShell &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCCLOSEDSHELL :
        setIfcClosedShell((IfcClosedShell*)(copyop(obj.m_union.m_IfcClosedShell)));
        break;
    case IFCOPENSHELL :
        setIfcOpenShell((IfcOpenShell*)(copyop(obj.m_union.m_IfcOpenShell)));
        break;
    default:
        break;
    }
}

std::string IfcShell::currentTypeName() const
{
    switch(m_type)
    {
    case IFCCLOSEDSHELL :
        return "IfcClosedShell";
        break;
    case IFCOPENSHELL :
        return "IfcOpenShell";
        break;
    default:
        return "UNSET";
    }
}

IfcShell::IfcShell_select IfcShell::currentType() const 
{
    return m_type;
}

void IfcShell::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCCLOSEDSHELL :
        m_union.m_IfcClosedShell->unref();
        break;
    case IFCOPENSHELL :
        m_union.m_IfcOpenShell->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcClosedShell *IfcShell::getIfcClosedShell() const
{
    if (m_type == IFCCLOSEDSHELL ) 
    {
        return m_union.m_IfcClosedShell;
    }
    else 
    {
        return NULL;
    }    
}

void IfcShell::setIfcClosedShell(IfcClosedShell *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcClosedShell = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCLOSEDSHELL ;
}

IfcOpenShell *IfcShell::getIfcOpenShell() const
{
    if (m_type == IFCOPENSHELL ) 
    {
        return m_union.m_IfcOpenShell;
    }
    else 
    {
        return NULL;
    }    
}

void IfcShell::setIfcOpenShell(IfcOpenShell *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcOpenShell = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCOPENSHELL ;
}

void IfcShell::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcClosedShell::getClassType())) 
        {
            setIfcClosedShell(static_cast< IfcClosedShell* > (v));
            return;
        }
        if (v->isOfType(IfcOpenShell::getClassType())) 
        {
            setIfcOpenShell(static_cast< IfcOpenShell* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcShell, Step::BaseObject)
