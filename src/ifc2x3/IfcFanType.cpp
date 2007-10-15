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

#include "ifc2x3/IfcFanType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowMovingDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFanType::IfcFanType(Step::Id id, Step::SPFData *args) : IfcFlowMovingDeviceType(id, args) {
    m_predefinedType = IfcFanTypeEnum_UNSET;
}

IfcFanType::~IfcFanType() {
}

bool IfcFanType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFanType(this);
}

const std::string &IfcFanType::type() {
    return IfcFanType::s_type.getName();
}

Step::ClassType IfcFanType::getClassType() {
    return IfcFanType::s_type;
}

Step::ClassType IfcFanType::getType() const {
    return IfcFanType::s_type;
}

bool IfcFanType::isOfType(Step::ClassType t) {
    return IfcFanType::s_type == t ? true : IfcFlowMovingDeviceType::isOfType(t);
}

IfcFanTypeEnum IfcFanType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFanTypeEnum_UNSET;
    }
}

void IfcFanType::setPredefinedType(IfcFanTypeEnum value) {
    m_predefinedType = value;
}

void IfcFanType::release() {
    IfcFlowMovingDeviceType::release();
}

bool IfcFanType::init() {
    bool status = IfcFlowMovingDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFanTypeEnum_UNSET;
    }
    else {
        if (arg == ".CENTRIFUGALFORWARDCURVED.") {
            m_predefinedType = IfcFanTypeEnum_CENTRIFUGALFORWARDCURVED;
        }
        else if (arg == ".CENTRIFUGALRADIAL.") {
            m_predefinedType = IfcFanTypeEnum_CENTRIFUGALRADIAL;
        }
        else if (arg == ".CENTRIFUGALBACKWARDINCLINEDCURVED.") {
            m_predefinedType = IfcFanTypeEnum_CENTRIFUGALBACKWARDINCLINEDCURVED;
        }
        else if (arg == ".CENTRIFUGALAIRFOIL.") {
            m_predefinedType = IfcFanTypeEnum_CENTRIFUGALAIRFOIL;
        }
        else if (arg == ".TUBEAXIAL.") {
            m_predefinedType = IfcFanTypeEnum_TUBEAXIAL;
        }
        else if (arg == ".VANEAXIAL.") {
            m_predefinedType = IfcFanTypeEnum_VANEAXIAL;
        }
        else if (arg == ".PROPELLORAXIAL.") {
            m_predefinedType = IfcFanTypeEnum_PROPELLORAXIAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFanTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFanTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFanType::copy(const IfcFanType &obj, const CopyOp &copyop) {
    IfcFlowMovingDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFanType::s_type("IfcFanType");
