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


#include <ifc2x3/IfcSweptDiskSolid.h>

#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSweptDiskSolid::IfcSweptDiskSolid(Step::Id id, Step::SPFData *args) : 
    IfcSolidModel(id, args)
{
    m_Directrix = NULL;
    m_Radius = Step::getUnset(m_Radius);
    m_InnerRadius = Step::getUnset(m_InnerRadius);
    m_StartParam = Step::getUnset(m_StartParam);
    m_EndParam = Step::getUnset(m_EndParam);
}

IfcSweptDiskSolid::~IfcSweptDiskSolid()
{}

bool IfcSweptDiskSolid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSweptDiskSolid(this);
}


IfcCurve *IfcSweptDiskSolid::getDirectrix()
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

const IfcCurve *IfcSweptDiskSolid::getDirectrix() const
{
    return const_cast<IfcSweptDiskSolid *>(this)->getDirectrix();
}

void IfcSweptDiskSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Directrix = value;
}

void IfcSweptDiskSolid::unsetDirectrix()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Directrix = Step::getUnset(getDirectrix());
}

bool IfcSweptDiskSolid::testDirectrix() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDirectrix()) == false;
}


IfcPositiveLengthMeasure IfcSweptDiskSolid::getRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Radius;
    }
    else 
    {
        return Step::getUnset(m_Radius);
    }    
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getRadius() const
{
    return const_cast<IfcSweptDiskSolid *>(this)->getRadius();
}

void IfcSweptDiskSolid::setRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = value;
}

void IfcSweptDiskSolid::unsetRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = Step::getUnset(getRadius());
}

bool IfcSweptDiskSolid::testRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRadius()) == false;
}


IfcPositiveLengthMeasure IfcSweptDiskSolid::getInnerRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InnerRadius;
    }
    else 
    {
        return Step::getUnset(m_InnerRadius);
    }    
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getInnerRadius() const
{
    return const_cast<IfcSweptDiskSolid *>(this)->getInnerRadius();
}

void IfcSweptDiskSolid::setInnerRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerRadius = value;
}

void IfcSweptDiskSolid::unsetInnerRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerRadius = Step::getUnset(getInnerRadius());
}

bool IfcSweptDiskSolid::testInnerRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getInnerRadius()) == false;
}


IfcParameterValue IfcSweptDiskSolid::getStartParam()
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

IfcParameterValue IfcSweptDiskSolid::getStartParam() const
{
    return const_cast<IfcSweptDiskSolid *>(this)->getStartParam();
}

void IfcSweptDiskSolid::setStartParam(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartParam = value;
}

void IfcSweptDiskSolid::unsetStartParam()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_StartParam = Step::getUnset(getStartParam());
}

bool IfcSweptDiskSolid::testStartParam() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getStartParam()) == false;
}


IfcParameterValue IfcSweptDiskSolid::getEndParam()
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

IfcParameterValue IfcSweptDiskSolid::getEndParam() const
{
    return const_cast<IfcSweptDiskSolid *>(this)->getEndParam();
}

void IfcSweptDiskSolid::setEndParam(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndParam = value;
}

void IfcSweptDiskSolid::unsetEndParam()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EndParam = Step::getUnset(getEndParam());
}

bool IfcSweptDiskSolid::testEndParam() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEndParam()) == false;
}

bool IfcSweptDiskSolid::init()
{
    if (IfcSolidModel::init() == false)
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
        m_Radius = Step::getUnset(m_Radius);
    }
    else
    {
        m_Radius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InnerRadius = Step::getUnset(m_InnerRadius);
    }
    else
    {
        m_InnerRadius = Step::spfToReal(arg)

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
    return true;
}

void IfcSweptDiskSolid::copy(const IfcSweptDiskSolid &obj, const CopyOp &copyop)
{
    IfcSolidModel::copy(obj, copyop);
    setDirectrix((IfcCurve*)copyop(obj.m_Directrix.get()));
    setRadius(obj.m_Radius);
    setInnerRadius(obj.m_InnerRadius);
    setStartParam(obj.m_StartParam);
    setEndParam(obj.m_EndParam);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSweptDiskSolid, IfcSolidModel)
