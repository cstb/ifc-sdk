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

#include "ifc2x3/IfcTubeBundleType.h"

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

IfcTubeBundleType::IfcTubeBundleType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
}

IfcTubeBundleType::~IfcTubeBundleType() {
}

bool IfcTubeBundleType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTubeBundleType(this);
}

const std::string &IfcTubeBundleType::type() {
    return IfcTubeBundleType::s_type.getName();
}

Step::ClassType IfcTubeBundleType::getClassType() {
    return IfcTubeBundleType::s_type;
}

Step::ClassType IfcTubeBundleType::getType() const {
    return IfcTubeBundleType::s_type;
}

bool IfcTubeBundleType::isOfType(Step::ClassType t) {
    return IfcTubeBundleType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcTubeBundleTypeEnum IfcTubeBundleType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTubeBundleTypeEnum_UNSET;
    }
}

void IfcTubeBundleType::setPredefinedType(IfcTubeBundleTypeEnum value) {
    m_predefinedType = value;
}

void IfcTubeBundleType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcTubeBundleType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
    }
    else {
        if (arg == ".FINNED.") {
            m_predefinedType = IfcTubeBundleTypeEnum_FINNED;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTubeBundleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTubeBundleTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTubeBundleType::copy(const IfcTubeBundleType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTubeBundleType::s_type("IfcTubeBundleType");
