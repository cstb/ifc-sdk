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

#include "ifc2x3/IfcRoot.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcOwnerHistory.h"
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

IfcRoot::IfcRoot(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_globalId = Step::getUnset(m_globalId);
    m_ownerHistory = NULL;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcRoot::~IfcRoot() {
}

bool IfcRoot::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRoot(this);
}

const std::string &IfcRoot::type() {
    return IfcRoot::s_type.getName();
}

Step::ClassType IfcRoot::getClassType() {
    return IfcRoot::s_type;
}

Step::ClassType IfcRoot::getType() const {
    return IfcRoot::s_type;
}

bool IfcRoot::isOfType(Step::ClassType t) {
    return IfcRoot::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcGloballyUniqueId IfcRoot::getGlobalId() {
    if (Step::BaseObject::inited()) {
        return m_globalId;
    }
    else {
        return Step::getUnset(m_globalId);
    }
}

void IfcRoot::setGlobalId(const IfcGloballyUniqueId &value) {
    m_globalId = value;
}

IfcOwnerHistory *IfcRoot::getOwnerHistory() {
    if (Step::BaseObject::inited()) {
        return m_ownerHistory.get();
    }
    else {
        return NULL;
    }
}

void IfcRoot::setOwnerHistory(const Step::RefPtr< IfcOwnerHistory > &value) {
    m_ownerHistory = value;
}

IfcLabel IfcRoot::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcRoot::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcRoot::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcRoot::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcRoot::release() {
    m_ownerHistory.release();
}

bool IfcRoot::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_globalId = Step::getUnset(m_globalId);
    }
    else {
        m_globalId = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ownerHistory = NULL;
    }
    else {
        m_ownerHistory = static_cast< IfcOwnerHistory * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    return true;
}

void IfcRoot::copy(const IfcRoot &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setGlobalId(obj.m_globalId);
    setOwnerHistory(copyop(obj.m_ownerHistory.get()));
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRoot::s_type("IfcRoot");
