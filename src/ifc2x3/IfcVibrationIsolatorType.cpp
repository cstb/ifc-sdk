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

#include "ifc2x3/IfcVibrationIsolatorType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDiscreteAccessoryType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcVibrationIsolatorType::IfcVibrationIsolatorType(Step::Id id, Step::SPFData *args) : IfcDiscreteAccessoryType(id, args) {
    m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
}

IfcVibrationIsolatorType::~IfcVibrationIsolatorType() {
}

bool IfcVibrationIsolatorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVibrationIsolatorType(this);
}

const std::string &IfcVibrationIsolatorType::type() const {
    return IfcVibrationIsolatorType::s_type.getName();
}

const Step::ClassType &IfcVibrationIsolatorType::getClassType() {
    return IfcVibrationIsolatorType::s_type;
}

const Step::ClassType &IfcVibrationIsolatorType::getType() const {
    return IfcVibrationIsolatorType::s_type;
}

bool IfcVibrationIsolatorType::isOfType(const Step::ClassType &t) const {
    return IfcVibrationIsolatorType::s_type == t ? true : IfcDiscreteAccessoryType::isOfType(t);
}

IfcVibrationIsolatorTypeEnum IfcVibrationIsolatorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcVibrationIsolatorTypeEnum_UNSET;
    }
}

const IfcVibrationIsolatorTypeEnum IfcVibrationIsolatorType::getPredefinedType() const {
    IfcVibrationIsolatorType * deConstObject = const_cast< IfcVibrationIsolatorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcVibrationIsolatorType::setPredefinedType(IfcVibrationIsolatorTypeEnum value) {
    m_predefinedType = value;
}

bool IfcVibrationIsolatorType::init() {
    bool status = IfcDiscreteAccessoryType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
    }
    else {
        if (arg == ".COMPRESSION.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_COMPRESSION;
        }
        else if (arg == ".SPRING.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_SPRING;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcVibrationIsolatorType::copy(const IfcVibrationIsolatorType &obj, const CopyOp &copyop) {
    IfcDiscreteAccessoryType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVibrationIsolatorType::s_type("IfcVibrationIsolatorType");
