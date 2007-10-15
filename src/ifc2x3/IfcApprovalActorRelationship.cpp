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

#include "ifc2x3/IfcApprovalActorRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorRole.h"
#include "ifc2x3/IfcActorSelect.h"
#include "ifc2x3/IfcApproval.h"
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

IfcApprovalActorRelationship::IfcApprovalActorRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_actor = NULL;
    m_approval = NULL;
    m_role = NULL;
}

IfcApprovalActorRelationship::~IfcApprovalActorRelationship() {
}

bool IfcApprovalActorRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcApprovalActorRelationship(this);
}

const std::string &IfcApprovalActorRelationship::type() {
    return IfcApprovalActorRelationship::s_type.getName();
}

Step::ClassType IfcApprovalActorRelationship::getClassType() {
    return IfcApprovalActorRelationship::s_type;
}

Step::ClassType IfcApprovalActorRelationship::getType() const {
    return IfcApprovalActorRelationship::s_type;
}

bool IfcApprovalActorRelationship::isOfType(Step::ClassType t) {
    return IfcApprovalActorRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcActorSelect *IfcApprovalActorRelationship::getActor() {
    if (Step::BaseObject::inited()) {
        return m_actor.get();
    }
    else {
        return NULL;
    }
}

void IfcApprovalActorRelationship::setActor(const Step::RefPtr< IfcActorSelect > &value) {
    m_actor = value;
}

IfcApproval *IfcApprovalActorRelationship::getApproval() {
    if (Step::BaseObject::inited()) {
        return m_approval.get();
    }
    else {
        return NULL;
    }
}

void IfcApprovalActorRelationship::setApproval(const Step::RefPtr< IfcApproval > &value) {
    m_approval = value;
    m_approval->m_actors.insert(this);
}

IfcActorRole *IfcApprovalActorRelationship::getRole() {
    if (Step::BaseObject::inited()) {
        return m_role.get();
    }
    else {
        return NULL;
    }
}

void IfcApprovalActorRelationship::setRole(const Step::RefPtr< IfcActorRole > &value) {
    m_role = value;
}

void IfcApprovalActorRelationship::release() {
    m_approval.release();
    m_role.release();
}

bool IfcApprovalActorRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actor = NULL;
    }
    else {
        m_actor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_actor->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approval = NULL;
    }
    else {
        m_approval = static_cast< IfcApproval * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_role = NULL;
    }
    else {
        m_role = static_cast< IfcActorRole * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcApprovalActorRelationship::copy(const IfcApprovalActorRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    m_actor = new IfcActorSelect;
    m_actor->copy(*(obj.m_actor.get()), copyop);
    setApproval(copyop(obj.m_approval.get()));
    setRole(copyop(obj.m_role.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcApprovalActorRelationship::s_type("IfcApprovalActorRelationship");
