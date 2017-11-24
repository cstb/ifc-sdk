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



#include <ifc2x3/IfcConstraintClassificationRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConstraintClassificationRelationship::IfcConstraintClassificationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_classifiedConstraint = NULL;
}

IfcConstraintClassificationRelationship::~IfcConstraintClassificationRelationship() {
}

bool IfcConstraintClassificationRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstraintClassificationRelationship(this);
}

const std::string &IfcConstraintClassificationRelationship::type() const {
    return IfcConstraintClassificationRelationship::s_type.getName();
}

const Step::ClassType &IfcConstraintClassificationRelationship::getClassType() {
    return IfcConstraintClassificationRelationship::s_type;
}

const Step::ClassType &IfcConstraintClassificationRelationship::getType() const {
    return IfcConstraintClassificationRelationship::s_type;
}

bool IfcConstraintClassificationRelationship::isOfType(const Step::ClassType &t) const {
    return IfcConstraintClassificationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcConstraint *IfcConstraintClassificationRelationship::getClassifiedConstraint() {
    if (Step::BaseObject::inited()) {
        return m_classifiedConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintClassificationRelationship::getClassifiedConstraint() const {
    IfcConstraintClassificationRelationship * deConstObject = const_cast< IfcConstraintClassificationRelationship * > (this);
    return deConstObject->getClassifiedConstraint();
}

void IfcConstraintClassificationRelationship::setClassifiedConstraint(const Step::RefPtr< IfcConstraint > &value) {
    if (m_classifiedConstraint.valid()) {
        m_classifiedConstraint->m_classifiedAs.erase(this);
    }
    if (value.valid()) {
        value->m_classifiedAs.insert(this);
    }
    m_classifiedConstraint = value;
}

void IfcConstraintClassificationRelationship::unsetClassifiedConstraint() {
    m_classifiedConstraint = Step::getUnset(getClassifiedConstraint());
}

bool IfcConstraintClassificationRelationship::testClassifiedConstraint() const {
    return !Step::isUnset(getClassifiedConstraint());
}

Set_IfcClassificationNotationSelect_1_n &IfcConstraintClassificationRelationship::getRelatedClassifications() {
    if (Step::BaseObject::inited()) {
        return m_relatedClassifications;
    }
    else {
        m_relatedClassifications.setUnset(true);
        return m_relatedClassifications;
    }
}

const Set_IfcClassificationNotationSelect_1_n &IfcConstraintClassificationRelationship::getRelatedClassifications() const {
    IfcConstraintClassificationRelationship * deConstObject = const_cast< IfcConstraintClassificationRelationship * > (this);
    return deConstObject->getRelatedClassifications();
}

void IfcConstraintClassificationRelationship::setRelatedClassifications(const Set_IfcClassificationNotationSelect_1_n &value) {
    m_relatedClassifications = value;
}

void IfcConstraintClassificationRelationship::unsetRelatedClassifications() {
    m_relatedClassifications.clear();
    m_relatedClassifications.setUnset(true);
}

bool IfcConstraintClassificationRelationship::testRelatedClassifications() const {
    return !m_relatedClassifications.isUnset();
}

bool IfcConstraintClassificationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_classifiedConstraint = NULL;
    }
    else {
        m_classifiedConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedClassifications.setUnset(true);
    }
    else {
        m_relatedClassifications.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationNotationSelect > attr2;
                attr2 = new IfcClassificationNotationSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) m_relatedClassifications.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcConstraintClassificationRelationship::copy(const IfcConstraintClassificationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationNotationSelect >, 1 >::const_iterator it_m_relatedClassifications;
    Step::BaseEntity::copy(obj, copyop);
    setClassifiedConstraint((IfcConstraint*)copyop(obj.m_classifiedConstraint.get()));
    for (it_m_relatedClassifications = obj.m_relatedClassifications.begin(); it_m_relatedClassifications != obj.m_relatedClassifications.end(); ++it_m_relatedClassifications) {
        Step::RefPtr< IfcClassificationNotationSelect > copyTarget = new IfcClassificationNotationSelect;
        copyTarget->copy(*((*it_m_relatedClassifications).get()), copyop);
        m_relatedClassifications.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConstraintClassificationRelationship::s_type("IfcConstraintClassificationRelationship");
