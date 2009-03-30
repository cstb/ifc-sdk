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

#include "ifc2x3/IfcAirToAirHeatRecoveryType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAirToAirHeatRecoveryType::IfcAirToAirHeatRecoveryType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
}

IfcAirToAirHeatRecoveryType::~IfcAirToAirHeatRecoveryType() {
}

bool IfcAirToAirHeatRecoveryType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAirToAirHeatRecoveryType(this);
}

const std::string &IfcAirToAirHeatRecoveryType::type() const {
    return IfcAirToAirHeatRecoveryType::s_type.getName();
}

const Step::ClassType &IfcAirToAirHeatRecoveryType::getClassType() {
    return IfcAirToAirHeatRecoveryType::s_type;
}

const Step::ClassType &IfcAirToAirHeatRecoveryType::getType() const {
    return IfcAirToAirHeatRecoveryType::s_type;
}

bool IfcAirToAirHeatRecoveryType::isOfType(const Step::ClassType &t) const {
    return IfcAirToAirHeatRecoveryType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcAirToAirHeatRecoveryTypeEnum IfcAirToAirHeatRecoveryType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcAirToAirHeatRecoveryTypeEnum_UNSET;
    }
}

const IfcAirToAirHeatRecoveryTypeEnum IfcAirToAirHeatRecoveryType::getPredefinedType() const {
    IfcAirToAirHeatRecoveryType * deConstObject = const_cast< IfcAirToAirHeatRecoveryType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcAirToAirHeatRecoveryType::setPredefinedType(IfcAirToAirHeatRecoveryTypeEnum value) {
    m_predefinedType = value;
}

void IfcAirToAirHeatRecoveryType::unsetPredefinedType() {
    m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
}

bool IfcAirToAirHeatRecoveryType::testPredefinedType() const {
    return getPredefinedType() != IfcAirToAirHeatRecoveryTypeEnum_UNSET;
}

bool IfcAirToAirHeatRecoveryType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
    }
    else {
        if (arg == ".FIXEDPLATECOUNTERFLOWEXCHANGER.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECOUNTERFLOWEXCHANGER;
        }
        else if (arg == ".FIXEDPLATECROSSFLOWEXCHANGER.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECROSSFLOWEXCHANGER;
        }
        else if (arg == ".FIXEDPLATEPARALLELFLOWEXCHANGER.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATEPARALLELFLOWEXCHANGER;
        }
        else if (arg == ".ROTARYWHEEL.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_ROTARYWHEEL;
        }
        else if (arg == ".RUNAROUNDCOILLOOP.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_RUNAROUNDCOILLOOP;
        }
        else if (arg == ".HEATPIPE.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_HEATPIPE;
        }
        else if (arg == ".TWINTOWERENTHALPYRECOVERYLOOPS.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_TWINTOWERENTHALPYRECOVERYLOOPS;
        }
        else if (arg == ".THERMOSIPHONSEALEDTUBEHEATEXCHANGERS.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS;
        }
        else if (arg == ".THERMOSIPHONCOILTYPEHEATEXCHANGERS.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONCOILTYPEHEATEXCHANGERS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAirToAirHeatRecoveryType::copy(const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAirToAirHeatRecoveryType::s_type("IfcAirToAirHeatRecoveryType");
