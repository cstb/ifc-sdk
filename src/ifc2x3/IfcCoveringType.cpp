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

#include "ifc2x3/IfcCoveringType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCoveringType::IfcCoveringType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
}

IfcCoveringType::~IfcCoveringType() {
}

bool IfcCoveringType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCoveringType(this);
}

const std::string &IfcCoveringType::type() {
    return IfcCoveringType::s_type.getName();
}

Step::ClassType IfcCoveringType::getClassType() {
    return IfcCoveringType::s_type;
}

Step::ClassType IfcCoveringType::getType() const {
    return IfcCoveringType::s_type;
}

bool IfcCoveringType::isOfType(Step::ClassType t) {
    return IfcCoveringType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcCoveringTypeEnum IfcCoveringType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCoveringTypeEnum_UNSET;
    }
}

void IfcCoveringType::setPredefinedType(IfcCoveringTypeEnum value) {
    m_predefinedType = value;
}

void IfcCoveringType::release() {
    IfcBuildingElementType::release();
}

bool IfcCoveringType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCoveringTypeEnum_UNSET;
    }
    else {
        if (arg == ".CEILING.") {
            m_predefinedType = IfcCoveringTypeEnum_CEILING;
        }
        else if (arg == ".FLOORING.") {
            m_predefinedType = IfcCoveringTypeEnum_FLOORING;
        }
        else if (arg == ".CLADDING.") {
            m_predefinedType = IfcCoveringTypeEnum_CLADDING;
        }
        else if (arg == ".ROOFING.") {
            m_predefinedType = IfcCoveringTypeEnum_ROOFING;
        }
        else if (arg == ".INSULATION.") {
            m_predefinedType = IfcCoveringTypeEnum_INSULATION;
        }
        else if (arg == ".MEMBRANE.") {
            m_predefinedType = IfcCoveringTypeEnum_MEMBRANE;
        }
        else if (arg == ".SLEEVING.") {
            m_predefinedType = IfcCoveringTypeEnum_SLEEVING;
        }
        else if (arg == ".WRAPPING.") {
            m_predefinedType = IfcCoveringTypeEnum_WRAPPING;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCoveringTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCoveringTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCoveringType::copy(const IfcCoveringType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCoveringType::s_type("IfcCoveringType");
