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

#include "ifc2x3/IfcGeneralMaterialProperties.h"

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

IfcGeneralMaterialProperties::IfcGeneralMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_molecularWeight = Step::getUnset(m_molecularWeight);
    m_porosity = Step::getUnset(m_porosity);
    m_massDensity = Step::getUnset(m_massDensity);
}

IfcGeneralMaterialProperties::~IfcGeneralMaterialProperties() {
}

bool IfcGeneralMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeneralMaterialProperties(this);
}

const std::string &IfcGeneralMaterialProperties::type() const {
    return IfcGeneralMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcGeneralMaterialProperties::getClassType() {
    return IfcGeneralMaterialProperties::s_type;
}

const Step::ClassType &IfcGeneralMaterialProperties::getType() const {
    return IfcGeneralMaterialProperties::s_type;
}

bool IfcGeneralMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcGeneralMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcMolecularWeightMeasure IfcGeneralMaterialProperties::getMolecularWeight() {
    if (Step::BaseObject::inited()) {
        return m_molecularWeight;
    }
    else {
        return Step::getUnset(m_molecularWeight);
    }
}

const IfcMolecularWeightMeasure IfcGeneralMaterialProperties::getMolecularWeight() const {
    IfcGeneralMaterialProperties * deConstObject = const_cast< IfcGeneralMaterialProperties * > (this);
    return deConstObject->getMolecularWeight();
}

void IfcGeneralMaterialProperties::setMolecularWeight(IfcMolecularWeightMeasure value) {
    m_molecularWeight = value;
}

IfcNormalisedRatioMeasure IfcGeneralMaterialProperties::getPorosity() {
    if (Step::BaseObject::inited()) {
        return m_porosity;
    }
    else {
        return Step::getUnset(m_porosity);
    }
}

const IfcNormalisedRatioMeasure IfcGeneralMaterialProperties::getPorosity() const {
    IfcGeneralMaterialProperties * deConstObject = const_cast< IfcGeneralMaterialProperties * > (this);
    return deConstObject->getPorosity();
}

void IfcGeneralMaterialProperties::setPorosity(IfcNormalisedRatioMeasure value) {
    m_porosity = value;
}

IfcMassDensityMeasure IfcGeneralMaterialProperties::getMassDensity() {
    if (Step::BaseObject::inited()) {
        return m_massDensity;
    }
    else {
        return Step::getUnset(m_massDensity);
    }
}

const IfcMassDensityMeasure IfcGeneralMaterialProperties::getMassDensity() const {
    IfcGeneralMaterialProperties * deConstObject = const_cast< IfcGeneralMaterialProperties * > (this);
    return deConstObject->getMassDensity();
}

void IfcGeneralMaterialProperties::setMassDensity(IfcMassDensityMeasure value) {
    m_massDensity = value;
}

bool IfcGeneralMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_molecularWeight = Step::getUnset(m_molecularWeight);
    }
    else {
        m_molecularWeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_porosity = Step::getUnset(m_porosity);
    }
    else {
        m_porosity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_massDensity = Step::getUnset(m_massDensity);
    }
    else {
        m_massDensity = Step::spfToReal(arg);
    }
    return true;
}

void IfcGeneralMaterialProperties::copy(const IfcGeneralMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setMolecularWeight(obj.m_molecularWeight);
    setPorosity(obj.m_porosity);
    setMassDensity(obj.m_massDensity);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeneralMaterialProperties::s_type("IfcGeneralMaterialProperties");
