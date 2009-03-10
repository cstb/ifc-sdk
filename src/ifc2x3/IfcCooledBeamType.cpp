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

#include "ifc2x3/IfcCooledBeamType.h"

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

IfcCooledBeamType::IfcCooledBeamType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
}

IfcCooledBeamType::~IfcCooledBeamType() {
}

bool IfcCooledBeamType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCooledBeamType(this);
}

const std::string &IfcCooledBeamType::type() const {
    return IfcCooledBeamType::s_type.getName();
}

const Step::ClassType &IfcCooledBeamType::getClassType() {
    return IfcCooledBeamType::s_type;
}

const Step::ClassType &IfcCooledBeamType::getType() const {
    return IfcCooledBeamType::s_type;
}

bool IfcCooledBeamType::isOfType(const Step::ClassType &t) const {
    return IfcCooledBeamType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCooledBeamTypeEnum IfcCooledBeamType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCooledBeamTypeEnum_UNSET;
    }
}

const IfcCooledBeamTypeEnum IfcCooledBeamType::getPredefinedType() const {
    IfcCooledBeamType * deConstObject = const_cast< IfcCooledBeamType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCooledBeamType::setPredefinedType(IfcCooledBeamTypeEnum value) {
    m_predefinedType = value;
}

bool IfcCooledBeamType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
    }
    else {
        if (arg == ".ACTIVE.") {
            m_predefinedType = IfcCooledBeamTypeEnum_ACTIVE;
        }
        else if (arg == ".PASSIVE.") {
            m_predefinedType = IfcCooledBeamTypeEnum_PASSIVE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCooledBeamTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCooledBeamTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCooledBeamType::copy(const IfcCooledBeamType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCooledBeamType::s_type("IfcCooledBeamType");
