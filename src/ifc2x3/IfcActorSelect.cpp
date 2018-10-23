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


#include <ifc2x3/IfcActorSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>



using namespace ifc2x3;

IfcActorSelect::IfcActorSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcActorSelect::IfcActorSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcActorSelect::~IfcActorSelect()
{
    deleteUnion();
}

bool IfcActorSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcActorSelect(this);
}

bool IfcActorSelect::init()
{
    return false;
}

void IfcActorSelect::copy(const IfcActorSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCORGANIZATION :
        setIfcOrganization((IfcOrganization*)(copyop(obj.m_union.m_IfcOrganization)));
        break;
    case IFCPERSON :
        setIfcPerson((IfcPerson*)(copyop(obj.m_union.m_IfcPerson)));
        break;
    case IFCPERSONANDORGANIZATION :
        setIfcPersonAndOrganization((IfcPersonAndOrganization*)(copyop(obj.m_union.m_IfcPersonAndOrganization)));
        break;
    default:
        break;
    }
}

std::string IfcActorSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCORGANIZATION :
        return "IfcOrganization";
        break;
    case IFCPERSON :
        return "IfcPerson";
        break;
    case IFCPERSONANDORGANIZATION :
        return "IfcPersonAndOrganization";
        break;
    default:
        return "UNSET";
    }
}

IfcActorSelect::IfcActorSelect_select IfcActorSelect::currentType() const 
{
    return m_type;
}

void IfcActorSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCORGANIZATION :
        m_union.m_IfcOrganization->unref();
        break;
    case IFCPERSON :
        m_union.m_IfcPerson->unref();
        break;
    case IFCPERSONANDORGANIZATION :
        m_union.m_IfcPersonAndOrganization->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcOrganization *IfcActorSelect::getIfcOrganization() const
{
    if (m_type == IFCORGANIZATION ) 
    {
        return m_union.m_IfcOrganization;
    }
    else 
    {
        return NULL;
    }    
}

void IfcActorSelect::setIfcOrganization(IfcOrganization *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcOrganization = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCORGANIZATION ;
}

IfcPerson *IfcActorSelect::getIfcPerson() const
{
    if (m_type == IFCPERSON ) 
    {
        return m_union.m_IfcPerson;
    }
    else 
    {
        return NULL;
    }    
}

void IfcActorSelect::setIfcPerson(IfcPerson *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcPerson = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCPERSON ;
}

IfcPersonAndOrganization *IfcActorSelect::getIfcPersonAndOrganization() const
{
    if (m_type == IFCPERSONANDORGANIZATION ) 
    {
        return m_union.m_IfcPersonAndOrganization;
    }
    else 
    {
        return NULL;
    }    
}

void IfcActorSelect::setIfcPersonAndOrganization(IfcPersonAndOrganization *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcPersonAndOrganization = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCPERSONANDORGANIZATION ;
}

void IfcActorSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcOrganization::getClassType())) 
        {
            setIfcOrganization(static_cast< IfcOrganization* > (v));
            return;
        }
        if (v->isOfType(IfcPerson::getClassType())) 
        {
            setIfcPerson(static_cast< IfcPerson* > (v));
            return;
        }
        if (v->isOfType(IfcPersonAndOrganization::getClassType())) 
        {
            setIfcPersonAndOrganization(static_cast< IfcPersonAndOrganization* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcActorSelect, Step::BaseObject)
