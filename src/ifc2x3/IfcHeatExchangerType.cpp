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

#include "ifc2x3/IfcHeatExchangerType.h"

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

IfcHeatExchangerType::IfcHeatExchangerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
}

IfcHeatExchangerType::~IfcHeatExchangerType() {
}

bool IfcHeatExchangerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcHeatExchangerType(this);
}

const std::string &IfcHeatExchangerType::type() {
    return IfcHeatExchangerType::s_type.getName();
}

Step::ClassType IfcHeatExchangerType::getClassType() {
    return IfcHeatExchangerType::s_type;
}

Step::ClassType IfcHeatExchangerType::getType() const {
    return IfcHeatExchangerType::s_type;
}

bool IfcHeatExchangerType::isOfType(Step::ClassType t) {
    return IfcHeatExchangerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcHeatExchangerTypeEnum IfcHeatExchangerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcHeatExchangerTypeEnum_UNSET;
    }
}

void IfcHeatExchangerType::setPredefinedType(IfcHeatExchangerTypeEnum value) {
    m_predefinedType = value;
}

void IfcHeatExchangerType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcHeatExchangerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
    }
    else {
        if (arg == ".PLATE.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_PLATE;
        }
        else if (arg == ".SHELLANDTUBE.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_SHELLANDTUBE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcHeatExchangerType::copy(const IfcHeatExchangerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcHeatExchangerType::s_type("IfcHeatExchangerType");
