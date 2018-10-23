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


#include <ifc2x3/IfcCsgSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>



using namespace ifc2x3;

IfcCsgSelect::IfcCsgSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcCsgSelect::IfcCsgSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcCsgSelect::~IfcCsgSelect()
{
    deleteUnion();
}

bool IfcCsgSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCsgSelect(this);
}

bool IfcCsgSelect::init()
{
    return false;
}

void IfcCsgSelect::copy(const IfcCsgSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCBOOLEANRESULT :
        setIfcBooleanResult((IfcBooleanResult*)(copyop(obj.m_union.m_IfcBooleanResult)));
        break;
    case IFCCSGPRIMITIVE3D :
        setIfcCsgPrimitive3D((IfcCsgPrimitive3D*)(copyop(obj.m_union.m_IfcCsgPrimitive3D)));
        break;
    default:
        break;
    }
}

std::string IfcCsgSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCBOOLEANRESULT :
        return "IfcBooleanResult";
        break;
    case IFCCSGPRIMITIVE3D :
        return "IfcCsgPrimitive3D";
        break;
    default:
        return "UNSET";
    }
}

IfcCsgSelect::IfcCsgSelect_select IfcCsgSelect::currentType() const 
{
    return m_type;
}

void IfcCsgSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCBOOLEANRESULT :
        m_union.m_IfcBooleanResult->unref();
        break;
    case IFCCSGPRIMITIVE3D :
        m_union.m_IfcCsgPrimitive3D->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcBooleanResult *IfcCsgSelect::getIfcBooleanResult() const
{
    if (m_type == IFCBOOLEANRESULT ) 
    {
        return m_union.m_IfcBooleanResult;
    }
    else 
    {
        return NULL;
    }    
}

void IfcCsgSelect::setIfcBooleanResult(IfcBooleanResult *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcBooleanResult = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCBOOLEANRESULT ;
}

IfcCsgPrimitive3D *IfcCsgSelect::getIfcCsgPrimitive3D() const
{
    if (m_type == IFCCSGPRIMITIVE3D ) 
    {
        return m_union.m_IfcCsgPrimitive3D;
    }
    else 
    {
        return NULL;
    }    
}

void IfcCsgSelect::setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcCsgPrimitive3D = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCSGPRIMITIVE3D ;
}

void IfcCsgSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcBooleanResult::getClassType())) 
        {
            setIfcBooleanResult(static_cast< IfcBooleanResult* > (v));
            return;
        }
        if (v->isOfType(IfcCsgPrimitive3D::getClassType())) 
        {
            setIfcCsgPrimitive3D(static_cast< IfcCsgPrimitive3D* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcCsgSelect, Step::BaseObject)
