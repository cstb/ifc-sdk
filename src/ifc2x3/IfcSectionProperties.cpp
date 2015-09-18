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



#include <ifc2x3/IfcSectionProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProfileDef.h>
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

IfcSectionProperties::IfcSectionProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_sectionType = IfcSectionTypeEnum_UNSET;
    m_startProfile = NULL;
    m_endProfile = NULL;
}

IfcSectionProperties::~IfcSectionProperties() {
}

bool IfcSectionProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSectionProperties(this);
}

const std::string &IfcSectionProperties::type() const {
    return IfcSectionProperties::s_type.getName();
}

const Step::ClassType &IfcSectionProperties::getClassType() {
    return IfcSectionProperties::s_type;
}

const Step::ClassType &IfcSectionProperties::getType() const {
    return IfcSectionProperties::s_type;
}

bool IfcSectionProperties::isOfType(const Step::ClassType &t) const {
    return IfcSectionProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcSectionTypeEnum IfcSectionProperties::getSectionType() {
    if (Step::BaseObject::inited()) {
        return m_sectionType;
    }
    else {
        return IfcSectionTypeEnum_UNSET;
    }
}

const IfcSectionTypeEnum IfcSectionProperties::getSectionType() const {
    IfcSectionProperties * deConstObject = const_cast< IfcSectionProperties * > (this);
    return deConstObject->getSectionType();
}

void IfcSectionProperties::setSectionType(IfcSectionTypeEnum value) {
    m_sectionType = value;
}

void IfcSectionProperties::unsetSectionType() {
    m_sectionType = IfcSectionTypeEnum_UNSET;
}

bool IfcSectionProperties::testSectionType() const {
    return getSectionType() != IfcSectionTypeEnum_UNSET;
}

IfcProfileDef *IfcSectionProperties::getStartProfile() {
    if (Step::BaseObject::inited()) {
        return m_startProfile.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcSectionProperties::getStartProfile() const {
    IfcSectionProperties * deConstObject = const_cast< IfcSectionProperties * > (this);
    return deConstObject->getStartProfile();
}

void IfcSectionProperties::setStartProfile(const Step::RefPtr< IfcProfileDef > &value) {
    m_startProfile = value;
}

void IfcSectionProperties::unsetStartProfile() {
    m_startProfile = Step::getUnset(getStartProfile());
}

bool IfcSectionProperties::testStartProfile() const {
    return !Step::isUnset(getStartProfile());
}

IfcProfileDef *IfcSectionProperties::getEndProfile() {
    if (Step::BaseObject::inited()) {
        return m_endProfile.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcSectionProperties::getEndProfile() const {
    IfcSectionProperties * deConstObject = const_cast< IfcSectionProperties * > (this);
    return deConstObject->getEndProfile();
}

void IfcSectionProperties::setEndProfile(const Step::RefPtr< IfcProfileDef > &value) {
    m_endProfile = value;
}

void IfcSectionProperties::unsetEndProfile() {
    m_endProfile = Step::getUnset(getEndProfile());
}

bool IfcSectionProperties::testEndProfile() const {
    return !Step::isUnset(getEndProfile());
}

bool IfcSectionProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sectionType = IfcSectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".UNIFORM.") {
            m_sectionType = IfcSectionTypeEnum_UNIFORM;
        }
        else if (arg == ".TAPERED.") {
            m_sectionType = IfcSectionTypeEnum_TAPERED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startProfile = NULL;
    }
    else {
        m_startProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_endProfile = NULL;
    }
    else {
        m_endProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSectionProperties::copy(const IfcSectionProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSectionType(obj.m_sectionType);
    setStartProfile((IfcProfileDef*)copyop(obj.m_startProfile.get()));
    setEndProfile((IfcProfileDef*)copyop(obj.m_endProfile.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSectionProperties::s_type("IfcSectionProperties");
