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

#include "ifc2x3/IfcAirTerminalType.h"

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

IfcAirTerminalType::IfcAirTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcAirTerminalTypeEnum_UNSET;
}

IfcAirTerminalType::~IfcAirTerminalType() {
}

bool IfcAirTerminalType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAirTerminalType(this);
}

const std::string &IfcAirTerminalType::type() {
    return IfcAirTerminalType::s_type.getName();
}

Step::ClassType IfcAirTerminalType::getClassType() {
    return IfcAirTerminalType::s_type;
}

Step::ClassType IfcAirTerminalType::getType() const {
    return IfcAirTerminalType::s_type;
}

bool IfcAirTerminalType::isOfType(Step::ClassType t) {
    return IfcAirTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcAirTerminalTypeEnum IfcAirTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcAirTerminalTypeEnum_UNSET;
    }
}

void IfcAirTerminalType::setPredefinedType(IfcAirTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcAirTerminalType::release() {
    IfcFlowTerminalType::release();
}

bool IfcAirTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcAirTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".GRILLE.") {
            m_predefinedType = IfcAirTerminalTypeEnum_GRILLE;
        }
        else if (arg == ".REGISTER.") {
            m_predefinedType = IfcAirTerminalTypeEnum_REGISTER;
        }
        else if (arg == ".DIFFUSER.") {
            m_predefinedType = IfcAirTerminalTypeEnum_DIFFUSER;
        }
        else if (arg == ".EYEBALL.") {
            m_predefinedType = IfcAirTerminalTypeEnum_EYEBALL;
        }
        else if (arg == ".IRIS.") {
            m_predefinedType = IfcAirTerminalTypeEnum_IRIS;
        }
        else if (arg == ".LINEARGRILLE.") {
            m_predefinedType = IfcAirTerminalTypeEnum_LINEARGRILLE;
        }
        else if (arg == ".LINEARDIFFUSER.") {
            m_predefinedType = IfcAirTerminalTypeEnum_LINEARDIFFUSER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcAirTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcAirTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAirTerminalType::copy(const IfcAirTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAirTerminalType::s_type("IfcAirTerminalType");
