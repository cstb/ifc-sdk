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

#include "ifc2x3/IfcEvaporativeCoolerType.h"

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

IfcEvaporativeCoolerType::IfcEvaporativeCoolerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
}

IfcEvaporativeCoolerType::~IfcEvaporativeCoolerType() {
}

bool IfcEvaporativeCoolerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEvaporativeCoolerType(this);
}

const std::string &IfcEvaporativeCoolerType::type() {
    return IfcEvaporativeCoolerType::s_type.getName();
}

Step::ClassType IfcEvaporativeCoolerType::getClassType() {
    return IfcEvaporativeCoolerType::s_type;
}

Step::ClassType IfcEvaporativeCoolerType::getType() const {
    return IfcEvaporativeCoolerType::s_type;
}

bool IfcEvaporativeCoolerType::isOfType(Step::ClassType t) {
    return IfcEvaporativeCoolerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcEvaporativeCoolerTypeEnum IfcEvaporativeCoolerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcEvaporativeCoolerTypeEnum_UNSET;
    }
}

void IfcEvaporativeCoolerType::setPredefinedType(IfcEvaporativeCoolerTypeEnum value) {
    m_predefinedType = value;
}

void IfcEvaporativeCoolerType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcEvaporativeCoolerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
    }
    else {
        if (arg == ".DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVEAIRWASHER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEAIRWASHER;
        }
        else if (arg == ".INDIRECTEVAPORATIVEPACKAGEAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEPACKAGEAIRCOOLER;
        }
        else if (arg == ".INDIRECTEVAPORATIVEWETCOIL.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEWETCOIL;
        }
        else if (arg == ".INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER;
        }
        else if (arg == ".INDIRECTDIRECTCOMBINATION.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTDIRECTCOMBINATION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcEvaporativeCoolerType::copy(const IfcEvaporativeCoolerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEvaporativeCoolerType::s_type("IfcEvaporativeCoolerType");
