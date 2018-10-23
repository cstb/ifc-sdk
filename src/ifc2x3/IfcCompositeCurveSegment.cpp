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


#include <ifc2x3/IfcCompositeCurveSegment.h>

#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcCompositeCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCompositeCurveSegment::IfcCompositeCurveSegment(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Transition = IfcTransitionCode_UNSET;
    m_SameSense = Step::getUnset(m_SameSense);
    m_ParentCurve = NULL;
}

IfcCompositeCurveSegment::~IfcCompositeCurveSegment()
{}

bool IfcCompositeCurveSegment::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCompositeCurveSegment(this);
}


IfcTransitionCode IfcCompositeCurveSegment::getTransition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Transition;
    }
    else 
    {
        return IfcTransitionCode_UNSET;
    }    
}

IfcTransitionCode IfcCompositeCurveSegment::getTransition() const
{
    return const_cast<IfcCompositeCurveSegment *>(this)->getTransition();
}

void IfcCompositeCurveSegment::setTransition(IfcTransitionCode value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Transition = value;
}

void IfcCompositeCurveSegment::unsetTransition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Transition = IfcTransitionCode_UNSET;
}

bool IfcCompositeCurveSegment::testTransition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTransition()) == false;
}


Step::Boolean IfcCompositeCurveSegment::getSameSense()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SameSense;
    }
    else 
    {
        return Step::getUnset(m_SameSense);
    }    
}

Step::Boolean IfcCompositeCurveSegment::getSameSense() const
{
    return const_cast<IfcCompositeCurveSegment *>(this)->getSameSense();
}

void IfcCompositeCurveSegment::setSameSense(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SameSense = value;
}

void IfcCompositeCurveSegment::unsetSameSense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SameSense = Step::getUnset(getSameSense());
}

bool IfcCompositeCurveSegment::testSameSense() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSameSense()) == false;
}


IfcCurve *IfcCompositeCurveSegment::getParentCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ParentCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcCompositeCurveSegment::getParentCurve() const
{
    return const_cast<IfcCompositeCurveSegment *>(this)->getParentCurve();
}

void IfcCompositeCurveSegment::setParentCurve(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentCurve = value;
}

void IfcCompositeCurveSegment::unsetParentCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParentCurve = Step::getUnset(getParentCurve());
}

bool IfcCompositeCurveSegment::testParentCurve() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getParentCurve()) == false;
}

Inverse_Set_IfcCompositeCurve_1_n &IfcCompositeCurveSegment::getUsingCurves()
{
    if (Step::BaseObject::inited())
    {
        return m_UsingCurves;
    }
 
    m_UsingCurves.setUnset(true);
    return m_UsingCurves;
}

const Inverse_Set_IfcCompositeCurve_1_n &IfcCompositeCurveSegment::getUsingCurves() const
{
    return  const_cast< IfcCompositeCurveSegment * > (this)->getUsingCurves();
}

bool IfcCompositeCurveSegment::testUsingCurves() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_UsingCurves.isUnset() == false;
}

bool IfcCompositeCurveSegment::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Transition = IfcTransitionCode_UNSET;
    }
    else
    {
        if (arg == ".DISCONTINUOUS.")
        {
            m_Transition = IfcTransitionCode_DISCONTINUOUS;
        }
        else if (arg == ".CONTINUOUS.")
        {
            m_Transition = IfcTransitionCode_CONTINUOUS;
        }
        else if (arg == ".CONTSAMEGRADIENT.")
        {
            m_Transition = IfcTransitionCode_CONTSAMEGRADIENT;
        }
        else if (arg == ".CONTSAMEGRADIENTSAMECURVATURE.")
        {
            m_Transition = IfcTransitionCode_CONTSAMEGRADIENTSAMECURVATURE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SameSense = Step::getUnset(m_SameSense);
    }
    else
    {
        m_SameSense = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ParentCurve = NULL;
    }
    else
    {
        m_ParentCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcCompositeCurve::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_UsingCurves.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_UsingCurves.insert(static_cast< IfcCompositeCurve * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcCompositeCurveSegment::copy(const IfcCompositeCurveSegment &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setTransition(obj.m_Transition);
    setSameSense(obj.m_SameSense);
    setParentCurve((IfcCurve*)copyop(obj.m_ParentCurve.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCompositeCurveSegment, IfcGeometricRepresentationItem)
