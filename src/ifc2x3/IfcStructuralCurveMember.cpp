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

#include "ifc2x3/IfcStructuralCurveMember.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralMember.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralCurveMember::IfcStructuralCurveMember(Step::Id id, Step::SPFData *args) : IfcStructuralMember(id, args) {
    m_predefinedType = IfcStructuralCurveTypeEnum_UNSET;
}

IfcStructuralCurveMember::~IfcStructuralCurveMember() {
}

bool IfcStructuralCurveMember::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralCurveMember(this);
}

const std::string &IfcStructuralCurveMember::type() {
    return IfcStructuralCurveMember::s_type.getName();
}

Step::ClassType IfcStructuralCurveMember::getClassType() {
    return IfcStructuralCurveMember::s_type;
}

Step::ClassType IfcStructuralCurveMember::getType() const {
    return IfcStructuralCurveMember::s_type;
}

bool IfcStructuralCurveMember::isOfType(Step::ClassType t) {
    return IfcStructuralCurveMember::s_type == t ? true : IfcStructuralMember::isOfType(t);
}

IfcStructuralCurveTypeEnum IfcStructuralCurveMember::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcStructuralCurveTypeEnum_UNSET;
    }
}

void IfcStructuralCurveMember::setPredefinedType(IfcStructuralCurveTypeEnum value) {
    m_predefinedType = value;
}

void IfcStructuralCurveMember::release() {
    IfcStructuralMember::release();
}

bool IfcStructuralCurveMember::init() {
    bool status = IfcStructuralMember::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcStructuralCurveTypeEnum_UNSET;
    }
    else {
        if (arg == ".RIGID_JOINED_MEMBER.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_RIGID_JOINED_MEMBER;
        }
        else if (arg == ".PIN_JOINED_MEMBER.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_PIN_JOINED_MEMBER;
        }
        else if (arg == ".CABLE.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_CABLE;
        }
        else if (arg == ".TENSION_MEMBER.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_TENSION_MEMBER;
        }
        else if (arg == ".COMPRESSION_MEMBER.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_COMPRESSION_MEMBER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcStructuralCurveTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStructuralCurveMember::copy(const IfcStructuralCurveMember &obj, const CopyOp &copyop) {
    IfcStructuralMember::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralCurveMember::s_type("IfcStructuralCurveMember");
