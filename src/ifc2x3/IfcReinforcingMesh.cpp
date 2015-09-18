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



#include <ifc2x3/IfcReinforcingMesh.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcReinforcingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcReinforcingMesh::IfcReinforcingMesh(Step::Id id, Step::SPFData *args) : IfcReinforcingElement(id, args) {
    m_meshLength = Step::getUnset(m_meshLength);
    m_meshWidth = Step::getUnset(m_meshWidth);
    m_longitudinalBarNominalDiameter = Step::getUnset(m_longitudinalBarNominalDiameter);
    m_transverseBarNominalDiameter = Step::getUnset(m_transverseBarNominalDiameter);
    m_longitudinalBarCrossSectionArea = Step::getUnset(m_longitudinalBarCrossSectionArea);
    m_transverseBarCrossSectionArea = Step::getUnset(m_transverseBarCrossSectionArea);
    m_longitudinalBarSpacing = Step::getUnset(m_longitudinalBarSpacing);
    m_transverseBarSpacing = Step::getUnset(m_transverseBarSpacing);
}

IfcReinforcingMesh::~IfcReinforcingMesh() {
}

bool IfcReinforcingMesh::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReinforcingMesh(this);
}

const std::string &IfcReinforcingMesh::type() const {
    return IfcReinforcingMesh::s_type.getName();
}

const Step::ClassType &IfcReinforcingMesh::getClassType() {
    return IfcReinforcingMesh::s_type;
}

const Step::ClassType &IfcReinforcingMesh::getType() const {
    return IfcReinforcingMesh::s_type;
}

bool IfcReinforcingMesh::isOfType(const Step::ClassType &t) const {
    return IfcReinforcingMesh::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshLength() {
    if (Step::BaseObject::inited()) {
        return m_meshLength;
    }
    else {
        return Step::getUnset(m_meshLength);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshLength() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getMeshLength();
}

void IfcReinforcingMesh::setMeshLength(IfcPositiveLengthMeasure value) {
    m_meshLength = value;
}

void IfcReinforcingMesh::unsetMeshLength() {
    m_meshLength = Step::getUnset(getMeshLength());
}

bool IfcReinforcingMesh::testMeshLength() const {
    return !Step::isUnset(getMeshLength());
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshWidth() {
    if (Step::BaseObject::inited()) {
        return m_meshWidth;
    }
    else {
        return Step::getUnset(m_meshWidth);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingMesh::getMeshWidth() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getMeshWidth();
}

void IfcReinforcingMesh::setMeshWidth(IfcPositiveLengthMeasure value) {
    m_meshWidth = value;
}

void IfcReinforcingMesh::unsetMeshWidth() {
    m_meshWidth = Step::getUnset(getMeshWidth());
}

bool IfcReinforcingMesh::testMeshWidth() const {
    return !Step::isUnset(getMeshWidth());
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_longitudinalBarNominalDiameter;
    }
    else {
        return Step::getUnset(m_longitudinalBarNominalDiameter);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarNominalDiameter() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getLongitudinalBarNominalDiameter();
}

void IfcReinforcingMesh::setLongitudinalBarNominalDiameter(IfcPositiveLengthMeasure value) {
    m_longitudinalBarNominalDiameter = value;
}

void IfcReinforcingMesh::unsetLongitudinalBarNominalDiameter() {
    m_longitudinalBarNominalDiameter = Step::getUnset(getLongitudinalBarNominalDiameter());
}

bool IfcReinforcingMesh::testLongitudinalBarNominalDiameter() const {
    return !Step::isUnset(getLongitudinalBarNominalDiameter());
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_transverseBarNominalDiameter;
    }
    else {
        return Step::getUnset(m_transverseBarNominalDiameter);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarNominalDiameter() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getTransverseBarNominalDiameter();
}

void IfcReinforcingMesh::setTransverseBarNominalDiameter(IfcPositiveLengthMeasure value) {
    m_transverseBarNominalDiameter = value;
}

void IfcReinforcingMesh::unsetTransverseBarNominalDiameter() {
    m_transverseBarNominalDiameter = Step::getUnset(getTransverseBarNominalDiameter());
}

bool IfcReinforcingMesh::testTransverseBarNominalDiameter() const {
    return !Step::isUnset(getTransverseBarNominalDiameter());
}

IfcAreaMeasure IfcReinforcingMesh::getLongitudinalBarCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_longitudinalBarCrossSectionArea;
    }
    else {
        return Step::getUnset(m_longitudinalBarCrossSectionArea);
    }
}

const IfcAreaMeasure IfcReinforcingMesh::getLongitudinalBarCrossSectionArea() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getLongitudinalBarCrossSectionArea();
}

void IfcReinforcingMesh::setLongitudinalBarCrossSectionArea(IfcAreaMeasure value) {
    m_longitudinalBarCrossSectionArea = value;
}

void IfcReinforcingMesh::unsetLongitudinalBarCrossSectionArea() {
    m_longitudinalBarCrossSectionArea = Step::getUnset(getLongitudinalBarCrossSectionArea());
}

bool IfcReinforcingMesh::testLongitudinalBarCrossSectionArea() const {
    return !Step::isUnset(getLongitudinalBarCrossSectionArea());
}

IfcAreaMeasure IfcReinforcingMesh::getTransverseBarCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_transverseBarCrossSectionArea;
    }
    else {
        return Step::getUnset(m_transverseBarCrossSectionArea);
    }
}

const IfcAreaMeasure IfcReinforcingMesh::getTransverseBarCrossSectionArea() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getTransverseBarCrossSectionArea();
}

void IfcReinforcingMesh::setTransverseBarCrossSectionArea(IfcAreaMeasure value) {
    m_transverseBarCrossSectionArea = value;
}

void IfcReinforcingMesh::unsetTransverseBarCrossSectionArea() {
    m_transverseBarCrossSectionArea = Step::getUnset(getTransverseBarCrossSectionArea());
}

bool IfcReinforcingMesh::testTransverseBarCrossSectionArea() const {
    return !Step::isUnset(getTransverseBarCrossSectionArea());
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarSpacing() {
    if (Step::BaseObject::inited()) {
        return m_longitudinalBarSpacing;
    }
    else {
        return Step::getUnset(m_longitudinalBarSpacing);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingMesh::getLongitudinalBarSpacing() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getLongitudinalBarSpacing();
}

void IfcReinforcingMesh::setLongitudinalBarSpacing(IfcPositiveLengthMeasure value) {
    m_longitudinalBarSpacing = value;
}

void IfcReinforcingMesh::unsetLongitudinalBarSpacing() {
    m_longitudinalBarSpacing = Step::getUnset(getLongitudinalBarSpacing());
}

bool IfcReinforcingMesh::testLongitudinalBarSpacing() const {
    return !Step::isUnset(getLongitudinalBarSpacing());
}

IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarSpacing() {
    if (Step::BaseObject::inited()) {
        return m_transverseBarSpacing;
    }
    else {
        return Step::getUnset(m_transverseBarSpacing);
    }
}

const IfcPositiveLengthMeasure IfcReinforcingMesh::getTransverseBarSpacing() const {
    IfcReinforcingMesh * deConstObject = const_cast< IfcReinforcingMesh * > (this);
    return deConstObject->getTransverseBarSpacing();
}

void IfcReinforcingMesh::setTransverseBarSpacing(IfcPositiveLengthMeasure value) {
    m_transverseBarSpacing = value;
}

void IfcReinforcingMesh::unsetTransverseBarSpacing() {
    m_transverseBarSpacing = Step::getUnset(getTransverseBarSpacing());
}

bool IfcReinforcingMesh::testTransverseBarSpacing() const {
    return !Step::isUnset(getTransverseBarSpacing());
}

bool IfcReinforcingMesh::init() {
    bool status = IfcReinforcingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_meshLength = Step::getUnset(m_meshLength);
    }
    else {
        m_meshLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_meshWidth = Step::getUnset(m_meshWidth);
    }
    else {
        m_meshWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longitudinalBarNominalDiameter = Step::getUnset(m_longitudinalBarNominalDiameter);
    }
    else {
        m_longitudinalBarNominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transverseBarNominalDiameter = Step::getUnset(m_transverseBarNominalDiameter);
    }
    else {
        m_transverseBarNominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longitudinalBarCrossSectionArea = Step::getUnset(m_longitudinalBarCrossSectionArea);
    }
    else {
        m_longitudinalBarCrossSectionArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transverseBarCrossSectionArea = Step::getUnset(m_transverseBarCrossSectionArea);
    }
    else {
        m_transverseBarCrossSectionArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longitudinalBarSpacing = Step::getUnset(m_longitudinalBarSpacing);
    }
    else {
        m_longitudinalBarSpacing = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transverseBarSpacing = Step::getUnset(m_transverseBarSpacing);
    }
    else {
        m_transverseBarSpacing = Step::spfToReal(arg);
    }
    return true;
}

void IfcReinforcingMesh::copy(const IfcReinforcingMesh &obj, const CopyOp &copyop) {
    IfcReinforcingElement::copy(obj, copyop);
    setMeshLength(obj.m_meshLength);
    setMeshWidth(obj.m_meshWidth);
    setLongitudinalBarNominalDiameter(obj.m_longitudinalBarNominalDiameter);
    setTransverseBarNominalDiameter(obj.m_transverseBarNominalDiameter);
    setLongitudinalBarCrossSectionArea(obj.m_longitudinalBarCrossSectionArea);
    setTransverseBarCrossSectionArea(obj.m_transverseBarCrossSectionArea);
    setLongitudinalBarSpacing(obj.m_longitudinalBarSpacing);
    setTransverseBarSpacing(obj.m_transverseBarSpacing);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcReinforcingMesh::s_type("IfcReinforcingMesh");
