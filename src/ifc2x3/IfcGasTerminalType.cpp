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

#include "ifc2x3/IfcGasTerminalType.h"

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

IfcGasTerminalType::IfcGasTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
}

IfcGasTerminalType::~IfcGasTerminalType() {
}

bool IfcGasTerminalType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcGasTerminalType(this);
}

const std::string &IfcGasTerminalType::type() {
    return IfcGasTerminalType::s_type.getName();
}

Step::ClassType IfcGasTerminalType::getClassType() {
    return IfcGasTerminalType::s_type;
}

Step::ClassType IfcGasTerminalType::getType() const {
    return IfcGasTerminalType::s_type;
}

bool IfcGasTerminalType::isOfType(Step::ClassType t) {
    return IfcGasTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcGasTerminalTypeEnum IfcGasTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcGasTerminalTypeEnum_UNSET;
    }
}

void IfcGasTerminalType::setPredefinedType(IfcGasTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcGasTerminalType::release() {
    IfcFlowTerminalType::release();
}

bool IfcGasTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".GASAPPLIANCE.") {
            m_predefinedType = IfcGasTerminalTypeEnum_GASAPPLIANCE;
        }
        else if (arg == ".GASBOOSTER.") {
            m_predefinedType = IfcGasTerminalTypeEnum_GASBOOSTER;
        }
        else if (arg == ".GASBURNER.") {
            m_predefinedType = IfcGasTerminalTypeEnum_GASBURNER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcGasTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcGasTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcGasTerminalType::copy(const IfcGasTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGasTerminalType::s_type("IfcGasTerminalType");
