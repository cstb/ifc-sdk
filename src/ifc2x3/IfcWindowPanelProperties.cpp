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



#include <ifc2x3/IfcWindowPanelProperties.h>

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

IfcWindowPanelProperties::IfcWindowPanelProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_operationType = IfcWindowPanelOperationEnum_UNSET;
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
    m_frameDepth = Step::getUnset(m_frameDepth);
    m_frameThickness = Step::getUnset(m_frameThickness);
    m_shapeAspectStyle = NULL;
}

IfcWindowPanelProperties::~IfcWindowPanelProperties() {
}

bool IfcWindowPanelProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWindowPanelProperties(this);
}

const std::string &IfcWindowPanelProperties::type() const {
    return IfcWindowPanelProperties::s_type.getName();
}

const Step::ClassType &IfcWindowPanelProperties::getClassType() {
    return IfcWindowPanelProperties::s_type;
}

const Step::ClassType &IfcWindowPanelProperties::getType() const {
    return IfcWindowPanelProperties::s_type;
}

bool IfcWindowPanelProperties::isOfType(const Step::ClassType &t) const {
    return IfcWindowPanelProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcWindowPanelOperationEnum IfcWindowPanelProperties::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcWindowPanelOperationEnum_UNSET;
    }
}

const IfcWindowPanelOperationEnum IfcWindowPanelProperties::getOperationType() const {
    IfcWindowPanelProperties * deConstObject = const_cast< IfcWindowPanelProperties * > (this);
    return deConstObject->getOperationType();
}

void IfcWindowPanelProperties::setOperationType(IfcWindowPanelOperationEnum value) {
    m_operationType = value;
}

void IfcWindowPanelProperties::unsetOperationType() {
    m_operationType = IfcWindowPanelOperationEnum_UNSET;
}

bool IfcWindowPanelProperties::testOperationType() const {
    return getOperationType() != IfcWindowPanelOperationEnum_UNSET;
}

IfcWindowPanelPositionEnum IfcWindowPanelProperties::getPanelPosition() {
    if (Step::BaseObject::inited()) {
        return m_panelPosition;
    }
    else {
        return IfcWindowPanelPositionEnum_UNSET;
    }
}

const IfcWindowPanelPositionEnum IfcWindowPanelProperties::getPanelPosition() const {
    IfcWindowPanelProperties * deConstObject = const_cast< IfcWindowPanelProperties * > (this);
    return deConstObject->getPanelPosition();
}

void IfcWindowPanelProperties::setPanelPosition(IfcWindowPanelPositionEnum value) {
    m_panelPosition = value;
}

void IfcWindowPanelProperties::unsetPanelPosition() {
    m_panelPosition = IfcWindowPanelPositionEnum_UNSET;
}

bool IfcWindowPanelProperties::testPanelPosition() const {
    return getPanelPosition() != IfcWindowPanelPositionEnum_UNSET;
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameDepth() {
    if (Step::BaseObject::inited()) {
        return m_frameDepth;
    }
    else {
        return Step::getUnset(m_frameDepth);
    }
}

const IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameDepth() const {
    IfcWindowPanelProperties * deConstObject = const_cast< IfcWindowPanelProperties * > (this);
    return deConstObject->getFrameDepth();
}

void IfcWindowPanelProperties::setFrameDepth(IfcPositiveLengthMeasure value) {
    m_frameDepth = value;
}

void IfcWindowPanelProperties::unsetFrameDepth() {
    m_frameDepth = Step::getUnset(getFrameDepth());
}

bool IfcWindowPanelProperties::testFrameDepth() const {
    return !Step::isUnset(getFrameDepth());
}

IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameThickness() {
    if (Step::BaseObject::inited()) {
        return m_frameThickness;
    }
    else {
        return Step::getUnset(m_frameThickness);
    }
}

const IfcPositiveLengthMeasure IfcWindowPanelProperties::getFrameThickness() const {
    IfcWindowPanelProperties * deConstObject = const_cast< IfcWindowPanelProperties * > (this);
    return deConstObject->getFrameThickness();
}

void IfcWindowPanelProperties::setFrameThickness(IfcPositiveLengthMeasure value) {
    m_frameThickness = value;
}

void IfcWindowPanelProperties::unsetFrameThickness() {
    m_frameThickness = Step::getUnset(getFrameThickness());
}

bool IfcWindowPanelProperties::testFrameThickness() const {
    return !Step::isUnset(getFrameThickness());
}

IfcShapeAspect *IfcWindowPanelProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcWindowPanelProperties::getShapeAspectStyle() const {
    IfcWindowPanelProperties * deConstObject = const_cast< IfcWindowPanelProperties * > (this);
    return deConstObject->getShapeAspectStyle();
}

void IfcWindowPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcWindowPanelProperties::unsetShapeAspectStyle() {
    m_shapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcWindowPanelProperties::testShapeAspectStyle() const {
    return !Step::isUnset(getShapeAspectStyle());
}

bool IfcWindowPanelProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcWindowPanelOperationEnum_UNSET;
    }
    else {
        if (arg == ".SIDEHUNGRIGHTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_SIDEHUNGRIGHTHAND;
        }
        else if (arg == ".SIDEHUNGLEFTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_SIDEHUNGLEFTHAND;
        }
        else if (arg == ".TILTANDTURNRIGHTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_TILTANDTURNRIGHTHAND;
        }
        else if (arg == ".TILTANDTURNLEFTHAND.") {
            m_operationType = IfcWindowPanelOperationEnum_TILTANDTURNLEFTHAND;
        }
        else if (arg == ".TOPHUNG.") {
            m_operationType = IfcWindowPanelOperationEnum_TOPHUNG;
        }
        else if (arg == ".BOTTOMHUNG.") {
            m_operationType = IfcWindowPanelOperationEnum_BOTTOMHUNG;
        }
        else if (arg == ".PIVOTHORIZONTAL.") {
            m_operationType = IfcWindowPanelOperationEnum_PIVOTHORIZONTAL;
        }
        else if (arg == ".PIVOTVERTICAL.") {
            m_operationType = IfcWindowPanelOperationEnum_PIVOTVERTICAL;
        }
        else if (arg == ".SLIDINGHORIZONTAL.") {
            m_operationType = IfcWindowPanelOperationEnum_SLIDINGHORIZONTAL;
        }
        else if (arg == ".SLIDINGVERTICAL.") {
            m_operationType = IfcWindowPanelOperationEnum_SLIDINGVERTICAL;
        }
        else if (arg == ".REMOVABLECASEMENT.") {
            m_operationType = IfcWindowPanelOperationEnum_REMOVABLECASEMENT;
        }
        else if (arg == ".FIXEDCASEMENT.") {
            m_operationType = IfcWindowPanelOperationEnum_FIXEDCASEMENT;
        }
        else if (arg == ".OTHEROPERATION.") {
            m_operationType = IfcWindowPanelOperationEnum_OTHEROPERATION;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcWindowPanelOperationEnum_NOTDEFINED;
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

void IfcWindowPanelProperties::copy(const IfcWindowPanelProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setPanelPosition(obj.m_panelPosition);
    setFrameDepth(obj.m_frameDepth);
    setFrameThickness(obj.m_frameThickness);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWindowPanelProperties::s_type("IfcWindowPanelProperties");
