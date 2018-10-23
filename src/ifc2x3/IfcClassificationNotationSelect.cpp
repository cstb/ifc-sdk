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


#include <ifc2x3/IfcClassificationNotationSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcClassificationNotation.h>
#include <ifc2x3/IfcClassificationReference.h>



using namespace ifc2x3;

IfcClassificationNotationSelect::IfcClassificationNotationSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcClassificationNotationSelect::IfcClassificationNotationSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcClassificationNotationSelect::~IfcClassificationNotationSelect()
{
    deleteUnion();
}

bool IfcClassificationNotationSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcClassificationNotationSelect(this);
}

bool IfcClassificationNotationSelect::init()
{
    return false;
}

void IfcClassificationNotationSelect::copy(const IfcClassificationNotationSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCCLASSIFICATIONNOTATION :
        setIfcClassificationNotation((IfcClassificationNotation*)(copyop(obj.m_union.m_IfcClassificationNotation)));
        break;
    case IFCCLASSIFICATIONREFERENCE :
        setIfcClassificationReference((IfcClassificationReference*)(copyop(obj.m_union.m_IfcClassificationReference)));
        break;
    default:
        break;
    }
}

std::string IfcClassificationNotationSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCCLASSIFICATIONNOTATION :
        return "IfcClassificationNotation";
        break;
    case IFCCLASSIFICATIONREFERENCE :
        return "IfcClassificationReference";
        break;
    default:
        return "UNSET";
    }
}

IfcClassificationNotationSelect::IfcClassificationNotationSelect_select IfcClassificationNotationSelect::currentType() const 
{
    return m_type;
}

void IfcClassificationNotationSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCCLASSIFICATIONNOTATION :
        m_union.m_IfcClassificationNotation->unref();
        break;
    case IFCCLASSIFICATIONREFERENCE :
        m_union.m_IfcClassificationReference->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcClassificationNotation *IfcClassificationNotationSelect::getIfcClassificationNotation() const
{
    if (m_type == IFCCLASSIFICATIONNOTATION ) 
    {
        return m_union.m_IfcClassificationNotation;
    }
    else 
    {
        return NULL;
    }    
}

void IfcClassificationNotationSelect::setIfcClassificationNotation(IfcClassificationNotation *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcClassificationNotation = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCLASSIFICATIONNOTATION ;
}

IfcClassificationReference *IfcClassificationNotationSelect::getIfcClassificationReference() const
{
    if (m_type == IFCCLASSIFICATIONREFERENCE ) 
    {
        return m_union.m_IfcClassificationReference;
    }
    else 
    {
        return NULL;
    }    
}

void IfcClassificationNotationSelect::setIfcClassificationReference(IfcClassificationReference *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcClassificationReference = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCLASSIFICATIONREFERENCE ;
}

void IfcClassificationNotationSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcClassificationNotation::getClassType())) 
        {
            setIfcClassificationNotation(static_cast< IfcClassificationNotation* > (v));
            return;
        }
        if (v->isOfType(IfcClassificationReference::getClassType())) 
        {
            setIfcClassificationReference(static_cast< IfcClassificationReference* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcClassificationNotationSelect, Step::BaseObject)
