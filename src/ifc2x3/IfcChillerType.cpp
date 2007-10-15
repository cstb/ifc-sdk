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

#include "ifc2x3/IfcChillerType.h"

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

IfcChillerType::IfcChillerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcChillerTypeEnum_UNSET;
}

IfcChillerType::~IfcChillerType() {
}

bool IfcChillerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcChillerType(this);
}

const std::string &IfcChillerType::type() {
    return IfcChillerType::s_type.getName();
}

Step::ClassType IfcChillerType::getClassType() {
    return IfcChillerType::s_type;
}

Step::ClassType IfcChillerType::getType() const {
    return IfcChillerType::s_type;
}

bool IfcChillerType::isOfType(Step::ClassType t) {
    return IfcChillerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcChillerTypeEnum IfcChillerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcChillerTypeEnum_UNSET;
    }
}

void IfcChillerType::setPredefinedType(IfcChillerTypeEnum value) {
    m_predefinedType = value;
}

void IfcChillerType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcChillerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcChillerTypeEnum_UNSET;
    }
    else {
        if (arg == ".AIRCOOLED.") {
            m_predefinedType = IfcChillerTypeEnum_AIRCOOLED;
        }
        else if (arg == ".WATERCOOLED.") {
            m_predefinedType = IfcChillerTypeEnum_WATERCOOLED;
        }
        else if (arg == ".HEATRECOVERY.") {
            m_predefinedType = IfcChillerTypeEnum_HEATRECOVERY;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcChillerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcChillerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcChillerType::copy(const IfcChillerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcChillerType::s_type("IfcChillerType");
