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


#include <ifc2x3/IfcTextStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcTextStyleWithBoxCharacteristics.h>
#include <ifc2x3/IfcTextStyleTextModel.h>



using namespace ifc2x3;

IfcTextStyleSelect::IfcTextStyleSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcTextStyleSelect::IfcTextStyleSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcTextStyleSelect::~IfcTextStyleSelect()
{
    deleteUnion();
}

bool IfcTextStyleSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTextStyleSelect(this);
}

bool IfcTextStyleSelect::init()
{
    return false;
}

void IfcTextStyleSelect::copy(const IfcTextStyleSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCTEXTSTYLEWITHBOXCHARACTERISTICS :
        setIfcTextStyleWithBoxCharacteristics((IfcTextStyleWithBoxCharacteristics*)(copyop(obj.m_union.m_IfcTextStyleWithBoxCharacteristics)));
        break;
    case IFCTEXTSTYLETEXTMODEL :
        setIfcTextStyleTextModel((IfcTextStyleTextModel*)(copyop(obj.m_union.m_IfcTextStyleTextModel)));
        break;
    default:
        break;
    }
}

std::string IfcTextStyleSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCTEXTSTYLEWITHBOXCHARACTERISTICS :
        return "IfcTextStyleWithBoxCharacteristics";
        break;
    case IFCTEXTSTYLETEXTMODEL :
        return "IfcTextStyleTextModel";
        break;
    default:
        return "UNSET";
    }
}

IfcTextStyleSelect::IfcTextStyleSelect_select IfcTextStyleSelect::currentType() const 
{
    return m_type;
}

void IfcTextStyleSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCTEXTSTYLEWITHBOXCHARACTERISTICS :
        m_union.m_IfcTextStyleWithBoxCharacteristics->unref();
        break;
    case IFCTEXTSTYLETEXTMODEL :
        m_union.m_IfcTextStyleTextModel->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcTextStyleWithBoxCharacteristics *IfcTextStyleSelect::getIfcTextStyleWithBoxCharacteristics() const
{
    if (m_type == IFCTEXTSTYLEWITHBOXCHARACTERISTICS ) 
    {
        return m_union.m_IfcTextStyleWithBoxCharacteristics;
    }
    else 
    {
        return NULL;
    }    
}

void IfcTextStyleSelect::setIfcTextStyleWithBoxCharacteristics(IfcTextStyleWithBoxCharacteristics *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcTextStyleWithBoxCharacteristics = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCTEXTSTYLEWITHBOXCHARACTERISTICS ;
}

IfcTextStyleTextModel *IfcTextStyleSelect::getIfcTextStyleTextModel() const
{
    if (m_type == IFCTEXTSTYLETEXTMODEL ) 
    {
        return m_union.m_IfcTextStyleTextModel;
    }
    else 
    {
        return NULL;
    }    
}

void IfcTextStyleSelect::setIfcTextStyleTextModel(IfcTextStyleTextModel *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcTextStyleTextModel = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCTEXTSTYLETEXTMODEL ;
}

void IfcTextStyleSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcTextStyleWithBoxCharacteristics::getClassType())) 
        {
            setIfcTextStyleWithBoxCharacteristics(static_cast< IfcTextStyleWithBoxCharacteristics* > (v));
            return;
        }
        if (v->isOfType(IfcTextStyleTextModel::getClassType())) 
        {
            setIfcTextStyleTextModel(static_cast< IfcTextStyleTextModel* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcTextStyleSelect, Step::BaseObject)
