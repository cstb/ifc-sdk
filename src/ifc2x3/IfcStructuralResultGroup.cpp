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



#include <ifc2x3/IfcStructuralResultGroup.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralResultGroup::IfcStructuralResultGroup(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
    m_resultForLoadGroup = NULL;
    m_isLinear = Step::getUnset(m_isLinear);
}

IfcStructuralResultGroup::~IfcStructuralResultGroup() {
}

bool IfcStructuralResultGroup::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralResultGroup(this);
}

const std::string &IfcStructuralResultGroup::type() const {
    return IfcStructuralResultGroup::s_type.getName();
}

const Step::ClassType &IfcStructuralResultGroup::getClassType() {
    return IfcStructuralResultGroup::s_type;
}

const Step::ClassType &IfcStructuralResultGroup::getType() const {
    return IfcStructuralResultGroup::s_type;
}

bool IfcStructuralResultGroup::isOfType(const Step::ClassType &t) const {
    return IfcStructuralResultGroup::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcAnalysisTheoryTypeEnum IfcStructuralResultGroup::getTheoryType() {
    if (Step::BaseObject::inited()) {
        return m_theoryType;
    }
    else {
        return IfcAnalysisTheoryTypeEnum_UNSET;
    }
}

const IfcAnalysisTheoryTypeEnum IfcStructuralResultGroup::getTheoryType() const {
    IfcStructuralResultGroup * deConstObject = const_cast< IfcStructuralResultGroup * > (this);
    return deConstObject->getTheoryType();
}

void IfcStructuralResultGroup::setTheoryType(IfcAnalysisTheoryTypeEnum value) {
    m_theoryType = value;
}

void IfcStructuralResultGroup::unsetTheoryType() {
    m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
}

bool IfcStructuralResultGroup::testTheoryType() const {
    return getTheoryType() != IfcAnalysisTheoryTypeEnum_UNSET;
}

IfcStructuralLoadGroup *IfcStructuralResultGroup::getResultForLoadGroup() {
    if (Step::BaseObject::inited()) {
        return m_resultForLoadGroup.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralLoadGroup *IfcStructuralResultGroup::getResultForLoadGroup() const {
    IfcStructuralResultGroup * deConstObject = const_cast< IfcStructuralResultGroup * > (this);
    return deConstObject->getResultForLoadGroup();
}

void IfcStructuralResultGroup::setResultForLoadGroup(const Step::RefPtr< IfcStructuralLoadGroup > &value) {
    if (m_resultForLoadGroup.valid()) {
        m_resultForLoadGroup->m_sourceOfResultGroup.erase(this);
    }
    if (value.valid()) {
        value->m_sourceOfResultGroup.insert(this);
    }
    m_resultForLoadGroup = value;
}

void IfcStructuralResultGroup::unsetResultForLoadGroup() {
    m_resultForLoadGroup = Step::getUnset(getResultForLoadGroup());
}

bool IfcStructuralResultGroup::testResultForLoadGroup() const {
    return !Step::isUnset(getResultForLoadGroup());
}

Step::Boolean IfcStructuralResultGroup::getIsLinear() {
    if (Step::BaseObject::inited()) {
        return m_isLinear;
    }
    else {
        return Step::getUnset(m_isLinear);
    }
}

const Step::Boolean IfcStructuralResultGroup::getIsLinear() const {
    IfcStructuralResultGroup * deConstObject = const_cast< IfcStructuralResultGroup * > (this);
    return deConstObject->getIsLinear();
}

void IfcStructuralResultGroup::setIsLinear(Step::Boolean value) {
    m_isLinear = value;
}

void IfcStructuralResultGroup::unsetIsLinear() {
    m_isLinear = Step::getUnset(getIsLinear());
}

bool IfcStructuralResultGroup::testIsLinear() const {
    return !Step::isUnset(getIsLinear());
}

Inverse_Set_IfcStructuralAnalysisModel_0_1 &IfcStructuralResultGroup::getResultGroupFor() {
    if (Step::BaseObject::inited()) {
        return m_resultGroupFor;
    }
    else {
        m_resultGroupFor.setUnset(true);
        return m_resultGroupFor;
    }
}

const Inverse_Set_IfcStructuralAnalysisModel_0_1 &IfcStructuralResultGroup::getResultGroupFor() const {
    IfcStructuralResultGroup * deConstObject = const_cast< IfcStructuralResultGroup * > (this);
    return deConstObject->getResultGroupFor();
}

bool IfcStructuralResultGroup::testResultGroupFor() const {
    return !m_resultGroupFor.isUnset();
}

bool IfcStructuralResultGroup::init() {
    bool status = IfcGroup::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
    }
    else {
        if (arg == ".FIRST_ORDER_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_FIRST_ORDER_THEORY;
        }
        else if (arg == ".SECOND_ORDER_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_SECOND_ORDER_THEORY;
        }
        else if (arg == ".THIRD_ORDER_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_THIRD_ORDER_THEORY;
        }
        else if (arg == ".FULL_NONLINEAR_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_FULL_NONLINEAR_THEORY;
        }
        else if (arg == ".USERDEFINED.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resultForLoadGroup = NULL;
    }
    else {
        m_resultForLoadGroup = static_cast< IfcStructuralLoadGroup * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isLinear = Step::getUnset(m_isLinear);
    }
    else {
        m_isLinear = Step::spfToBoolean(arg);
    }
    inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 8);
    if (inverses) {
        unsigned int i;
        m_resultGroupFor.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_resultGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralResultGroup::copy(const IfcStructuralResultGroup &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    setTheoryType(obj.m_theoryType);
    setResultForLoadGroup((IfcStructuralLoadGroup*)copyop(obj.m_resultForLoadGroup.get()));
    setIsLinear(obj.m_isLinear);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralResultGroup::s_type("IfcStructuralResultGroup");
