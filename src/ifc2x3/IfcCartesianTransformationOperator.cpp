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


#include <ifc2x3/IfcCartesianTransformationOperator.h>

#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCartesianTransformationOperator::IfcCartesianTransformationOperator(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Axis1 = NULL;
    m_Axis2 = NULL;
    m_LocalOrigin = NULL;
    m_Scale = Step::getUnset(m_Scale);
}

IfcCartesianTransformationOperator::~IfcCartesianTransformationOperator()
{}

bool IfcCartesianTransformationOperator::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCartesianTransformationOperator(this);
}


IfcDirection *IfcCartesianTransformationOperator::getAxis1()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Axis1.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcCartesianTransformationOperator::getAxis1() const
{
    return const_cast<IfcCartesianTransformationOperator *>(this)->getAxis1();
}

void IfcCartesianTransformationOperator::setAxis1(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis1 = value;
}

void IfcCartesianTransformationOperator::unsetAxis1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis1 = Step::getUnset(getAxis1());
}

bool IfcCartesianTransformationOperator::testAxis1() const
{
    return Step::isUnset(getAxis1()) == false;
}


IfcDirection *IfcCartesianTransformationOperator::getAxis2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Axis2.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcCartesianTransformationOperator::getAxis2() const
{
    return const_cast<IfcCartesianTransformationOperator *>(this)->getAxis2();
}

void IfcCartesianTransformationOperator::setAxis2(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis2 = value;
}

void IfcCartesianTransformationOperator::unsetAxis2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis2 = Step::getUnset(getAxis2());
}

bool IfcCartesianTransformationOperator::testAxis2() const
{
    return Step::isUnset(getAxis2()) == false;
}


IfcCartesianPoint *IfcCartesianTransformationOperator::getLocalOrigin()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LocalOrigin.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcCartesianTransformationOperator::getLocalOrigin() const
{
    return const_cast<IfcCartesianTransformationOperator *>(this)->getLocalOrigin();
}

void IfcCartesianTransformationOperator::setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocalOrigin = value;
}

void IfcCartesianTransformationOperator::unsetLocalOrigin()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LocalOrigin = Step::getUnset(getLocalOrigin());
}

bool IfcCartesianTransformationOperator::testLocalOrigin() const
{
    return Step::isUnset(getLocalOrigin()) == false;
}


Step::Real IfcCartesianTransformationOperator::getScale()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Scale;
    }
    else 
    {
        return Step::getUnset(m_Scale);
    }    
}

Step::Real IfcCartesianTransformationOperator::getScale() const
{
    return const_cast<IfcCartesianTransformationOperator *>(this)->getScale();
}

void IfcCartesianTransformationOperator::setScale(Step::Real value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale = value;
}

void IfcCartesianTransformationOperator::unsetScale()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Scale = Step::getUnset(getScale());
}

bool IfcCartesianTransformationOperator::testScale() const
{
    return Step::isUnset(getScale()) == false;
}

bool IfcCartesianTransformationOperator::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Axis1 = NULL;
    }
    else
    {
        m_Axis1 = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Axis2 = NULL;
    }
    else
    {
        m_Axis2 = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LocalOrigin = NULL;
    }
    else
    {
        m_LocalOrigin = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Scale = Step::getUnset(m_Scale);
    }
    else
    {
        m_Scale = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCartesianTransformationOperator::copy(const IfcCartesianTransformationOperator &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setAxis1((IfcDirection*)copyop(obj.m_Axis1.get()));
    setAxis2((IfcDirection*)copyop(obj.m_Axis2.get()));
    setLocalOrigin((IfcCartesianPoint*)copyop(obj.m_LocalOrigin.get()));
    setScale(obj.m_Scale);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCartesianTransformationOperator, IfcGeometricRepresentationItem)
