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


#include <ifc2x3/IfcPlanarExtent.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPlanarExtent::IfcPlanarExtent(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_SizeInX = Step::getUnset(m_SizeInX);
    m_SizeInY = Step::getUnset(m_SizeInY);
}

IfcPlanarExtent::~IfcPlanarExtent()
{}

bool IfcPlanarExtent::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPlanarExtent(this);
}


IfcLengthMeasure IfcPlanarExtent::getSizeInX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SizeInX;
    }
    else 
    {
        return Step::getUnset(m_SizeInX);
    }    
}

IfcLengthMeasure IfcPlanarExtent::getSizeInX() const
{
    return const_cast<IfcPlanarExtent *>(this)->getSizeInX();
}

void IfcPlanarExtent::setSizeInX(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SizeInX = value;
}

void IfcPlanarExtent::unsetSizeInX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SizeInX = Step::getUnset(getSizeInX());
}

bool IfcPlanarExtent::testSizeInX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSizeInX()) == false;
}


IfcLengthMeasure IfcPlanarExtent::getSizeInY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SizeInY;
    }
    else 
    {
        return Step::getUnset(m_SizeInY);
    }    
}

IfcLengthMeasure IfcPlanarExtent::getSizeInY() const
{
    return const_cast<IfcPlanarExtent *>(this)->getSizeInY();
}

void IfcPlanarExtent::setSizeInY(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SizeInY = value;
}

void IfcPlanarExtent::unsetSizeInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SizeInY = Step::getUnset(getSizeInY());
}

bool IfcPlanarExtent::testSizeInY() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSizeInY()) == false;
}

bool IfcPlanarExtent::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SizeInX = Step::getUnset(m_SizeInX);
    }
    else
    {
        m_SizeInX = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SizeInY = Step::getUnset(m_SizeInY);
    }
    else
    {
        m_SizeInY = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcPlanarExtent::copy(const IfcPlanarExtent &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSizeInX(obj.m_SizeInX);
    setSizeInY(obj.m_SizeInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPlanarExtent, IfcGeometricRepresentationItem)
