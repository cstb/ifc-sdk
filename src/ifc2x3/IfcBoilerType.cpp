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

#include "ifc2x3/IfcBoilerType.h"

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

IfcBoilerType::IfcBoilerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcBoilerTypeEnum_UNSET;
}

IfcBoilerType::~IfcBoilerType() {
}

bool IfcBoilerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBoilerType(this);
}

const std::string &IfcBoilerType::type() {
    return IfcBoilerType::s_type.getName();
}

Step::ClassType IfcBoilerType::getClassType() {
    return IfcBoilerType::s_type;
}

Step::ClassType IfcBoilerType::getType() const {
    return IfcBoilerType::s_type;
}

bool IfcBoilerType::isOfType(Step::ClassType t) {
    return IfcBoilerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcBoilerTypeEnum IfcBoilerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcBoilerTypeEnum_UNSET;
    }
}

void IfcBoilerType::setPredefinedType(IfcBoilerTypeEnum value) {
    m_predefinedType = value;
}

void IfcBoilerType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcBoilerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcBoilerTypeEnum_UNSET;
    }
    else {
        if (arg == ".WATER.") {
            m_predefinedType = IfcBoilerTypeEnum_WATER;
        }
        else if (arg == ".STEAM.") {
            m_predefinedType = IfcBoilerTypeEnum_STEAM;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcBoilerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcBoilerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcBoilerType::copy(const IfcBoilerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoilerType::s_type("IfcBoilerType");
