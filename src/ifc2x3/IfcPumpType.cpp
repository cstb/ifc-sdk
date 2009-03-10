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

#include "ifc2x3/IfcPumpType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowMovingDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPumpType::IfcPumpType(Step::Id id, Step::SPFData *args) : IfcFlowMovingDeviceType(id, args) {
    m_predefinedType = IfcPumpTypeEnum_UNSET;
}

IfcPumpType::~IfcPumpType() {
}

bool IfcPumpType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPumpType(this);
}

const std::string &IfcPumpType::type() const {
    return IfcPumpType::s_type.getName();
}

const Step::ClassType &IfcPumpType::getClassType() {
    return IfcPumpType::s_type;
}

const Step::ClassType &IfcPumpType::getType() const {
    return IfcPumpType::s_type;
}

bool IfcPumpType::isOfType(const Step::ClassType &t) const {
    return IfcPumpType::s_type == t ? true : IfcFlowMovingDeviceType::isOfType(t);
}

IfcPumpTypeEnum IfcPumpType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPumpTypeEnum_UNSET;
    }
}

const IfcPumpTypeEnum IfcPumpType::getPredefinedType() const {
    IfcPumpType * deConstObject = const_cast< IfcPumpType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcPumpType::setPredefinedType(IfcPumpTypeEnum value) {
    m_predefinedType = value;
}

bool IfcPumpType::init() {
    bool status = IfcFlowMovingDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPumpTypeEnum_UNSET;
    }
    else {
        if (arg == ".CIRCULATOR.") {
            m_predefinedType = IfcPumpTypeEnum_CIRCULATOR;
        }
        else if (arg == ".ENDSUCTION.") {
            m_predefinedType = IfcPumpTypeEnum_ENDSUCTION;
        }
        else if (arg == ".SPLITCASE.") {
            m_predefinedType = IfcPumpTypeEnum_SPLITCASE;
        }
        else if (arg == ".VERTICALINLINE.") {
            m_predefinedType = IfcPumpTypeEnum_VERTICALINLINE;
        }
        else if (arg == ".VERTICALTURBINE.") {
            m_predefinedType = IfcPumpTypeEnum_VERTICALTURBINE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPumpTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPumpTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPumpType::copy(const IfcPumpType &obj, const CopyOp &copyop) {
    IfcFlowMovingDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPumpType::s_type("IfcPumpType");
