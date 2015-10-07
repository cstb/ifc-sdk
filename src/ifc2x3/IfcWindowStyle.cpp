// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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
#include <ifc2x3/IfcTypeProduct.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcWindowStyle::IfcWindowStyle(Step::Id id, Step::SPFData *args) : IfcTypeProduct(id, args) {
    m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
    m_operationType = IfcWindowStyleOperationEnum_UNSET;
    m_parameterTakesPrecedence = Step::getUnset(m_parameterTakesPrecedence);
    m_sizeable = Step::getUnset(m_sizeable);
}

IfcWindowStyle::~IfcWindowStyle() {
}

bool IfcWindowStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWindowStyle(this);
}

const std::string &IfcWindowStyle::type() const {
    return IfcWindowStyle::s_type.getName();
}

const Step::ClassType &IfcWindowStyle::getClassType() {
    return IfcWindowStyle::s_type;
}

const Step::ClassType &IfcWindowStyle::getType() const {
    return IfcWindowStyle::s_type;
}

bool IfcWindowStyle::isOfType(const Step::ClassType &t) const {
    return IfcWindowStyle::s_type == t ? true : IfcTypeProduct::isOfType(t);
}

IfcWindowStyleConstructionEnum IfcWindowStyle::getConstructionType() {
    if (Step::BaseObject::inited()) {
        return m_constructionType;
    }
    else {
        return IfcWindowStyleConstructionEnum_UNSET;
    }
}

const IfcWindowStyleConstructionEnum IfcWindowStyle::getConstructionType() const {
    IfcWindowStyle * deConstObject = const_cast< IfcWindowStyle * > (this);
    return deConstObject->getConstructionType();
}

void IfcWindowStyle::setConstructionType(IfcWindowStyleConstructionEnum value) {
    m_constructionType = value;
}

void IfcWindowStyle::unsetConstructionType() {
    m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
}

bool IfcWindowStyle::testConstructionType() const {
    return getConstructionType() != IfcWindowStyleConstructionEnum_UNSET;
}

IfcWindowStyleOperationEnum IfcWindowStyle::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcWindowStyleOperationEnum_UNSET;
    }
}

const IfcWindowStyleOperationEnum IfcWindowStyle::getOperationType() const {
    IfcWindowStyle * deConstObject = const_cast< IfcWindowStyle * > (this);
    return deConstObject->getOperationType();
}

void IfcWindowStyle::setOperationType(IfcWindowStyleOperationEnum value) {
    m_operationType = value;
}

void IfcWindowStyle::unsetOperationType() {
    m_operationType = IfcWindowStyleOperationEnum_UNSET;
}

bool IfcWindowStyle::testOperationType() const {
    return getOperationType() != IfcWindowStyleOperationEnum_UNSET;
}

Step::Boolean IfcWindowStyle::getParameterTakesPrecedence() {
    if (Step::BaseObject::inited()) {
        return m_parameterTakesPrecedence;
    }
    else {
        return Step::getUnset(m_parameterTakesPrecedence);
    }
}

const Step::Boolean IfcWindowStyle::getParameterTakesPrecedence() const {
    IfcWindowStyle * deConstObject = const_cast< IfcWindowStyle * > (this);
    return deConstObject->getParameterTakesPrecedence();
}

void IfcWindowStyle::setParameterTakesPrecedence(Step::Boolean value) {
    m_parameterTakesPrecedence = value;
}

void IfcWindowStyle::unsetParameterTakesPrecedence() {
    m_parameterTakesPrecedence = Step::getUnset(getParameterTakesPrecedence());
}

bool IfcWindowStyle::testParameterTakesPrecedence() const {
    return !Step::isUnset(getParameterTakesPrecedence());
}

Step::Boolean IfcWindowStyle::getSizeable() {
    if (Step::BaseObject::inited()) {
        return m_sizeable;
    }
    else {
        return Step::getUnset(m_sizeable);
    }
}

const Step::Boolean IfcWindowStyle::getSizeable() const {
    IfcWindowStyle * deConstObject = const_cast< IfcWindowStyle * > (this);
    return deConstObject->getSizeable();
}

void IfcWindowStyle::setSizeable(Step::Boolean value) {
    m_sizeable = value;
}

void IfcWindowStyle::unsetSizeable() {
    m_sizeable = Step::getUnset(getSizeable());
}

bool IfcWindowStyle::testSizeable() const {
    return !Step::isUnset(getSizeable());
}

bool IfcWindowStyle::init() {
    bool status = IfcTypeProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constructionType = IfcWindowStyleConstructionEnum_UNSET;
    }
    else {
        if (arg == ".ALUMINIUM.") {
            m_constructionType = IfcWindowStyleConstructionEnum_ALUMINIUM;
        }
        else if (arg == ".HIGH_GRADE_STEEL.") {
            m_constructionType = IfcWindowStyleConstructionEnum_HIGH_GRADE_STEEL;
        }
        else if (arg == ".STEEL.") {
            m_constructionType = IfcWindowStyleConstructionEnum_STEEL;
        }
        else if (arg == ".WOOD.") {
            m_constructionType = IfcWindowStyleConstructionEnum_WOOD;
        }
        else if (arg == ".ALUMINIUM_WOOD.") {
            m_constructionType = IfcWindowStyleConstructionEnum_ALUMINIUM_WOOD;
        }
        else if (arg == ".PLASTIC.") {
            m_constructionType = IfcWindowStyleConstructionEnum_PLASTIC;
        }
        else if (arg == ".OTHER_CONSTRUCTION.") {
            m_constructionType = IfcWindowStyleConstructionEnum_OTHER_CONSTRUCTION;
        }
        else if (arg == ".NOTDEFINED.") {
            m_constructionType = IfcWindowStyleConstructionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcWindowStyleOperationEnum_UNSET;
    }
    else {
        if (arg == ".SINGLE_PANEL.") {
            m_operationType = IfcWindowStyleOperationEnum_SINGLE_PANEL;
        }
        else if (arg == ".DOUBLE_PANEL_VERTICAL.") {
            m_operationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_VERTICAL;
        }
        else if (arg == ".DOUBLE_PANEL_HORIZONTAL.") {
            m_operationType = IfcWindowStyleOperationEnum_DOUBLE_PANEL_HORIZONTAL;
        }
        else if (arg == ".TRIPLE_PANEL_VERTICAL.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_VERTICAL;
        }
        else if (arg == ".TRIPLE_PANEL_BOTTOM.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_BOTTOM;
        }
        else if (arg == ".TRIPLE_PANEL_TOP.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_TOP;
        }
        else if (arg == ".TRIPLE_PANEL_LEFT.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_LEFT;
        }
        else if (arg == ".TRIPLE_PANEL_RIGHT.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_RIGHT;
        }
        else if (arg == ".TRIPLE_PANEL_HORIZONTAL.") {
            m_operationType = IfcWindowStyleOperationEnum_TRIPLE_PANEL_HORIZONTAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcWindowStyleOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcWindowStyleOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parameterTakesPrecedence = Step::getUnset(m_parameterTakesPrecedence);
    }
    else {
        m_parameterTakesPrecedence = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sizeable = Step::getUnset(m_sizeable);
    }
    else {
        m_sizeable = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcWindowStyle::copy(const IfcWindowStyle &obj, const CopyOp &copyop) {
    IfcTypeProduct::copy(obj, copyop);
    setConstructionType(obj.m_constructionType);
    setOperationType(obj.m_operationType);
    setParameterTakesPrecedence(obj.m_parameterTakesPrecedence);
    setSizeable(obj.m_sizeable);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWindowStyle::s_type("IfcWindowStyle");
