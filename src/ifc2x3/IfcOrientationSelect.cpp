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


#include <ifc2x3/IfcOrientationSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcDirection.h>



using namespace ifc2x3;

IfcOrientationSelect::IfcOrientationSelect() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcOrientationSelect::IfcOrientationSelect(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcOrientationSelect::~IfcOrientationSelect()
{
    deleteUnion();
}

bool IfcOrientationSelect::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOrientationSelect(this);
}

bool IfcOrientationSelect::init()
{
    return false;
}

void IfcOrientationSelect::copy(const IfcOrientationSelect &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCPLANEANGLEMEASURE :
        setIfcPlaneAngleMeasure(obj.m_union.m_IfcPlaneAngleMeasure);
        break;
    case IFCDIRECTION :
        setIfcDirection((IfcDirection*)(copyop(obj.m_union.m_IfcDirection)));
        break;
    default:
        break;
    }
}

std::string IfcOrientationSelect::currentTypeName() const
{
    switch(m_type)
    {
    case IFCPLANEANGLEMEASURE :
        return "IfcPlaneAngleMeasure";
        break;
    case IFCDIRECTION :
        return "IfcDirection";
        break;
    default:
        return "UNSET";
    }
}

IfcOrientationSelect::IfcOrientationSelect_select IfcOrientationSelect::currentType() const 
{
    return m_type;
}

void IfcOrientationSelect::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCDIRECTION :
        m_union.m_IfcDirection->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcPlaneAngleMeasure IfcOrientationSelect::getIfcPlaneAngleMeasure() const
{
    if (m_type == IFCPLANEANGLEMEASURE ) 
    {
        return m_union.m_IfcPlaneAngleMeasure;
    }
    else 
    {
        return Step::getUnset(m_union.m_IfcPlaneAngleMeasure);
    }    
}

void IfcOrientationSelect::setIfcPlaneAngleMeasure(IfcPlaneAngleMeasure value)
{
    m_union.m_IfcPlaneAngleMeasure = value;
    m_type = IFCPLANEANGLEMEASURE ;
}

IfcDirection *IfcOrientationSelect::getIfcDirection() const
{
    if (m_type == IFCDIRECTION ) 
    {
        return m_union.m_IfcDirection;
    }
    else 
    {
        return NULL;
    }    
}

void IfcOrientationSelect::setIfcDirection(IfcDirection *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcDirection = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCDIRECTION ;
}

void IfcOrientationSelect::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcDirection::getClassType())) 
        {
            setIfcDirection(static_cast< IfcDirection* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcOrientationSelect, Step::BaseObject)
