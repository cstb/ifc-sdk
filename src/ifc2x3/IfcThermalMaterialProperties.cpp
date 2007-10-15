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

#include "ifc2x3/IfcThermalMaterialProperties.h"

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

IfcThermalMaterialProperties::IfcThermalMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_specificHeatCapacity = Step::getUnset(m_specificHeatCapacity);
    m_boilingPoint = Step::getUnset(m_boilingPoint);
    m_freezingPoint = Step::getUnset(m_freezingPoint);
    m_thermalConductivity = Step::getUnset(m_thermalConductivity);
}

IfcThermalMaterialProperties::~IfcThermalMaterialProperties() {
}

bool IfcThermalMaterialProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcThermalMaterialProperties(this);
}

const std::string &IfcThermalMaterialProperties::type() {
    return IfcThermalMaterialProperties::s_type.getName();
}

Step::ClassType IfcThermalMaterialProperties::getClassType() {
    return IfcThermalMaterialProperties::s_type;
}

Step::ClassType IfcThermalMaterialProperties::getType() const {
    return IfcThermalMaterialProperties::s_type;
}

bool IfcThermalMaterialProperties::isOfType(Step::ClassType t) {
    return IfcThermalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcSpecificHeatCapacityMeasure IfcThermalMaterialProperties::getSpecificHeatCapacity() {
    if (Step::BaseObject::inited()) {
        return m_specificHeatCapacity;
    }
    else {
        return Step::getUnset(m_specificHeatCapacity);
    }
}

void IfcThermalMaterialProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value) {
    m_specificHeatCapacity = value;
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getBoilingPoint() {
    if (Step::BaseObject::inited()) {
        return m_boilingPoint;
    }
    else {
        return Step::getUnset(m_boilingPoint);
    }
}

void IfcThermalMaterialProperties::setBoilingPoint(IfcThermodynamicTemperatureMeasure value) {
    m_boilingPoint = value;
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getFreezingPoint() {
    if (Step::BaseObject::inited()) {
        return m_freezingPoint;
    }
    else {
        return Step::getUnset(m_freezingPoint);
    }
}

void IfcThermalMaterialProperties::setFreezingPoint(IfcThermodynamicTemperatureMeasure value) {
    m_freezingPoint = value;
}

IfcThermalConductivityMeasure IfcThermalMaterialProperties::getThermalConductivity() {
    if (Step::BaseObject::inited()) {
        return m_thermalConductivity;
    }
    else {
        return Step::getUnset(m_thermalConductivity);
    }
}

void IfcThermalMaterialProperties::setThermalConductivity(IfcThermalConductivityMeasure value) {
    m_thermalConductivity = value;
}

void IfcThermalMaterialProperties::release() {
    IfcMaterialProperties::release();
}

bool IfcThermalMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_specificHeatCapacity = Step::getUnset(m_specificHeatCapacity);
    }
    else {
        m_specificHeatCapacity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boilingPoint = Step::getUnset(m_boilingPoint);
    }
    else {
        m_boilingPoint = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_freezingPoint = Step::getUnset(m_freezingPoint);
    }
    else {
        m_freezingPoint = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalConductivity = Step::getUnset(m_thermalConductivity);
    }
    else {
        m_thermalConductivity = Step::spfToReal(arg);
    }
    return true;
}

void IfcThermalMaterialProperties::copy(const IfcThermalMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setSpecificHeatCapacity(obj.m_specificHeatCapacity);
    setBoilingPoint(obj.m_boilingPoint);
    setFreezingPoint(obj.m_freezingPoint);
    setThermalConductivity(obj.m_thermalConductivity);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcThermalMaterialProperties::s_type("IfcThermalMaterialProperties");
