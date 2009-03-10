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

#include "ifc2x3/IfcMechanicalConcreteMaterialProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMechanicalMaterialProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMechanicalConcreteMaterialProperties::IfcMechanicalConcreteMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMechanicalMaterialProperties(id, args) {
    m_compressiveStrength = Step::getUnset(m_compressiveStrength);
    m_maxAggregateSize = Step::getUnset(m_maxAggregateSize);
    m_admixturesDescription = Step::getUnset(m_admixturesDescription);
    m_workability = Step::getUnset(m_workability);
    m_protectivePoreRatio = Step::getUnset(m_protectivePoreRatio);
    m_waterImpermeability = Step::getUnset(m_waterImpermeability);
}

IfcMechanicalConcreteMaterialProperties::~IfcMechanicalConcreteMaterialProperties() {
}

bool IfcMechanicalConcreteMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMechanicalConcreteMaterialProperties(this);
}

const std::string &IfcMechanicalConcreteMaterialProperties::type() const {
    return IfcMechanicalConcreteMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcMechanicalConcreteMaterialProperties::getClassType() {
    return IfcMechanicalConcreteMaterialProperties::s_type;
}

const Step::ClassType &IfcMechanicalConcreteMaterialProperties::getType() const {
    return IfcMechanicalConcreteMaterialProperties::s_type;
}

bool IfcMechanicalConcreteMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcMechanicalConcreteMaterialProperties::s_type == t ? true : IfcMechanicalMaterialProperties::isOfType(t);
}

IfcPressureMeasure IfcMechanicalConcreteMaterialProperties::getCompressiveStrength() {
    if (Step::BaseObject::inited()) {
        return m_compressiveStrength;
    }
    else {
        return Step::getUnset(m_compressiveStrength);
    }
}

const IfcPressureMeasure IfcMechanicalConcreteMaterialProperties::getCompressiveStrength() const {
    IfcMechanicalConcreteMaterialProperties * deConstObject = const_cast< IfcMechanicalConcreteMaterialProperties * > (this);
    return deConstObject->getCompressiveStrength();
}

void IfcMechanicalConcreteMaterialProperties::setCompressiveStrength(IfcPressureMeasure value) {
    m_compressiveStrength = value;
}

IfcPositiveLengthMeasure IfcMechanicalConcreteMaterialProperties::getMaxAggregateSize() {
    if (Step::BaseObject::inited()) {
        return m_maxAggregateSize;
    }
    else {
        return Step::getUnset(m_maxAggregateSize);
    }
}

const IfcPositiveLengthMeasure IfcMechanicalConcreteMaterialProperties::getMaxAggregateSize() const {
    IfcMechanicalConcreteMaterialProperties * deConstObject = const_cast< IfcMechanicalConcreteMaterialProperties * > (this);
    return deConstObject->getMaxAggregateSize();
}

void IfcMechanicalConcreteMaterialProperties::setMaxAggregateSize(IfcPositiveLengthMeasure value) {
    m_maxAggregateSize = value;
}

IfcText IfcMechanicalConcreteMaterialProperties::getAdmixturesDescription() {
    if (Step::BaseObject::inited()) {
        return m_admixturesDescription;
    }
    else {
        return Step::getUnset(m_admixturesDescription);
    }
}

const IfcText IfcMechanicalConcreteMaterialProperties::getAdmixturesDescription() const {
    IfcMechanicalConcreteMaterialProperties * deConstObject = const_cast< IfcMechanicalConcreteMaterialProperties * > (this);
    return deConstObject->getAdmixturesDescription();
}

void IfcMechanicalConcreteMaterialProperties::setAdmixturesDescription(const IfcText &value) {
    m_admixturesDescription = value;
}

IfcText IfcMechanicalConcreteMaterialProperties::getWorkability() {
    if (Step::BaseObject::inited()) {
        return m_workability;
    }
    else {
        return Step::getUnset(m_workability);
    }
}

const IfcText IfcMechanicalConcreteMaterialProperties::getWorkability() const {
    IfcMechanicalConcreteMaterialProperties * deConstObject = const_cast< IfcMechanicalConcreteMaterialProperties * > (this);
    return deConstObject->getWorkability();
}

void IfcMechanicalConcreteMaterialProperties::setWorkability(const IfcText &value) {
    m_workability = value;
}

IfcNormalisedRatioMeasure IfcMechanicalConcreteMaterialProperties::getProtectivePoreRatio() {
    if (Step::BaseObject::inited()) {
        return m_protectivePoreRatio;
    }
    else {
        return Step::getUnset(m_protectivePoreRatio);
    }
}

const IfcNormalisedRatioMeasure IfcMechanicalConcreteMaterialProperties::getProtectivePoreRatio() const {
    IfcMechanicalConcreteMaterialProperties * deConstObject = const_cast< IfcMechanicalConcreteMaterialProperties * > (this);
    return deConstObject->getProtectivePoreRatio();
}

void IfcMechanicalConcreteMaterialProperties::setProtectivePoreRatio(IfcNormalisedRatioMeasure value) {
    m_protectivePoreRatio = value;
}

IfcText IfcMechanicalConcreteMaterialProperties::getWaterImpermeability() {
    if (Step::BaseObject::inited()) {
        return m_waterImpermeability;
    }
    else {
        return Step::getUnset(m_waterImpermeability);
    }
}

const IfcText IfcMechanicalConcreteMaterialProperties::getWaterImpermeability() const {
    IfcMechanicalConcreteMaterialProperties * deConstObject = const_cast< IfcMechanicalConcreteMaterialProperties * > (this);
    return deConstObject->getWaterImpermeability();
}

void IfcMechanicalConcreteMaterialProperties::setWaterImpermeability(const IfcText &value) {
    m_waterImpermeability = value;
}

bool IfcMechanicalConcreteMaterialProperties::init() {
    bool status = IfcMechanicalMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressiveStrength = Step::getUnset(m_compressiveStrength);
    }
    else {
        m_compressiveStrength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_maxAggregateSize = Step::getUnset(m_maxAggregateSize);
    }
    else {
        m_maxAggregateSize = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_admixturesDescription = Step::getUnset(m_admixturesDescription);
    }
    else {
        m_admixturesDescription = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_workability = Step::getUnset(m_workability);
    }
    else {
        m_workability = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_protectivePoreRatio = Step::getUnset(m_protectivePoreRatio);
    }
    else {
        m_protectivePoreRatio = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_waterImpermeability = Step::getUnset(m_waterImpermeability);
    }
    else {
        m_waterImpermeability = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcMechanicalConcreteMaterialProperties::copy(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop) {
    IfcMechanicalMaterialProperties::copy(obj, copyop);
    setCompressiveStrength(obj.m_compressiveStrength);
    setMaxAggregateSize(obj.m_maxAggregateSize);
    setAdmixturesDescription(obj.m_admixturesDescription);
    setWorkability(obj.m_workability);
    setProtectivePoreRatio(obj.m_protectivePoreRatio);
    setWaterImpermeability(obj.m_waterImpermeability);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMechanicalConcreteMaterialProperties::s_type("IfcMechanicalConcreteMaterialProperties");
