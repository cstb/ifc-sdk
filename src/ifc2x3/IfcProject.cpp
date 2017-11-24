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



#include <ifc2x3/IfcProject.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcUnitAssignment.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcProject::IfcProject(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
    m_longName = Step::getUnset(m_longName);
    m_phase = Step::getUnset(m_phase);
    m_unitsInContext = NULL;
}

IfcProject::~IfcProject() {
}

bool IfcProject::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProject(this);
}

const std::string &IfcProject::type() const {
    return IfcProject::s_type.getName();
}

const Step::ClassType &IfcProject::getClassType() {
    return IfcProject::s_type;
}

const Step::ClassType &IfcProject::getType() const {
    return IfcProject::s_type;
}

bool IfcProject::isOfType(const Step::ClassType &t) const {
    return IfcProject::s_type == t ? true : IfcObject::isOfType(t);
}

IfcLabel IfcProject::getLongName() {
    if (Step::BaseObject::inited()) {
        return m_longName;
    }
    else {
        return Step::getUnset(m_longName);
    }
}

const IfcLabel IfcProject::getLongName() const {
    IfcProject * deConstObject = const_cast< IfcProject * > (this);
    return deConstObject->getLongName();
}

void IfcProject::setLongName(const IfcLabel &value) {
    m_longName = value;
}

void IfcProject::unsetLongName() {
    m_longName = Step::getUnset(getLongName());
}

bool IfcProject::testLongName() const {
    return !Step::isUnset(getLongName());
}

IfcLabel IfcProject::getPhase() {
    if (Step::BaseObject::inited()) {
        return m_phase;
    }
    else {
        return Step::getUnset(m_phase);
    }
}

const IfcLabel IfcProject::getPhase() const {
    IfcProject * deConstObject = const_cast< IfcProject * > (this);
    return deConstObject->getPhase();
}

void IfcProject::setPhase(const IfcLabel &value) {
    m_phase = value;
}

void IfcProject::unsetPhase() {
    m_phase = Step::getUnset(getPhase());
}

bool IfcProject::testPhase() const {
    return !Step::isUnset(getPhase());
}

Set_IfcRepresentationContext_1_n &IfcProject::getRepresentationContexts() {
    if (Step::BaseObject::inited()) {
        return m_representationContexts;
    }
    else {
        m_representationContexts.setUnset(true);
        return m_representationContexts;
    }
}

const Set_IfcRepresentationContext_1_n &IfcProject::getRepresentationContexts() const {
    IfcProject * deConstObject = const_cast< IfcProject * > (this);
    return deConstObject->getRepresentationContexts();
}

void IfcProject::setRepresentationContexts(const Set_IfcRepresentationContext_1_n &value) {
    m_representationContexts = value;
}

void IfcProject::unsetRepresentationContexts() {
    m_representationContexts.clear();
    m_representationContexts.setUnset(true);
}

bool IfcProject::testRepresentationContexts() const {
    return !m_representationContexts.isUnset();
}

IfcUnitAssignment *IfcProject::getUnitsInContext() {
    if (Step::BaseObject::inited()) {
        return m_unitsInContext.get();
    }
    else {
        return NULL;
    }
}

const IfcUnitAssignment *IfcProject::getUnitsInContext() const {
    IfcProject * deConstObject = const_cast< IfcProject * > (this);
    return deConstObject->getUnitsInContext();
}

void IfcProject::setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value) {
    m_unitsInContext = value;
}

void IfcProject::unsetUnitsInContext() {
    m_unitsInContext = Step::getUnset(getUnitsInContext());
}

bool IfcProject::testUnitsInContext() const {
    return !Step::isUnset(getUnitsInContext());
}

bool IfcProject::init() {
    bool status = IfcObject::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longName = Step::getUnset(m_longName);
    }
    else {
        m_longName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_phase = Step::getUnset(m_phase);
    }
    else {
        m_phase = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationContexts.setUnset(true);
    }
    else {
        m_representationContexts.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentationContext > attr2;
                attr2 = static_cast< IfcRepresentationContext * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_representationContexts.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unitsInContext = NULL;
    }
    else {
        m_unitsInContext = static_cast< IfcUnitAssignment * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcProject::copy(const IfcProject &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRepresentationContext >, 1 >::const_iterator it_m_representationContexts;
    IfcObject::copy(obj, copyop);
    setLongName(obj.m_longName);
    setPhase(obj.m_phase);
    for (it_m_representationContexts = obj.m_representationContexts.begin(); it_m_representationContexts != obj.m_representationContexts.end(); ++it_m_representationContexts) {
        Step::RefPtr< IfcRepresentationContext > copyTarget = (IfcRepresentationContext *) (copyop((*it_m_representationContexts).get()));
        m_representationContexts.insert(copyTarget.get());
    }
    setUnitsInContext((IfcUnitAssignment*)copyop(obj.m_unitsInContext.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProject::s_type("IfcProject");
