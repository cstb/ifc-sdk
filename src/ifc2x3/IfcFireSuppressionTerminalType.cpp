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

#include "ifc2x3/IfcFireSuppressionTerminalType.h"

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

IfcFireSuppressionTerminalType::IfcFireSuppressionTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
}

IfcFireSuppressionTerminalType::~IfcFireSuppressionTerminalType() {
}

bool IfcFireSuppressionTerminalType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFireSuppressionTerminalType(this);
}

const std::string &IfcFireSuppressionTerminalType::type() {
    return IfcFireSuppressionTerminalType::s_type.getName();
}

Step::ClassType IfcFireSuppressionTerminalType::getClassType() {
    return IfcFireSuppressionTerminalType::s_type;
}

Step::ClassType IfcFireSuppressionTerminalType::getType() const {
    return IfcFireSuppressionTerminalType::s_type;
}

bool IfcFireSuppressionTerminalType::isOfType(Step::ClassType t) {
    return IfcFireSuppressionTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcFireSuppressionTerminalTypeEnum IfcFireSuppressionTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFireSuppressionTerminalTypeEnum_UNSET;
    }
}

void IfcFireSuppressionTerminalType::setPredefinedType(IfcFireSuppressionTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcFireSuppressionTerminalType::release() {
    IfcFlowTerminalType::release();
}

bool IfcFireSuppressionTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".BREECHINGINLET.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_BREECHINGINLET;
        }
        else if (arg == ".FIREHYDRANT.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_FIREHYDRANT;
        }
        else if (arg == ".HOSEREEL.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_HOSEREEL;
        }
        else if (arg == ".SPRINKLER.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_SPRINKLER;
        }
        else if (arg == ".SPRINKLERDEFLECTOR.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_SPRINKLERDEFLECTOR;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFireSuppressionTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFireSuppressionTerminalType::copy(const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFireSuppressionTerminalType::s_type("IfcFireSuppressionTerminalType");
