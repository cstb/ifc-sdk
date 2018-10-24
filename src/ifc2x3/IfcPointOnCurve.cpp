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


#include <ifc2x3/IfcPointOnCurve.h>

#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPointOnCurve::IfcPointOnCurve(Step::Id id, Step::SPFData *args) : 
    IfcPoint(id, args)
{
    m_BasisCurve = NULL;
    m_PointParameter = Step::getUnset(m_PointParameter);
}

IfcPointOnCurve::~IfcPointOnCurve()
{}

bool IfcPointOnCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPointOnCurve(this);
}


IfcCurve *IfcPointOnCurve::getBasisCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BasisCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcPointOnCurve::getBasisCurve() const
{
    return const_cast<IfcPointOnCurve *>(this)->getBasisCurve();
}

void IfcPointOnCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisCurve = value;
}

void IfcPointOnCurve::unsetBasisCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisCurve = Step::getUnset(getBasisCurve());
}

bool IfcPointOnCurve::testBasisCurve() const
{
    return Step::isUnset(getBasisCurve()) == false;
}


IfcParameterValue IfcPointOnCurve::getPointParameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PointParameter;
    }
    else 
    {
        return Step::getUnset(m_PointParameter);
    }    
}

IfcParameterValue IfcPointOnCurve::getPointParameter() const
{
    return const_cast<IfcPointOnCurve *>(this)->getPointParameter();
}

void IfcPointOnCurve::setPointParameter(IfcParameterValue value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointParameter = value;
}

void IfcPointOnCurve::unsetPointParameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PointParameter = Step::getUnset(getPointParameter());
}

bool IfcPointOnCurve::testPointParameter() const
{
    return Step::isUnset(getPointParameter()) == false;
}

bool IfcPointOnCurve::init()
{
    if (IfcPoint::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BasisCurve = NULL;
    }
    else
    {
        m_BasisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PointParameter = Step::getUnset(m_PointParameter);
    }
    else
    {
        m_PointParameter = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcPointOnCurve::copy(const IfcPointOnCurve &obj, const CopyOp &copyop)
{
    IfcPoint::copy(obj, copyop);
    setBasisCurve((IfcCurve*)copyop(obj.m_BasisCurve.get()));
    setPointParameter(obj.m_PointParameter);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPointOnCurve, IfcPoint)
