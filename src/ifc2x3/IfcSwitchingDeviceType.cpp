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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcSwitchingDeviceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowControllerType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSwitchingDeviceType::IfcSwitchingDeviceType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
}

IfcSwitchingDeviceType::~IfcSwitchingDeviceType() {
}

bool IfcSwitchingDeviceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSwitchingDeviceType(this);
}

const std::string &IfcSwitchingDeviceType::type() const {
    return IfcSwitchingDeviceType::s_type.getName();
}

const Step::ClassType &IfcSwitchingDeviceType::getClassType() {
    return IfcSwitchingDeviceType::s_type;
}

const Step::ClassType &IfcSwitchingDeviceType::getType() const {
    return IfcSwitchingDeviceType::s_type;
}

bool IfcSwitchingDeviceType::isOfType(const Step::ClassType &t) const {
    return IfcSwitchingDeviceType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcSwitchingDeviceTypeEnum IfcSwitchingDeviceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSwitchingDeviceTypeEnum_UNSET;
    }
}

const IfcSwitchingDeviceTypeEnum IfcSwitchingDeviceType::getPredefinedType() const {
    IfcSwitchingDeviceType * deConstObject = const_cast< IfcSwitchingDeviceType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSwitchingDeviceType::setPredefinedType(IfcSwitchingDeviceTypeEnum value) {
    m_predefinedType = value;
}

void IfcSwitchingDeviceType::unsetPredefinedType() {
    m_predefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
}

bool IfcSwitchingDeviceType::testPredefinedType() const {
    return getPredefinedType() != IfcSwitchingDeviceTypeEnum_UNSET;
}

bool IfcSwitchingDeviceType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
    }
    else {
        if (arg == ".CONTACTOR.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_CONTACTOR;
        }
        else if (arg == ".EMERGENCYSTOP.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_EMERGENCYSTOP;
        }
        else if (arg == ".STARTER.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_STARTER;
        }
        else if (arg == ".SWITCHDISCONNECTOR.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_SWITCHDISCONNECTOR;
        }
        else if (arg == ".TOGGLESWITCH.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_TOGGLESWITCH;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSwitchingDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSwitchingDeviceType::copy(const IfcSwitchingDeviceType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSwitchingDeviceType::s_type("IfcSwitchingDeviceType");
