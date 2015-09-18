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



#include <ifc2x3/IfcDoorLiningProperties.h>

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

IfcDoorLiningProperties::IfcDoorLiningProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_liningDepth = Step::getUnset(m_liningDepth);
    m_liningThickness = Step::getUnset(m_liningThickness);
    m_thresholdDepth = Step::getUnset(m_thresholdDepth);
    m_thresholdThickness = Step::getUnset(m_thresholdThickness);
    m_transomThickness = Step::getUnset(m_transomThickness);
    m_transomOffset = Step::getUnset(m_transomOffset);
    m_liningOffset = Step::getUnset(m_liningOffset);
    m_thresholdOffset = Step::getUnset(m_thresholdOffset);
    m_casingThickness = Step::getUnset(m_casingThickness);
    m_casingDepth = Step::getUnset(m_casingDepth);
    m_shapeAspectStyle = NULL;
}

IfcDoorLiningProperties::~IfcDoorLiningProperties() {
}

bool IfcDoorLiningProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDoorLiningProperties(this);
}

const std::string &IfcDoorLiningProperties::type() const {
    return IfcDoorLiningProperties::s_type.getName();
}

const Step::ClassType &IfcDoorLiningProperties::getClassType() {
    return IfcDoorLiningProperties::s_type;
}

const Step::ClassType &IfcDoorLiningProperties::getType() const {
    return IfcDoorLiningProperties::s_type;
}

bool IfcDoorLiningProperties::isOfType(const Step::ClassType &t) const {
    return IfcDoorLiningProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningDepth() {
    if (Step::BaseObject::inited()) {
        return m_liningDepth;
    }
    else {
        return Step::getUnset(m_liningDepth);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningDepth() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getLiningDepth();
}

void IfcDoorLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value) {
    m_liningDepth = value;
}

void IfcDoorLiningProperties::unsetLiningDepth() {
    m_liningDepth = Step::getUnset(getLiningDepth());
}

bool IfcDoorLiningProperties::testLiningDepth() const {
    return !Step::isUnset(getLiningDepth());
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningThickness() {
    if (Step::BaseObject::inited()) {
        return m_liningThickness;
    }
    else {
        return Step::getUnset(m_liningThickness);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getLiningThickness() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getLiningThickness();
}

void IfcDoorLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value) {
    m_liningThickness = value;
}

void IfcDoorLiningProperties::unsetLiningThickness() {
    m_liningThickness = Step::getUnset(getLiningThickness());
}

bool IfcDoorLiningProperties::testLiningThickness() const {
    return !Step::isUnset(getLiningThickness());
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdDepth() {
    if (Step::BaseObject::inited()) {
        return m_thresholdDepth;
    }
    else {
        return Step::getUnset(m_thresholdDepth);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdDepth() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getThresholdDepth();
}

void IfcDoorLiningProperties::setThresholdDepth(IfcPositiveLengthMeasure value) {
    m_thresholdDepth = value;
}

void IfcDoorLiningProperties::unsetThresholdDepth() {
    m_thresholdDepth = Step::getUnset(getThresholdDepth());
}

bool IfcDoorLiningProperties::testThresholdDepth() const {
    return !Step::isUnset(getThresholdDepth());
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdThickness() {
    if (Step::BaseObject::inited()) {
        return m_thresholdThickness;
    }
    else {
        return Step::getUnset(m_thresholdThickness);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getThresholdThickness() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getThresholdThickness();
}

void IfcDoorLiningProperties::setThresholdThickness(IfcPositiveLengthMeasure value) {
    m_thresholdThickness = value;
}

void IfcDoorLiningProperties::unsetThresholdThickness() {
    m_thresholdThickness = Step::getUnset(getThresholdThickness());
}

bool IfcDoorLiningProperties::testThresholdThickness() const {
    return !Step::isUnset(getThresholdThickness());
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getTransomThickness() {
    if (Step::BaseObject::inited()) {
        return m_transomThickness;
    }
    else {
        return Step::getUnset(m_transomThickness);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getTransomThickness() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getTransomThickness();
}

void IfcDoorLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value) {
    m_transomThickness = value;
}

void IfcDoorLiningProperties::unsetTransomThickness() {
    m_transomThickness = Step::getUnset(getTransomThickness());
}

bool IfcDoorLiningProperties::testTransomThickness() const {
    return !Step::isUnset(getTransomThickness());
}

IfcLengthMeasure IfcDoorLiningProperties::getTransomOffset() {
    if (Step::BaseObject::inited()) {
        return m_transomOffset;
    }
    else {
        return Step::getUnset(m_transomOffset);
    }
}

const IfcLengthMeasure IfcDoorLiningProperties::getTransomOffset() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getTransomOffset();
}

void IfcDoorLiningProperties::setTransomOffset(IfcLengthMeasure value) {
    m_transomOffset = value;
}

void IfcDoorLiningProperties::unsetTransomOffset() {
    m_transomOffset = Step::getUnset(getTransomOffset());
}

bool IfcDoorLiningProperties::testTransomOffset() const {
    return !Step::isUnset(getTransomOffset());
}

IfcLengthMeasure IfcDoorLiningProperties::getLiningOffset() {
    if (Step::BaseObject::inited()) {
        return m_liningOffset;
    }
    else {
        return Step::getUnset(m_liningOffset);
    }
}

const IfcLengthMeasure IfcDoorLiningProperties::getLiningOffset() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getLiningOffset();
}

void IfcDoorLiningProperties::setLiningOffset(IfcLengthMeasure value) {
    m_liningOffset = value;
}

void IfcDoorLiningProperties::unsetLiningOffset() {
    m_liningOffset = Step::getUnset(getLiningOffset());
}

bool IfcDoorLiningProperties::testLiningOffset() const {
    return !Step::isUnset(getLiningOffset());
}

IfcLengthMeasure IfcDoorLiningProperties::getThresholdOffset() {
    if (Step::BaseObject::inited()) {
        return m_thresholdOffset;
    }
    else {
        return Step::getUnset(m_thresholdOffset);
    }
}

const IfcLengthMeasure IfcDoorLiningProperties::getThresholdOffset() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getThresholdOffset();
}

void IfcDoorLiningProperties::setThresholdOffset(IfcLengthMeasure value) {
    m_thresholdOffset = value;
}

void IfcDoorLiningProperties::unsetThresholdOffset() {
    m_thresholdOffset = Step::getUnset(getThresholdOffset());
}

bool IfcDoorLiningProperties::testThresholdOffset() const {
    return !Step::isUnset(getThresholdOffset());
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingThickness() {
    if (Step::BaseObject::inited()) {
        return m_casingThickness;
    }
    else {
        return Step::getUnset(m_casingThickness);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingThickness() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getCasingThickness();
}

void IfcDoorLiningProperties::setCasingThickness(IfcPositiveLengthMeasure value) {
    m_casingThickness = value;
}

void IfcDoorLiningProperties::unsetCasingThickness() {
    m_casingThickness = Step::getUnset(getCasingThickness());
}

bool IfcDoorLiningProperties::testCasingThickness() const {
    return !Step::isUnset(getCasingThickness());
}

IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingDepth() {
    if (Step::BaseObject::inited()) {
        return m_casingDepth;
    }
    else {
        return Step::getUnset(m_casingDepth);
    }
}

const IfcPositiveLengthMeasure IfcDoorLiningProperties::getCasingDepth() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getCasingDepth();
}

void IfcDoorLiningProperties::setCasingDepth(IfcPositiveLengthMeasure value) {
    m_casingDepth = value;
}

void IfcDoorLiningProperties::unsetCasingDepth() {
    m_casingDepth = Step::getUnset(getCasingDepth());
}

bool IfcDoorLiningProperties::testCasingDepth() const {
    return !Step::isUnset(getCasingDepth());
}

IfcShapeAspect *IfcDoorLiningProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcDoorLiningProperties::getShapeAspectStyle() const {
    IfcDoorLiningProperties * deConstObject = const_cast< IfcDoorLiningProperties * > (this);
    return deConstObject->getShapeAspectStyle();
}

void IfcDoorLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcDoorLiningProperties::unsetShapeAspectStyle() {
    m_shapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcDoorLiningProperties::testShapeAspectStyle() const {
    return !Step::isUnset(getShapeAspectStyle());
}

bool IfcDoorLiningProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_liningDepth = Step::getUnset(m_liningDepth);
    }
    else {
        m_liningDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_liningThickness = Step::getUnset(m_liningThickness);
    }
    else {
        m_liningThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thresholdDepth = Step::getUnset(m_thresholdDepth);
    }
    else {
        m_thresholdDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thresholdThickness = Step::getUnset(m_thresholdThickness);
    }
    else {
        m_thresholdThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transomThickness = Step::getUnset(m_transomThickness);
    }
    else {
        m_transomThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transomOffset = Step::getUnset(m_transomOffset);
    }
    else {
        m_transomOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_liningOffset = Step::getUnset(m_liningOffset);
    }
    else {
        m_liningOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thresholdOffset = Step::getUnset(m_thresholdOffset);
    }
    else {
        m_thresholdOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_casingThickness = Step::getUnset(m_casingThickness);
    }
    else {
        m_casingThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_casingDepth = Step::getUnset(m_casingDepth);
    }
    else {
        m_casingDepth = Step::spfToReal(arg);
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

void IfcDoorLiningProperties::copy(const IfcDoorLiningProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setLiningDepth(obj.m_liningDepth);
    setLiningThickness(obj.m_liningThickness);
    setThresholdDepth(obj.m_thresholdDepth);
    setThresholdThickness(obj.m_thresholdThickness);
    setTransomThickness(obj.m_transomThickness);
    setTransomOffset(obj.m_transomOffset);
    setLiningOffset(obj.m_liningOffset);
    setThresholdOffset(obj.m_thresholdOffset);
    setCasingThickness(obj.m_casingThickness);
    setCasingDepth(obj.m_casingDepth);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDoorLiningProperties::s_type("IfcDoorLiningProperties");
