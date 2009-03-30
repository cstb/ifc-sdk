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

#include "ifc2x3/IfcAlarmType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAlarmType::IfcAlarmType(Step::Id id, Step::SPFData *args) : IfcDistributionControlElementType(id, args) {
    m_predefinedType = IfcAlarmTypeEnum_UNSET;
}

IfcAlarmType::~IfcAlarmType() {
}

bool IfcAlarmType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAlarmType(this);
}

const std::string &IfcAlarmType::type() const {
    return IfcAlarmType::s_type.getName();
}

const Step::ClassType &IfcAlarmType::getClassType() {
    return IfcAlarmType::s_type;
}

const Step::ClassType &IfcAlarmType::getType() const {
    return IfcAlarmType::s_type;
}

bool IfcAlarmType::isOfType(const Step::ClassType &t) const {
    return IfcAlarmType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcAlarmTypeEnum IfcAlarmType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcAlarmTypeEnum_UNSET;
    }
}

const IfcAlarmTypeEnum IfcAlarmType::getPredefinedType() const {
    IfcAlarmType * deConstObject = const_cast< IfcAlarmType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcAlarmType::setPredefinedType(IfcAlarmTypeEnum value) {
    m_predefinedType = value;
}

void IfcAlarmType::unsetPredefinedType() {
    m_predefinedType = IfcAlarmTypeEnum_UNSET;
}

bool IfcAlarmType::testPredefinedType() const {
    return getPredefinedType() != IfcAlarmTypeEnum_UNSET;
}

bool IfcAlarmType::init() {
    bool status = IfcDistributionControlElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcAlarmTypeEnum_UNSET;
    }
    else {
        if (arg == ".BELL.") {
            m_predefinedType = IfcAlarmTypeEnum_BELL;
        }
        else if (arg == ".BREAKGLASSBUTTON.") {
            m_predefinedType = IfcAlarmTypeEnum_BREAKGLASSBUTTON;
        }
        else if (arg == ".LIGHT.") {
            m_predefinedType = IfcAlarmTypeEnum_LIGHT;
        }
        else if (arg == ".MANUALPULLBOX.") {
            m_predefinedType = IfcAlarmTypeEnum_MANUALPULLBOX;
        }
        else if (arg == ".SIREN.") {
            m_predefinedType = IfcAlarmTypeEnum_SIREN;
        }
        else if (arg == ".WHISTLE.") {
            m_predefinedType = IfcAlarmTypeEnum_WHISTLE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcAlarmTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcAlarmTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAlarmType::copy(const IfcAlarmType &obj, const CopyOp &copyop) {
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAlarmType::s_type("IfcAlarmType");
