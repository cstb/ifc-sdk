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

#include "ifc2x3/IfcApplication.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOrganization.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcApplication::IfcApplication(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_applicationDeveloper = NULL;
    m_version = Step::getUnset(m_version);
    m_applicationFullName = Step::getUnset(m_applicationFullName);
    m_applicationIdentifier = Step::getUnset(m_applicationIdentifier);
}

IfcApplication::~IfcApplication() {
}

bool IfcApplication::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcApplication(this);
}

const std::string &IfcApplication::type() {
    return IfcApplication::s_type.getName();
}

Step::ClassType IfcApplication::getClassType() {
    return IfcApplication::s_type;
}

Step::ClassType IfcApplication::getType() const {
    return IfcApplication::s_type;
}

bool IfcApplication::isOfType(Step::ClassType t) {
    return IfcApplication::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcOrganization *IfcApplication::getApplicationDeveloper() {
    if (Step::BaseObject::inited()) {
        return m_applicationDeveloper.get();
    }
    else {
        return NULL;
    }
}

void IfcApplication::setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value) {
    m_applicationDeveloper = value;
}

IfcLabel IfcApplication::getVersion() {
    if (Step::BaseObject::inited()) {
        return m_version;
    }
    else {
        return Step::getUnset(m_version);
    }
}

void IfcApplication::setVersion(const IfcLabel &value) {
    m_version = value;
}

IfcLabel IfcApplication::getApplicationFullName() {
    if (Step::BaseObject::inited()) {
        return m_applicationFullName;
    }
    else {
        return Step::getUnset(m_applicationFullName);
    }
}

void IfcApplication::setApplicationFullName(const IfcLabel &value) {
    m_applicationFullName = value;
}

IfcIdentifier IfcApplication::getApplicationIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_applicationIdentifier;
    }
    else {
        return Step::getUnset(m_applicationIdentifier);
    }
}

void IfcApplication::setApplicationIdentifier(const IfcIdentifier &value) {
    m_applicationIdentifier = value;
}

void IfcApplication::release() {
    m_applicationDeveloper.release();
}

bool IfcApplication::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicationDeveloper = NULL;
    }
    else {
        m_applicationDeveloper = static_cast< IfcOrganization * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_version = Step::getUnset(m_version);
    }
    else {
        m_version = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicationFullName = Step::getUnset(m_applicationFullName);
    }
    else {
        m_applicationFullName = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicationIdentifier = Step::getUnset(m_applicationIdentifier);
    }
    else {
        m_applicationIdentifier = Step::spfToString(arg);
    }
    return true;
}

void IfcApplication::copy(const IfcApplication &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setApplicationDeveloper(copyop(obj.m_applicationDeveloper.get()));
    setVersion(obj.m_version);
    setApplicationFullName(obj.m_applicationFullName);
    setApplicationIdentifier(obj.m_applicationIdentifier);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcApplication::s_type("IfcApplication");
