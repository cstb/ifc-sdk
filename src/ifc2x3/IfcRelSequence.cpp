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



#include <ifc2x3/IfcRelSequence.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelSequence::IfcRelSequence(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingProcess = NULL;
    m_relatedProcess = NULL;
    m_timeLag = Step::getUnset(m_timeLag);
    m_sequenceType = IfcSequenceEnum_UNSET;
}

IfcRelSequence::~IfcRelSequence() {
}

bool IfcRelSequence::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelSequence(this);
}

const std::string &IfcRelSequence::type() const {
    return IfcRelSequence::s_type.getName();
}

const Step::ClassType &IfcRelSequence::getClassType() {
    return IfcRelSequence::s_type;
}

const Step::ClassType &IfcRelSequence::getType() const {
    return IfcRelSequence::s_type;
}

bool IfcRelSequence::isOfType(const Step::ClassType &t) const {
    return IfcRelSequence::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcProcess *IfcRelSequence::getRelatingProcess() {
    if (Step::BaseObject::inited()) {
        return m_relatingProcess.get();
    }
    else {
        return NULL;
    }
}

const IfcProcess *IfcRelSequence::getRelatingProcess() const {
    IfcRelSequence * deConstObject = const_cast< IfcRelSequence * > (this);
    return deConstObject->getRelatingProcess();
}

void IfcRelSequence::setRelatingProcess(const Step::RefPtr< IfcProcess > &value) {
    if (m_relatingProcess.valid()) {
        m_relatingProcess->m_isPredecessorTo.erase(this);
    }
    if (value.valid()) {
        value->m_isPredecessorTo.insert(this);
    }
    m_relatingProcess = value;
}

void IfcRelSequence::unsetRelatingProcess() {
    m_relatingProcess = Step::getUnset(getRelatingProcess());
}

bool IfcRelSequence::testRelatingProcess() const {
    return !Step::isUnset(getRelatingProcess());
}

IfcProcess *IfcRelSequence::getRelatedProcess() {
    if (Step::BaseObject::inited()) {
        return m_relatedProcess.get();
    }
    else {
        return NULL;
    }
}

const IfcProcess *IfcRelSequence::getRelatedProcess() const {
    IfcRelSequence * deConstObject = const_cast< IfcRelSequence * > (this);
    return deConstObject->getRelatedProcess();
}

void IfcRelSequence::setRelatedProcess(const Step::RefPtr< IfcProcess > &value) {
    if (m_relatedProcess.valid()) {
        m_relatedProcess->m_isSuccessorFrom.erase(this);
    }
    if (value.valid()) {
        value->m_isSuccessorFrom.insert(this);
    }
    m_relatedProcess = value;
}

void IfcRelSequence::unsetRelatedProcess() {
    m_relatedProcess = Step::getUnset(getRelatedProcess());
}

bool IfcRelSequence::testRelatedProcess() const {
    return !Step::isUnset(getRelatedProcess());
}

IfcTimeMeasure IfcRelSequence::getTimeLag() {
    if (Step::BaseObject::inited()) {
        return m_timeLag;
    }
    else {
        return Step::getUnset(m_timeLag);
    }
}

const IfcTimeMeasure IfcRelSequence::getTimeLag() const {
    IfcRelSequence * deConstObject = const_cast< IfcRelSequence * > (this);
    return deConstObject->getTimeLag();
}

void IfcRelSequence::setTimeLag(IfcTimeMeasure value) {
    m_timeLag = value;
}

void IfcRelSequence::unsetTimeLag() {
    m_timeLag = Step::getUnset(getTimeLag());
}

bool IfcRelSequence::testTimeLag() const {
    return !Step::isUnset(getTimeLag());
}

IfcSequenceEnum IfcRelSequence::getSequenceType() {
    if (Step::BaseObject::inited()) {
        return m_sequenceType;
    }
    else {
        return IfcSequenceEnum_UNSET;
    }
}

const IfcSequenceEnum IfcRelSequence::getSequenceType() const {
    IfcRelSequence * deConstObject = const_cast< IfcRelSequence * > (this);
    return deConstObject->getSequenceType();
}

void IfcRelSequence::setSequenceType(IfcSequenceEnum value) {
    m_sequenceType = value;
}

void IfcRelSequence::unsetSequenceType() {
    m_sequenceType = IfcSequenceEnum_UNSET;
}

bool IfcRelSequence::testSequenceType() const {
    return getSequenceType() != IfcSequenceEnum_UNSET;
}

bool IfcRelSequence::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProcess = NULL;
    }
    else {
        m_relatingProcess = static_cast< IfcProcess * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedProcess = NULL;
    }
    else {
        m_relatedProcess = static_cast< IfcProcess * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeLag = Step::getUnset(m_timeLag);
    }
    else {
        m_timeLag = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sequenceType = IfcSequenceEnum_UNSET;
    }
    else {
        if (arg == ".START_START.") {
            m_sequenceType = IfcSequenceEnum_START_START;
        }
        else if (arg == ".START_FINISH.") {
            m_sequenceType = IfcSequenceEnum_START_FINISH;
        }
        else if (arg == ".FINISH_START.") {
            m_sequenceType = IfcSequenceEnum_FINISH_START;
        }
        else if (arg == ".FINISH_FINISH.") {
            m_sequenceType = IfcSequenceEnum_FINISH_FINISH;
        }
        else if (arg == ".NOTDEFINED.") {
            m_sequenceType = IfcSequenceEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelSequence::copy(const IfcRelSequence &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingProcess((IfcProcess*)copyop(obj.m_relatingProcess.get()));
    setRelatedProcess((IfcProcess*)copyop(obj.m_relatedProcess.get()));
    setTimeLag(obj.m_timeLag);
    setSequenceType(obj.m_sequenceType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelSequence::s_type("IfcRelSequence");
