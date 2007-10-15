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

#include "ifc2x3/IfcControllerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionControlElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcControllerType::IfcControllerType(Step::Id id, Step::SPFData *args) : IfcDistributionControlElementType(id, args) {
    m_predefinedType = IfcControllerTypeEnum_UNSET;
}

IfcControllerType::~IfcControllerType() {
}

bool IfcControllerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcControllerType(this);
}

const std::string &IfcControllerType::type() {
    return IfcControllerType::s_type.getName();
}

Step::ClassType IfcControllerType::getClassType() {
    return IfcControllerType::s_type;
}

Step::ClassType IfcControllerType::getType() const {
    return IfcControllerType::s_type;
}

bool IfcControllerType::isOfType(Step::ClassType t) {
    return IfcControllerType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcControllerTypeEnum IfcControllerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcControllerTypeEnum_UNSET;
    }
}

void IfcControllerType::setPredefinedType(IfcControllerTypeEnum value) {
    m_predefinedType = value;
}

void IfcControllerType::release() {
    IfcDistributionControlElementType::release();
}

bool IfcControllerType::init() {
    bool status = IfcDistributionControlElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcControllerTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLOATING.") {
            m_predefinedType = IfcControllerTypeEnum_FLOATING;
        }
        else if (arg == ".PROPORTIONAL.") {
            m_predefinedType = IfcControllerTypeEnum_PROPORTIONAL;
        }
        else if (arg == ".PROPORTIONALINTEGRAL.") {
            m_predefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRAL;
        }
        else if (arg == ".PROPORTIONALINTEGRALDERIVATIVE.") {
            m_predefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRALDERIVATIVE;
        }
        else if (arg == ".TIMEDTWOPOSITION.") {
            m_predefinedType = IfcControllerTypeEnum_TIMEDTWOPOSITION;
        }
        else if (arg == ".TWOPOSITION.") {
            m_predefinedType = IfcControllerTypeEnum_TWOPOSITION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcControllerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcControllerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcControllerType::copy(const IfcControllerType &obj, const CopyOp &copyop) {
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcControllerType::s_type("IfcControllerType");
