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

#include "ifc2x3/IfcOccupant.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActor.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcOccupant::IfcOccupant(Step::Id id, Step::SPFData *args) : IfcActor(id, args) {
    m_predefinedType = IfcOccupantTypeEnum_UNSET;
}

IfcOccupant::~IfcOccupant() {
}

bool IfcOccupant::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOccupant(this);
}

const std::string &IfcOccupant::type() {
    return IfcOccupant::s_type.getName();
}

Step::ClassType IfcOccupant::getClassType() {
    return IfcOccupant::s_type;
}

Step::ClassType IfcOccupant::getType() const {
    return IfcOccupant::s_type;
}

bool IfcOccupant::isOfType(Step::ClassType t) {
    return IfcOccupant::s_type == t ? true : IfcActor::isOfType(t);
}

IfcOccupantTypeEnum IfcOccupant::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcOccupantTypeEnum_UNSET;
    }
}

void IfcOccupant::setPredefinedType(IfcOccupantTypeEnum value) {
    m_predefinedType = value;
}

void IfcOccupant::release() {
    IfcActor::release();
}

bool IfcOccupant::init() {
    bool status = IfcActor::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcOccupantTypeEnum_UNSET;
    }
    else {
        if (arg == ".ASSIGNEE.") {
            m_predefinedType = IfcOccupantTypeEnum_ASSIGNEE;
        }
        else if (arg == ".ASSIGNOR.") {
            m_predefinedType = IfcOccupantTypeEnum_ASSIGNOR;
        }
        else if (arg == ".LESSEE.") {
            m_predefinedType = IfcOccupantTypeEnum_LESSEE;
        }
        else if (arg == ".LESSOR.") {
            m_predefinedType = IfcOccupantTypeEnum_LESSOR;
        }
        else if (arg == ".LETTINGAGENT.") {
            m_predefinedType = IfcOccupantTypeEnum_LETTINGAGENT;
        }
        else if (arg == ".OWNER.") {
            m_predefinedType = IfcOccupantTypeEnum_OWNER;
        }
        else if (arg == ".TENANT.") {
            m_predefinedType = IfcOccupantTypeEnum_TENANT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcOccupantTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcOccupantTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcOccupant::copy(const IfcOccupant &obj, const CopyOp &copyop) {
    IfcActor::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOccupant::s_type("IfcOccupant");
