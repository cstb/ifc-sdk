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

#include "ifc2x3/IfcLightFixtureType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowTerminalType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLightFixtureType::IfcLightFixtureType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
}

IfcLightFixtureType::~IfcLightFixtureType() {
}

bool IfcLightFixtureType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLightFixtureType(this);
}

const std::string &IfcLightFixtureType::type() {
    return IfcLightFixtureType::s_type.getName();
}

Step::ClassType IfcLightFixtureType::getClassType() {
    return IfcLightFixtureType::s_type;
}

Step::ClassType IfcLightFixtureType::getType() const {
    return IfcLightFixtureType::s_type;
}

bool IfcLightFixtureType::isOfType(Step::ClassType t) {
    return IfcLightFixtureType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcLightFixtureTypeEnum IfcLightFixtureType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcLightFixtureTypeEnum_UNSET;
    }
}

void IfcLightFixtureType::setPredefinedType(IfcLightFixtureTypeEnum value) {
    m_predefinedType = value;
}

void IfcLightFixtureType::release() {
    IfcFlowTerminalType::release();
}

bool IfcLightFixtureType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
    }
    else {
        if (arg == ".POINTSOURCE.") {
            m_predefinedType = IfcLightFixtureTypeEnum_POINTSOURCE;
        }
        else if (arg == ".DIRECTIONSOURCE.") {
            m_predefinedType = IfcLightFixtureTypeEnum_DIRECTIONSOURCE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcLightFixtureTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcLightFixtureTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcLightFixtureType::copy(const IfcLightFixtureType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLightFixtureType::s_type("IfcLightFixtureType");
