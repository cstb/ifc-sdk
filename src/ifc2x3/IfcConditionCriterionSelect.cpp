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


#include <ifc2x3/IfcConditionCriterionSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcMeasureWithUnit.h>



using namespace ifc2x3;

IfcConditionCriterionSelect::IfcConditionCriterionSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcConditionCriterionSelect::IfcConditionCriterionSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcConditionCriterionSelect::~IfcConditionCriterionSelect()
{
    deleteUnion();
}

bool IfcConditionCriterionSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConditionCriterionSelect(this);
}

bool IfcConditionCriterionSelect::init()
{
    return false;
}

void IfcConditionCriterionSelect::copy(const IfcConditionCriterionSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCLABEL :
        setIfcLabel(*obj.m_union.m_IfcLabel);
        break;
    case IFCMEASUREWITHUNIT :
        setIfcMeasureWithUnit((IfcMeasureWithUnit*)(copyop(obj.m_union.m_IfcMeasureWithUnit)));
        break;
    default:
        break;
    }
}

std::string IfcConditionCriterionSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCLABEL :
        return "IfcLabel";
        break;
    case IFCMEASUREWITHUNIT :
        return "IfcMeasureWithUnit";
        break;
    default:
        return "UNSET";
    }
}

IfcConditionCriterionSelect::IfcConditionCriterionSelect_select IfcConditionCriterionSelect::currentType() const 
{
    return m_type;
}

void IfcConditionCriterionSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCLABEL :
        delete m_union.m_IfcLabel;
        break;
    case IFCMEASUREWITHUNIT :
        m_union.m_IfcMeasureWithUnit->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcLabel IfcConditionCriterionSelect::getIfcLabel() const
{
    if (m_type == IFCLABEL ) 
    {
        return *m_union.m_IfcLabel;
    }
    else 
    {
        return Step::getUnset(*m_union.m_IfcLabel);
    }    
}

void IfcConditionCriterionSelect::setIfcLabel(const IfcLabel &value)
{
    m_union.m_IfcLabel = new IfcLabel(value);
    m_type = IFCLABEL ;
}

IfcMeasureWithUnit *IfcConditionCriterionSelect::getIfcMeasureWithUnit() const
{
    if (m_type == IFCMEASUREWITHUNIT ) 
    {
        return m_union.m_IfcMeasureWithUnit;
    }
    else 
    {
        return NULL;
    }    
}

void IfcConditionCriterionSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcMeasureWithUnit = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCMEASUREWITHUNIT ;
}

void IfcConditionCriterionSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcMeasureWithUnit::getClassType())) 
        {
            setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcConditionCriterionSelect, Step::BaseObject)
