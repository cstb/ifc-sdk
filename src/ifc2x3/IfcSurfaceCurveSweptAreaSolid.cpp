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


#include <ifc2x3/IfcSurfaceCurveSweptAreaSolid.h>

#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid(Step::Id id, Step::SPFData *args) : 
    IfcSweptAreaSolid(id, args)
{
    m_Directrix = NULL;
    m_StartParam = Step::getUnset(m_StartParam);
    m_EndParam = Step::getUnset(m_EndParam);
    m_ReferenceSurface = NULL;
}

IfcSurfaceCurveSweptAreaSolid::~IfcSurfaceCurveSweptAreaSolid()
{}

bool IfcSurfaceCurveSweptAreaSolid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceCurveSweptAreaSolid(this);
}


IfcCurve *IfcSurfaceCurveSweptAreaSolid::getDirectrix()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Directrix.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcSurfaceCurveSweptAreaSolid::getDirectrix() const
{
    return const_cast<IfcSurfaceCurveSweptAreaSolid *>(this)->getDirectrix();
}

void IfcSurfaceCurveSweptAreaSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Directrix = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetDirectrix()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Directrix = Step::getUnset(getDirectrix());
}

bool IfcSurfaceCurveSweptAreaSolid::testDirectrix() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDirectrix()) == false;
}


IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getStartParam()
{
    if (Step::BaseObject::inited()) 
    {
        return m_StartParam;
    }
    else 
    {
        return Step::getUnset(m_StartParam);
    }    
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getStartParam() const
{
    return const_cast<IfcSurfaceCurveSweptAreaSolid *>(this)->getStartParam();
}

void IfcSurfaceCurveSweptAreaSolid::setStartParam(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartParam = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetStartParam()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartParam = Step::getUnset(getStartParam());
}

bool IfcSurfaceCurveSweptAreaSolid::testStartParam() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStartParam()) == false;
}


IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getEndParam()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EndParam;
    }
    else 
    {
        return Step::getUnset(m_EndParam);
    }    
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getEndParam() const
{
    return const_cast<IfcSurfaceCurveSweptAreaSolid *>(this)->getEndParam();
}

void IfcSurfaceCurveSweptAreaSolid::setEndParam(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndParam = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetEndParam()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndParam = Step::getUnset(getEndParam());
}

bool IfcSurfaceCurveSweptAreaSolid::testEndParam() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEndParam()) == false;
}


IfcSurface *IfcSurfaceCurveSweptAreaSolid::getReferenceSurface()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ReferenceSurface.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcSurface *IfcSurfaceCurveSweptAreaSolid::getReferenceSurface() const
{
    return const_cast<IfcSurfaceCurveSweptAreaSolid *>(this)->getReferenceSurface();
}

void IfcSurfaceCurveSweptAreaSolid::setReferenceSurface(const Step::RefPtr< IfcSurface > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReferenceSurface = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetReferenceSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ReferenceSurface = Step::getUnset(getReferenceSurface());
}

bool IfcSurfaceCurveSweptAreaSolid::testReferenceSurface() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getReferenceSurface()) == false;
}

bool IfcSurfaceCurveSweptAreaSolid::init()
{
    if (IfcSweptAreaSolid::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Directrix = NULL;
    }
    else
    {
        m_Directrix = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_StartParam = Step::getUnset(m_StartParam);
    }
    else
    {
        m_StartParam = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EndParam = Step::getUnset(m_EndParam);
    }
    else
    {
        m_EndParam = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ReferenceSurface = NULL;
    }
    else
    {
        m_ReferenceSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSurfaceCurveSweptAreaSolid::copy(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop)
{
    IfcSweptAreaSolid::copy(obj, copyop);
    setDirectrix((IfcCurve*)copyop(obj.m_Directrix.get()));
    setStartParam(obj.m_StartParam);
    setEndParam(obj.m_EndParam);
    setReferenceSurface((IfcSurface*)copyop(obj.m_ReferenceSurface.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceCurveSweptAreaSolid, IfcSweptAreaSolid)
