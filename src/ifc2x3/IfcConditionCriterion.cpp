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



#include <ifc2x3/IfcConditionCriterion.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConditionCriterionSelect.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConditionCriterion::IfcConditionCriterion(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_criterion = NULL;
    m_criterionDateTime = NULL;
}

IfcConditionCriterion::~IfcConditionCriterion() {
}

bool IfcConditionCriterion::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConditionCriterion(this);
}

const std::string &IfcConditionCriterion::type() const {
    return IfcConditionCriterion::s_type.getName();
}

const Step::ClassType &IfcConditionCriterion::getClassType() {
    return IfcConditionCriterion::s_type;
}

const Step::ClassType &IfcConditionCriterion::getType() const {
    return IfcConditionCriterion::s_type;
}

bool IfcConditionCriterion::isOfType(const Step::ClassType &t) const {
    return IfcConditionCriterion::s_type == t ? true : IfcControl::isOfType(t);
}

IfcConditionCriterionSelect *IfcConditionCriterion::getCriterion() {
    if (Step::BaseObject::inited()) {
        return m_criterion.get();
    }
    else {
        return NULL;
    }
}

const IfcConditionCriterionSelect *IfcConditionCriterion::getCriterion() const {
    IfcConditionCriterion * deConstObject = const_cast< IfcConditionCriterion * > (this);
    return deConstObject->getCriterion();
}

void IfcConditionCriterion::setCriterion(const Step::RefPtr< IfcConditionCriterionSelect > &value) {
    m_criterion = value;
}

void IfcConditionCriterion::unsetCriterion() {
    m_criterion = Step::getUnset(getCriterion());
}

bool IfcConditionCriterion::testCriterion() const {
    return !Step::isUnset(getCriterion());
}

IfcDateTimeSelect *IfcConditionCriterion::getCriterionDateTime() {
    if (Step::BaseObject::inited()) {
        return m_criterionDateTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcConditionCriterion::getCriterionDateTime() const {
    IfcConditionCriterion * deConstObject = const_cast< IfcConditionCriterion * > (this);
    return deConstObject->getCriterionDateTime();
}

void IfcConditionCriterion::setCriterionDateTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_criterionDateTime = value;
}

void IfcConditionCriterion::unsetCriterionDateTime() {
    m_criterionDateTime = Step::getUnset(getCriterionDateTime());
}

bool IfcConditionCriterion::testCriterionDateTime() const {
    return !Step::isUnset(getCriterionDateTime());
}

bool IfcConditionCriterion::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_criterion = NULL;
    }
    else {
        m_criterion = new IfcConditionCriterionSelect;
        if (arg[0] == '#') {
            m_criterion->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCLABEL") {
                    Step::String tmp_attr1;
                    tmp_attr1 = Step::String::fromSPF(arg);
                    m_criterion->setIfcLabel(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_criterionDateTime = NULL;
    }
    else {
        m_criterionDateTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_criterionDateTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcConditionCriterion::copy(const IfcConditionCriterion &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    m_criterion = new IfcConditionCriterionSelect;
    m_criterion->copy(*(obj.m_criterion.get()), copyop);
    m_criterionDateTime = new IfcDateTimeSelect;
    m_criterionDateTime->copy(*(obj.m_criterionDateTime.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConditionCriterion::s_type("IfcConditionCriterion");
