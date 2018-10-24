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


#include <ifc2x3/IfcDoorStyle.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDoorStyle::IfcDoorStyle(Step::Id id, Step::SPFData *args) : 
    IfcTypeProduct(id, args)
{
    m_OperationType = IfcDoorStyleOperationEnum_UNSET;
    m_ConstructionType = IfcDoorStyleConstructionEnum_UNSET;
    m_ParameterTakesPrecedence = Step::getUnset(m_ParameterTakesPrecedence);
    m_Sizeable = Step::getUnset(m_Sizeable);
}

IfcDoorStyle::~IfcDoorStyle()
{}

bool IfcDoorStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDoorStyle(this);
}


IfcDoorStyleOperationEnum IfcDoorStyle::getOperationType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OperationType;
    }
    else 
    {
        return IfcDoorStyleOperationEnum_UNSET;
    }    
}

IfcDoorStyleOperationEnum IfcDoorStyle::getOperationType() const
{
    return const_cast<IfcDoorStyle *>(this)->getOperationType();
}

void IfcDoorStyle::setOperationType(IfcDoorStyleOperationEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = value;
}

void IfcDoorStyle::unsetOperationType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = IfcDoorStyleOperationEnum_UNSET;
}

bool IfcDoorStyle::testOperationType() const
{
    return Step::isUnset(getOperationType()) == false;
}


IfcDoorStyleConstructionEnum IfcDoorStyle::getConstructionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConstructionType;
    }
    else 
    {
        return IfcDoorStyleConstructionEnum_UNSET;
    }    
}

IfcDoorStyleConstructionEnum IfcDoorStyle::getConstructionType() const
{
    return const_cast<IfcDoorStyle *>(this)->getConstructionType();
}

void IfcDoorStyle::setConstructionType(IfcDoorStyleConstructionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstructionType = value;
}

void IfcDoorStyle::unsetConstructionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstructionType = IfcDoorStyleConstructionEnum_UNSET;
}

bool IfcDoorStyle::testConstructionType() const
{
    return Step::isUnset(getConstructionType()) == false;
}


Step::Boolean IfcDoorStyle::getParameterTakesPrecedence()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ParameterTakesPrecedence;
    }
    else 
    {
        return Step::getUnset(m_ParameterTakesPrecedence);
    }    
}

Step::Boolean IfcDoorStyle::getParameterTakesPrecedence() const
{
    return const_cast<IfcDoorStyle *>(this)->getParameterTakesPrecedence();
}

void IfcDoorStyle::setParameterTakesPrecedence(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParameterTakesPrecedence = value;
}

void IfcDoorStyle::unsetParameterTakesPrecedence()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParameterTakesPrecedence = Step::getUnset(getParameterTakesPrecedence());
}

bool IfcDoorStyle::testParameterTakesPrecedence() const
{
    return Step::isUnset(getParameterTakesPrecedence()) == false;
}


Step::Boolean IfcDoorStyle::getSizeable()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Sizeable;
    }
    else 
    {
        return Step::getUnset(m_Sizeable);
    }    
}

Step::Boolean IfcDoorStyle::getSizeable() const
{
    return const_cast<IfcDoorStyle *>(this)->getSizeable();
}

void IfcDoorStyle::setSizeable(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Sizeable = value;
}

void IfcDoorStyle::unsetSizeable()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Sizeable = Step::getUnset(getSizeable());
}

bool IfcDoorStyle::testSizeable() const
{
    return Step::isUnset(getSizeable()) == false;
}

bool IfcDoorStyle::init()
{
    if (IfcTypeProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OperationType = IfcDoorStyleOperationEnum_UNSET;
    }
    else
    {
        if (arg == ".SINGLE_SWING_LEFT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_SINGLE_SWING_LEFT;
        }
        else if (arg == ".SINGLE_SWING_RIGHT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_SINGLE_SWING_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_SINGLE_SWING.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING;
        }
        else if (arg == ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT;
        }
        else if (arg == ".DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT;
        }
        else if (arg == ".DOUBLE_SWING_LEFT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_SWING_LEFT;
        }
        else if (arg == ".DOUBLE_SWING_RIGHT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_SWING_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_DOUBLE_SWING.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_DOUBLE_SWING;
        }
        else if (arg == ".SLIDING_TO_LEFT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_SLIDING_TO_LEFT;
        }
        else if (arg == ".SLIDING_TO_RIGHT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_SLIDING_TO_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_SLIDING.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_SLIDING;
        }
        else if (arg == ".FOLDING_TO_LEFT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_FOLDING_TO_LEFT;
        }
        else if (arg == ".FOLDING_TO_RIGHT.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_FOLDING_TO_RIGHT;
        }
        else if (arg == ".DOUBLE_DOOR_FOLDING.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_DOUBLE_DOOR_FOLDING;
        }
        else if (arg == ".REVOLVING.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_REVOLVING;
        }
        else if (arg == ".ROLLINGUP.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_ROLLINGUP;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_OperationType = IfcDoorStyleOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConstructionType = IfcDoorStyleConstructionEnum_UNSET;
    }
    else
    {
        if (arg == ".ALUMINIUM.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_ALUMINIUM;
        }
        else if (arg == ".HIGH_GRADE_STEEL.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_HIGH_GRADE_STEEL;
        }
        else if (arg == ".STEEL.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_STEEL;
        }
        else if (arg == ".WOOD.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_WOOD;
        }
        else if (arg == ".ALUMINIUM_WOOD.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_ALUMINIUM_WOOD;
        }
        else if (arg == ".ALUMINIUM_PLASTIC.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_ALUMINIUM_PLASTIC;
        }
        else if (arg == ".PLASTIC.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_PLASTIC;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ConstructionType = IfcDoorStyleConstructionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ParameterTakesPrecedence = Step::getUnset(m_ParameterTakesPrecedence);
    }
    else
    {
        m_ParameterTakesPrecedence = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Sizeable = Step::getUnset(m_Sizeable);
    }
    else
    {
        m_Sizeable = Step::spfToBoolean(arg)
;
    }
    return true;
}

void IfcDoorStyle::copy(const IfcDoorStyle &obj, const CopyOp &copyop)
{
    IfcTypeProduct::copy(obj, copyop);
    setOperationType(obj.m_OperationType);
    setConstructionType(obj.m_ConstructionType);
    setParameterTakesPrecedence(obj.m_ParameterTakesPrecedence);
    setSizeable(obj.m_Sizeable);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDoorStyle, IfcTypeProduct)
