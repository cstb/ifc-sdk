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

#include "ifc2x3/IfcApprovalPropertyRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcApproval.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcApprovalPropertyRelationship::IfcApprovalPropertyRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_approvedProperties.setUnset(true);
    m_approval = NULL;
}

IfcApprovalPropertyRelationship::~IfcApprovalPropertyRelationship() {
}

bool IfcApprovalPropertyRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcApprovalPropertyRelationship(this);
}

const std::string &IfcApprovalPropertyRelationship::type() {
    return IfcApprovalPropertyRelationship::s_type.getName();
}

Step::ClassType IfcApprovalPropertyRelationship::getClassType() {
    return IfcApprovalPropertyRelationship::s_type;
}

Step::ClassType IfcApprovalPropertyRelationship::getType() const {
    return IfcApprovalPropertyRelationship::s_type;
}

bool IfcApprovalPropertyRelationship::isOfType(Step::ClassType t) {
    return IfcApprovalPropertyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::Set< Step::RefPtr< IfcProperty > > &IfcApprovalPropertyRelationship::getApprovedProperties() {
    if (Step::BaseObject::inited()) {
        return m_approvedProperties;
    }
    else {
        m_approvedProperties.setUnset(true);
        return m_approvedProperties;
    }
}

void IfcApprovalPropertyRelationship::setApprovedProperties(const Step::Set< Step::RefPtr< IfcProperty > > &value) {
    m_approvedProperties = value;
}

IfcApproval *IfcApprovalPropertyRelationship::getApproval() {
    if (Step::BaseObject::inited()) {
        return m_approval.get();
    }
    else {
        return NULL;
    }
}

void IfcApprovalPropertyRelationship::setApproval(const Step::RefPtr< IfcApproval > &value) {
    m_approval = value;
}

void IfcApprovalPropertyRelationship::release() {
    m_approvedProperties.clear();
    m_approval.release();
}

bool IfcApprovalPropertyRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvedProperties.setUnset(true);
    }
    else {
        m_approvedProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_approvedProperties.insert(attr2);
            }
            else {
                break;
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
    return true;
}

void IfcApprovalPropertyRelationship::copy(const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty > >::const_iterator it_m_approvedProperties;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_approvedProperties = obj.m_approvedProperties.begin(); it_m_approvedProperties != obj.m_approvedProperties.end(); ++it_m_approvedProperties) {
        Step::RefPtr< IfcProperty > copyTarget = copyop((*it_m_approvedProperties).get());
        m_approvedProperties.insert(copyTarget.get());
    }
    setApproval(copyop(obj.m_approval.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcApprovalPropertyRelationship::s_type("IfcApprovalPropertyRelationship");
