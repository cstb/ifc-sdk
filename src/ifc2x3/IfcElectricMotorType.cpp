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

#include "ifc2x3/IfcElectricMotorType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElectricMotorType::IfcElectricMotorType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
}

IfcElectricMotorType::~IfcElectricMotorType() {
}

bool IfcElectricMotorType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricMotorType(this);
}

const std::string &IfcElectricMotorType::type() {
    return IfcElectricMotorType::s_type.getName();
}

Step::ClassType IfcElectricMotorType::getClassType() {
    return IfcElectricMotorType::s_type;
}

Step::ClassType IfcElectricMotorType::getType() const {
    return IfcElectricMotorType::s_type;
}

bool IfcElectricMotorType::isOfType(Step::ClassType t) {
    return IfcElectricMotorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcElectricMotorTypeEnum IfcElectricMotorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricMotorTypeEnum_UNSET;
    }
}

void IfcElectricMotorType::setPredefinedType(IfcElectricMotorTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricMotorType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcElectricMotorType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
    }
    else {
        if (arg == ".DC.") {
            m_predefinedType = IfcElectricMotorTypeEnum_DC;
        }
        else if (arg == ".INDUCTION.") {
            m_predefinedType = IfcElectricMotorTypeEnum_INDUCTION;
        }
        else if (arg == ".POLYPHASE.") {
            m_predefinedType = IfcElectricMotorTypeEnum_POLYPHASE;
        }
        else if (arg == ".RELUCTANCESYNCHRONOUS.") {
            m_predefinedType = IfcElectricMotorTypeEnum_RELUCTANCESYNCHRONOUS;
        }
        else if (arg == ".SYNCHRONOUS.") {
            m_predefinedType = IfcElectricMotorTypeEnum_SYNCHRONOUS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricMotorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricMotorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricMotorType::copy(const IfcElectricMotorType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricMotorType::s_type("IfcElectricMotorType");
