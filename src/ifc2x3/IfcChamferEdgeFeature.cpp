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


#include <ifc2x3/IfcChamferEdgeFeature.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcChamferEdgeFeature::IfcChamferEdgeFeature(Step::Id id, Step::SPFData *args) : 
    IfcEdgeFeature(id, args)
{
    m_Width = Step::getUnset(m_Width);
    m_Height = Step::getUnset(m_Height);
}

IfcChamferEdgeFeature::~IfcChamferEdgeFeature()
{}

bool IfcChamferEdgeFeature::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcChamferEdgeFeature(this);
}


IfcPositiveLengthMeasure IfcChamferEdgeFeature::getWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Width;
    }
    else 
    {
        return Step::getUnset(m_Width);
    }    
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getWidth() const
{
    return const_cast<IfcChamferEdgeFeature *>(this)->getWidth();
}

void IfcChamferEdgeFeature::setWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = value;
}

void IfcChamferEdgeFeature::unsetWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = Step::getUnset(getWidth());
}

bool IfcChamferEdgeFeature::testWidth() const
{
    return Step::isUnset(getWidth()) == false;
}


IfcPositiveLengthMeasure IfcChamferEdgeFeature::getHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Height;
    }
    else 
    {
        return Step::getUnset(m_Height);
    }    
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getHeight() const
{
    return const_cast<IfcChamferEdgeFeature *>(this)->getHeight();
}

void IfcChamferEdgeFeature::setHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = value;
}

void IfcChamferEdgeFeature::unsetHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = Step::getUnset(getHeight());
}

bool IfcChamferEdgeFeature::testHeight() const
{
    return Step::isUnset(getHeight()) == false;
}

bool IfcChamferEdgeFeature::init()
{
    if (IfcEdgeFeature::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Width = Step::getUnset(m_Width);
    }
    else
    {
        m_Width = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Height = Step::getUnset(m_Height);
    }
    else
    {
        m_Height = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcChamferEdgeFeature::copy(const IfcChamferEdgeFeature &obj, const CopyOp &copyop)
{
    IfcEdgeFeature::copy(obj, copyop);
    setWidth(obj.m_Width);
    setHeight(obj.m_Height);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcChamferEdgeFeature, IfcEdgeFeature)
