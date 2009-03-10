/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcOpticalMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMaterialProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcOpticalMaterialProperties::IfcOpticalMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_visibleTransmittance = Step::getUnset(m_visibleTransmittance);
    m_solarTransmittance = Step::getUnset(m_solarTransmittance);
    m_thermalIrTransmittance = Step::getUnset(m_thermalIrTransmittance);
    m_thermalIrEmissivityBack = Step::getUnset(m_thermalIrEmissivityBack);
    m_thermalIrEmissivityFront = Step::getUnset(m_thermalIrEmissivityFront);
    m_visibleReflectanceBack = Step::getUnset(m_visibleReflectanceBack);
    m_visibleReflectanceFront = Step::getUnset(m_visibleReflectanceFront);
    m_solarReflectanceFront = Step::getUnset(m_solarReflectanceFront);
    m_solarReflectanceBack = Step::getUnset(m_solarReflectanceBack);
}

IfcOpticalMaterialProperties::~IfcOpticalMaterialProperties() {
}

bool IfcOpticalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOpticalMaterialProperties(this);
}

const std::string &IfcOpticalMaterialProperties::type() const {
    return IfcOpticalMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcOpticalMaterialProperties::getClassType() {
    return IfcOpticalMaterialProperties::s_type;
}

const Step::ClassType &IfcOpticalMaterialProperties::getType() const {
    return IfcOpticalMaterialProperties::s_type;
}

bool IfcOpticalMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcOpticalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance() {
    if (Step::BaseObject::inited()) {
        return m_visibleTransmittance;
    }
    else {
        return Step::getUnset(m_visibleTransmittance);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getVisibleTransmittance();
}

void IfcOpticalMaterialProperties::setVisibleTransmittance(IfcPositiveRatioMeasure value) {
    m_visibleTransmittance = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance() {
    if (Step::BaseObject::inited()) {
        return m_solarTransmittance;
    }
    else {
        return Step::getUnset(m_solarTransmittance);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getSolarTransmittance();
}

void IfcOpticalMaterialProperties::setSolarTransmittance(IfcPositiveRatioMeasure value) {
    m_solarTransmittance = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance() {
    if (Step::BaseObject::inited()) {
        return m_thermalIrTransmittance;
    }
    else {
        return Step::getUnset(m_thermalIrTransmittance);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getThermalIrTransmittance();
}

void IfcOpticalMaterialProperties::setThermalIrTransmittance(IfcPositiveRatioMeasure value) {
    m_thermalIrTransmittance = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack() {
    if (Step::BaseObject::inited()) {
        return m_thermalIrEmissivityBack;
    }
    else {
        return Step::getUnset(m_thermalIrEmissivityBack);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getThermalIrEmissivityBack();
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityBack(IfcPositiveRatioMeasure value) {
    m_thermalIrEmissivityBack = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront() {
    if (Step::BaseObject::inited()) {
        return m_thermalIrEmissivityFront;
    }
    else {
        return Step::getUnset(m_thermalIrEmissivityFront);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getThermalIrEmissivityFront();
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityFront(IfcPositiveRatioMeasure value) {
    m_thermalIrEmissivityFront = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack() {
    if (Step::BaseObject::inited()) {
        return m_visibleReflectanceBack;
    }
    else {
        return Step::getUnset(m_visibleReflectanceBack);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getVisibleReflectanceBack();
}

void IfcOpticalMaterialProperties::setVisibleReflectanceBack(IfcPositiveRatioMeasure value) {
    m_visibleReflectanceBack = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront() {
    if (Step::BaseObject::inited()) {
        return m_visibleReflectanceFront;
    }
    else {
        return Step::getUnset(m_visibleReflectanceFront);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getVisibleReflectanceFront();
}

void IfcOpticalMaterialProperties::setVisibleReflectanceFront(IfcPositiveRatioMeasure value) {
    m_visibleReflectanceFront = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront() {
    if (Step::BaseObject::inited()) {
        return m_solarReflectanceFront;
    }
    else {
        return Step::getUnset(m_solarReflectanceFront);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getSolarReflectanceFront();
}

void IfcOpticalMaterialProperties::setSolarReflectanceFront(IfcPositiveRatioMeasure value) {
    m_solarReflectanceFront = value;
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack() {
    if (Step::BaseObject::inited()) {
        return m_solarReflectanceBack;
    }
    else {
        return Step::getUnset(m_solarReflectanceBack);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getSolarReflectanceBack();
}

void IfcOpticalMaterialProperties::setSolarReflectanceBack(IfcPositiveRatioMeasure value) {
    m_solarReflectanceBack = value;
}

bool IfcOpticalMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleTransmittance = Step::getUnset(m_visibleTransmittance);
    }
    else {
        m_visibleTransmittance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_solarTransmittance = Step::getUnset(m_solarTransmittance);
    }
    else {
        m_solarTransmittance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalIrTransmittance = Step::getUnset(m_thermalIrTransmittance);
    }
    else {
        m_thermalIrTransmittance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalIrEmissivityBack = Step::getUnset(m_thermalIrEmissivityBack);
    }
    else {
        m_thermalIrEmissivityBack = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalIrEmissivityFront = Step::getUnset(m_thermalIrEmissivityFront);
    }
    else {
        m_thermalIrEmissivityFront = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleReflectanceBack = Step::getUnset(m_visibleReflectanceBack);
    }
    else {
        m_visibleReflectanceBack = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleReflectanceFront = Step::getUnset(m_visibleReflectanceFront);
    }
    else {
        m_visibleReflectanceFront = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_solarReflectanceFront = Step::getUnset(m_solarReflectanceFront);
    }
    else {
        m_solarReflectanceFront = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_solarReflectanceBack = Step::getUnset(m_solarReflectanceBack);
    }
    else {
        m_solarReflectanceBack = Step::spfToReal(arg);
    }
    return true;
}

void IfcOpticalMaterialProperties::copy(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setVisibleTransmittance(obj.m_visibleTransmittance);
    setSolarTransmittance(obj.m_solarTransmittance);
    setThermalIrTransmittance(obj.m_thermalIrTransmittance);
    setThermalIrEmissivityBack(obj.m_thermalIrEmissivityBack);
    setThermalIrEmissivityFront(obj.m_thermalIrEmissivityFront);
    setVisibleReflectanceBack(obj.m_visibleReflectanceBack);
    setVisibleReflectanceFront(obj.m_visibleReflectanceFront);
    setSolarReflectanceFront(obj.m_solarReflectanceFront);
    setSolarReflectanceBack(obj.m_solarReflectanceBack);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpticalMaterialProperties::s_type("IfcOpticalMaterialProperties");
