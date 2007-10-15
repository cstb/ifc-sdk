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

#include "ifc2x3/IfcStructuralSteelProfileProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralProfileProperties.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralSteelProfileProperties::IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args) : IfcStructuralProfileProperties(id, args) {
    m_shearAreaZ = Step::getUnset(m_shearAreaZ);
    m_shearAreaY = Step::getUnset(m_shearAreaY);
    m_plasticShapeFactorY = Step::getUnset(m_plasticShapeFactorY);
    m_plasticShapeFactorZ = Step::getUnset(m_plasticShapeFactorZ);
}

IfcStructuralSteelProfileProperties::~IfcStructuralSteelProfileProperties() {
}

bool IfcStructuralSteelProfileProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralSteelProfileProperties(this);
}

const std::string &IfcStructuralSteelProfileProperties::type() {
    return IfcStructuralSteelProfileProperties::s_type.getName();
}

Step::ClassType IfcStructuralSteelProfileProperties::getClassType() {
    return IfcStructuralSteelProfileProperties::s_type;
}

Step::ClassType IfcStructuralSteelProfileProperties::getType() const {
    return IfcStructuralSteelProfileProperties::s_type;
}

bool IfcStructuralSteelProfileProperties::isOfType(Step::ClassType t) {
    return IfcStructuralSteelProfileProperties::s_type == t ? true : IfcStructuralProfileProperties::isOfType(t);
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaZ() {
    if (Step::BaseObject::inited()) {
        return m_shearAreaZ;
    }
    else {
        return Step::getUnset(m_shearAreaZ);
    }
}

void IfcStructuralSteelProfileProperties::setShearAreaZ(IfcAreaMeasure value) {
    m_shearAreaZ = value;
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaY() {
    if (Step::BaseObject::inited()) {
        return m_shearAreaY;
    }
    else {
        return Step::getUnset(m_shearAreaY);
    }
}

void IfcStructuralSteelProfileProperties::setShearAreaY(IfcAreaMeasure value) {
    m_shearAreaY = value;
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorY() {
    if (Step::BaseObject::inited()) {
        return m_plasticShapeFactorY;
    }
    else {
        return Step::getUnset(m_plasticShapeFactorY);
    }
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorY(IfcPositiveRatioMeasure value) {
    m_plasticShapeFactorY = value;
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorZ() {
    if (Step::BaseObject::inited()) {
        return m_plasticShapeFactorZ;
    }
    else {
        return Step::getUnset(m_plasticShapeFactorZ);
    }
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorZ(IfcPositiveRatioMeasure value) {
    m_plasticShapeFactorZ = value;
}

void IfcStructuralSteelProfileProperties::release() {
    IfcStructuralProfileProperties::release();
}

bool IfcStructuralSteelProfileProperties::init() {
    bool status = IfcStructuralProfileProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearAreaZ = Step::getUnset(m_shearAreaZ);
    }
    else {
        m_shearAreaZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearAreaY = Step::getUnset(m_shearAreaY);
    }
    else {
        m_shearAreaY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_plasticShapeFactorY = Step::getUnset(m_plasticShapeFactorY);
    }
    else {
        m_plasticShapeFactorY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_plasticShapeFactorZ = Step::getUnset(m_plasticShapeFactorZ);
    }
    else {
        m_plasticShapeFactorZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralSteelProfileProperties::copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop) {
    IfcStructuralProfileProperties::copy(obj, copyop);
    setShearAreaZ(obj.m_shearAreaZ);
    setShearAreaY(obj.m_shearAreaY);
    setPlasticShapeFactorY(obj.m_plasticShapeFactorY);
    setPlasticShapeFactorZ(obj.m_plasticShapeFactorZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSteelProfileProperties::s_type("IfcStructuralSteelProfileProperties");
