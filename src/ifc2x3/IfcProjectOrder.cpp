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

#include "ifc2x3/IfcProjectOrder.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProjectOrder::IfcProjectOrder(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_iD = Step::getUnset(m_iD);
    m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
    m_status = Step::getUnset(m_status);
}

IfcProjectOrder::~IfcProjectOrder() {
}

bool IfcProjectOrder::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProjectOrder(this);
}

const std::string &IfcProjectOrder::type() {
    return IfcProjectOrder::s_type.getName();
}

Step::ClassType IfcProjectOrder::getClassType() {
    return IfcProjectOrder::s_type;
}

Step::ClassType IfcProjectOrder::getType() const {
    return IfcProjectOrder::s_type;
}

bool IfcProjectOrder::isOfType(Step::ClassType t) {
    return IfcProjectOrder::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcProjectOrder::getID() {
    if (Step::BaseObject::inited()) {
        return m_iD;
    }
    else {
        return Step::getUnset(m_iD);
    }
}

void IfcProjectOrder::setID(const IfcIdentifier &value) {
    m_iD = value;
}

IfcProjectOrderTypeEnum IfcProjectOrder::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcProjectOrderTypeEnum_UNSET;
    }
}

void IfcProjectOrder::setPredefinedType(IfcProjectOrderTypeEnum value) {
    m_predefinedType = value;
}

IfcLabel IfcProjectOrder::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return Step::getUnset(m_status);
    }
}

void IfcProjectOrder::setStatus(const IfcLabel &value) {
    m_status = value;
}

void IfcProjectOrder::release() {
    IfcControl::release();
}

bool IfcProjectOrder::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_iD = Step::getUnset(m_iD);
    }
    else {
        m_iD = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
    }
    else {
        if (arg == ".CHANGEORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_CHANGEORDER;
        }
        else if (arg == ".MAINTENANCEWORKORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_MAINTENANCEWORKORDER;
        }
        else if (arg == ".MOVEORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_MOVEORDER;
        }
        else if (arg == ".PURCHASEORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_PURCHASEORDER;
        }
        else if (arg == ".WORKORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_WORKORDER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcProjectOrderTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcProjectOrderTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_status = Step::getUnset(m_status);
    }
    else {
        m_status = Step::spfToString(arg);
    }
    return true;
}

void IfcProjectOrder::copy(const IfcProjectOrder &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setID(obj.m_iD);
    setPredefinedType(obj.m_predefinedType);
    setStatus(obj.m_status);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectOrder::s_type("IfcProjectOrder");
