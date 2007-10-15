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

#include "ifc2x3/IfcApproval.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcApprovalActorRelationship.h"
#include "ifc2x3/IfcApprovalRelationship.h"
#include "ifc2x3/IfcDateTimeSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcApproval::IfcApproval(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_description = Step::getUnset(m_description);
    m_approvalDateTime = NULL;
    m_approvalStatus = Step::getUnset(m_approvalStatus);
    m_approvalLevel = Step::getUnset(m_approvalLevel);
    m_approvalQualifier = Step::getUnset(m_approvalQualifier);
    m_name = Step::getUnset(m_name);
    m_identifier = Step::getUnset(m_identifier);
    m_actors.setUnset(true);
    m_isRelatedWith.setUnset(true);
    m_relates.setUnset(true);
}

IfcApproval::~IfcApproval() {
}

bool IfcApproval::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcApproval(this);
}

const std::string &IfcApproval::type() {
    return IfcApproval::s_type.getName();
}

Step::ClassType IfcApproval::getClassType() {
    return IfcApproval::s_type;
}

Step::ClassType IfcApproval::getType() const {
    return IfcApproval::s_type;
}

bool IfcApproval::isOfType(Step::ClassType t) {
    return IfcApproval::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcText IfcApproval::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcApproval::setDescription(const IfcText &value) {
    m_description = value;
}

IfcDateTimeSelect *IfcApproval::getApprovalDateTime() {
    if (Step::BaseObject::inited()) {
        return m_approvalDateTime.get();
    }
    else {
        return NULL;
    }
}

void IfcApproval::setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_approvalDateTime = value;
}

IfcLabel IfcApproval::getApprovalStatus() {
    if (Step::BaseObject::inited()) {
        return m_approvalStatus;
    }
    else {
        return Step::getUnset(m_approvalStatus);
    }
}

void IfcApproval::setApprovalStatus(const IfcLabel &value) {
    m_approvalStatus = value;
}

IfcLabel IfcApproval::getApprovalLevel() {
    if (Step::BaseObject::inited()) {
        return m_approvalLevel;
    }
    else {
        return Step::getUnset(m_approvalLevel);
    }
}

void IfcApproval::setApprovalLevel(const IfcLabel &value) {
    m_approvalLevel = value;
}

IfcText IfcApproval::getApprovalQualifier() {
    if (Step::BaseObject::inited()) {
        return m_approvalQualifier;
    }
    else {
        return Step::getUnset(m_approvalQualifier);
    }
}

void IfcApproval::setApprovalQualifier(const IfcText &value) {
    m_approvalQualifier = value;
}

IfcLabel IfcApproval::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcApproval::setName(const IfcLabel &value) {
    m_name = value;
}

IfcIdentifier IfcApproval::getIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_identifier;
    }
    else {
        return Step::getUnset(m_identifier);
    }
}

void IfcApproval::setIdentifier(const IfcIdentifier &value) {
    m_identifier = value;
}

Step::Set< Step::ObsPtr< IfcApprovalActorRelationship > > &IfcApproval::getActors() {
    if (Step::BaseObject::inited()) {
        return m_actors;
    }
    else {
        m_actors.setUnset(true);
        return m_actors;
    }
}

Step::Set< Step::ObsPtr< IfcApprovalRelationship > > &IfcApproval::getIsRelatedWith() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedWith;
    }
    else {
        m_isRelatedWith.setUnset(true);
        return m_isRelatedWith;
    }
}

Step::Set< Step::ObsPtr< IfcApprovalRelationship > > &IfcApproval::getRelates() {
    if (Step::BaseObject::inited()) {
        return m_relates;
    }
    else {
        m_relates.setUnset(true);
        return m_relates;
    }
}

void IfcApproval::release() {
}

bool IfcApproval::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvalDateTime = NULL;
    }
    else {
        m_approvalDateTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_approvalDateTime->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_approvalStatus = Step::getUnset(m_approvalStatus);
    }
    else {
        m_approvalStatus = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvalLevel = Step::getUnset(m_approvalLevel);
    }
    else {
        m_approvalLevel = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvalQualifier = Step::getUnset(m_approvalQualifier);
    }
    else {
        m_approvalQualifier = Step::spfToString(arg);
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
        m_identifier = Step::getUnset(m_identifier);
    }
    else {
        m_identifier = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcApprovalActorRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_actors.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_actors.insert(static_cast< IfcApprovalActorRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_isRelatedWith.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedWith.insert(static_cast< IfcApprovalRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_relates.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_relates.insert(static_cast< IfcApprovalRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcApproval::copy(const IfcApproval &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDescription(obj.m_description);
    m_approvalDateTime = new IfcDateTimeSelect;
    m_approvalDateTime->copy(*(obj.m_approvalDateTime.get()), copyop);
    setApprovalStatus(obj.m_approvalStatus);
    setApprovalLevel(obj.m_approvalLevel);
    setApprovalQualifier(obj.m_approvalQualifier);
    setName(obj.m_name);
    setIdentifier(obj.m_identifier);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcApproval::s_type("IfcApproval");
