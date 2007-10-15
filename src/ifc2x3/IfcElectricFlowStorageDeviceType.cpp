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

#include "ifc2x3/IfcElectricFlowStorageDeviceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowStorageDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElectricFlowStorageDeviceType::IfcElectricFlowStorageDeviceType(Step::Id id, Step::SPFData *args) : IfcFlowStorageDeviceType(id, args) {
    m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}

IfcElectricFlowStorageDeviceType::~IfcElectricFlowStorageDeviceType() {
}

bool IfcElectricFlowStorageDeviceType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricFlowStorageDeviceType(this);
}

const std::string &IfcElectricFlowStorageDeviceType::type() {
    return IfcElectricFlowStorageDeviceType::s_type.getName();
}

Step::ClassType IfcElectricFlowStorageDeviceType::getClassType() {
    return IfcElectricFlowStorageDeviceType::s_type;
}

Step::ClassType IfcElectricFlowStorageDeviceType::getType() const {
    return IfcElectricFlowStorageDeviceType::s_type;
}

bool IfcElectricFlowStorageDeviceType::isOfType(Step::ClassType t) {
    return IfcElectricFlowStorageDeviceType::s_type == t ? true : IfcFlowStorageDeviceType::isOfType(t);
}

IfcElectricFlowStorageDeviceTypeEnum IfcElectricFlowStorageDeviceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricFlowStorageDeviceTypeEnum_UNSET;
    }
}

void IfcElectricFlowStorageDeviceType::setPredefinedType(IfcElectricFlowStorageDeviceTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricFlowStorageDeviceType::release() {
    IfcFlowStorageDeviceType::release();
}

bool IfcElectricFlowStorageDeviceType::init() {
    bool status = IfcFlowStorageDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
    }
    else {
        if (arg == ".BATTERY.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_BATTERY;
        }
        else if (arg == ".CAPACITORBANK.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_CAPACITORBANK;
        }
        else if (arg == ".HARMONICFILTER.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_HARMONICFILTER;
        }
        else if (arg == ".INDUCTORBANK.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_INDUCTORBANK;
        }
        else if (arg == ".UPS.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UPS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricFlowStorageDeviceType::copy(const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop) {
    IfcFlowStorageDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricFlowStorageDeviceType::s_type("IfcElectricFlowStorageDeviceType");
