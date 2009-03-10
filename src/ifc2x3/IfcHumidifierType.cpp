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

#include "ifc2x3/IfcHumidifierType.h"

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

IfcHumidifierType::IfcHumidifierType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcHumidifierTypeEnum_UNSET;
}

IfcHumidifierType::~IfcHumidifierType() {
}

bool IfcHumidifierType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcHumidifierType(this);
}

const std::string &IfcHumidifierType::type() const {
    return IfcHumidifierType::s_type.getName();
}

const Step::ClassType &IfcHumidifierType::getClassType() {
    return IfcHumidifierType::s_type;
}

const Step::ClassType &IfcHumidifierType::getType() const {
    return IfcHumidifierType::s_type;
}

bool IfcHumidifierType::isOfType(const Step::ClassType &t) const {
    return IfcHumidifierType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcHumidifierTypeEnum IfcHumidifierType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcHumidifierTypeEnum_UNSET;
    }
}

const IfcHumidifierTypeEnum IfcHumidifierType::getPredefinedType() const {
    IfcHumidifierType * deConstObject = const_cast< IfcHumidifierType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcHumidifierType::setPredefinedType(IfcHumidifierTypeEnum value) {
    m_predefinedType = value;
}

bool IfcHumidifierType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcHumidifierTypeEnum_UNSET;
    }
    else {
        if (arg == ".STEAMINJECTION.") {
            m_predefinedType = IfcHumidifierTypeEnum_STEAMINJECTION;
        }
        else if (arg == ".ADIABATICAIRWASHER.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICAIRWASHER;
        }
        else if (arg == ".ADIABATICPAN.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICPAN;
        }
        else if (arg == ".ADIABATICWETTEDELEMENT.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICWETTEDELEMENT;
        }
        else if (arg == ".ADIABATICATOMIZING.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICATOMIZING;
        }
        else if (arg == ".ADIABATICULTRASONIC.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICULTRASONIC;
        }
        else if (arg == ".ADIABATICRIGIDMEDIA.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICRIGIDMEDIA;
        }
        else if (arg == ".ADIABATICCOMPRESSEDAIRNOZZLE.") {
            m_predefinedType = IfcHumidifierTypeEnum_ADIABATICCOMPRESSEDAIRNOZZLE;
        }
        else if (arg == ".ASSISTEDELECTRIC.") {
            m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDELECTRIC;
        }
        else if (arg == ".ASSISTEDNATURALGAS.") {
            m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDNATURALGAS;
        }
        else if (arg == ".ASSISTEDPROPANE.") {
            m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDPROPANE;
        }
        else if (arg == ".ASSISTEDBUTANE.") {
            m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDBUTANE;
        }
        else if (arg == ".ASSISTEDSTEAM.") {
            m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDSTEAM;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcHumidifierTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcHumidifierTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcHumidifierType::copy(const IfcHumidifierType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcHumidifierType::s_type("IfcHumidifierType");
