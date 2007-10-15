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

#include "ifc2x3/IfcStructuralLoadTemperature.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralLoadStatic.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadTemperature::IfcStructuralLoadTemperature(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_deltaT_Constant = Step::getUnset(m_deltaT_Constant);
    m_deltaT_Y = Step::getUnset(m_deltaT_Y);
    m_deltaT_Z = Step::getUnset(m_deltaT_Z);
}

IfcStructuralLoadTemperature::~IfcStructuralLoadTemperature() {
}

bool IfcStructuralLoadTemperature::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadTemperature(this);
}

const std::string &IfcStructuralLoadTemperature::type() {
    return IfcStructuralLoadTemperature::s_type.getName();
}

Step::ClassType IfcStructuralLoadTemperature::getClassType() {
    return IfcStructuralLoadTemperature::s_type;
}

Step::ClassType IfcStructuralLoadTemperature::getType() const {
    return IfcStructuralLoadTemperature::s_type;
}

bool IfcStructuralLoadTemperature::isOfType(Step::ClassType t) {
    return IfcStructuralLoadTemperature::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Constant() {
    if (Step::BaseObject::inited()) {
        return m_deltaT_Constant;
    }
    else {
        return Step::getUnset(m_deltaT_Constant);
    }
}

void IfcStructuralLoadTemperature::setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value) {
    m_deltaT_Constant = value;
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Y() {
    if (Step::BaseObject::inited()) {
        return m_deltaT_Y;
    }
    else {
        return Step::getUnset(m_deltaT_Y);
    }
}

void IfcStructuralLoadTemperature::setDeltaT_Y(IfcThermodynamicTemperatureMeasure value) {
    m_deltaT_Y = value;
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Z() {
    if (Step::BaseObject::inited()) {
        return m_deltaT_Z;
    }
    else {
        return Step::getUnset(m_deltaT_Z);
    }
}

void IfcStructuralLoadTemperature::setDeltaT_Z(IfcThermodynamicTemperatureMeasure value) {
    m_deltaT_Z = value;
}

void IfcStructuralLoadTemperature::release() {
    IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadTemperature::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_deltaT_Constant = Step::getUnset(m_deltaT_Constant);
    }
    else {
        m_deltaT_Constant = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_deltaT_Y = Step::getUnset(m_deltaT_Y);
    }
    else {
        m_deltaT_Y = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_deltaT_Z = Step::getUnset(m_deltaT_Z);
    }
    else {
        m_deltaT_Z = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadTemperature::copy(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setDeltaT_Constant(obj.m_deltaT_Constant);
    setDeltaT_Y(obj.m_deltaT_Y);
    setDeltaT_Z(obj.m_deltaT_Z);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadTemperature::s_type("IfcStructuralLoadTemperature");
