// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcApprovalPropertyRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcApprovalPropertyRelationship::IfcApprovalPropertyRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_approval = NULL;
}

IfcApprovalPropertyRelationship::~IfcApprovalPropertyRelationship() {
}

bool IfcApprovalPropertyRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcApprovalPropertyRelationship(this);
}

const std::string &IfcApprovalPropertyRelationship::type() const {
    return IfcApprovalPropertyRelationship::s_type.getName();
}

const Step::ClassType &IfcApprovalPropertyRelationship::getClassType() {
    return IfcApprovalPropertyRelationship::s_type;
}

const Step::ClassType &IfcApprovalPropertyRelationship::getType() const {
    return IfcApprovalPropertyRelationship::s_type;
}

bool IfcApprovalPropertyRelationship::isOfType(const Step::ClassType &t) const {
    return IfcApprovalPropertyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Set_IfcProperty_1_n &IfcApprovalPropertyRelationship::getApprovedProperties() {
    if (Step::BaseObject::inited()) {
        return m_approvedProperties;
    }
    else {
        m_approvedProperties.setUnset(true);
        return m_approvedProperties;
    }
}

const Set_IfcProperty_1_n &IfcApprovalPropertyRelationship::getApprovedProperties() const {
    IfcApprovalPropertyRelationship * deConstObject = const_cast< IfcApprovalPropertyRelationship * > (this);
    return deConstObject->getApprovedProperties();
}

void IfcApprovalPropertyRelationship::setApprovedProperties(const Set_IfcProperty_1_n &value) {
    m_approvedProperties = value;
}

void IfcApprovalPropertyRelationship::unsetApprovedProperties() {
    m_approvedProperties.clear();
    m_approvedProperties.setUnset(true);
}

bool IfcApprovalPropertyRelationship::testApprovedProperties() const {
    return !m_approvedProperties.isUnset();
}

IfcApproval *IfcApprovalPropertyRelationship::getApproval() {
    if (Step::BaseObject::inited()) {
        return m_approval.get();
    }
    else {
        return NULL;
    }
}

const IfcApproval *IfcApprovalPropertyRelationship::getApproval() const {
    IfcApprovalPropertyRelationship * deConstObject = const_cast< IfcApprovalPropertyRelationship * > (this);
    return deConstObject->getApproval();
}

void IfcApprovalPropertyRelationship::setApproval(const Step::RefPtr< IfcApproval > &value) {
    m_approval = value;
}

void IfcApprovalPropertyRelationship::unsetApproval() {
    m_approval = Step::getUnset(getApproval());
}

bool IfcApprovalPropertyRelationship::testApproval() const {
    return !Step::isUnset(getApproval());
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
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_approvedProperties.insert(attr2);
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
        m_approval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcApprovalPropertyRelationship::copy(const IfcApprovalPropertyRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_approvedProperties;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_approvedProperties = obj.m_approvedProperties.begin(); it_m_approvedProperties != obj.m_approvedProperties.end(); ++it_m_approvedProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_approvedProperties).get()));
        m_approvedProperties.insert(copyTarget.get());
    }
    setApproval((IfcApproval*)copyop(obj.m_approval.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcApprovalPropertyRelationship::s_type("IfcApprovalPropertyRelationship");
