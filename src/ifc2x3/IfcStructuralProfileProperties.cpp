/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcStructuralProfileProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeneralProfileProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcStructuralProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralProfileProperties(this);
}

const std::string &IfcStructuralProfileProperties::type() {
    return IfcStructuralProfileProperties::s_type.getName();
}

Step::ClassType IfcStructuralProfileProperties::getClassType() {
    return IfcStructuralProfileProperties::s_type;
}

Step::ClassType IfcStructuralProfileProperties::getType() const {
    return IfcStructuralProfileProperties::s_type;
}

bool IfcStructuralProfileProperties::isOfType(Step::ClassType t) {
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

void IfcStructuralProfileProperties::setTorsionalConstantX(IfcMomentOfInertiaMeasure value) {
    m_torsionalConstantX = value;
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaYZ() {
    if (Step::BaseObject::inited()) {
        return m_momentOfInertiaYZ;
    }
    else {
        return Step::getUnset(m_momentOfInertiaYZ);
    }
}

void IfcStructuralProfileProperties::setMomentOfInertiaYZ(IfcMomentOfInertiaMeasure value) {
    m_momentOfInertiaYZ = value;
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaY() {
    if (Step::BaseObject::inited()) {
        return m_momentOfInertiaY;
    }
    else {
        return Step::getUnset(m_momentOfInertiaY);
    }
}

void IfcStructuralProfileProperties::setMomentOfInertiaY(IfcMomentOfInertiaMeasure value) {
    m_momentOfInertiaY = value;
}

IfcMomentOfInertiaMeasure IfcStructuralProfileProperties::getMomentOfInertiaZ() {
    if (Step::BaseObject::inited()) {
        return m_momentOfInertiaZ;
    }
    else {
        return Step::getUnset(m_momentOfInertiaZ);
    }
}

void IfcStructuralProfileProperties::setMomentOfInertiaZ(IfcMomentOfInertiaMeasure value) {
    m_momentOfInertiaZ = value;
}

IfcWarpingConstantMeasure IfcStructuralProfileProperties::getWarpingConstant() {
    if (Step::BaseObject::inited()) {
        return m_warpingConstant;
    }
    else {
        return Step::getUnset(m_warpingConstant);
    }
}

void IfcStructuralProfileProperties::setWarpingConstant(IfcWarpingConstantMeasure value) {
    m_warpingConstant = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreZ() {
    if (Step::BaseObject::inited()) {
        return m_shearCentreZ;
    }
    else {
        return Step::getUnset(m_shearCentreZ);
    }
}

void IfcStructuralProfileProperties::setShearCentreZ(IfcLengthMeasure value) {
    m_shearCentreZ = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getShearCentreY() {
    if (Step::BaseObject::inited()) {
        return m_shearCentreY;
    }
    else {
        return Step::getUnset(m_shearCentreY);
    }
}

void IfcStructuralProfileProperties::setShearCentreY(IfcLengthMeasure value) {
    m_shearCentreY = value;
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaZ() {
    if (Step::BaseObject::inited()) {
        return m_shearDeformationAreaZ;
    }
    else {
        return Step::getUnset(m_shearDeformationAreaZ);
    }
}

void IfcStructuralProfileProperties::setShearDeformationAreaZ(IfcAreaMeasure value) {
    m_shearDeformationAreaZ = value;
}

IfcAreaMeasure IfcStructuralProfileProperties::getShearDeformationAreaY() {
    if (Step::BaseObject::inited()) {
        return m_shearDeformationAreaY;
    }
    else {
        return Step::getUnset(m_shearDeformationAreaY);
    }
}

void IfcStructuralProfileProperties::setShearDeformationAreaY(IfcAreaMeasure value) {
    m_shearDeformationAreaY = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusY() {
    if (Step::BaseObject::inited()) {
        return m_maximumSectionModulusY;
    }
    else {
        return Step::getUnset(m_maximumSectionModulusY);
    }
}

void IfcStructuralProfileProperties::setMaximumSectionModulusY(IfcSectionModulusMeasure value) {
    m_maximumSectionModulusY = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusY() {
    if (Step::BaseObject::inited()) {
        return m_minimumSectionModulusY;
    }
    else {
        return Step::getUnset(m_minimumSectionModulusY);
    }
}

void IfcStructuralProfileProperties::setMinimumSectionModulusY(IfcSectionModulusMeasure value) {
    m_minimumSectionModulusY = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMaximumSectionModulusZ() {
    if (Step::BaseObject::inited()) {
        return m_maximumSectionModulusZ;
    }
    else {
        return Step::getUnset(m_maximumSectionModulusZ);
    }
}

void IfcStructuralProfileProperties::setMaximumSectionModulusZ(IfcSectionModulusMeasure value) {
    m_maximumSectionModulusZ = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getMinimumSectionModulusZ() {
    if (Step::BaseObject::inited()) {
        return m_minimumSectionModulusZ;
    }
    else {
        return Step::getUnset(m_minimumSectionModulusZ);
    }
}

void IfcStructuralProfileProperties::setMinimumSectionModulusZ(IfcSectionModulusMeasure value) {
    m_minimumSectionModulusZ = value;
}

IfcSectionModulusMeasure IfcStructuralProfileProperties::getTorsionalSectionModulus() {
    if (Step::BaseObject::inited()) {
        return m_torsionalSectionModulus;
    }
    else {
        return Step::getUnset(m_torsionalSectionModulus);
    }
}

void IfcStructuralProfileProperties::setTorsionalSectionModulus(IfcSectionModulusMeasure value) {
    m_torsionalSectionModulus = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInX() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInX;
    }
    else {
        return Step::getUnset(m_centreOfGravityInX);
    }
}

void IfcStructuralProfileProperties::setCentreOfGravityInX(IfcLengthMeasure value) {
    m_centreOfGravityInX = value;
}

IfcLengthMeasure IfcStructuralProfileProperties::getCentreOfGravityInY() {
    if (Step::BaseObject::inited()) {
        return m_centreOfGravityInY;
    }
    else {
        return Step::getUnset(m_centreOfGravityInY);
    }
}

void IfcStructuralProfileProperties::setCentreOfGravityInY(IfcLengthMeasure value) {
    m_centreOfGravityInY = value;
}

void IfcStructuralProfileProperties::release() {
    IfcGeneralProfileProperties::release();
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

IFC2X3_DLL_DEF Step::ClassType IfcStructuralProfileProperties::s_type("IfcStructuralProfileProperties");
