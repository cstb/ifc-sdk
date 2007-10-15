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

#include "ifc2x3/IfcElectricHeaterType.h"

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

IfcElectricHeaterType::IfcElectricHeaterType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
}

IfcElectricHeaterType::~IfcElectricHeaterType() {
}

bool IfcElectricHeaterType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricHeaterType(this);
}

const std::string &IfcElectricHeaterType::type() {
    return IfcElectricHeaterType::s_type.getName();
}

Step::ClassType IfcElectricHeaterType::getClassType() {
    return IfcElectricHeaterType::s_type;
}

Step::ClassType IfcElectricHeaterType::getType() const {
    return IfcElectricHeaterType::s_type;
}

bool IfcElectricHeaterType::isOfType(Step::ClassType t) {
    return IfcElectricHeaterType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcElectricHeaterTypeEnum IfcElectricHeaterType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricHeaterTypeEnum_UNSET;
    }
}

void IfcElectricHeaterType::setPredefinedType(IfcElectricHeaterTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricHeaterType::release() {
    IfcFlowTerminalType::release();
}

bool IfcElectricHeaterType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricHeaterTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELECTRICPOINTHEATER.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICPOINTHEATER;
        }
        else if (arg == ".ELECTRICCABLEHEATER.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICCABLEHEATER;
        }
        else if (arg == ".ELECTRICMATHEATER.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_ELECTRICMATHEATER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricHeaterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricHeaterType::copy(const IfcElectricHeaterType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricHeaterType::s_type("IfcElectricHeaterType");
