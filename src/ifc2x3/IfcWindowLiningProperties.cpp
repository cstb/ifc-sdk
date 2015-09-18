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



#include <ifc2x3/IfcWindowLiningProperties.h>

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

IfcWindowLiningProperties::IfcWindowLiningProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_liningDepth = Step::getUnset(m_liningDepth);
    m_liningThickness = Step::getUnset(m_liningThickness);
    m_transomThickness = Step::getUnset(m_transomThickness);
    m_mullionThickness = Step::getUnset(m_mullionThickness);
    m_firstTransomOffset = Step::getUnset(m_firstTransomOffset);
    m_secondTransomOffset = Step::getUnset(m_secondTransomOffset);
    m_firstMullionOffset = Step::getUnset(m_firstMullionOffset);
    m_secondMullionOffset = Step::getUnset(m_secondMullionOffset);
    m_shapeAspectStyle = NULL;
}

IfcWindowLiningProperties::~IfcWindowLiningProperties() {
}

bool IfcWindowLiningProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWindowLiningProperties(this);
}

const std::string &IfcWindowLiningProperties::type() const {
    return IfcWindowLiningProperties::s_type.getName();
}

const Step::ClassType &IfcWindowLiningProperties::getClassType() {
    return IfcWindowLiningProperties::s_type;
}

const Step::ClassType &IfcWindowLiningProperties::getType() const {
    return IfcWindowLiningProperties::s_type;
}

bool IfcWindowLiningProperties::isOfType(const Step::ClassType &t) const {
    return IfcWindowLiningProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningDepth() {
    if (Step::BaseObject::inited()) {
        return m_liningDepth;
    }
    else {
        return Step::getUnset(m_liningDepth);
    }
}

const IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningDepth() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getLiningDepth();
}

void IfcWindowLiningProperties::setLiningDepth(IfcPositiveLengthMeasure value) {
    m_liningDepth = value;
}

void IfcWindowLiningProperties::unsetLiningDepth() {
    m_liningDepth = Step::getUnset(getLiningDepth());
}

bool IfcWindowLiningProperties::testLiningDepth() const {
    return !Step::isUnset(getLiningDepth());
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningThickness() {
    if (Step::BaseObject::inited()) {
        return m_liningThickness;
    }
    else {
        return Step::getUnset(m_liningThickness);
    }
}

const IfcPositiveLengthMeasure IfcWindowLiningProperties::getLiningThickness() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getLiningThickness();
}

void IfcWindowLiningProperties::setLiningThickness(IfcPositiveLengthMeasure value) {
    m_liningThickness = value;
}

void IfcWindowLiningProperties::unsetLiningThickness() {
    m_liningThickness = Step::getUnset(getLiningThickness());
}

bool IfcWindowLiningProperties::testLiningThickness() const {
    return !Step::isUnset(getLiningThickness());
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getTransomThickness() {
    if (Step::BaseObject::inited()) {
        return m_transomThickness;
    }
    else {
        return Step::getUnset(m_transomThickness);
    }
}

const IfcPositiveLengthMeasure IfcWindowLiningProperties::getTransomThickness() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getTransomThickness();
}

void IfcWindowLiningProperties::setTransomThickness(IfcPositiveLengthMeasure value) {
    m_transomThickness = value;
}

void IfcWindowLiningProperties::unsetTransomThickness() {
    m_transomThickness = Step::getUnset(getTransomThickness());
}

bool IfcWindowLiningProperties::testTransomThickness() const {
    return !Step::isUnset(getTransomThickness());
}

IfcPositiveLengthMeasure IfcWindowLiningProperties::getMullionThickness() {
    if (Step::BaseObject::inited()) {
        return m_mullionThickness;
    }
    else {
        return Step::getUnset(m_mullionThickness);
    }
}

const IfcPositiveLengthMeasure IfcWindowLiningProperties::getMullionThickness() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getMullionThickness();
}

void IfcWindowLiningProperties::setMullionThickness(IfcPositiveLengthMeasure value) {
    m_mullionThickness = value;
}

void IfcWindowLiningProperties::unsetMullionThickness() {
    m_mullionThickness = Step::getUnset(getMullionThickness());
}

bool IfcWindowLiningProperties::testMullionThickness() const {
    return !Step::isUnset(getMullionThickness());
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstTransomOffset() {
    if (Step::BaseObject::inited()) {
        return m_firstTransomOffset;
    }
    else {
        return Step::getUnset(m_firstTransomOffset);
    }
}

const IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstTransomOffset() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getFirstTransomOffset();
}

void IfcWindowLiningProperties::setFirstTransomOffset(IfcNormalisedRatioMeasure value) {
    m_firstTransomOffset = value;
}

void IfcWindowLiningProperties::unsetFirstTransomOffset() {
    m_firstTransomOffset = Step::getUnset(getFirstTransomOffset());
}

bool IfcWindowLiningProperties::testFirstTransomOffset() const {
    return !Step::isUnset(getFirstTransomOffset());
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondTransomOffset() {
    if (Step::BaseObject::inited()) {
        return m_secondTransomOffset;
    }
    else {
        return Step::getUnset(m_secondTransomOffset);
    }
}

const IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondTransomOffset() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getSecondTransomOffset();
}

void IfcWindowLiningProperties::setSecondTransomOffset(IfcNormalisedRatioMeasure value) {
    m_secondTransomOffset = value;
}

void IfcWindowLiningProperties::unsetSecondTransomOffset() {
    m_secondTransomOffset = Step::getUnset(getSecondTransomOffset());
}

bool IfcWindowLiningProperties::testSecondTransomOffset() const {
    return !Step::isUnset(getSecondTransomOffset());
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstMullionOffset() {
    if (Step::BaseObject::inited()) {
        return m_firstMullionOffset;
    }
    else {
        return Step::getUnset(m_firstMullionOffset);
    }
}

const IfcNormalisedRatioMeasure IfcWindowLiningProperties::getFirstMullionOffset() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getFirstMullionOffset();
}

void IfcWindowLiningProperties::setFirstMullionOffset(IfcNormalisedRatioMeasure value) {
    m_firstMullionOffset = value;
}

void IfcWindowLiningProperties::unsetFirstMullionOffset() {
    m_firstMullionOffset = Step::getUnset(getFirstMullionOffset());
}

bool IfcWindowLiningProperties::testFirstMullionOffset() const {
    return !Step::isUnset(getFirstMullionOffset());
}

IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondMullionOffset() {
    if (Step::BaseObject::inited()) {
        return m_secondMullionOffset;
    }
    else {
        return Step::getUnset(m_secondMullionOffset);
    }
}

const IfcNormalisedRatioMeasure IfcWindowLiningProperties::getSecondMullionOffset() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getSecondMullionOffset();
}

void IfcWindowLiningProperties::setSecondMullionOffset(IfcNormalisedRatioMeasure value) {
    m_secondMullionOffset = value;
}

void IfcWindowLiningProperties::unsetSecondMullionOffset() {
    m_secondMullionOffset = Step::getUnset(getSecondMullionOffset());
}

bool IfcWindowLiningProperties::testSecondMullionOffset() const {
    return !Step::isUnset(getSecondMullionOffset());
}

IfcShapeAspect *IfcWindowLiningProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcWindowLiningProperties::getShapeAspectStyle() const {
    IfcWindowLiningProperties * deConstObject = const_cast< IfcWindowLiningProperties * > (this);
    return deConstObject->getShapeAspectStyle();
}

void IfcWindowLiningProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcWindowLiningProperties::unsetShapeAspectStyle() {
    m_shapeAspectStyle = Step::getUnset(getShapeAspectStyle());
}

bool IfcWindowLiningProperties::testShapeAspectStyle() const {
    return !Step::isUnset(getShapeAspectStyle());
}

bool IfcWindowLiningProperties::init() {
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
        m_transomThickness = Step::getUnset(m_transomThickness);
    }
    else {
        m_transomThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mullionThickness = Step::getUnset(m_mullionThickness);
    }
    else {
        m_mullionThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_firstTransomOffset = Step::getUnset(m_firstTransomOffset);
    }
    else {
        m_firstTransomOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondTransomOffset = Step::getUnset(m_secondTransomOffset);
    }
    else {
        m_secondTransomOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_firstMullionOffset = Step::getUnset(m_firstMullionOffset);
    }
    else {
        m_firstMullionOffset = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondMullionOffset = Step::getUnset(m_secondMullionOffset);
    }
    else {
        m_secondMullionOffset = Step::spfToReal(arg);
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

void IfcWindowLiningProperties::copy(const IfcWindowLiningProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setLiningDepth(obj.m_liningDepth);
    setLiningThickness(obj.m_liningThickness);
    setTransomThickness(obj.m_transomThickness);
    setMullionThickness(obj.m_mullionThickness);
    setFirstTransomOffset(obj.m_firstTransomOffset);
    setSecondTransomOffset(obj.m_secondTransomOffset);
    setFirstMullionOffset(obj.m_firstMullionOffset);
    setSecondMullionOffset(obj.m_secondMullionOffset);
    setShapeAspectStyle((IfcShapeAspect*)copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWindowLiningProperties::s_type("IfcWindowLiningProperties");
