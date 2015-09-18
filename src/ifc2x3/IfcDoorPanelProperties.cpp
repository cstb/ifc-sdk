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



#include <ifc2x3/IfcDoorPanelProperties.h>

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

IfcDoorPanelProperties::IfcDoorPanelProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_panelDepth = Step::getUnset(m_panelDepth);
    m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
    m_panelWidth = Step::getUnset(m_panelWidth);
    m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
    m_shapeAspectStyle = NULL;
}

IfcDoorPanelProperties::~IfcDoorPanelProperties() {
}

bool IfcDoorPanelProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDoorPanelProperties(this);
}

const std::string &IfcDoorPanelProperties::type() const {
    return IfcDoorPanelProperties::s_type.getName();
}

const Step::ClassType &IfcDoorPanelProperties::getClassType() {
    return IfcDoorPanelProperties::s_type;
}

const Step::ClassType &IfcDoorPanelProperties::getType() const {
    return IfcDoorPanelProperties::s_type;
}

bool IfcDoorPanelProperties::isOfType(const Step::ClassType &t) const {
    return IfcDoorPanelProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoorPanelProperties::getPanelDepth() {
    if (Step::BaseObject::inited()) {
        return m_panelDepth;
    }
    else {
        return Step::getUnset(m_panelDepth);
    }
}

const IfcPositiveLengthMeasure IfcDoorPanelProperties::getPanelDepth() const {
    IfcDoorPanelProperties * deConstObject = const_cast< IfcDoorPanelProperties * > (this);
    return deConstObject->getPanelDepth();
}

void IfcDoorPanelProperties::setPanelDepth(IfcPositiveLengthMeasure value) {
    m_panelDepth = value;
}

void IfcDoorPanelProperties::unsetPanelDepth() {
    m_panelDepth = Step::getUnset(getPanelDepth());
}

bool IfcDoorPanelProperties::testPanelDepth() const {
    return !Step::isUnset(getPanelDepth());
}

IfcDoorPanelOperationEnum IfcDoorPanelProperties::getPanelOperation() {
    if (Step::BaseObject::inited()) {
        return m_panelOperation;
    }
    else {
        return IfcDoorPanelOperationEnum_UNSET;
    }
}

const IfcDoorPanelOperationEnum IfcDoorPanelProperties::getPanelOperation() const {
    IfcDoorPanelProperties * deConstObject = const_cast< IfcDoorPanelProperties * > (this);
    return deConstObject->getPanelOperation();
}

void IfcDoorPanelProperties::setPanelOperation(IfcDoorPanelOperationEnum value) {
    m_panelOperation = value;
}

void IfcDoorPanelProperties::unsetPanelOperation() {
    m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
}

bool IfcDoorPanelProperties::testPanelOperation() const {
    return getPanelOperation() != IfcDoorPanelOperationEnum_UNSET;
}

IfcNormalisedRatioMeasure IfcDoorPanelProperties::getPanelWidth() {
    if (Step::BaseObject::inited()) {
        return m_panelWidth;
    }
    else {
        return Step::getUnset(m_panelWidth);
    }
}

const IfcNormalisedRatioMeasure IfcDoorPanelProperties::getPanelWidth() const {
    IfcDoorPanelProperties * deConstObject = const_cast< IfcDoorPanelProperties * > (this);
    return deConstObject->getPanelWidth();
}

void IfcDoorPanelProperties::setPanelWidth(IfcNormalisedRatioMeasure value) {
    m_panelWidth = value;
}

void IfcDoorPanelProperties::unsetPanelWidth() {
    m_panelWidth = Step::getUnset(getPanelWidth());
}

bool IfcDoorPanelProperties::testPanelWidth() const {
    return !Step::isUnset(getPanelWidth());
}

IfcDoorPanelPositionEnum IfcDoorPanelProperties::getPanelPosition() {
    if (Step::BaseObject::inited()) {
        return m_panelPosition;
    }
    else {
        return IfcDoorPanelPositionEnum_UNSET;
    }
}

const IfcDoorPanelPositionEnum IfcDoorPanelProperties::getPanelPosition() const {
    IfcDoorPanelProperties * deConstObject = const_cast< IfcDoorPanelProperties * > (this);
    return deConstObject->getPanelPosition();
}

void IfcDoorPanelProperties::setPanelPosition(IfcDoorPanelPositionEnum value) {
    m_panelPosition = value;
}

void IfcDoorPanelProperties::unsetPanelPosition() {
    m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
}

bool IfcDoorPanelProperties::testPanelPosition() const {
    return getPanelPosition() != IfcDoorPanelPositionEnum_UNSET;
}

IfcShapeAspect *IfcDoorPanelProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcDoorPanelProperties::getShapeAspectStyle() const {
    IfcDoorPanelProperties * deConstObject = const_cast< IfcDoorPanelProperties * > (this);
    return deConstObject->getShapeAspectStyle();
}

void IfcDoorPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcDoorPanelProperties::unsetShapeAspectStyle() {
    m_shapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcDoorPanelProperties::testShapeAspectStyle() const {
    return !Step::isUnset(getShapeAspectStyle());
}

bool IfcDoorPanelProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelDepth = Step::getUnset(m_panelDepth);
    }
    else {
        m_panelDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
    }
    else {
        if (arg == ".SWINGING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_SWINGING;
        }
        else if (arg == ".DOUBLE_ACTING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_DOUBLE_ACTING;
        }
        else if (arg == ".SLIDING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_SLIDING;
        }
        else if (arg == ".FOLDING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_FOLDING;
        }
        else if (arg == ".REVOLVING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_REVOLVING;
        }
        else if (arg == ".ROLLINGUP.") {
            m_panelOperation = IfcDoorPanelOperationEnum_ROLLINGUP;
        }
        else if (arg == ".USERDEFINED.") {
            m_panelOperation = IfcDoorPanelOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelOperation = IfcDoorPanelOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelWidth = Step::getUnset(m_panelWidth);
    }
    else {
        m_panelWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_panelPosition = IfcDoorPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.") {
            m_panelPosition = IfcDoorPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.") {
            m_panelPosition = IfcDoorPanelPositionEnum_RIGHT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelPosition = IfcDoorPanelPositionEnum_NOTDEFINED;
        }
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

void IfcDoorPanelProperties::copy(const IfcDoorPanelProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setPanelDepth(obj.m_panelDepth);
    setPanelOperation(obj.m_panelOperation);
    setPanelWidth(obj.m_panelWidth);
    setPanelPosition(obj.m_panelPosition);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDoorPanelProperties::s_type("IfcDoorPanelProperties");
