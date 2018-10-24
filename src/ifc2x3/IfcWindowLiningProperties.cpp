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


#include <ifc2x3/IfcWindowLiningProperties.h>

#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWindowLiningProperties::IfcWindowLiningProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_LiningDepth = Step::getUnset(m_LiningDepth);
    m_LiningThickness = Step::getUnset(m_LiningThickness);
    m_TransomThickness = Step::getUnset(m_TransomThickness);
    m_MullionThickness = Step::getUnset(m_MullionThickness);
    m_FirstTransomOffset = Step::getUnset(m_FirstTransomOffset);
    m_SecondTransomOffset = Step::getUnset(m_SecondTransomOffset);
    m_FirstMullionOffset = Step::getUnset(m_FirstMullionOffset);
    m_SecondMullionOffset = Step::getUnset(m_SecondMullionOffset);
    m_ShapeAspectStyle = NULL;
}

IfcWindowLiningProperties::~IfcWindowLiningProperties()
{}

bool IfcWindowLiningProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWindowLiningProperties(this);
}


IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LiningDepth;
    }
    else 
    {
        return Step::getUnset(m_LiningDepth);
    }    
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningDepth() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getLiningDepth();
}

void IfcWindowLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningDepth = value;
}

void IfcWindowLiningProperties::unsetLiningDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningDepth = Step::getUnset(getLiningDepth());
}

bool IfcWindowLiningProperties::testLiningDepth() const
{
    return Step::isUnset(getLiningDepth()) == false;
}


IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LiningThickness;
    }
    else 
    {
        return Step::getUnset(m_LiningThickness);
    }    
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningThickness() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getLiningThickness();
}

void IfcWindowLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningThickness = value;
}

void IfcWindowLiningProperties::unsetLiningThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningThickness = Step::getUnset(getLiningThickness());
}

bool IfcWindowLiningProperties::testLiningThickness() const
{
    return Step::isUnset(getLiningThickness()) == false;
}


IfcPositiveLengthMeasure IfcWindowLiningProperties::getTransomThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransomThickness;
    }
    else 
    {
        return Step::getUnset(m_TransomThickness);
    }    
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getTransomThickness() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getTransomThickness();
}

void IfcWindowLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransomThickness = value;
}

void IfcWindowLiningProperties::unsetTransomThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransomThickness = Step::getUnset(getTransomThickness());
}

bool IfcWindowLiningProperties::testTransomThickness() const
{
    return Step::isUnset(getTransomThickness()) == false;
}


IfcPositiveLengthMeasure IfcWindowLiningProperties::getMullionThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MullionThickness;
    }
    else 
    {
        return Step::getUnset(m_MullionThickness);
    }    
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getMullionThickness() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getMullionThickness();
}

void IfcWindowLiningProperties::setMullionThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MullionThickness = value;
}

void IfcWindowLiningProperties::unsetMullionThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MullionThickness = Step::getUnset(getMullionThickness());
}

bool IfcWindowLiningProperties::testMullionThickness() const
{
    return Step::isUnset(getMullionThickness()) == false;
}


IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstTransomOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FirstTransomOffset;
    }
    else 
    {
        return Step::getUnset(m_FirstTransomOffset);
    }    
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstTransomOffset() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getFirstTransomOffset();
}

void IfcWindowLiningProperties::setFirstTransomOffset(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FirstTransomOffset = value;
}

void IfcWindowLiningProperties::unsetFirstTransomOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FirstTransomOffset = Step::getUnset(getFirstTransomOffset());
}

bool IfcWindowLiningProperties::testFirstTransomOffset() const
{
    return Step::isUnset(getFirstTransomOffset()) == false;
}


IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondTransomOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SecondTransomOffset;
    }
    else 
    {
        return Step::getUnset(m_SecondTransomOffset);
    }    
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondTransomOffset() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getSecondTransomOffset();
}

void IfcWindowLiningProperties::setSecondTransomOffset(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondTransomOffset = value;
}

void IfcWindowLiningProperties::unsetSecondTransomOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondTransomOffset = Step::getUnset(getSecondTransomOffset());
}

bool IfcWindowLiningProperties::testSecondTransomOffset() const
{
    return Step::isUnset(getSecondTransomOffset()) == false;
}


IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstMullionOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FirstMullionOffset;
    }
    else 
    {
        return Step::getUnset(m_FirstMullionOffset);
    }    
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstMullionOffset() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getFirstMullionOffset();
}

void IfcWindowLiningProperties::setFirstMullionOffset(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FirstMullionOffset = value;
}

void IfcWindowLiningProperties::unsetFirstMullionOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FirstMullionOffset = Step::getUnset(getFirstMullionOffset());
}

bool IfcWindowLiningProperties::testFirstMullionOffset() const
{
    return Step::isUnset(getFirstMullionOffset()) == false;
}


IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondMullionOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SecondMullionOffset;
    }
    else 
    {
        return Step::getUnset(m_SecondMullionOffset);
    }    
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondMullionOffset() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getSecondMullionOffset();
}

void IfcWindowLiningProperties::setSecondMullionOffset(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondMullionOffset = value;
}

void IfcWindowLiningProperties::unsetSecondMullionOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondMullionOffset = Step::getUnset(getSecondMullionOffset());
}

bool IfcWindowLiningProperties::testSecondMullionOffset() const
{
    return Step::isUnset(getSecondMullionOffset()) == false;
}


IfcShapeAspect *IfcWindowLiningProperties::getShapeAspectStyle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShapeAspectStyle.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcShapeAspect *IfcWindowLiningProperties::getShapeAspectStyle() const
{
    return const_cast<IfcWindowLiningProperties *>(this)->getShapeAspectStyle();
}

void IfcWindowLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = value;
}

void IfcWindowLiningProperties::unsetShapeAspectStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcWindowLiningProperties::testShapeAspectStyle() const
{
    return Step::isUnset(getShapeAspectStyle()) == false;
}

bool IfcWindowLiningProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LiningDepth = Step::getUnset(m_LiningDepth);
    }
    else
    {
        m_LiningDepth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LiningThickness = Step::getUnset(m_LiningThickness);
    }
    else
    {
        m_LiningThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TransomThickness = Step::getUnset(m_TransomThickness);
    }
    else
    {
        m_TransomThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MullionThickness = Step::getUnset(m_MullionThickness);
    }
    else
    {
        m_MullionThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FirstTransomOffset = Step::getUnset(m_FirstTransomOffset);
    }
    else
    {
        m_FirstTransomOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SecondTransomOffset = Step::getUnset(m_SecondTransomOffset);
    }
    else
    {
        m_SecondTransomOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FirstMullionOffset = Step::getUnset(m_FirstMullionOffset);
    }
    else
    {
        m_FirstMullionOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SecondMullionOffset = Step::getUnset(m_SecondMullionOffset);
    }
    else
    {
        m_SecondMullionOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShapeAspectStyle = NULL;
    }
    else
    {
        m_ShapeAspectStyle = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcWindowLiningProperties::copy(const IfcWindowLiningProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setLiningDepth(obj.m_LiningDepth);
    setLiningThickness(obj.m_LiningThickness);
    setTransomThickness(obj.m_TransomThickness);
    setMullionThickness(obj.m_MullionThickness);
    setFirstTransomOffset(obj.m_FirstTransomOffset);
    setSecondTransomOffset(obj.m_SecondTransomOffset);
    setFirstMullionOffset(obj.m_FirstMullionOffset);
    setSecondMullionOffset(obj.m_SecondMullionOffset);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_ShapeAspectStyle.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWindowLiningProperties, IfcPropertySetDefinition)
