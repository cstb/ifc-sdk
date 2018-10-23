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


#include <ifc2x3/IfcPermeableCoveringProperties.h>

#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPermeableCoveringProperties::IfcPermeableCoveringProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_OperationType = IfcPermeableCoveringOperationEnum_UNSET;
    m_PanelPosition = IfcWindowPanelPositionEnum_UNSET;
    m_FrameDepth = Step::getUnset(m_FrameDepth);
    m_FrameThickness = Step::getUnset(m_FrameThickness);
    m_ShapeAspectStyle = NULL;
}

IfcPermeableCoveringProperties::~IfcPermeableCoveringProperties()
{}

bool IfcPermeableCoveringProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPermeableCoveringProperties(this);
}


IfcPermeableCoveringOperationEnum IfcPermeableCoveringProperties::getOperationType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OperationType;
    }
    else 
    {
        return IfcPermeableCoveringOperationEnum_UNSET;
    }    
}

IfcPermeableCoveringOperationEnum IfcPermeableCoveringProperties::getOperationType() const
{
    return const_cast<IfcPermeableCoveringProperties *>(this)->getOperationType();
}

void IfcPermeableCoveringProperties::setOperationType(IfcPermeableCoveringOperationEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = value;
}

void IfcPermeableCoveringProperties::unsetOperationType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = IfcPermeableCoveringOperationEnum_UNSET;
}

bool IfcPermeableCoveringProperties::testOperationType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOperationType()) == false;
}


IfcWindowPanelPositionEnum IfcPermeableCoveringProperties::getPanelPosition()
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

IfcWindowPanelPositionEnum IfcPermeableCoveringProperties::getPanelPosition() const
{
    return const_cast<IfcPermeableCoveringProperties *>(this)->getPanelPosition();
}

void IfcPermeableCoveringProperties::setPanelPosition(IfcWindowPanelPositionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelPosition = value;
}

void IfcPermeableCoveringProperties::unsetPanelPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelPosition = IfcWindowPanelPositionEnum_UNSET;
}

bool IfcPermeableCoveringProperties::testPanelPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPanelPosition()) == false;
}


IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameDepth()
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

IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameDepth() const
{
    return const_cast<IfcPermeableCoveringProperties *>(this)->getFrameDepth();
}

void IfcPermeableCoveringProperties::setFrameDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameDepth = value;
}

void IfcPermeableCoveringProperties::unsetFrameDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameDepth = Step::getUnset(getFrameDepth());
}

bool IfcPermeableCoveringProperties::testFrameDepth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFrameDepth()) == false;
}


IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameThickness()
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

IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameThickness() const
{
    return const_cast<IfcPermeableCoveringProperties *>(this)->getFrameThickness();
}

void IfcPermeableCoveringProperties::setFrameThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameThickness = value;
}

void IfcPermeableCoveringProperties::unsetFrameThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FrameThickness = Step::getUnset(getFrameThickness());
}

bool IfcPermeableCoveringProperties::testFrameThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFrameThickness()) == false;
}


IfcShapeAspect *IfcPermeableCoveringProperties::getShapeAspectStyle()
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

const IfcShapeAspect *IfcPermeableCoveringProperties::getShapeAspectStyle() const
{
    return const_cast<IfcPermeableCoveringProperties *>(this)->getShapeAspectStyle();
}

void IfcPermeableCoveringProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = value;
}

void IfcPermeableCoveringProperties::unsetShapeAspectStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcPermeableCoveringProperties::testShapeAspectStyle() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShapeAspectStyle()) == false;
}

bool IfcPermeableCoveringProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OperationType = IfcPermeableCoveringOperationEnum_UNSET;
    }
    else
    {
        if (arg == ".GRILL.")
        {
            m_OperationType = IfcPermeableCoveringOperationEnum_GRILL;
        }
        else if (arg == ".LOUVER.")
        {
            m_OperationType = IfcPermeableCoveringOperationEnum_LOUVER;
        }
        else if (arg == ".SCREEN.")
        {
            m_OperationType = IfcPermeableCoveringOperationEnum_SCREEN;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_OperationType = IfcPermeableCoveringOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_OperationType = IfcPermeableCoveringOperationEnum_NOTDEFINED;
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

void IfcPermeableCoveringProperties::copy(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setOperationType(obj.m_OperationType);
    setPanelPosition(obj.m_PanelPosition);
    setFrameDepth(obj.m_FrameDepth);
    setFrameThickness(obj.m_FrameThickness);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_ShapeAspectStyle.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPermeableCoveringProperties, IfcPropertySetDefinition)
