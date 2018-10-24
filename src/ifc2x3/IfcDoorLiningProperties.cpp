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


#include <ifc2x3/IfcDoorLiningProperties.h>

#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDoorLiningProperties::IfcDoorLiningProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_LiningDepth = Step::getUnset(m_LiningDepth);
    m_LiningThickness = Step::getUnset(m_LiningThickness);
    m_ThresholdDepth = Step::getUnset(m_ThresholdDepth);
    m_ThresholdThickness = Step::getUnset(m_ThresholdThickness);
    m_TransomThickness = Step::getUnset(m_TransomThickness);
    m_TransomOffset = Step::getUnset(m_TransomOffset);
    m_LiningOffset = Step::getUnset(m_LiningOffset);
    m_ThresholdOffset = Step::getUnset(m_ThresholdOffset);
    m_CasingThickness = Step::getUnset(m_CasingThickness);
    m_CasingDepth = Step::getUnset(m_CasingDepth);
    m_ShapeAspectStyle = NULL;
}

IfcDoorLiningProperties::~IfcDoorLiningProperties()
{}

bool IfcDoorLiningProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDoorLiningProperties(this);
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningDepth()
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

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningDepth() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getLiningDepth();
}

void IfcDoorLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningDepth = value;
}

void IfcDoorLiningProperties::unsetLiningDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningDepth = Step::getUnset(getLiningDepth());
}

bool IfcDoorLiningProperties::testLiningDepth() const
{
    return Step::isUnset(getLiningDepth()) == false;
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningThickness()
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

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningThickness() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getLiningThickness();
}

void IfcDoorLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningThickness = value;
}

void IfcDoorLiningProperties::unsetLiningThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningThickness = Step::getUnset(getLiningThickness());
}

bool IfcDoorLiningProperties::testLiningThickness() const
{
    return Step::isUnset(getLiningThickness()) == false;
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThresholdDepth;
    }
    else 
    {
        return Step::getUnset(m_ThresholdDepth);
    }    
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdDepth() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getThresholdDepth();
}

void IfcDoorLiningProperties::setThresholdDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThresholdDepth = value;
}

void IfcDoorLiningProperties::unsetThresholdDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThresholdDepth = Step::getUnset(getThresholdDepth());
}

bool IfcDoorLiningProperties::testThresholdDepth() const
{
    return Step::isUnset(getThresholdDepth()) == false;
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThresholdThickness;
    }
    else 
    {
        return Step::getUnset(m_ThresholdThickness);
    }    
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdThickness() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getThresholdThickness();
}

void IfcDoorLiningProperties::setThresholdThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThresholdThickness = value;
}

void IfcDoorLiningProperties::unsetThresholdThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThresholdThickness = Step::getUnset(getThresholdThickness());
}

bool IfcDoorLiningProperties::testThresholdThickness() const
{
    return Step::isUnset(getThresholdThickness()) == false;
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getTransomThickness()
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

IfcPositiveLengthMeasure IfcDoorLiningProperties::getTransomThickness() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getTransomThickness();
}

void IfcDoorLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransomThickness = value;
}

void IfcDoorLiningProperties::unsetTransomThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransomThickness = Step::getUnset(getTransomThickness());
}

bool IfcDoorLiningProperties::testTransomThickness() const
{
    return Step::isUnset(getTransomThickness()) == false;
}


IfcLengthMeasure IfcDoorLiningProperties::getTransomOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TransomOffset;
    }
    else 
    {
        return Step::getUnset(m_TransomOffset);
    }    
}

IfcLengthMeasure IfcDoorLiningProperties::getTransomOffset() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getTransomOffset();
}

void IfcDoorLiningProperties::setTransomOffset(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransomOffset = value;
}

void IfcDoorLiningProperties::unsetTransomOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TransomOffset = Step::getUnset(getTransomOffset());
}

bool IfcDoorLiningProperties::testTransomOffset() const
{
    return Step::isUnset(getTransomOffset()) == false;
}


IfcLengthMeasure IfcDoorLiningProperties::getLiningOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LiningOffset;
    }
    else 
    {
        return Step::getUnset(m_LiningOffset);
    }    
}

IfcLengthMeasure IfcDoorLiningProperties::getLiningOffset() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getLiningOffset();
}

void IfcDoorLiningProperties::setLiningOffset(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningOffset = value;
}

void IfcDoorLiningProperties::unsetLiningOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LiningOffset = Step::getUnset(getLiningOffset());
}

bool IfcDoorLiningProperties::testLiningOffset() const
{
    return Step::isUnset(getLiningOffset()) == false;
}


IfcLengthMeasure IfcDoorLiningProperties::getThresholdOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThresholdOffset;
    }
    else 
    {
        return Step::getUnset(m_ThresholdOffset);
    }    
}

IfcLengthMeasure IfcDoorLiningProperties::getThresholdOffset() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getThresholdOffset();
}

void IfcDoorLiningProperties::setThresholdOffset(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThresholdOffset = value;
}

void IfcDoorLiningProperties::unsetThresholdOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThresholdOffset = Step::getUnset(getThresholdOffset());
}

bool IfcDoorLiningProperties::testThresholdOffset() const
{
    return Step::isUnset(getThresholdOffset()) == false;
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CasingThickness;
    }
    else 
    {
        return Step::getUnset(m_CasingThickness);
    }    
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingThickness() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getCasingThickness();
}

void IfcDoorLiningProperties::setCasingThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CasingThickness = value;
}

void IfcDoorLiningProperties::unsetCasingThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CasingThickness = Step::getUnset(getCasingThickness());
}

bool IfcDoorLiningProperties::testCasingThickness() const
{
    return Step::isUnset(getCasingThickness()) == false;
}


IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CasingDepth;
    }
    else 
    {
        return Step::getUnset(m_CasingDepth);
    }    
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingDepth() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getCasingDepth();
}

void IfcDoorLiningProperties::setCasingDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CasingDepth = value;
}

void IfcDoorLiningProperties::unsetCasingDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CasingDepth = Step::getUnset(getCasingDepth());
}

bool IfcDoorLiningProperties::testCasingDepth() const
{
    return Step::isUnset(getCasingDepth()) == false;
}


IfcShapeAspect *IfcDoorLiningProperties::getShapeAspectStyle()
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

const IfcShapeAspect *IfcDoorLiningProperties::getShapeAspectStyle() const
{
    return const_cast<IfcDoorLiningProperties *>(this)->getShapeAspectStyle();
}

void IfcDoorLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = value;
}

void IfcDoorLiningProperties::unsetShapeAspectStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcDoorLiningProperties::testShapeAspectStyle() const
{
    return Step::isUnset(getShapeAspectStyle()) == false;
}

bool IfcDoorLiningProperties::init()
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
        m_ThresholdDepth = Step::getUnset(m_ThresholdDepth);
    }
    else
    {
        m_ThresholdDepth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThresholdThickness = Step::getUnset(m_ThresholdThickness);
    }
    else
    {
        m_ThresholdThickness = Step::spfToReal(arg)

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
        m_TransomOffset = Step::getUnset(m_TransomOffset);
    }
    else
    {
        m_TransomOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LiningOffset = Step::getUnset(m_LiningOffset);
    }
    else
    {
        m_LiningOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThresholdOffset = Step::getUnset(m_ThresholdOffset);
    }
    else
    {
        m_ThresholdOffset = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CasingThickness = Step::getUnset(m_CasingThickness);
    }
    else
    {
        m_CasingThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CasingDepth = Step::getUnset(m_CasingDepth);
    }
    else
    {
        m_CasingDepth = Step::spfToReal(arg)

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

void IfcDoorLiningProperties::copy(const IfcDoorLiningProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setLiningDepth(obj.m_LiningDepth);
    setLiningThickness(obj.m_LiningThickness);
    setThresholdDepth(obj.m_ThresholdDepth);
    setThresholdThickness(obj.m_ThresholdThickness);
    setTransomThickness(obj.m_TransomThickness);
    setTransomOffset(obj.m_TransomOffset);
    setLiningOffset(obj.m_LiningOffset);
    setThresholdOffset(obj.m_ThresholdOffset);
    setCasingThickness(obj.m_CasingThickness);
    setCasingDepth(obj.m_CasingDepth);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_ShapeAspectStyle.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDoorLiningProperties, IfcPropertySetDefinition)
