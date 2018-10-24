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


#include <ifc2x3/IfcBoundingBox.h>

#include <ifc2x3/IfcCartesianPoint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoundingBox::IfcBoundingBox(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Corner = NULL;
    m_XDim = Step::getUnset(m_XDim);
    m_YDim = Step::getUnset(m_YDim);
    m_ZDim = Step::getUnset(m_ZDim);
}

IfcBoundingBox::~IfcBoundingBox()
{}

bool IfcBoundingBox::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoundingBox(this);
}


IfcCartesianPoint *IfcBoundingBox::getCorner()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Corner.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCartesianPoint *IfcBoundingBox::getCorner() const
{
    return const_cast<IfcBoundingBox *>(this)->getCorner();
}

void IfcBoundingBox::setCorner(const Step::RefPtr< IfcCartesianPoint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Corner = value;
}

void IfcBoundingBox::unsetCorner()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Corner = Step::getUnset(getCorner());
}

bool IfcBoundingBox::testCorner() const
{
    return Step::isUnset(getCorner()) == false;
}


IfcPositiveLengthMeasure IfcBoundingBox::getXDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_XDim;
    }
    else 
    {
        return Step::getUnset(m_XDim);
    }    
}

IfcPositiveLengthMeasure IfcBoundingBox::getXDim() const
{
    return const_cast<IfcBoundingBox *>(this)->getXDim();
}

void IfcBoundingBox::setXDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XDim = value;
}

void IfcBoundingBox::unsetXDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XDim = Step::getUnset(getXDim());
}

bool IfcBoundingBox::testXDim() const
{
    return Step::isUnset(getXDim()) == false;
}


IfcPositiveLengthMeasure IfcBoundingBox::getYDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YDim;
    }
    else 
    {
        return Step::getUnset(m_YDim);
    }    
}

IfcPositiveLengthMeasure IfcBoundingBox::getYDim() const
{
    return const_cast<IfcBoundingBox *>(this)->getYDim();
}

void IfcBoundingBox::setYDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YDim = value;
}

void IfcBoundingBox::unsetYDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YDim = Step::getUnset(getYDim());
}

bool IfcBoundingBox::testYDim() const
{
    return Step::isUnset(getYDim()) == false;
}


IfcPositiveLengthMeasure IfcBoundingBox::getZDim()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ZDim;
    }
    else 
    {
        return Step::getUnset(m_ZDim);
    }    
}

IfcPositiveLengthMeasure IfcBoundingBox::getZDim() const
{
    return const_cast<IfcBoundingBox *>(this)->getZDim();
}

void IfcBoundingBox::setZDim(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ZDim = value;
}

void IfcBoundingBox::unsetZDim()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ZDim = Step::getUnset(getZDim());
}

bool IfcBoundingBox::testZDim() const
{
    return Step::isUnset(getZDim()) == false;
}

bool IfcBoundingBox::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Corner = NULL;
    }
    else
    {
        m_Corner = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_XDim = Step::getUnset(m_XDim);
    }
    else
    {
        m_XDim = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YDim = Step::getUnset(m_YDim);
    }
    else
    {
        m_YDim = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ZDim = Step::getUnset(m_ZDim);
    }
    else
    {
        m_ZDim = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBoundingBox::copy(const IfcBoundingBox &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setCorner((IfcCartesianPoint*)copyop(obj.m_Corner.get()));
    setXDim(obj.m_XDim);
    setYDim(obj.m_YDim);
    setZDim(obj.m_ZDim);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoundingBox, IfcGeometricRepresentationItem)
