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


#include <ifc2x3/IfcCurveOrEdgeCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcEdgeCurve.h>



using namespace ifc2x3;

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve() : Step::BaseObject(0)
{
    m_type = UNSET;
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve(Step::SPFData *args) : Step::BaseObject(args)
{
    m_type = UNSET;
}

IfcCurveOrEdgeCurve::~IfcCurveOrEdgeCurve()
{
    deleteUnion();
}

bool IfcCurveOrEdgeCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurveOrEdgeCurve(this);
}

bool IfcCurveOrEdgeCurve::init()
{
    return false;
}

void IfcCurveOrEdgeCurve::copy(const IfcCurveOrEdgeCurve &obj, const CopyOp &copyop)
{
    switch(obj.m_type)
    {
    case IFCBOUNDEDCURVE :
        setIfcBoundedCurve((IfcBoundedCurve*)(copyop(obj.m_union.m_IfcBoundedCurve)));
        break;
    case IFCEDGECURVE :
        setIfcEdgeCurve((IfcEdgeCurve*)(copyop(obj.m_union.m_IfcEdgeCurve)));
        break;
    default:
        break;
    }
}

std::string IfcCurveOrEdgeCurve::currentTypeName() const
{
    switch(m_type)
    {
    case IFCBOUNDEDCURVE :
        return "IfcBoundedCurve";
        break;
    case IFCEDGECURVE :
        return "IfcEdgeCurve";
        break;
    default:
        return "UNSET";
    }
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve_select IfcCurveOrEdgeCurve::currentType() const 
{
    return m_type;
}

void IfcCurveOrEdgeCurve::deleteUnion() 
{ 
    switch(m_type)
    {
    case IFCBOUNDEDCURVE :
        m_union.m_IfcBoundedCurve->unref();
        break;
    case IFCEDGECURVE :
        m_union.m_IfcEdgeCurve->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}


IfcBoundedCurve *IfcCurveOrEdgeCurve::getIfcBoundedCurve() const
{
    if (m_type == IFCBOUNDEDCURVE ) 
    {
        return m_union.m_IfcBoundedCurve;
    }
    else 
    {
        return NULL;
    }    
}

void IfcCurveOrEdgeCurve::setIfcBoundedCurve(IfcBoundedCurve *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcBoundedCurve = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCBOUNDEDCURVE ;
}

IfcEdgeCurve *IfcCurveOrEdgeCurve::getIfcEdgeCurve() const
{
    if (m_type == IFCEDGECURVE ) 
    {
        return m_union.m_IfcEdgeCurve;
    }
    else 
    {
        return NULL;
    }    
}

void IfcCurveOrEdgeCurve::setIfcEdgeCurve(IfcEdgeCurve *value)
{
    if (m_type != UNSET)
    {
        deleteUnion();
    }

    m_union.m_IfcEdgeCurve = value;

    if (value != 0)
    {
        value->ref();
    }
    m_type = IFCEDGECURVE ;
}

void IfcCurveOrEdgeCurve::set(Step::BaseObject *v) 
{
    if (v) 
    {
        if (v->isOfType(IfcBoundedCurve::getClassType())) 
        {
            setIfcBoundedCurve(static_cast< IfcBoundedCurve* > (v));
            return;
        }
        if (v->isOfType(IfcEdgeCurve::getClassType())) 
        {
            setIfcEdgeCurve(static_cast< IfcEdgeCurve* > (v));
            return;
        }
    }
}


ClassType_child_implementations(IFC2X3_EXPORT, IfcCurveOrEdgeCurve, Step::BaseObject)
