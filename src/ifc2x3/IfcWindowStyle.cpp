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


#include <ifc2x3/IfcWindowStyle.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWindowStyle::IfcWindowStyle(Step::Id id, Step::SPFData *args) : 
    IfcTypeProduct(id, args)
{
    m_ConstructionType = IfcWindowStyleConstructionEnum_UNSET;
    m_OperationType = IfcWindowStyleOperationEnum_UNSET;
    m_ParameterTakesPrecedence = Step::getUnset(m_ParameterTakesPrecedence);
    m_Sizeable = Step::getUnset(m_Sizeable);
}

IfcWindowStyle::~IfcWindowStyle()
{}

bool IfcWindowStyle::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWindowStyle(this);
}


IfcWindowStyleConstructionEnum IfcWindowStyle::getConstructionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConstructionType;
    }
    else 
    {
        return IfcWindowStyleConstructionEnum_UNSET;
    }    
}

IfcWindowStyleConstructionEnum IfcWindowStyle::getConstructionType() const
{
    return const_cast<IfcWindowStyle *>(this)->getConstructionType();
}

void IfcWindowStyle::setConstructionType(IfcWindowStyleConstructionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstructionType = value;
}

void IfcWindowStyle::unsetConstructionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstructionType = IfcWindowStyleConstructionEnum_UNSET;
}

bool IfcWindowStyle::testConstructionType() const
{
    return Step::isUnset(getConstructionType()) == false;
}


IfcWindowStyleOperationEnum IfcWindowStyle::getOperationType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OperationType;
    }
    else 
    {
        return IfcWindowStyleOperationEnum_UNSET;
    }    
}

IfcWindowStyleOperationEnum IfcWindowStyle::getOperationType() const
{
    return const_cast<IfcWindowStyle *>(this)->getOperationType();
}

void IfcWindowStyle::setOperationType(IfcWindowStyleOperationEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = value;
}

void IfcWindowStyle::unsetOperationType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OperationType = IfcWindowStyleOperationEnum_UNSET;
}

bool IfcWindowStyle::testOperationType() const
{
    return Step::isUnset(getOperationType()) == false;
}


Step::Boolean IfcWindowStyle::getParameterTakesPrecedence()
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

Step::Boolean IfcWindowStyle::getParameterTakesPrecedence() const
{
    return const_cast<IfcWindowStyle *>(this)->getParameterTakesPrecedence();
}

void IfcWindowStyle::setParameterTakesPrecedence(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParameterTakesPrecedence = value;
}

void IfcWindowStyle::unsetParameterTakesPrecedence()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ParameterTakesPrecedence = Step::getUnset(getParameterTakesPrecedence());
}

bool IfcWindowStyle::testParameterTakesPrecedence() const
{
    return Step::isUnset(getParameterTakesPrecedence()) == false;
}


Step::Boolean IfcWindowStyle::getSizeable()
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

Step::Boolean IfcWindowStyle::getSizeable() const
{
    return const_cast<IfcWindowStyle *>(this)->getSizeable();
}

void IfcWindowStyle::setSizeable(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Sizeable = value;
}

void IfcWindowStyle::unsetSizeable()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Sizeable = Step::getUnset(getSizeable());
}

bool IfcWindowStyle::testSizeable() const
{
    return Step::isUnset(getSizeable()) == false;
}

bool IfcWindowStyle::init()
{
    if (IfcTypeProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConstructionType = IfcWindowStyleConstructionEnum_UNSET;
    }
    else
    {
        if (arg == ".ALUMINIUM.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_ALUMINIUM;
        }
        else if (arg == ".HIGH_GRADE_STEEL.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_HIGH_GRADE_STEEL;
        }
        else if (arg == ".STEEL.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_STEEL;
        }
        else if (arg == ".WOOD.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_WOOD;
        }
        else if (arg == ".ALUMINIUM_WOOD.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_ALUMINIUM_WOOD;
        }
        else if (arg == ".PLASTIC.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_PLASTIC;
        }
        else if (arg == ".OTHER_CONSTRUCTION.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_OTHER_CONSTRUCTION;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ConstructionType = IfcWindowStyleConstructionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OperationType = IfcWindowStyleOperationEnum_UNSET;
    }
    else
    {
        if (arg == ".SINGLE_PANEL.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_SINGLE_PANEL;
        }
        else if (arg == ".DOUBLE_PANEL_VERTICAL.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_VERTICAL;
        }
        else if (arg == ".DOUBLE_PANEL_HORIZONTAL.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_HORIZONTAL;
        }
        else if (arg == ".TRIPLE_PANEL_VERTICAL.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_VERTICAL;
        }
        else if (arg == ".TRIPLE_PANEL_BOTTOM.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_BOTTOM;
        }
        else if (arg == ".TRIPLE_PANEL_TOP.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_TOP;
        }
        else if (arg == ".TRIPLE_PANEL_LEFT.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_LEFT;
        }
        else if (arg == ".TRIPLE_PANEL_RIGHT.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_RIGHT;
        }
        else if (arg == ".TRIPLE_PANEL_HORIZONTAL.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_HORIZONTAL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_OperationType = IfcWindowStyleOperationEnum_NOTDEFINED;
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

void IfcWindowStyle::copy(const IfcWindowStyle &obj, const CopyOp &copyop)
{
    IfcTypeProduct::copy(obj, copyop);
    setConstructionType(obj.m_ConstructionType);
    setOperationType(obj.m_OperationType);
    setParameterTakesPrecedence(obj.m_ParameterTakesPrecedence);
    setSizeable(obj.m_Sizeable);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWindowStyle, IfcTypeProduct)
