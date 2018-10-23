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


#include <ifc2x3/IfcBSplineCurve.h>

#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBSplineCurve::IfcBSplineCurve(Step::Id id, Step::SPFData *args) : 
    IfcBoundedCurve(id, args)
{
    m_Degree = Step::getUnset(m_Degree);
    m_ControlPointsList.setUnset(true);
    m_CurveForm = IfcBSplineCurveForm_UNSET;
    m_ClosedCurve = Step::getUnset(m_ClosedCurve);
    m_SelfIntersect = Step::getUnset(m_SelfIntersect);
}

IfcBSplineCurve::~IfcBSplineCurve()
{}

bool IfcBSplineCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBSplineCurve(this);
}


Step::Integer IfcBSplineCurve::getDegree()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Degree;
    }
    else 
    {
        return Step::getUnset(m_Degree);
    }    
}

Step::Integer IfcBSplineCurve::getDegree() const
{
    return const_cast<IfcBSplineCurve *>(this)->getDegree();
}

void IfcBSplineCurve::setDegree(Step::Integer value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Degree = value;
}

void IfcBSplineCurve::unsetDegree()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Degree = Step::getUnset(getDegree());
}

bool IfcBSplineCurve::testDegree() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDegree()) == false;
}


List_IfcCartesianPoint_2_n &IfcBSplineCurve::getControlPointsList()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ControlPointsList;
    }
    else 
    {
        m_ControlPointsList.setUnset(true);
        return m_ControlPointsList;
    }    
}

const List_IfcCartesianPoint_2_n &IfcBSplineCurve::getControlPointsList() const
{
    return const_cast<IfcBSplineCurve *>(this)->getControlPointsList();
}

void IfcBSplineCurve::setControlPointsList(const List_IfcCartesianPoint_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ControlPointsList = value;
}

void IfcBSplineCurve::unsetControlPointsList()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ControlPointsList.clear();
    m_ControlPointsList.setUnset(true);
}

bool IfcBSplineCurve::testControlPointsList() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ControlPointsList.isUnset() == false;
}


IfcBSplineCurveForm IfcBSplineCurve::getCurveForm()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CurveForm;
    }
    else 
    {
        return IfcBSplineCurveForm_UNSET;
    }    
}

IfcBSplineCurveForm IfcBSplineCurve::getCurveForm() const
{
    return const_cast<IfcBSplineCurve *>(this)->getCurveForm();
}

void IfcBSplineCurve::setCurveForm(IfcBSplineCurveForm value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveForm = value;
}

void IfcBSplineCurve::unsetCurveForm()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CurveForm = IfcBSplineCurveForm_UNSET;
}

bool IfcBSplineCurve::testCurveForm() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCurveForm()) == false;
}


Step::Logical IfcBSplineCurve::getClosedCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ClosedCurve;
    }
    else 
    {
        return Step::getUnset(m_ClosedCurve);
    }    
}

Step::Logical IfcBSplineCurve::getClosedCurve() const
{
    return const_cast<IfcBSplineCurve *>(this)->getClosedCurve();
}

void IfcBSplineCurve::setClosedCurve(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ClosedCurve = value;
}

void IfcBSplineCurve::unsetClosedCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ClosedCurve = Step::getUnset(getClosedCurve());
}

bool IfcBSplineCurve::testClosedCurve() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getClosedCurve()) == false;
}


Step::Logical IfcBSplineCurve::getSelfIntersect()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SelfIntersect;
    }
    else 
    {
        return Step::getUnset(m_SelfIntersect);
    }    
}

Step::Logical IfcBSplineCurve::getSelfIntersect() const
{
    return const_cast<IfcBSplineCurve *>(this)->getSelfIntersect();
}

void IfcBSplineCurve::setSelfIntersect(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SelfIntersect = value;
}

void IfcBSplineCurve::unsetSelfIntersect()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SelfIntersect = Step::getUnset(getSelfIntersect());
}

bool IfcBSplineCurve::testSelfIntersect() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSelfIntersect()) == false;
}

bool IfcBSplineCurve::init()
{
    if (IfcBoundedCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Degree = Step::getUnset(m_Degree);
    }
    else
    {
        m_Degree = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ControlPointsList.setUnset(true);
    }
    else
    {
        m_ControlPointsList.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_ControlPointsList.push_back(static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CurveForm = IfcBSplineCurveForm_UNSET;
    }
    else
    {
        if (arg == ".POLYLINE_FORM.")
        {
            m_CurveForm = IfcBSplineCurveForm_POLYLINE_FORM;
        }
        else if (arg == ".CIRCULAR_ARC.")
        {
            m_CurveForm = IfcBSplineCurveForm_CIRCULAR_ARC;
        }
        else if (arg == ".ELLIPTIC_ARC.")
        {
            m_CurveForm = IfcBSplineCurveForm_ELLIPTIC_ARC;
        }
        else if (arg == ".PARABOLIC_ARC.")
        {
            m_CurveForm = IfcBSplineCurveForm_PARABOLIC_ARC;
        }
        else if (arg == ".HYPERBOLIC_ARC.")
        {
            m_CurveForm = IfcBSplineCurveForm_HYPERBOLIC_ARC;
        }
        else if (arg == ".UNSPECIFIED.")
        {
            m_CurveForm = IfcBSplineCurveForm_UNSPECIFIED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ClosedCurve = Step::getUnset(m_ClosedCurve);
    }
    else
    {
        m_ClosedCurve = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SelfIntersect = Step::getUnset(m_SelfIntersect);
    }
    else
    {
        m_SelfIntersect = Step::spfToLogical(arg)
;
    }
    return true;
}

void IfcBSplineCurve::copy(const IfcBSplineCurve &obj, const CopyOp &copyop)
{
    IfcBoundedCurve::copy(obj, copyop);
    setDegree(obj.m_Degree);
    List_IfcCartesianPoint_2_n::const_iterator it_m_ControlPointsList;
    for (it_m_ControlPointsList = obj.m_ControlPointsList.begin(); it_m_ControlPointsList != obj.m_ControlPointsList.end(); ++it_m_ControlPointsList)
    {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_ControlPointsList).get()));
        m_ControlPointsList.push_back(copyTarget);
    }
    
    setCurveForm(obj.m_CurveForm);
    setClosedCurve(obj.m_ClosedCurve);
    setSelfIntersect(obj.m_SelfIntersect);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBSplineCurve, IfcBoundedCurve)
