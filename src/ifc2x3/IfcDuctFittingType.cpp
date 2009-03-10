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

#include "ifc2x3/IfcDuctFittingType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDuctFittingType::IfcDuctFittingType(Step::Id id, Step::SPFData *args) : IfcFlowFittingType(id, args) {
    m_predefinedType = IfcDuctFittingTypeEnum_UNSET;
}

IfcDuctFittingType::~IfcDuctFittingType() {
}

bool IfcDuctFittingType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDuctFittingType(this);
}

const std::string &IfcDuctFittingType::type() const {
    return IfcDuctFittingType::s_type.getName();
}

const Step::ClassType &IfcDuctFittingType::getClassType() {
    return IfcDuctFittingType::s_type;
}

const Step::ClassType &IfcDuctFittingType::getType() const {
    return IfcDuctFittingType::s_type;
}

bool IfcDuctFittingType::isOfType(const Step::ClassType &t) const {
    return IfcDuctFittingType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcDuctFittingTypeEnum IfcDuctFittingType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDuctFittingTypeEnum_UNSET;
    }
}

const IfcDuctFittingTypeEnum IfcDuctFittingType::getPredefinedType() const {
    IfcDuctFittingType * deConstObject = const_cast< IfcDuctFittingType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcDuctFittingType::setPredefinedType(IfcDuctFittingTypeEnum value) {
    m_predefinedType = value;
}

bool IfcDuctFittingType::init() {
    bool status = IfcFlowFittingType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDuctFittingTypeEnum_UNSET;
    }
    else {
        if (arg == ".BEND.") {
            m_predefinedType = IfcDuctFittingTypeEnum_BEND;
        }
        else if (arg == ".CONNECTOR.") {
            m_predefinedType = IfcDuctFittingTypeEnum_CONNECTOR;
        }
        else if (arg == ".ENTRY.") {
            m_predefinedType = IfcDuctFittingTypeEnum_ENTRY;
        }
        else if (arg == ".EXIT.") {
            m_predefinedType = IfcDuctFittingTypeEnum_EXIT;
        }
        else if (arg == ".JUNCTION.") {
            m_predefinedType = IfcDuctFittingTypeEnum_JUNCTION;
        }
        else if (arg == ".OBSTRUCTION.") {
            m_predefinedType = IfcDuctFittingTypeEnum_OBSTRUCTION;
        }
        else if (arg == ".TRANSITION.") {
            m_predefinedType = IfcDuctFittingTypeEnum_TRANSITION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDuctFittingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDuctFittingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDuctFittingType::copy(const IfcDuctFittingType &obj, const CopyOp &copyop) {
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDuctFittingType::s_type("IfcDuctFittingType");
