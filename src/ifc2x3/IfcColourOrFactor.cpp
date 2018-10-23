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


#include <ifc2x3/IfcColourOrFactor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcColourRgb.h>



using namespace ifc2x3;

IfcColourOrFactor::IfcColourOrFactor() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcColourOrFactor::IfcColourOrFactor(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcColourOrFactor::~IfcColourOrFactor()
{
    deleteUnion();
}

bool IfcColourOrFactor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcColourOrFactor(this);
}

bool IfcColourOrFactor::init()
{
    return false;
}

void IfcColourOrFactor::copy(const IfcColourOrFactor &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCCOLOURRGB :
        setIfcColourRgb((IfcColourRgb*)(copyop(obj.m_union.m_IfcColourRgb)));
        break;
    case IFCNORMALISEDRATIOMEASURE :
        setIfcNormalisedRatioMeasure(obj.m_union.m_IfcNormalisedRatioMeasure);
        break;
    default:
        break;
    }
}

std::string IfcColourOrFactor::currentTypeName() const
{
    switch(m_type)
    {
    case IFCCOLOURRGB :
        return "IfcColourRgb";
        break;
    case IFCNORMALISEDRATIOMEASURE :
        return "IfcNormalisedRatioMeasure";
        break;
    default:
        return "UNSET";
    }
}

IfcColourOrFactor::IfcColourOrFactor_select IfcColourOrFactor::currentType() const 
{
    return m_type;
}

void IfcColourOrFactor::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCCOLOURRGB :
        m_union.m_IfcColourRgb->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcColourRgb *IfcColourOrFactor::getIfcColourRgb() const
{
    if (m_type == IFCCOLOURRGB ) 
    {
        return m_union.m_IfcColourRgb;
    }
    else 
    {
        return NULL;
    }    
}

void IfcColourOrFactor::setIfcColourRgb(IfcColourRgb *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcColourRgb = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCCOLOURRGB ;
}

IfcNormalisedRatioMeasure IfcColourOrFactor::getIfcNormalisedRatioMeasure() const
{
    if (m_type == IFCNORMALISEDRATIOMEASURE ) 
    {
        return m_union.m_IfcNormalisedRatioMeasure;
    }
    else 
    {
        return Step::getUnset(m_union.m_IfcNormalisedRatioMeasure);
    }    
}

void IfcColourOrFactor::setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value)
{
    m_union.m_IfcNormalisedRatioMeasure = value;
    m_type = IFCNORMALISEDRATIOMEASURE ;
}

void IfcColourOrFactor::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcColourRgb::getClassType())) 
        {
            setIfcColourRgb(static_cast< IfcColourRgb* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcColourOrFactor, Step::BaseObject)
