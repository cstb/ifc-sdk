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

#include "ifc2x3/IfcTendon.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcReinforcingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTendon::IfcTendon(Step::Id id, Step::SPFData *args) : IfcReinforcingElement(id, args) {
    m_predefinedType = IfcTendonTypeEnum_UNSET;
    m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    m_tensionForce = Step::getUnset(m_tensionForce);
    m_preStress = Step::getUnset(m_preStress);
    m_frictionCoefficient = Step::getUnset(m_frictionCoefficient);
    m_anchorageSlip = Step::getUnset(m_anchorageSlip);
    m_minCurvatureRadius = Step::getUnset(m_minCurvatureRadius);
}

IfcTendon::~IfcTendon() {
}

bool IfcTendon::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTendon(this);
}

const std::string &IfcTendon::type() {
    return IfcTendon::s_type.getName();
}

Step::ClassType IfcTendon::getClassType() {
    return IfcTendon::s_type;
}

Step::ClassType IfcTendon::getType() const {
    return IfcTendon::s_type;
}

bool IfcTendon::isOfType(Step::ClassType t) {
    return IfcTendon::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcTendonTypeEnum IfcTendon::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTendonTypeEnum_UNSET;
    }
}

void IfcTendon::setPredefinedType(IfcTendonTypeEnum value) {
    m_predefinedType = value;
}

IfcPositiveLengthMeasure IfcTendon::getNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_nominalDiameter;
    }
    else {
        return Step::getUnset(m_nominalDiameter);
    }
}

void IfcTendon::setNominalDiameter(IfcPositiveLengthMeasure value) {
    m_nominalDiameter = value;
}

IfcAreaMeasure IfcTendon::getCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionArea;
    }
    else {
        return Step::getUnset(m_crossSectionArea);
    }
}

void IfcTendon::setCrossSectionArea(IfcAreaMeasure value) {
    m_crossSectionArea = value;
}

IfcForceMeasure IfcTendon::getTensionForce() {
    if (Step::BaseObject::inited()) {
        return m_tensionForce;
    }
    else {
        return Step::getUnset(m_tensionForce);
    }
}

void IfcTendon::setTensionForce(IfcForceMeasure value) {
    m_tensionForce = value;
}

IfcPressureMeasure IfcTendon::getPreStress() {
    if (Step::BaseObject::inited()) {
        return m_preStress;
    }
    else {
        return Step::getUnset(m_preStress);
    }
}

void IfcTendon::setPreStress(IfcPressureMeasure value) {
    m_preStress = value;
}

IfcNormalisedRatioMeasure IfcTendon::getFrictionCoefficient() {
    if (Step::BaseObject::inited()) {
        return m_frictionCoefficient;
    }
    else {
        return Step::getUnset(m_frictionCoefficient);
    }
}

void IfcTendon::setFrictionCoefficient(IfcNormalisedRatioMeasure value) {
    m_frictionCoefficient = value;
}

IfcPositiveLengthMeasure IfcTendon::getAnchorageSlip() {
    if (Step::BaseObject::inited()) {
        return m_anchorageSlip;
    }
    else {
        return Step::getUnset(m_anchorageSlip);
    }
}

void IfcTendon::setAnchorageSlip(IfcPositiveLengthMeasure value) {
    m_anchorageSlip = value;
}

IfcPositiveLengthMeasure IfcTendon::getMinCurvatureRadius() {
    if (Step::BaseObject::inited()) {
        return m_minCurvatureRadius;
    }
    else {
        return Step::getUnset(m_minCurvatureRadius);
    }
}

void IfcTendon::setMinCurvatureRadius(IfcPositiveLengthMeasure value) {
    m_minCurvatureRadius = value;
}

void IfcTendon::release() {
    IfcReinforcingElement::release();
}

bool IfcTendon::init() {
    bool status = IfcReinforcingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTendonTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAND.") {
            m_predefinedType = IfcTendonTypeEnum_STRAND;
        }
        else if (arg == ".WIRE.") {
            m_predefinedType = IfcTendonTypeEnum_WIRE;
        }
        else if (arg == ".BAR.") {
            m_predefinedType = IfcTendonTypeEnum_BAR;
        }
        else if (arg == ".COATED.") {
            m_predefinedType = IfcTendonTypeEnum_COATED;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTendonTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTendonTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    }
    else {
        m_nominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    }
    else {
        m_crossSectionArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionForce = Step::getUnset(m_tensionForce);
    }
    else {
        m_tensionForce = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_preStress = Step::getUnset(m_preStress);
    }
    else {
        m_preStress = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_frictionCoefficient = Step::getUnset(m_frictionCoefficient);
    }
    else {
        m_frictionCoefficient = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_anchorageSlip = Step::getUnset(m_anchorageSlip);
    }
    else {
        m_anchorageSlip = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minCurvatureRadius = Step::getUnset(m_minCurvatureRadius);
    }
    else {
        m_minCurvatureRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcTendon::copy(const IfcTendon &obj, const CopyOp &copyop) {
    IfcReinforcingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setNominalDiameter(obj.m_nominalDiameter);
    setCrossSectionArea(obj.m_crossSectionArea);
    setTensionForce(obj.m_tensionForce);
    setPreStress(obj.m_preStress);
    setFrictionCoefficient(obj.m_frictionCoefficient);
    setAnchorageSlip(obj.m_anchorageSlip);
    setMinCurvatureRadius(obj.m_minCurvatureRadius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTendon::s_type("IfcTendon");
