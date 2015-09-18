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



#include <ifc2x3/IfcStructuralLoadGroup.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/IfcStructuralAnalysisModel.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLoadGroup::IfcStructuralLoadGroup(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
    m_actionType = IfcActionTypeEnum_UNSET;
    m_actionSource = IfcActionSourceTypeEnum_UNSET;
    m_coefficient = Step::getUnset(m_coefficient);
    m_purpose = Step::getUnset(m_purpose);
}

IfcStructuralLoadGroup::~IfcStructuralLoadGroup() {
}

bool IfcStructuralLoadGroup::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadGroup(this);
}

const std::string &IfcStructuralLoadGroup::type() const {
    return IfcStructuralLoadGroup::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadGroup::getClassType() {
    return IfcStructuralLoadGroup::s_type;
}

const Step::ClassType &IfcStructuralLoadGroup::getType() const {
    return IfcStructuralLoadGroup::s_type;
}

bool IfcStructuralLoadGroup::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadGroup::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcLoadGroupTypeEnum IfcStructuralLoadGroup::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcLoadGroupTypeEnum_UNSET;
    }
}

const IfcLoadGroupTypeEnum IfcStructuralLoadGroup::getPredefinedType() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getPredefinedType();
}

void IfcStructuralLoadGroup::setPredefinedType(IfcLoadGroupTypeEnum value) {
    m_predefinedType = value;
}

void IfcStructuralLoadGroup::unsetPredefinedType() {
    m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
}

bool IfcStructuralLoadGroup::testPredefinedType() const {
    return getPredefinedType() != IfcLoadGroupTypeEnum_UNSET;
}

IfcActionTypeEnum IfcStructuralLoadGroup::getActionType() {
    if (Step::BaseObject::inited()) {
        return m_actionType;
    }
    else {
        return IfcActionTypeEnum_UNSET;
    }
}

const IfcActionTypeEnum IfcStructuralLoadGroup::getActionType() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getActionType();
}

void IfcStructuralLoadGroup::setActionType(IfcActionTypeEnum value) {
    m_actionType = value;
}

void IfcStructuralLoadGroup::unsetActionType() {
    m_actionType = IfcActionTypeEnum_UNSET;
}

bool IfcStructuralLoadGroup::testActionType() const {
    return getActionType() != IfcActionTypeEnum_UNSET;
}

IfcActionSourceTypeEnum IfcStructuralLoadGroup::getActionSource() {
    if (Step::BaseObject::inited()) {
        return m_actionSource;
    }
    else {
        return IfcActionSourceTypeEnum_UNSET;
    }
}

const IfcActionSourceTypeEnum IfcStructuralLoadGroup::getActionSource() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getActionSource();
}

void IfcStructuralLoadGroup::setActionSource(IfcActionSourceTypeEnum value) {
    m_actionSource = value;
}

void IfcStructuralLoadGroup::unsetActionSource() {
    m_actionSource = IfcActionSourceTypeEnum_UNSET;
}

bool IfcStructuralLoadGroup::testActionSource() const {
    return getActionSource() != IfcActionSourceTypeEnum_UNSET;
}

IfcRatioMeasure IfcStructuralLoadGroup::getCoefficient() {
    if (Step::BaseObject::inited()) {
        return m_coefficient;
    }
    else {
        return Step::getUnset(m_coefficient);
    }
}

const IfcRatioMeasure IfcStructuralLoadGroup::getCoefficient() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getCoefficient();
}

void IfcStructuralLoadGroup::setCoefficient(IfcRatioMeasure value) {
    m_coefficient = value;
}

void IfcStructuralLoadGroup::unsetCoefficient() {
    m_coefficient = Step::getUnset(getCoefficient());
}

bool IfcStructuralLoadGroup::testCoefficient() const {
    return !Step::isUnset(getCoefficient());
}

IfcLabel IfcStructuralLoadGroup::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return Step::getUnset(m_purpose);
    }
}

const IfcLabel IfcStructuralLoadGroup::getPurpose() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getPurpose();
}

void IfcStructuralLoadGroup::setPurpose(const IfcLabel &value) {
    m_purpose = value;
}

void IfcStructuralLoadGroup::unsetPurpose() {
    m_purpose = Step::getUnset(getPurpose());
}

bool IfcStructuralLoadGroup::testPurpose() const {
    return !Step::isUnset(getPurpose());
}

Inverse_Set_IfcStructuralResultGroup_0_1 &IfcStructuralLoadGroup::getSourceOfResultGroup() {
    if (Step::BaseObject::inited()) {
        return m_sourceOfResultGroup;
    }
    else {
        m_sourceOfResultGroup.setUnset(true);
        return m_sourceOfResultGroup;
    }
}

const Inverse_Set_IfcStructuralResultGroup_0_1 &IfcStructuralLoadGroup::getSourceOfResultGroup() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getSourceOfResultGroup();
}

bool IfcStructuralLoadGroup::testSourceOfResultGroup() const {
    return !m_sourceOfResultGroup.isUnset();
}

Inverse_Set_IfcStructuralAnalysisModel_0_n &IfcStructuralLoadGroup::getLoadGroupFor() {
    if (Step::BaseObject::inited()) {
        return m_loadGroupFor;
    }
    else {
        m_loadGroupFor.setUnset(true);
        return m_loadGroupFor;
    }
}

const Inverse_Set_IfcStructuralAnalysisModel_0_n &IfcStructuralLoadGroup::getLoadGroupFor() const {
    IfcStructuralLoadGroup * deConstObject = const_cast< IfcStructuralLoadGroup * > (this);
    return deConstObject->getLoadGroupFor();
}

bool IfcStructuralLoadGroup::testLoadGroupFor() const {
    return !m_loadGroupFor.isUnset();
}

bool IfcStructuralLoadGroup::init() {
    bool status = IfcGroup::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
    }
    else {
        if (arg == ".LOAD_GROUP.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_GROUP;
        }
        else if (arg == ".LOAD_CASE.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_CASE;
        }
        else if (arg == ".LOAD_COMBINATION_GROUP.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION_GROUP;
        }
        else if (arg == ".LOAD_COMBINATION.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcLoadGroupTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcLoadGroupTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actionType = IfcActionTypeEnum_UNSET;
    }
    else {
        if (arg == ".PERMANENT_G.") {
            m_actionType = IfcActionTypeEnum_PERMANENT_G;
        }
        else if (arg == ".VARIABLE_Q.") {
            m_actionType = IfcActionTypeEnum_VARIABLE_Q;
        }
        else if (arg == ".EXTRAORDINARY_A.") {
            m_actionType = IfcActionTypeEnum_EXTRAORDINARY_A;
        }
        else if (arg == ".USERDEFINED.") {
            m_actionType = IfcActionTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_actionType = IfcActionTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actionSource = IfcActionSourceTypeEnum_UNSET;
    }
    else {
        if (arg == ".DEAD_LOAD_G.") {
            m_actionSource = IfcActionSourceTypeEnum_DEAD_LOAD_G;
        }
        else if (arg == ".COMPLETION_G1.") {
            m_actionSource = IfcActionSourceTypeEnum_COMPLETION_G1;
        }
        else if (arg == ".LIVE_LOAD_Q.") {
            m_actionSource = IfcActionSourceTypeEnum_LIVE_LOAD_Q;
        }
        else if (arg == ".SNOW_S.") {
            m_actionSource = IfcActionSourceTypeEnum_SNOW_S;
        }
        else if (arg == ".WIND_W.") {
            m_actionSource = IfcActionSourceTypeEnum_WIND_W;
        }
        else if (arg == ".PRESTRESSING_P.") {
            m_actionSource = IfcActionSourceTypeEnum_PRESTRESSING_P;
        }
        else if (arg == ".SETTLEMENT_U.") {
            m_actionSource = IfcActionSourceTypeEnum_SETTLEMENT_U;
        }
        else if (arg == ".TEMPERATURE_T.") {
            m_actionSource = IfcActionSourceTypeEnum_TEMPERATURE_T;
        }
        else if (arg == ".EARTHQUAKE_E.") {
            m_actionSource = IfcActionSourceTypeEnum_EARTHQUAKE_E;
        }
        else if (arg == ".FIRE.") {
            m_actionSource = IfcActionSourceTypeEnum_FIRE;
        }
        else if (arg == ".IMPULSE.") {
            m_actionSource = IfcActionSourceTypeEnum_IMPULSE;
        }
        else if (arg == ".IMPACT.") {
            m_actionSource = IfcActionSourceTypeEnum_IMPACT;
        }
        else if (arg == ".TRANSPORT.") {
            m_actionSource = IfcActionSourceTypeEnum_TRANSPORT;
        }
        else if (arg == ".ERECTION.") {
            m_actionSource = IfcActionSourceTypeEnum_ERECTION;
        }
        else if (arg == ".PROPPING.") {
            m_actionSource = IfcActionSourceTypeEnum_PROPPING;
        }
        else if (arg == ".SYSTEM_IMPERFECTION.") {
            m_actionSource = IfcActionSourceTypeEnum_SYSTEM_IMPERFECTION;
        }
        else if (arg == ".SHRINKAGE.") {
            m_actionSource = IfcActionSourceTypeEnum_SHRINKAGE;
        }
        else if (arg == ".CREEP.") {
            m_actionSource = IfcActionSourceTypeEnum_CREEP;
        }
        else if (arg == ".LACK_OF_FIT.") {
            m_actionSource = IfcActionSourceTypeEnum_LACK_OF_FIT;
        }
        else if (arg == ".BUOYANCY.") {
            m_actionSource = IfcActionSourceTypeEnum_BUOYANCY;
        }
        else if (arg == ".ICE.") {
            m_actionSource = IfcActionSourceTypeEnum_ICE;
        }
        else if (arg == ".CURRENT.") {
            m_actionSource = IfcActionSourceTypeEnum_CURRENT;
        }
        else if (arg == ".WAVE.") {
            m_actionSource = IfcActionSourceTypeEnum_WAVE;
        }
        else if (arg == ".RAIN.") {
            m_actionSource = IfcActionSourceTypeEnum_RAIN;
        }
        else if (arg == ".BRAKES.") {
            m_actionSource = IfcActionSourceTypeEnum_BRAKES;
        }
        else if (arg == ".USERDEFINED.") {
            m_actionSource = IfcActionSourceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_actionSource = IfcActionSourceTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coefficient = Step::getUnset(m_coefficient);
    }
    else {
        m_coefficient = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = Step::getUnset(m_purpose);
    }
    else {
        m_purpose = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcStructuralResultGroup::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_sourceOfResultGroup.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_sourceOfResultGroup.insert(static_cast< IfcStructuralResultGroup * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_loadGroupFor.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_loadGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralLoadGroup::copy(const IfcStructuralLoadGroup &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setActionType(obj.m_actionType);
    setActionSource(obj.m_actionSource);
    setCoefficient(obj.m_coefficient);
    setPurpose(obj.m_purpose);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLoadGroup::s_type("IfcStructuralLoadGroup");
