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



#include <ifc2x3/IfcRelConnectsPathElements.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelConnectsPathElements::IfcRelConnectsPathElements(Step::Id id, Step::SPFData *args) : IfcRelConnectsElements(id, args) {
    m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
    m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
}

IfcRelConnectsPathElements::~IfcRelConnectsPathElements() {
}

bool IfcRelConnectsPathElements::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsPathElements(this);
}

const std::string &IfcRelConnectsPathElements::type() const {
    return IfcRelConnectsPathElements::s_type.getName();
}

const Step::ClassType &IfcRelConnectsPathElements::getClassType() {
    return IfcRelConnectsPathElements::s_type;
}

const Step::ClassType &IfcRelConnectsPathElements::getType() const {
    return IfcRelConnectsPathElements::s_type;
}

bool IfcRelConnectsPathElements::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsPathElements::s_type == t ? true : IfcRelConnectsElements::isOfType(t);
}

List_Integer_0_n &IfcRelConnectsPathElements::getRelatingPriorities() {
    if (Step::BaseObject::inited()) {
        return m_relatingPriorities;
    }
    else {
        m_relatingPriorities.setUnset(true);
        return m_relatingPriorities;
    }
}

const List_Integer_0_n &IfcRelConnectsPathElements::getRelatingPriorities() const {
    IfcRelConnectsPathElements * deConstObject = const_cast< IfcRelConnectsPathElements * > (this);
    return deConstObject->getRelatingPriorities();
}

void IfcRelConnectsPathElements::setRelatingPriorities(const List_Integer_0_n &value) {
    m_relatingPriorities = value;
}

void IfcRelConnectsPathElements::unsetRelatingPriorities() {
    m_relatingPriorities.clear();
    m_relatingPriorities.setUnset(true);
}

bool IfcRelConnectsPathElements::testRelatingPriorities() const {
    return !m_relatingPriorities.isUnset();
}

List_Integer_0_n &IfcRelConnectsPathElements::getRelatedPriorities() {
    if (Step::BaseObject::inited()) {
        return m_relatedPriorities;
    }
    else {
        m_relatedPriorities.setUnset(true);
        return m_relatedPriorities;
    }
}

const List_Integer_0_n &IfcRelConnectsPathElements::getRelatedPriorities() const {
    IfcRelConnectsPathElements * deConstObject = const_cast< IfcRelConnectsPathElements * > (this);
    return deConstObject->getRelatedPriorities();
}

void IfcRelConnectsPathElements::setRelatedPriorities(const List_Integer_0_n &value) {
    m_relatedPriorities = value;
}

void IfcRelConnectsPathElements::unsetRelatedPriorities() {
    m_relatedPriorities.clear();
    m_relatedPriorities.setUnset(true);
}

bool IfcRelConnectsPathElements::testRelatedPriorities() const {
    return !m_relatedPriorities.isUnset();
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatedConnectionType() {
    if (Step::BaseObject::inited()) {
        return m_relatedConnectionType;
    }
    else {
        return IfcConnectionTypeEnum_UNSET;
    }
}

const IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatedConnectionType() const {
    IfcRelConnectsPathElements * deConstObject = const_cast< IfcRelConnectsPathElements * > (this);
    return deConstObject->getRelatedConnectionType();
}

void IfcRelConnectsPathElements::setRelatedConnectionType(IfcConnectionTypeEnum value) {
    m_relatedConnectionType = value;
}

void IfcRelConnectsPathElements::unsetRelatedConnectionType() {
    m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
}

bool IfcRelConnectsPathElements::testRelatedConnectionType() const {
    return getRelatedConnectionType() != IfcConnectionTypeEnum_UNSET;
}

IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatingConnectionType() {
    if (Step::BaseObject::inited()) {
        return m_relatingConnectionType;
    }
    else {
        return IfcConnectionTypeEnum_UNSET;
    }
}

const IfcConnectionTypeEnum IfcRelConnectsPathElements::getRelatingConnectionType() const {
    IfcRelConnectsPathElements * deConstObject = const_cast< IfcRelConnectsPathElements * > (this);
    return deConstObject->getRelatingConnectionType();
}

void IfcRelConnectsPathElements::setRelatingConnectionType(IfcConnectionTypeEnum value) {
    m_relatingConnectionType = value;
}

void IfcRelConnectsPathElements::unsetRelatingConnectionType() {
    m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
}

bool IfcRelConnectsPathElements::testRelatingConnectionType() const {
    return getRelatingConnectionType() != IfcConnectionTypeEnum_UNSET;
}

bool IfcRelConnectsPathElements::init() {
    bool status = IfcRelConnectsElements::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingPriorities.setUnset(true);
    }
    else {
        m_relatingPriorities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Integer attr2;
                attr2 = Step::spfToInteger(str1);
                m_relatingPriorities.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedPriorities.setUnset(true);
    }
    else {
        m_relatedPriorities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::Integer attr2;
                attr2 = Step::spfToInteger(str1);
                m_relatedPriorities.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedConnectionType = IfcConnectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".ATPATH.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_ATPATH;
        }
        else if (arg == ".ATSTART.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_ATSTART;
        }
        else if (arg == ".ATEND.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_ATEND;
        }
        else if (arg == ".NOTDEFINED.") {
            m_relatedConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConnectionType = IfcConnectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".ATPATH.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_ATPATH;
        }
        else if (arg == ".ATSTART.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_ATSTART;
        }
        else if (arg == ".ATEND.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_ATEND;
        }
        else if (arg == ".NOTDEFINED.") {
            m_relatingConnectionType = IfcConnectionTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelConnectsPathElements::copy(const IfcRelConnectsPathElements &obj, const CopyOp &copyop) {
    Step::List< Step::Integer >::const_iterator it_m_relatingPriorities;
    Step::List< Step::Integer >::const_iterator it_m_relatedPriorities;
    IfcRelConnectsElements::copy(obj, copyop);
    for (it_m_relatingPriorities = obj.m_relatingPriorities.begin(); it_m_relatingPriorities != obj.m_relatingPriorities.end(); ++it_m_relatingPriorities) {
        Step::Integer copyTarget = (*it_m_relatingPriorities);
        m_relatingPriorities.push_back(copyTarget);
    }
    for (it_m_relatedPriorities = obj.m_relatedPriorities.begin(); it_m_relatedPriorities != obj.m_relatedPriorities.end(); ++it_m_relatedPriorities) {
        Step::Integer copyTarget = (*it_m_relatedPriorities);
        m_relatedPriorities.push_back(copyTarget);
    }
    setRelatedConnectionType(obj.m_relatedConnectionType);
    setRelatingConnectionType(obj.m_relatingConnectionType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsPathElements::s_type("IfcRelConnectsPathElements");
