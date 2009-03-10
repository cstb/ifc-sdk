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

#include "ifc2x3/IfcProcedure.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProcess.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProcedure::IfcProcedure(Step::Id id, Step::SPFData *args) : IfcProcess(id, args) {
    m_procedureID = Step::getUnset(m_procedureID);
    m_procedureType = IfcProcedureTypeEnum_UNSET;
    m_userDefinedProcedureType = Step::getUnset(m_userDefinedProcedureType);
}

IfcProcedure::~IfcProcedure() {
}

bool IfcProcedure::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProcedure(this);
}

const std::string &IfcProcedure::type() const {
    return IfcProcedure::s_type.getName();
}

const Step::ClassType &IfcProcedure::getClassType() {
    return IfcProcedure::s_type;
}

const Step::ClassType &IfcProcedure::getType() const {
    return IfcProcedure::s_type;
}

bool IfcProcedure::isOfType(const Step::ClassType &t) const {
    return IfcProcedure::s_type == t ? true : IfcProcess::isOfType(t);
}

IfcIdentifier IfcProcedure::getProcedureID() {
    if (Step::BaseObject::inited()) {
        return m_procedureID;
    }
    else {
        return Step::getUnset(m_procedureID);
    }
}

const IfcIdentifier IfcProcedure::getProcedureID() const {
    IfcProcedure * deConstObject = const_cast< IfcProcedure * > (this);
    return deConstObject->getProcedureID();
}

void IfcProcedure::setProcedureID(const IfcIdentifier &value) {
    m_procedureID = value;
}

IfcProcedureTypeEnum IfcProcedure::getProcedureType() {
    if (Step::BaseObject::inited()) {
        return m_procedureType;
    }
    else {
        return IfcProcedureTypeEnum_UNSET;
    }
}

const IfcProcedureTypeEnum IfcProcedure::getProcedureType() const {
    IfcProcedure * deConstObject = const_cast< IfcProcedure * > (this);
    return deConstObject->getProcedureType();
}

void IfcProcedure::setProcedureType(IfcProcedureTypeEnum value) {
    m_procedureType = value;
}

IfcLabel IfcProcedure::getUserDefinedProcedureType() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedProcedureType;
    }
    else {
        return Step::getUnset(m_userDefinedProcedureType);
    }
}

const IfcLabel IfcProcedure::getUserDefinedProcedureType() const {
    IfcProcedure * deConstObject = const_cast< IfcProcedure * > (this);
    return deConstObject->getUserDefinedProcedureType();
}

void IfcProcedure::setUserDefinedProcedureType(const IfcLabel &value) {
    m_userDefinedProcedureType = value;
}

bool IfcProcedure::init() {
    bool status = IfcProcess::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_procedureID = Step::getUnset(m_procedureID);
    }
    else {
        m_procedureID = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_procedureType = IfcProcedureTypeEnum_UNSET;
    }
    else {
        if (arg == ".ADVICE_CAUTION.") {
            m_procedureType = IfcProcedureTypeEnum_ADVICE_CAUTION;
        }
        else if (arg == ".ADVICE_NOTE.") {
            m_procedureType = IfcProcedureTypeEnum_ADVICE_NOTE;
        }
        else if (arg == ".ADVICE_WARNING.") {
            m_procedureType = IfcProcedureTypeEnum_ADVICE_WARNING;
        }
        else if (arg == ".CALIBRATION.") {
            m_procedureType = IfcProcedureTypeEnum_CALIBRATION;
        }
        else if (arg == ".DIAGNOSTIC.") {
            m_procedureType = IfcProcedureTypeEnum_DIAGNOSTIC;
        }
        else if (arg == ".SHUTDOWN.") {
            m_procedureType = IfcProcedureTypeEnum_SHUTDOWN;
        }
        else if (arg == ".STARTUP.") {
            m_procedureType = IfcProcedureTypeEnum_STARTUP;
        }
        else if (arg == ".USERDEFINED.") {
            m_procedureType = IfcProcedureTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_procedureType = IfcProcedureTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedProcedureType = Step::getUnset(m_userDefinedProcedureType);
    }
    else {
        m_userDefinedProcedureType = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcProcedure::copy(const IfcProcedure &obj, const CopyOp &copyop) {
    IfcProcess::copy(obj, copyop);
    setProcedureID(obj.m_procedureID);
    setProcedureType(obj.m_procedureType);
    setUserDefinedProcedureType(obj.m_userDefinedProcedureType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProcedure::s_type("IfcProcedure");
