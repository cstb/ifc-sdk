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

#include "ifc2x3/IfcCondenserType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCondenserType::IfcCondenserType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcCondenserTypeEnum_UNSET;
}

IfcCondenserType::~IfcCondenserType() {
}

bool IfcCondenserType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCondenserType(this);
}

const std::string &IfcCondenserType::type() const {
    return IfcCondenserType::s_type.getName();
}

const Step::ClassType &IfcCondenserType::getClassType() {
    return IfcCondenserType::s_type;
}

const Step::ClassType &IfcCondenserType::getType() const {
    return IfcCondenserType::s_type;
}

bool IfcCondenserType::isOfType(const Step::ClassType &t) const {
    return IfcCondenserType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCondenserTypeEnum IfcCondenserType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCondenserTypeEnum_UNSET;
    }
}

const IfcCondenserTypeEnum IfcCondenserType::getPredefinedType() const {
    IfcCondenserType * deConstObject = const_cast< IfcCondenserType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCondenserType::setPredefinedType(IfcCondenserTypeEnum value) {
    m_predefinedType = value;
}

void IfcCondenserType::unsetPredefinedType() {
    m_predefinedType = IfcCondenserTypeEnum_UNSET;
}

bool IfcCondenserType::testPredefinedType() const {
    return getPredefinedType() != IfcCondenserTypeEnum_UNSET;
}

bool IfcCondenserType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCondenserTypeEnum_UNSET;
    }
    else {
        if (arg == ".WATERCOOLEDSHELLTUBE.") {
            m_predefinedType = IfcCondenserTypeEnum_WATERCOOLEDSHELLTUBE;
        }
        else if (arg == ".WATERCOOLEDSHELLCOIL.") {
            m_predefinedType = IfcCondenserTypeEnum_WATERCOOLEDSHELLCOIL;
        }
        else if (arg == ".WATERCOOLEDTUBEINTUBE.") {
            m_predefinedType = IfcCondenserTypeEnum_WATERCOOLEDTUBEINTUBE;
        }
        else if (arg == ".WATERCOOLEDBRAZEDPLATE.") {
            m_predefinedType = IfcCondenserTypeEnum_WATERCOOLEDBRAZEDPLATE;
        }
        else if (arg == ".AIRCOOLED.") {
            m_predefinedType = IfcCondenserTypeEnum_AIRCOOLED;
        }
        else if (arg == ".EVAPORATIVECOOLED.") {
            m_predefinedType = IfcCondenserTypeEnum_EVAPORATIVECOOLED;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCondenserTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCondenserTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCondenserType::copy(const IfcCondenserType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCondenserType::s_type("IfcCondenserType");
