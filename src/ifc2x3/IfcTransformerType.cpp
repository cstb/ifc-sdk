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

#include "ifc2x3/IfcTransformerType.h"

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

IfcTransformerType::IfcTransformerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcTransformerTypeEnum_UNSET;
}

IfcTransformerType::~IfcTransformerType() {
}

bool IfcTransformerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTransformerType(this);
}

const std::string &IfcTransformerType::type() {
    return IfcTransformerType::s_type.getName();
}

Step::ClassType IfcTransformerType::getClassType() {
    return IfcTransformerType::s_type;
}

Step::ClassType IfcTransformerType::getType() const {
    return IfcTransformerType::s_type;
}

bool IfcTransformerType::isOfType(Step::ClassType t) {
    return IfcTransformerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcTransformerTypeEnum IfcTransformerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTransformerTypeEnum_UNSET;
    }
}

void IfcTransformerType::setPredefinedType(IfcTransformerTypeEnum value) {
    m_predefinedType = value;
}

void IfcTransformerType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcTransformerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTransformerTypeEnum_UNSET;
    }
    else {
        if (arg == ".CURRENT.") {
            m_predefinedType = IfcTransformerTypeEnum_CURRENT;
        }
        else if (arg == ".FREQUENCY.") {
            m_predefinedType = IfcTransformerTypeEnum_FREQUENCY;
        }
        else if (arg == ".VOLTAGE.") {
            m_predefinedType = IfcTransformerTypeEnum_VOLTAGE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTransformerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTransformerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTransformerType::copy(const IfcTransformerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTransformerType::s_type("IfcTransformerType");
