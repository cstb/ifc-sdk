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


#include <ifc2x3/IfcVector.h>

#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcVector::IfcVector(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_Orientation = NULL;
    m_Magnitude = Step::getUnset(m_Magnitude);
}

IfcVector::~IfcVector()
{}

bool IfcVector::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcVector(this);
}


IfcDirection *IfcVector::getOrientation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Orientation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcVector::getOrientation() const
{
    return const_cast<IfcVector *>(this)->getOrientation();
}

void IfcVector::setOrientation(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = value;
}

void IfcVector::unsetOrientation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Orientation = Step::getUnset(getOrientation());
}

bool IfcVector::testOrientation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOrientation()) == false;
}


IfcLengthMeasure IfcVector::getMagnitude()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Magnitude;
    }
    else 
    {
        return Step::getUnset(m_Magnitude);
    }    
}

IfcLengthMeasure IfcVector::getMagnitude() const
{
    return const_cast<IfcVector *>(this)->getMagnitude();
}

void IfcVector::setMagnitude(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Magnitude = value;
}

void IfcVector::unsetMagnitude()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Magnitude = Step::getUnset(getMagnitude());
}

bool IfcVector::testMagnitude() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMagnitude()) == false;
}

bool IfcVector::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Orientation = NULL;
    }
    else
    {
        m_Orientation = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Magnitude = Step::getUnset(m_Magnitude);
    }
    else
    {
        m_Magnitude = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcVector::copy(const IfcVector &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOrientation((IfcDirection*)copyop(obj.m_Orientation.get()));
    setMagnitude(obj.m_Magnitude);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcVector, IfcGeometricRepresentationItem)
