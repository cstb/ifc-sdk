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


#include <ifc2x3/IfcGridAxis.h>

#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcGrid.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGridAxis::IfcGridAxis(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_AxisTag = Step::getUnset(m_AxisTag);
    m_AxisCurve = NULL;
    m_SameSense = Step::getUnset(m_SameSense);
}

IfcGridAxis::~IfcGridAxis()
{}

bool IfcGridAxis::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGridAxis(this);
}


IfcLabel IfcGridAxis::getAxisTag()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AxisTag;
    }
    else 
    {
        return Step::getUnset(m_AxisTag);
    }    
}

const IfcLabel IfcGridAxis::getAxisTag() const
{
    return const_cast<IfcGridAxis *>(this)->getAxisTag();
}

void IfcGridAxis::setAxisTag(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AxisTag = value;
}

void IfcGridAxis::unsetAxisTag()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AxisTag = Step::getUnset(getAxisTag());
}

bool IfcGridAxis::testAxisTag() const
{
    return Step::isUnset(getAxisTag()) == false;
}


IfcCurve *IfcGridAxis::getAxisCurve()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AxisCurve.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcGridAxis::getAxisCurve() const
{
    return const_cast<IfcGridAxis *>(this)->getAxisCurve();
}

void IfcGridAxis::setAxisCurve(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AxisCurve = value;
}

void IfcGridAxis::unsetAxisCurve()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AxisCurve = Step::getUnset(getAxisCurve());
}

bool IfcGridAxis::testAxisCurve() const
{
    return Step::isUnset(getAxisCurve()) == false;
}


IfcBoolean IfcGridAxis::getSameSense()
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

IfcBoolean IfcGridAxis::getSameSense() const
{
    return const_cast<IfcGridAxis *>(this)->getSameSense();
}

void IfcGridAxis::setSameSense(IfcBoolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SameSense = value;
}

void IfcGridAxis::unsetSameSense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SameSense = Step::getUnset(getSameSense());
}

bool IfcGridAxis::testSameSense() const
{
    return Step::isUnset(getSameSense()) == false;
}

Inverse_Set_IfcVirtualGridIntersection_0_n &IfcGridAxis::getHasIntersections()
{
    if (Step::BaseObject::inited())
    {
        return m_HasIntersections;
    }
 
    m_HasIntersections.setUnset(true);
    return m_HasIntersections;
}

const Inverse_Set_IfcVirtualGridIntersection_0_n &IfcGridAxis::getHasIntersections() const
{
    return  const_cast< IfcGridAxis * > (this)->getHasIntersections();
}

bool IfcGridAxis::testHasIntersections() const
{
    return m_HasIntersections.isUnset() == false;
}

Inverse_Set_IfcGrid_0_1 &IfcGridAxis::getPartOfV()
{
    if (Step::BaseObject::inited())
    {
        return m_PartOfV;
    }
 
    m_PartOfV.setUnset(true);
    return m_PartOfV;
}

const Inverse_Set_IfcGrid_0_1 &IfcGridAxis::getPartOfV() const
{
    return  const_cast< IfcGridAxis * > (this)->getPartOfV();
}

bool IfcGridAxis::testPartOfV() const
{
    return m_PartOfV.isUnset() == false;
}

Inverse_Set_IfcGrid_0_1 &IfcGridAxis::getPartOfU()
{
    if (Step::BaseObject::inited())
    {
        return m_PartOfU;
    }
 
    m_PartOfU.setUnset(true);
    return m_PartOfU;
}

const Inverse_Set_IfcGrid_0_1 &IfcGridAxis::getPartOfU() const
{
    return  const_cast< IfcGridAxis * > (this)->getPartOfU();
}

bool IfcGridAxis::testPartOfU() const
{
    return m_PartOfU.isUnset() == false;
}

Inverse_Set_IfcGrid_0_1 &IfcGridAxis::getPartOfW()
{
    if (Step::BaseObject::inited())
    {
        return m_PartOfW;
    }
 
    m_PartOfW.setUnset(true);
    return m_PartOfW;
}

const Inverse_Set_IfcGrid_0_1 &IfcGridAxis::getPartOfW() const
{
    return  const_cast< IfcGridAxis * > (this)->getPartOfW();
}

bool IfcGridAxis::testPartOfW() const
{
    return m_PartOfW.isUnset() == false;
}

bool IfcGridAxis::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AxisTag = Step::getUnset(m_AxisTag);
    }
    else
    {
        m_AxisTag = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AxisCurve = NULL;
    }
    else
    {
        m_AxisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
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
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcVirtualGridIntersection::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_HasIntersections.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasIntersections.insert(static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcGrid::getClassType(), 8);
    if (inverses)
    {
        unsigned int i;
        m_PartOfV.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PartOfV.insert(static_cast< IfcGrid * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcGrid::getClassType(), 7);
    if (inverses)
    {
        unsigned int i;
        m_PartOfU.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PartOfU.insert(static_cast< IfcGrid * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcGrid::getClassType(), 9);
    if (inverses)
    {
        unsigned int i;
        m_PartOfW.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PartOfW.insert(static_cast< IfcGrid * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGridAxis::copy(const IfcGridAxis &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setAxisTag(obj.m_AxisTag);
    setAxisCurve((IfcCurve*)copyop(obj.m_AxisCurve.get()));
    setSameSense(obj.m_SameSense);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGridAxis, Step::BaseEntity)
