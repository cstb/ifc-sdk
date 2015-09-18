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



#include <ifc2x3/IfcStructuralProfileProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeneralProfileProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralProfileProperties::IfcStructuralProfileProperties(Step::Id id, Step::SPFData *args) : IfcGeneralProfileProperties(id, args) {
    m_torsionalConstantX = Step::getUnset(m_torsionalConstantX);
    m_momentOfInertiaYZ = Step::getUnset(m_momentOfInertiaYZ);
    m_momentOfInertiaY = Step::getUnset(m_momentOfInertiaY);
    m_momentOfInertiaZ = Step::getUnset(m_momentOfInertiaZ);
    m_warpingConstant = Step::getUnset(m_warpingConstant);
    m_shearCentreZ = Step::getUnset(m_shearCentreZ);
    m_shearCentreY = Step::getUnset(m_shearCentreY);
    m_shearDeformationAreaZ = Step::getUnset(m_shearDeformationAreaZ);
    m_shearDeformationAreaY = Step::getUnset(m_shearDeformationAreaY);
    m_maximumSectionModulusY = Step::getUnset(m_maximumSectionModulusY);
    m_minimumSectionModulusY = Step::getUnset(m_minimumSectionModulusY);
    m_maximumSectionModulusZ = Step::getUnset(m_maximumSectionModulusZ);
    m_minimumSectionModulusZ = Step::getUnset(m_minimumSectionModulusZ);
    m_torsionalSectionModulus = Step::getUnset(m_torsionalSectionModulus);
    m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
    m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
}

IfcStructuralProfileProperties::~IfcStructuralProfileProperties() {
}

bool IfcStructuralProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralProfileProperties(this);
}

const std::string &IfcStructuralProfileProperties::type() const {
    return IfcStructuralProfileProperties::s_type.getName();
}

const Step::ClassType &IfcStructuralProfileProperties::getClassType() {
    return IfcStructuralProfileProperties::s_type;
}

const Step::ClassType &IfcStructuralProfileProperties::getType() const {
    return IfcStructuralProfileProperties::s_type;
}

bool IfcStructuralProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcStructuralProfileProperties::s_type == t ? true : IfcGeneralProfileProperties::isOfType(t);
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getTorsionalConstantX() {
    if (Step::BaseObject::inited()) {
        return m_torsionalConstantX;
    }
    else {
        return Step::getUnset(m_torsionalConstantX);
    }
}

const IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getTorsionalConstantX() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getTorsionalConstantX();
}

void IfcStructuralProfileProperties::setTorsionalConstantX(IfcMomentOfInertiaMeasure value) {
    m_torsionalConstantX = value;
}

void IfcStructuralProfileProperties::unsetTorsionalConstantX() {
    m_torsionalConstantX = Step::getUnset(getTorsionalConstantX());
}

bool IfcStructuralProfileProperties::testTorsionalConstantX() const {
    return !Step::isUnset(getTorsionalConstantX());
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaYZ() {
    if (Step::BaseObject::inited()) {
        return m_momentOfInertiaYZ;
    }
    else {
        return Step::getUnset(m_momentOfInertiaYZ);
    }
}

const IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaYZ() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMomentOfInertiaYZ();
}

void IfcStructuralProfileProperties::setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value) {
    m_momentOfInertiaYZ = value;
}

void IfcStructuralProfileProperties::unsetMomentOfInertiaYZ() {
    m_momentOfInertiaYZ = Step::getUnset(getMomentOfInertiaYZ());
}

bool IfcStructuralProfileProperties::testMomentOfInertiaYZ() const {
    return !Step::isUnset(getMomentOfInertiaYZ());
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaY() {
    if (Step::BaseObject::inited()) {
        return m_momentOfInertiaY;
    }
    else {
        return Step::getUnset(m_momentOfInertiaY);
    }
}

const IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaY() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMomentOfInertiaY();
}

void IfcStructuralProfileProperties::setMomentOfInertiaY(IfcMomentOfInertiaMeasure value) {
    m_momentOfInertiaY = value;
}

void IfcStructuralProfileProperties::unsetMomentOfInertiaY() {
    m_momentOfInertiaY = Step::getUnset(getMomentOfInertiaY());
}

bool IfcStructuralProfileProperties::testMomentOfInertiaY() const {
    return !Step::isUnset(getMomentOfInertiaY());
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaZ() {
    if (Step::BaseObject::inited()) {
        return m_momentOfInertiaZ;
    }
    else {
        return Step::getUnset(m_momentOfInertiaZ);
    }
}

const IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaZ() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMomentOfInertiaZ();
}

void IfcStructuralProfileProperties::setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value) {
    m_momentOfInertiaZ = value;
}

void IfcStructuralProfileProperties::unsetMomentOfInertiaZ() {
    m_momentOfInertiaZ = Step::getUnset(getMomentOfInertiaZ());
}

bool IfcStructuralProfileProperties::testMomentOfInertiaZ() const {
    return !Step::isUnset(getMomentOfInertiaZ());
}

IfcWarpingConstantMeasure IfcStructuralProfileProperties::getWarpingConstant() {
    if (Step::BaseObject::inited()) {
        return m_warpingConstant;
    }
    else {
        return Step::getUnset(m_warpingConstant);
    }
}

const IfcWarpingConstantMeasure IfcStructuralProfileProperties::getWarpingConstant() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getWarpingConstant();
}

void IfcStructuralProfileProperties::setWarpingConstant(IfcWarpingConstantMeasure value) {
    m_warpingConstant = value;
}

void IfcStructuralProfileProperties::unsetWarpingConstant() {
    m_warpingConstant = Step::getUnset(getWarpingConstant());
}

bool IfcStructuralProfileProperties::testWarpingConstant() const {
    return !Step::isUnset(getWarpingConstant());
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreZ() {
    if (Step::BaseObject::inited()) {
        return m_shearCentreZ;
    }
    else {
        return Step::getUnset(m_shearCentreZ);
    }
}

const IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreZ() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getShearCentreZ();
}

void IfcStructuralProfileProperties::setShearCentreZ(IfcLengthMeasure value) {
    m_shearCentreZ = value;
}

void IfcStructuralProfileProperties::unsetShearCentreZ() {
    m_shearCentreZ = Step::getUnset(getShearCentreZ());
}

bool IfcStructuralProfileProperties::testShearCentreZ() const {
    return !Step::isUnset(getShearCentreZ());
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreY() {
    if (Step::BaseObject::inited()) {
        return m_shearCentreY;
    }
    else {
        return Step::getUnset(m_shearCentreY);
    }
}

const IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreY() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getShearCentreY();
}

void IfcStructuralProfileProperties::setShearCentreY(IfcLengthMeasure value) {
    m_shearCentreY = value;
}

void IfcStructuralProfileProperties::unsetShearCentreY() {
    m_shearCentreY = Step::getUnset(getShearCentreY());
}

bool IfcStructuralProfileProperties::testShearCentreY() const {
    return !Step::isUnset(getShearCentreY());
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaZ() {
    if (Step::BaseObject::inited()) {
        return m_shearDeformationAreaZ;
    }
    else {
        return Step::getUnset(m_shearDeformationAreaZ);
    }
}

const IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaZ() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getShearDeformationAreaZ();
}

void IfcStructuralProfileProperties::setShearDeformationAreaZ(IfcAreaMeasure value) {
    m_shearDeformationAreaZ = value;
}

void IfcStructuralProfileProperties::unsetShearDeformationAreaZ() {
    m_shearDeformationAreaZ = Step::getUnset(getShearDeformationAreaZ());
}

bool IfcStructuralProfileProperties::testShearDeformationAreaZ() const {
    return !Step::isUnset(getShearDeformationAreaZ());
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaY() {
    if (Step::BaseObject::inited()) {
        return m_shearDeformationAreaY;
    }
    else {
        return Step::getUnset(m_shearDeformationAreaY);
    }
}

const IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaY() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getShearDeformationAreaY();
}

void IfcStructuralProfileProperties::setShearDeformationAreaY(IfcAreaMeasure value) {
    m_shearDeformationAreaY = value;
}

void IfcStructuralProfileProperties::unsetShearDeformationAreaY() {
    m_shearDeformationAreaY = Step::getUnset(getShearDeformationAreaY());
}

bool IfcStructuralProfileProperties::testShearDeformationAreaY() const {
    return !Step::isUnset(getShearDeformationAreaY());
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusY() {
    if (Step::BaseObject::inited()) {
        return m_maximumSectionModulusY;
    }
    else {
        return Step::getUnset(m_maximumSectionModulusY);
    }
}

const IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusY() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMaximumSectionModulusY();
}

void IfcStructuralProfileProperties::setMaximumSectionModulusY(IfcSectionModulusMeasure value) {
    m_maximumSectionModulusY = value;
}

void IfcStructuralProfileProperties::unsetMaximumSectionModulusY() {
    m_maximumSectionModulusY = Step::getUnset(getMaximumSectionModulusY());
}

bool IfcStructuralProfileProperties::testMaximumSectionModulusY() const {
    return !Step::isUnset(getMaximumSectionModulusY());
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusY() {
    if (Step::BaseObject::inited()) {
        return m_minimumSectionModulusY;
    }
    else {
        return Step::getUnset(m_minimumSectionModulusY);
    }
}

const IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusY() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMinimumSectionModulusY();
}

void IfcStructuralProfileProperties::setMinimumSectionModulusY(IfcSectionModulusMeasure value) {
    m_minimumSectionModulusY = value;
}

void IfcStructuralProfileProperties::unsetMinimumSectionModulusY() {
    m_minimumSectionModulusY = Step::getUnset(getMinimumSectionModulusY());
}

bool IfcStructuralProfileProperties::testMinimumSectionModulusY() const {
    return !Step::isUnset(getMinimumSectionModulusY());
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusZ() {
    if (Step::BaseObject::inited()) {
        return m_maximumSectionModulusZ;
    }
    else {
        return Step::getUnset(m_maximumSectionModulusZ);
    }
}

const IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusZ() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMaximumSectionModulusZ();
}

void IfcStructuralProfileProperties::setMaximumSectionModulusZ(IfcSectionModulusMeasure value) {
    m_maximumSectionModulusZ = value;
}

void IfcStructuralProfileProperties::unsetMaximumSectionModulusZ() {
    m_maximumSectionModulusZ = Step::getUnset(getMaximumSectionModulusZ());
}

bool IfcStructuralProfileProperties::testMaximumSectionModulusZ() const {
    return !Step::isUnset(getMaximumSectionModulusZ());
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusZ() {
    if (Step::BaseObject::inited()) {
        return m_minimumSectionModulusZ;
    }
    else {
        return Step::getUnset(m_minimumSectionModulusZ);
    }
}

const IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusZ() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getMinimumSectionModulusZ();
}

void IfcStructuralProfileProperties::setMinimumSectionModulusZ(IfcSectionModulusMeasure value) {
    m_minimumSectionModulusZ = value;
}

void IfcStructuralProfileProperties::unsetMinimumSectionModulusZ() {
    m_minimumSectionModulusZ = Step::getUnset(getMinimumSectionModulusZ());
}

bool IfcStructuralProfileProperties::testMinimumSectionModulusZ() const {
    return !Step::isUnset(getMinimumSectionModulusZ());
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getTorsionalSectionModulus() {
    if (Step::BaseObject::inited()) {
        return m_torsionalSectionModulus;
    }
    else {
        return Step::getUnset(m_torsionalSectionModulus);
    }
}

const IfcSectionModulusMeasure IfcStructuralProfileProperties::getTorsionalSectionModulus() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getTorsionalSectionModulus();
}

void IfcStructuralProfileProperties::setTorsionalSectionModulus(IfcSectionModulusMeasure value) {
    m_torsionalSectionModulus = value;
}

void IfcStructuralProfileProperties::unsetTorsionalSectionModulus() {
    m_torsionalSectionModulus = Step::getUnset(getTorsionalSectionModulus());
}

bool IfcStructuralProfileProperties::testTorsionalSectionModulus() const {
    return !Step::isUnset(getTorsionalSectionModulus());
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

const IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInX() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getCentreOfGravityInX();
}

void IfcStructuralProfileProperties::setCentreOfGravityInX(IfcLengthMeasure value) {
    m_centreOfGravityInX = value;
}

void IfcStructuralProfileProperties::unsetCentreOfGravityInX() {
    m_centreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcStructuralProfileProperties::testCentreOfGravityInX() const {
    return !Step::isUnset(getCentreOfGravityInX());
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

const IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInY() const {
    IfcStructuralProfileProperties * deConstObject = const_cast< IfcStructuralProfileProperties * > (this);
    return deConstObject->getCentreOfGravityInY();
}

void IfcStructuralProfileProperties::setCentreOfGravityInY(IfcLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcStructuralProfileProperties::unsetCentreOfGravityInY() {
    m_centreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcStructuralProfileProperties::testCentreOfGravityInY() const {
    return !Step::isUnset(getCentreOfGravityInY());
}

bool IfcStructuralProfileProperties::init() {
    bool status = IfcGeneralProfileProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_torsionalConstantX = Step::getUnset(m_torsionalConstantX);
    }
    else {
        m_torsionalConstantX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentOfInertiaYZ = Step::getUnset(m_momentOfInertiaYZ);
    }
    else {
        m_momentOfInertiaYZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentOfInertiaY = Step::getUnset(m_momentOfInertiaY);
    }
    else {
        m_momentOfInertiaY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentOfInertiaZ = Step::getUnset(m_momentOfInertiaZ);
    }
    else {
        m_momentOfInertiaZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_warpingConstant = Step::getUnset(m_warpingConstant);
    }
    else {
        m_warpingConstant = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearCentreZ = Step::getUnset(m_shearCentreZ);
    }
    else {
        m_shearCentreZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearCentreY = Step::getUnset(m_shearCentreY);
    }
    else {
        m_shearCentreY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearDeformationAreaZ = Step::getUnset(m_shearDeformationAreaZ);
    }
    else {
        m_shearDeformationAreaZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearDeformationAreaY = Step::getUnset(m_shearDeformationAreaY);
    }
    else {
        m_shearDeformationAreaY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maximumSectionModulusY = Step::getUnset(m_maximumSectionModulusY);
    }
    else {
        m_maximumSectionModulusY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minimumSectionModulusY = Step::getUnset(m_minimumSectionModulusY);
    }
    else {
        m_minimumSectionModulusY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maximumSectionModulusZ = Step::getUnset(m_maximumSectionModulusZ);
    }
    else {
        m_maximumSectionModulusZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minimumSectionModulusZ = Step::getUnset(m_minimumSectionModulusZ);
    }
    else {
        m_minimumSectionModulusZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_torsionalSectionModulus = Step::getUnset(m_torsionalSectionModulus);
    }
    else {
        m_torsionalSectionModulus = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_centreOfGravityInX = Step::getUnset(m_centreOfGravityInX);
    }
    else {
        m_centreOfGravityInX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_centreOfGravityInY = Step::getUnset(m_centreOfGravityInY);
    }
    else {
        m_centreOfGravityInY = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralProfileProperties::copy(const IfcStructuralProfileProperties &obj, const CopyOp &copyop) {
    IfcGeneralProfileProperties::copy(obj, copyop);
    setTorsionalConstantX(obj.m_torsionalConstantX);
    setMomentOfInertiaYZ(obj.m_momentOfInertiaYZ);
    setMomentOfInertiaY(obj.m_momentOfInertiaY);
    setMomentOfInertiaZ(obj.m_momentOfInertiaZ);
    setWarpingConstant(obj.m_warpingConstant);
    setShearCentreZ(obj.m_shearCentreZ);
    setShearCentreY(obj.m_shearCentreY);
    setShearDeformationAreaZ(obj.m_shearDeformationAreaZ);
    setShearDeformationAreaY(obj.m_shearDeformationAreaY);
    setMaximumSectionModulusY(obj.m_maximumSectionModulusY);
    setMinimumSectionModulusY(obj.m_minimumSectionModulusY);
    setMaximumSectionModulusZ(obj.m_maximumSectionModulusZ);
    setMinimumSectionModulusZ(obj.m_minimumSectionModulusZ);
    setTorsionalSectionModulus(obj.m_torsionalSectionModulus);
    setCentreOfGravityInX(obj.m_centreOfGravityInX);
    setCentreOfGravityInY(obj.m_centreOfGravityInY);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralProfileProperties::s_type("IfcStructuralProfileProperties");
