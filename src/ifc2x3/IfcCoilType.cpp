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

#include "ifc2x3/IfcCoilType.h"

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

IfcCoilType::IfcCoilType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcCoilTypeEnum_UNSET;
}

IfcCoilType::~IfcCoilType() {
}

bool IfcCoilType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCoilType(this);
}

const std::string &IfcCoilType::type() {
    return IfcCoilType::s_type.getName();
}

Step::ClassType IfcCoilType::getClassType() {
    return IfcCoilType::s_type;
}

Step::ClassType IfcCoilType::getType() const {
    return IfcCoilType::s_type;
}

bool IfcCoilType::isOfType(Step::ClassType t) {
    return IfcCoilType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCoilTypeEnum IfcCoilType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCoilTypeEnum_UNSET;
    }
}

void IfcCoilType::setPredefinedType(IfcCoilTypeEnum value) {
    m_predefinedType = value;
}

void IfcCoilType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcCoilType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCoilTypeEnum_UNSET;
    }
    else {
        if (arg == ".DXCOOLINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_DXCOOLINGCOIL;
        }
        else if (arg == ".WATERCOOLINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_WATERCOOLINGCOIL;
        }
        else if (arg == ".STEAMHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_STEAMHEATINGCOIL;
        }
        else if (arg == ".WATERHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_WATERHEATINGCOIL;
        }
        else if (arg == ".ELECTRICHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_ELECTRICHEATINGCOIL;
        }
        else if (arg == ".GASHEATINGCOIL.") {
            m_predefinedType = IfcCoilTypeEnum_GASHEATINGCOIL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCoilTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCoilTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCoilType::copy(const IfcCoilType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCoilType::s_type("IfcCoilType");
