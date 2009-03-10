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

#include "ifc2x3/IfcWaterProperties.h"

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

IfcWaterProperties::IfcWaterProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_isPotable = Step::getUnset(m_isPotable);
    m_hardness = Step::getUnset(m_hardness);
    m_alkalinityConcentration = Step::getUnset(m_alkalinityConcentration);
    m_acidityConcentration = Step::getUnset(m_acidityConcentration);
    m_impuritiesContent = Step::getUnset(m_impuritiesContent);
    m_pHLevel = Step::getUnset(m_pHLevel);
    m_dissolvedSolidsContent = Step::getUnset(m_dissolvedSolidsContent);
}

IfcWaterProperties::~IfcWaterProperties() {
}

bool IfcWaterProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWaterProperties(this);
}

const std::string &IfcWaterProperties::type() const {
    return IfcWaterProperties::s_type.getName();
}

const Step::ClassType &IfcWaterProperties::getClassType() {
    return IfcWaterProperties::s_type;
}

const Step::ClassType &IfcWaterProperties::getType() const {
    return IfcWaterProperties::s_type;
}

bool IfcWaterProperties::isOfType(const Step::ClassType &t) const {
    return IfcWaterProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

Step::Boolean IfcWaterProperties::getIsPotable() {
    if (Step::BaseObject::inited()) {
        return m_isPotable;
    }
    else {
        return Step::getUnset(m_isPotable);
    }
}

const Step::Boolean IfcWaterProperties::getIsPotable() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getIsPotable();
}

void IfcWaterProperties::setIsPotable(Step::Boolean value) {
    m_isPotable = value;
}

IfcIonConcentrationMeasure IfcWaterProperties::getHardness() {
    if (Step::BaseObject::inited()) {
        return m_hardness;
    }
    else {
        return Step::getUnset(m_hardness);
    }
}

const IfcIonConcentrationMeasure IfcWaterProperties::getHardness() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getHardness();
}

void IfcWaterProperties::setHardness(IfcIonConcentrationMeasure value) {
    m_hardness = value;
}

IfcIonConcentrationMeasure IfcWaterProperties::getAlkalinityConcentration() {
    if (Step::BaseObject::inited()) {
        return m_alkalinityConcentration;
    }
    else {
        return Step::getUnset(m_alkalinityConcentration);
    }
}

const IfcIonConcentrationMeasure IfcWaterProperties::getAlkalinityConcentration() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getAlkalinityConcentration();
}

void IfcWaterProperties::setAlkalinityConcentration(IfcIonConcentrationMeasure value) {
    m_alkalinityConcentration = value;
}

IfcIonConcentrationMeasure IfcWaterProperties::getAcidityConcentration() {
    if (Step::BaseObject::inited()) {
        return m_acidityConcentration;
    }
    else {
        return Step::getUnset(m_acidityConcentration);
    }
}

const IfcIonConcentrationMeasure IfcWaterProperties::getAcidityConcentration() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getAcidityConcentration();
}

void IfcWaterProperties::setAcidityConcentration(IfcIonConcentrationMeasure value) {
    m_acidityConcentration = value;
}

IfcNormalisedRatioMeasure IfcWaterProperties::getImpuritiesContent() {
    if (Step::BaseObject::inited()) {
        return m_impuritiesContent;
    }
    else {
        return Step::getUnset(m_impuritiesContent);
    }
}

const IfcNormalisedRatioMeasure IfcWaterProperties::getImpuritiesContent() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getImpuritiesContent();
}

void IfcWaterProperties::setImpuritiesContent(IfcNormalisedRatioMeasure value) {
    m_impuritiesContent = value;
}

IfcPHMeasure IfcWaterProperties::getPHLevel() {
    if (Step::BaseObject::inited()) {
        return m_pHLevel;
    }
    else {
        return Step::getUnset(m_pHLevel);
    }
}

const IfcPHMeasure IfcWaterProperties::getPHLevel() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getPHLevel();
}

void IfcWaterProperties::setPHLevel(IfcPHMeasure value) {
    m_pHLevel = value;
}

IfcNormalisedRatioMeasure IfcWaterProperties::getDissolvedSolidsContent() {
    if (Step::BaseObject::inited()) {
        return m_dissolvedSolidsContent;
    }
    else {
        return Step::getUnset(m_dissolvedSolidsContent);
    }
}

const IfcNormalisedRatioMeasure IfcWaterProperties::getDissolvedSolidsContent() const {
    IfcWaterProperties * deConstObject = const_cast< IfcWaterProperties * > (this);
    return deConstObject->getDissolvedSolidsContent();
}

void IfcWaterProperties::setDissolvedSolidsContent(IfcNormalisedRatioMeasure value) {
    m_dissolvedSolidsContent = value;
}

bool IfcWaterProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isPotable = Step::getUnset(m_isPotable);
    }
    else {
        m_isPotable = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hardness = Step::getUnset(m_hardness);
    }
    else {
        m_hardness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_alkalinityConcentration = Step::getUnset(m_alkalinityConcentration);
    }
    else {
        m_alkalinityConcentration = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_acidityConcentration = Step::getUnset(m_acidityConcentration);
    }
    else {
        m_acidityConcentration = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_impuritiesContent = Step::getUnset(m_impuritiesContent);
    }
    else {
        m_impuritiesContent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pHLevel = Step::getUnset(m_pHLevel);
    }
    else {
        m_pHLevel = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dissolvedSolidsContent = Step::getUnset(m_dissolvedSolidsContent);
    }
    else {
        m_dissolvedSolidsContent = Step::spfToReal(arg);
    }
    return true;
}

void IfcWaterProperties::copy(const IfcWaterProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setIsPotable(obj.m_isPotable);
    setHardness(obj.m_hardness);
    setAlkalinityConcentration(obj.m_alkalinityConcentration);
    setAcidityConcentration(obj.m_acidityConcentration);
    setImpuritiesContent(obj.m_impuritiesContent);
    setPHLevel(obj.m_pHLevel);
    setDissolvedSolidsContent(obj.m_dissolvedSolidsContent);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWaterProperties::s_type("IfcWaterProperties");
