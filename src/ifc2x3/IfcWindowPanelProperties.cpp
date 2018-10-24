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


#include <ifc2x3/IfcWindowPanelProperties.h>

#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWindowPanelProperties::IfcWindowPanelProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_OperationType = IfcWindowPanelOperationEnum_UNSET;
    m_PanelPosition = IfcWindowPanelPositionEnum_UNSET;
    m_FrameDepth = Step::getUnset(m_FrameDepth);
    m_FrameThickness = Step::getUnset(m_FrameThickness);
    m_ShapeAspectStyle = NULL;
}

IfcWindowPanelProperties::~IfcWindowPanelProperties()
{}

bool IfcWindowPanelProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWindowPanelProperties(this);
}


IfcWindowPanelOperationEnum IfcWindowPanelProperties::getOperationType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OperationType;
    }
    else 
    {
        return IfcWindowPanelOperationEnum_UNSET;
    }    
}

IfcWindowPanelOperationEnum IfcWindowPanelProperties::getOperationType() const
{
    return const_cast<IfcWindowPanelProperties *>(this)->getOperationType();
}

void IfcWindowPanelProperties::setOperationType(IfcWindowPanelOperationEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = value;
}

void IfcWindowPanelProperties::unsetOperationType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = IfcWindowPanelOperationEnum_UNSET;
}

bool IfcWindowPanelProperties::testOperationType() const
{
    return Step::isUnset(getOperationType()) == false;
}


IfcWindowPanelPositionEnum IfcWindowPanelProperties::getPanelPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PanelPosition;
    }
    else 
    {
        return IfcWindowPanelPositionEnum_UNSET;
    }    
}

IfcWindowPanelPositionEnum IfcWindowPanelProperties::getPanelPosition() const
{
    return const_cast<IfcWindowPanelProperties *>(this)->getPanelPosition();
}

void IfcWindowPanelProperties::setPanelPosition(IfcWindowPanelPositionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelPosition = value;
}

void IfcWindowPanelProperties::unsetPanelPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelPosition = IfcWindowPanelPositionEnum_UNSET;
}

bool IfcWindowPanelProperties::testPanelPosition() const
{
    return Step::isUnset(getPanelPosition()) == false;
}


IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FrameDepth;
    }
    else 
    {
        return Step::getUnset(m_FrameDepth);
    }    
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameDepth() const
{
    return const_cast<IfcWindowPanelProperties *>(this)->getFrameDepth();
}

void IfcWindowPanelProperties::setFrameDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameDepth = value;
}

void IfcWindowPanelProperties::unsetFrameDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameDepth = Step::getUnset(getFrameDepth());
}

bool IfcWindowPanelProperties::testFrameDepth() const
{
    return Step::isUnset(getFrameDepth()) == false;
}


IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FrameThickness;
    }
    else 
    {
        return Step::getUnset(m_FrameThickness);
    }    
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameThickness() const
{
    return const_cast<IfcWindowPanelProperties *>(this)->getFrameThickness();
}

void IfcWindowPanelProperties::setFrameThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameThickness = value;
}

void IfcWindowPanelProperties::unsetFrameThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameThickness = Step::getUnset(getFrameThickness());
}

bool IfcWindowPanelProperties::testFrameThickness() const
{
    return Step::isUnset(getFrameThickness()) == false;
}


IfcShapeAspect *IfcWindowPanelProperties::getShapeAspectStyle()
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

const IfcShapeAspect *IfcWindowPanelProperties::getShapeAspectStyle() const
{
    return const_cast<IfcWindowPanelProperties *>(this)->getShapeAspectStyle();
}

void IfcWindowPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = value;
}

void IfcWindowPanelProperties::unsetShapeAspectStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcWindowPanelProperties::testShapeAspectStyle() const
{
    return Step::isUnset(getShapeAspectStyle()) == false;
}

bool IfcWindowPanelProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OperationType = IfcWindowPanelOperationEnum_UNSET;
    }
    else
    {
        if (arg == ".SIDEHUNGRIGHTHAND.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_SIDEHUNGRIGHTHAND;
        }
        else if (arg == ".SIDEHUNGLEFTHAND.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_SIDEHUNGLEFTHAND;
        }
        else if (arg == ".TILTANDTURNRIGHTHAND.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_TILTANDTURNRIGHTHAND;
        }
        else if (arg == ".TILTANDTURNLEFTHAND.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_TILTANDTURNLEFTHAND;
        }
        else if (arg == ".TOPHUNG.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_TOPHUNG;
        }
        else if (arg == ".BOTTOMHUNG.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_BOTTOMHUNG;
        }
        else if (arg == ".PIVOTHORIZONTAL.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_PIVOTHORIZONTAL;
        }
        else if (arg == ".PIVOTVERTICAL.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_PIVOTVERTICAL;
        }
        else if (arg == ".SLIDINGHORIZONTAL.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_SLIDINGHORIZONTAL;
        }
        else if (arg == ".SLIDINGVERTICAL.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_SLIDINGVERTICAL;
        }
        else if (arg == ".REMOVABLECASEMENT.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_REMOVABLECASEMENT;
        }
        else if (arg == ".FIXEDCASEMENT.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_FIXEDCASEMENT;
        }
        else if (arg == ".OTHEROPERATION.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_OTHEROPERATION;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_OperationType = IfcWindowPanelOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PanelPosition = IfcWindowPanelPositionEnum_UNSET;
    }
    else
    {
        if (arg == ".LEFT.")
        {
            m_PanelPosition = IfcWindowPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.")
        {
            m_PanelPosition = IfcWindowPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.")
        {
            m_PanelPosition = IfcWindowPanelPositionEnum_RIGHT;
        }
        else if (arg == ".BOTTOM.")
        {
            m_PanelPosition = IfcWindowPanelPositionEnum_BOTTOM;
        }
        else if (arg == ".TOP.")
        {
            m_PanelPosition = IfcWindowPanelPositionEnum_TOP;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PanelPosition = IfcWindowPanelPositionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FrameDepth = Step::getUnset(m_FrameDepth);
    }
    else
    {
        m_FrameDepth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FrameThickness = Step::getUnset(m_FrameThickness);
    }
    else
    {
        m_FrameThickness = Step::spfToReal(arg)

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

void IfcWindowPanelProperties::copy(const IfcWindowPanelProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setOperationType(obj.m_OperationType);
    setPanelPosition(obj.m_PanelPosition);
    setFrameDepth(obj.m_FrameDepth);
    setFrameThickness(obj.m_FrameThickness);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_ShapeAspectStyle.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWindowPanelProperties, IfcPropertySetDefinition)
