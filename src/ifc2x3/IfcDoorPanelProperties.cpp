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


#include <ifc2x3/IfcDoorPanelProperties.h>

#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDoorPanelProperties::IfcDoorPanelProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_PanelDepth = Step::getUnset(m_PanelDepth);
    m_PanelOperation = IfcDoorPanelOperationEnum_UNSET;
    m_PanelWidth = Step::getUnset(m_PanelWidth);
    m_PanelPosition = IfcDoorPanelPositionEnum_UNSET;
    m_ShapeAspectStyle = NULL;
}

IfcDoorPanelProperties::~IfcDoorPanelProperties()
{}

bool IfcDoorPanelProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDoorPanelProperties(this);
}


IfcPositiveLengthMeasure IfcDoorPanelProperties::getPanelDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PanelDepth;
    }
    else 
    {
        return Step::getUnset(m_PanelDepth);
    }    
}

IfcPositiveLengthMeasure IfcDoorPanelProperties::getPanelDepth() const
{
    return const_cast<IfcDoorPanelProperties *>(this)->getPanelDepth();
}

void IfcDoorPanelProperties::setPanelDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelDepth = value;
}

void IfcDoorPanelProperties::unsetPanelDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelDepth = Step::getUnset(getPanelDepth());
}

bool IfcDoorPanelProperties::testPanelDepth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPanelDepth()) == false;
}


IfcDoorPanelOperationEnum IfcDoorPanelProperties::getPanelOperation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PanelOperation;
    }
    else 
    {
        return IfcDoorPanelOperationEnum_UNSET;
    }    
}

IfcDoorPanelOperationEnum IfcDoorPanelProperties::getPanelOperation() const
{
    return const_cast<IfcDoorPanelProperties *>(this)->getPanelOperation();
}

void IfcDoorPanelProperties::setPanelOperation(IfcDoorPanelOperationEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelOperation = value;
}

void IfcDoorPanelProperties::unsetPanelOperation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelOperation = IfcDoorPanelOperationEnum_UNSET;
}

bool IfcDoorPanelProperties::testPanelOperation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPanelOperation()) == false;
}


IfcNormalisedRatioMeasure IfcDoorPanelProperties::getPanelWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PanelWidth;
    }
    else 
    {
        return Step::getUnset(m_PanelWidth);
    }    
}

IfcNormalisedRatioMeasure IfcDoorPanelProperties::getPanelWidth() const
{
    return const_cast<IfcDoorPanelProperties *>(this)->getPanelWidth();
}

void IfcDoorPanelProperties::setPanelWidth(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelWidth = value;
}

void IfcDoorPanelProperties::unsetPanelWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelWidth = Step::getUnset(getPanelWidth());
}

bool IfcDoorPanelProperties::testPanelWidth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPanelWidth()) == false;
}


IfcDoorPanelPositionEnum IfcDoorPanelProperties::getPanelPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PanelPosition;
    }
    else 
    {
        return IfcDoorPanelPositionEnum_UNSET;
    }    
}

IfcDoorPanelPositionEnum IfcDoorPanelProperties::getPanelPosition() const
{
    return const_cast<IfcDoorPanelProperties *>(this)->getPanelPosition();
}

void IfcDoorPanelProperties::setPanelPosition(IfcDoorPanelPositionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelPosition = value;
}

void IfcDoorPanelProperties::unsetPanelPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PanelPosition = IfcDoorPanelPositionEnum_UNSET;
}

bool IfcDoorPanelProperties::testPanelPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPanelPosition()) == false;
}


IfcShapeAspect *IfcDoorPanelProperties::getShapeAspectStyle()
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

const IfcShapeAspect *IfcDoorPanelProperties::getShapeAspectStyle() const
{
    return const_cast<IfcDoorPanelProperties *>(this)->getShapeAspectStyle();
}

void IfcDoorPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = value;
}

void IfcDoorPanelProperties::unsetShapeAspectStyle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcDoorPanelProperties::testShapeAspectStyle() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShapeAspectStyle()) == false;
}

bool IfcDoorPanelProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PanelDepth = Step::getUnset(m_PanelDepth);
    }
    else
    {
        m_PanelDepth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PanelOperation = IfcDoorPanelOperationEnum_UNSET;
    }
    else
    {
        if (arg == ".SWINGING.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_SWINGING;
        }
        else if (arg == ".DOUBLE_ACTING.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_DOUBLE_ACTING;
        }
        else if (arg == ".SLIDING.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_SLIDING;
        }
        else if (arg == ".FOLDING.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_FOLDING;
        }
        else if (arg == ".REVOLVING.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_REVOLVING;
        }
        else if (arg == ".ROLLINGUP.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_ROLLINGUP;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PanelOperation = IfcDoorPanelOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PanelWidth = Step::getUnset(m_PanelWidth);
    }
    else
    {
        m_PanelWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PanelPosition = IfcDoorPanelPositionEnum_UNSET;
    }
    else
    {
        if (arg == ".LEFT.")
        {
            m_PanelPosition = IfcDoorPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.")
        {
            m_PanelPosition = IfcDoorPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.")
        {
            m_PanelPosition = IfcDoorPanelPositionEnum_RIGHT;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PanelPosition = IfcDoorPanelPositionEnum_NOTDEFINED;
        }
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

void IfcDoorPanelProperties::copy(const IfcDoorPanelProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setPanelDepth(obj.m_PanelDepth);
    setPanelOperation(obj.m_PanelOperation);
    setPanelWidth(obj.m_PanelWidth);
    setPanelPosition(obj.m_PanelPosition);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_ShapeAspectStyle.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDoorPanelProperties, IfcPropertySetDefinition)
