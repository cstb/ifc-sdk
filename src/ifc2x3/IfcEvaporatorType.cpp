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

#include "ifc2x3/IfcEvaporatorType.h"

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

IfcEvaporatorType::IfcEvaporatorType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcEvaporatorTypeEnum_UNSET;
}

IfcEvaporatorType::~IfcEvaporatorType() {
}

bool IfcEvaporatorType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEvaporatorType(this);
}

const std::string &IfcEvaporatorType::type() {
    return IfcEvaporatorType::s_type.getName();
}

Step::ClassType IfcEvaporatorType::getClassType() {
    return IfcEvaporatorType::s_type;
}

Step::ClassType IfcEvaporatorType::getType() const {
    return IfcEvaporatorType::s_type;
}

bool IfcEvaporatorType::isOfType(Step::ClassType t) {
    return IfcEvaporatorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcEvaporatorTypeEnum IfcEvaporatorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcEvaporatorTypeEnum_UNSET;
    }
}

void IfcEvaporatorType::setPredefinedType(IfcEvaporatorTypeEnum value) {
    m_predefinedType = value;
}

void IfcEvaporatorType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcEvaporatorType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcEvaporatorTypeEnum_UNSET;
    }
    else {
        if (arg == ".DIRECTEXPANSIONSHELLANDTUBE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONSHELLANDTUBE;
        }
        else if (arg == ".DIRECTEXPANSIONTUBEINTUBE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONTUBEINTUBE;
        }
        else if (arg == ".DIRECTEXPANSIONBRAZEDPLATE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONBRAZEDPLATE;
        }
        else if (arg == ".FLOODEDSHELLANDTUBE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_FLOODEDSHELLANDTUBE;
        }
        else if (arg == ".SHELLANDCOIL.") {
            m_predefinedType = IfcEvaporatorTypeEnum_SHELLANDCOIL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcEvaporatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcEvaporatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcEvaporatorType::copy(const IfcEvaporatorType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEvaporatorType::s_type("IfcEvaporatorType");
