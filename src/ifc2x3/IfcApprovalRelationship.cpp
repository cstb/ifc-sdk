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

#include "ifc2x3/IfcApprovalRelationship.h"

#include "ifc2x3/CopyOp.h"
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

IfcApprovalRelationship::IfcApprovalRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatedApproval = NULL;
    m_relatingApproval = NULL;
    m_description = Step::getUnset(m_description);
    m_name = Step::getUnset(m_name);
}

IfcApprovalRelationship::~IfcApprovalRelationship() {
}

bool IfcApprovalRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcApprovalRelationship(this);
}

const std::string &IfcApprovalRelationship::type() {
    return IfcApprovalRelationship::s_type.getName();
}

Step::ClassType IfcApprovalRelationship::getClassType() {
    return IfcApprovalRelationship::s_type;
}

Step::ClassType IfcApprovalRelationship::getType() const {
    return IfcApprovalRelationship::s_type;
}

bool IfcApprovalRelationship::isOfType(Step::ClassType t) {
    return IfcApprovalRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcApproval *IfcApprovalRelationship::getRelatedApproval() {
    if (Step::BaseObject::inited()) {
        return m_relatedApproval.get();
    }
    else {
        return NULL;
    }
}

void IfcApprovalRelationship::setRelatedApproval(const Step::RefPtr< IfcApproval > &value) {
    m_relatedApproval = value;
    m_relatedApproval->m_isRelatedWith.insert(this);
}

IfcApproval *IfcApprovalRelationship::getRelatingApproval() {
    if (Step::BaseObject::inited()) {
        return m_relatingApproval.get();
    }
    else {
        return NULL;
    }
}

void IfcApprovalRelationship::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
    m_relatingApproval = value;
    m_relatingApproval->m_relates.insert(this);
}

IfcText IfcApprovalRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcApprovalRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

IfcLabel IfcApprovalRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcApprovalRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcApprovalRelationship::release() {
    m_relatedApproval.release();
    m_relatingApproval.release();
}

bool IfcApprovalRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedApproval = NULL;
    }
    else {
        m_relatedApproval = static_cast< IfcApproval * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingApproval = NULL;
    }
    else {
        m_relatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    return true;
}

void IfcApprovalRelationship::copy(const IfcApprovalRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRelatedApproval(copyop(obj.m_relatedApproval.get()));
    setRelatingApproval(copyop(obj.m_relatingApproval.get()));
    setDescription(obj.m_description);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcApprovalRelationship::s_type("IfcApprovalRelationship");
