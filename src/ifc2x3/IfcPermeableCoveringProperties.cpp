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



#include <ifc2x3/IfcPermeableCoveringProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPermeableCoveringProperties::IfcPermeableCoveringProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_operationType = IfcPermeableCoveringOperationEnum_UNSET;
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    m_frameDepth = Step::getUnset(m_frameDepth);
    m_frameThickness = Step::getUnset(m_frameThickness);
    m_shapeAspectStyle = NULL;
}

IfcPermeableCoveringProperties::~IfcPermeableCoveringProperties() {
}

bool IfcPermeableCoveringProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPermeableCoveringProperties(this);
}

const std::string &IfcPermeableCoveringProperties::type() const {
    return IfcPermeableCoveringProperties::s_type.getName();
}

const Step::ClassType &IfcPermeableCoveringProperties::getClassType() {
    return IfcPermeableCoveringProperties::s_type;
}

const Step::ClassType &IfcPermeableCoveringProperties::getType() const {
    return IfcPermeableCoveringProperties::s_type;
}

bool IfcPermeableCoveringProperties::isOfType(const Step::ClassType &t) const {
    return IfcPermeableCoveringProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPermeableCoveringOperationEnum IfcPermeableCoveringProperties::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcPermeableCoveringOperationEnum_UNSET;
    }
}

const IfcPermeableCoveringOperationEnum IfcPermeableCoveringProperties::getOperationType() const {
    IfcPermeableCoveringProperties * deConstObject = const_cast< IfcPermeableCoveringProperties * > (this);
    return deConstObject->getOperationType();
}

void IfcPermeableCoveringProperties::setOperationType(IfcPermeableCoveringOperationEnum value) {
    m_operationType = value;
}

void IfcPermeableCoveringProperties::unsetOperationType() {
    m_operationType = IfcPermeableCoveringOperationEnum_UNSET;
}

bool IfcPermeableCoveringProperties::testOperationType() const {
    return getOperationType() != IfcPermeableCoveringOperationEnum_UNSET;
}

IfcWindowPanelPositionEnum IfcPermeableCoveringProperties::getPanelPosition() {
    if (Step::BaseObject::inited()) {
        return m_panelPosition;
    }
    else {
        return IfcWindowPanelPositionEnum_UNSET;
    }
}

const IfcWindowPanelPositionEnum IfcPermeableCoveringProperties::getPanelPosition() const {
    IfcPermeableCoveringProperties * deConstObject = const_cast< IfcPermeableCoveringProperties * > (this);
    return deConstObject->getPanelPosition();
}

void IfcPermeableCoveringProperties::setPanelPosition(IfcWindowPanelPositionEnum value) {
    m_panelPosition = value;
}

void IfcPermeableCoveringProperties::unsetPanelPosition() {
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
}

bool IfcPermeableCoveringProperties::testPanelPosition() const {
    return getPanelPosition() != IfcWindowPanelPositionEnum_UNSET;
}

IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameDepth() {
    if (Step::BaseObject::inited()) {
        return m_frameDepth;
    }
    else {
        return Step::getUnset(m_frameDepth);
    }
}

const IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameDepth() const {
    IfcPermeableCoveringProperties * deConstObject = const_cast< IfcPermeableCoveringProperties * > (this);
    return deConstObject->getFrameDepth();
}

void IfcPermeableCoveringProperties::setFrameDepth(IfcPositiveLengthMeasure value) {
    m_frameDepth = value;
}

void IfcPermeableCoveringProperties::unsetFrameDepth() {
    m_frameDepth = Step::getUnset(getFrameDepth());
}

bool IfcPermeableCoveringProperties::testFrameDepth() const {
    return !Step::isUnset(getFrameDepth());
}

IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameThickness() {
    if (Step::BaseObject::inited()) {
        return m_frameThickness;
    }
    else {
        return Step::getUnset(m_frameThickness);
    }
}

const IfcPositiveLengthMeasure IfcPermeableCoveringProperties::getFrameThickness() const {
    IfcPermeableCoveringProperties * deConstObject = const_cast< IfcPermeableCoveringProperties * > (this);
    return deConstObject->getFrameThickness();
}

void IfcPermeableCoveringProperties::setFrameThickness(IfcPositiveLengthMeasure value) {
    m_frameThickness = value;
}

void IfcPermeableCoveringProperties::unsetFrameThickness() {
    m_frameThickness = Step::getUnset(getFrameThickness());
}

bool IfcPermeableCoveringProperties::testFrameThickness() const {
    return !Step::isUnset(getFrameThickness());
}

IfcShapeAspect *IfcPermeableCoveringProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcPermeableCoveringProperties::getShapeAspectStyle() const {
    IfcPermeableCoveringProperties * deConstObject = const_cast< IfcPermeableCoveringProperties * > (this);
    return deConstObject->getShapeAspectStyle();
}

void IfcPermeableCoveringProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcPermeableCoveringProperties::unsetShapeAspectStyle() {
    m_shapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcPermeableCoveringProperties::testShapeAspectStyle() const {
    return !Step::isUnset(getShapeAspectStyle());
}

bool IfcPermeableCoveringProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcPermeableCoveringOperationEnum_UNSET;
    }
    else {
        if (arg == ".GRILL.") {
            m_operationType = IfcPermeableCoveringOperationEnum_GRILL;
        }
        else if (arg == ".LOUVER.") {
            m_operationType = IfcPermeableCoveringOperationEnum_LOUVER;
        }
        else if (arg == ".SCREEN.") {
            m_operationType = IfcPermeableCoveringOperationEnum_SCREEN;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcPermeableCoveringOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcPermeableCoveringOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_panelPosition = IfcWindowPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.") {
            m_panelPosition = IfcWindowPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.") {
            m_panelPosition = IfcWindowPanelPositionEnum_RIGHT;
        }
        else if (arg == ".BOTTOM.") {
            m_panelPosition = IfcWindowPanelPositionEnum_BOTTOM;
        }
        else if (arg == ".TOP.") {
            m_panelPosition = IfcWindowPanelPositionEnum_TOP;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelPosition = IfcWindowPanelPositionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frameDepth = Step::getUnset(m_frameDepth);
    }
    else {
        m_frameDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frameThickness = Step::getUnset(m_frameThickness);
    }
    else {
        m_frameThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeAspectStyle = NULL;
    }
    else {
        m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcPermeableCoveringProperties::copy(const IfcPermeableCoveringProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setPanelPosition(obj.m_panelPosition);
    setFrameDepth(obj.m_frameDepth);
    setFrameThickness(obj.m_frameThickness);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPermeableCoveringProperties::s_type("IfcPermeableCoveringProperties");
