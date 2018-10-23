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


#include <ifc2x3/IfcBooleanOperand.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>



using namespace ifc2x3;

IfcBooleanOperand::IfcBooleanOperand() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcBooleanOperand::IfcBooleanOperand(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcBooleanOperand::~IfcBooleanOperand()
{
    deleteUnion();
}

bool IfcBooleanOperand::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBooleanOperand(this);
}

bool IfcBooleanOperand::init()
{
    return false;
}

void IfcBooleanOperand::copy(const IfcBooleanOperand &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCSOLIDMODEL :
        setIfcSolidModel((IfcSolidModel*)(copyop(obj.m_union.m_IfcSolidModel)));
        break;
    case IFCHALFSPACESOLID :
        setIfcHalfSpaceSolid((IfcHalfSpaceSolid*)(copyop(obj.m_union.m_IfcHalfSpaceSolid)));
        break;
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

std::string IfcBooleanOperand::currentTypeName() const
{
    switch(m_type)
    {
    case IFCSOLIDMODEL :
        return "IfcSolidModel";
        break;
    case IFCHALFSPACESOLID :
        return "IfcHalfSpaceSolid";
        break;
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

IfcBooleanOperand::IfcBooleanOperand_select IfcBooleanOperand::currentType() const 
{
    return m_type;
}

void IfcBooleanOperand::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCSOLIDMODEL :
        m_union.m_IfcSolidModel->unref();
        break;
    case IFCHALFSPACESOLID :
        m_union.m_IfcHalfSpaceSolid->unref();
        break;
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


IfcSolidModel *IfcBooleanOperand::getIfcSolidModel() const
{
    if (m_type == IFCSOLIDMODEL ) 
    {
        return m_union.m_IfcSolidModel;
    }
    else 
    {
        return NULL;
    }    
}

void IfcBooleanOperand::setIfcSolidModel(IfcSolidModel *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcSolidModel = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCSOLIDMODEL ;
}

IfcHalfSpaceSolid *IfcBooleanOperand::getIfcHalfSpaceSolid() const
{
    if (m_type == IFCHALFSPACESOLID ) 
    {
        return m_union.m_IfcHalfSpaceSolid;
    }
    else 
    {
        return NULL;
    }    
}

void IfcBooleanOperand::setIfcHalfSpaceSolid(IfcHalfSpaceSolid *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcHalfSpaceSolid = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCHALFSPACESOLID ;
}

IfcBooleanResult *IfcBooleanOperand::getIfcBooleanResult() const
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

void IfcBooleanOperand::setIfcBooleanResult(IfcBooleanResult *value)
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

IfcCsgPrimitive3D *IfcBooleanOperand::getIfcCsgPrimitive3D() const
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

void IfcBooleanOperand::setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value)
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

void IfcBooleanOperand::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcSolidModel::getClassType())) 
        {
            setIfcSolidModel(static_cast< IfcSolidModel* > (v));
            return;
        }
        if (v->isOfType(IfcHalfSpaceSolid::getClassType())) 
        {
            setIfcHalfSpaceSolid(static_cast< IfcHalfSpaceSolid* > (v));
            return;
        }
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


ClassType_child_implementations(IFC2X3_EXPORT, IfcBooleanOperand, Step::BaseObject)
