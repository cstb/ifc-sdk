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

#include "ifc2x3/IfcSanitaryTerminalType.h"

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

IfcSanitaryTerminalType::IfcSanitaryTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
}

IfcSanitaryTerminalType::~IfcSanitaryTerminalType() {
}

bool IfcSanitaryTerminalType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSanitaryTerminalType(this);
}

const std::string &IfcSanitaryTerminalType::type() const {
    return IfcSanitaryTerminalType::s_type.getName();
}

const Step::ClassType &IfcSanitaryTerminalType::getClassType() {
    return IfcSanitaryTerminalType::s_type;
}

const Step::ClassType &IfcSanitaryTerminalType::getType() const {
    return IfcSanitaryTerminalType::s_type;
}

bool IfcSanitaryTerminalType::isOfType(const Step::ClassType &t) const {
    return IfcSanitaryTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcSanitaryTerminalTypeEnum IfcSanitaryTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSanitaryTerminalTypeEnum_UNSET;
    }
}

const IfcSanitaryTerminalTypeEnum IfcSanitaryTerminalType::getPredefinedType() const {
    IfcSanitaryTerminalType * deConstObject = const_cast< IfcSanitaryTerminalType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSanitaryTerminalType::setPredefinedType(IfcSanitaryTerminalTypeEnum value) {
    m_predefinedType = value;
}

bool IfcSanitaryTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".BATH.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_BATH;
        }
        else if (arg == ".BIDET.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_BIDET;
        }
        else if (arg == ".CISTERN.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_CISTERN;
        }
        else if (arg == ".SHOWER.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_SHOWER;
        }
        else if (arg == ".SINK.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_SINK;
        }
        else if (arg == ".SANITARYFOUNTAIN.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_SANITARYFOUNTAIN;
        }
        else if (arg == ".TOILETPAN.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_TOILETPAN;
        }
        else if (arg == ".URINAL.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_URINAL;
        }
        else if (arg == ".WASHHANDBASIN.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_WASHHANDBASIN;
        }
        else if (arg == ".WCSEAT.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_WCSEAT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSanitaryTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSanitaryTerminalType::copy(const IfcSanitaryTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSanitaryTerminalType::s_type("IfcSanitaryTerminalType");
