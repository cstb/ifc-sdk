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



#include <ifc2x3/IfcRelAssigns.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcRelAssigns_RelatedObjects_type::Inverted_IfcRelAssigns_RelatedObjects_type():
    mOwner(0)
{
}

void Inverted_IfcRelAssigns_RelatedObjects_type::setOwner(IfcRelAssigns *owner) {
    mOwner = owner;
}

void Inverted_IfcRelAssigns_RelatedObjects_type::insert(const Step::RefPtr< IfcObjectDefinition > &value) throw(std::out_of_range) {
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    Set_IfcObjectDefinition_1_n::insert(value);
    inverse->m_hasAssignments.insert(mOwner);
}

Inverted_IfcRelAssigns_RelatedObjects_type::size_type Inverted_IfcRelAssigns_RelatedObjects_type::erase(const Step::RefPtr< IfcObjectDefinition > &value) {
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    inverse->m_hasAssignments.erase(mOwner);
    return Set_IfcObjectDefinition_1_n::erase(value);
}

void Inverted_IfcRelAssigns_RelatedObjects_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelAssigns::IfcRelAssigns(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatedObjects.setOwner(this);
    m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
}

IfcRelAssigns::~IfcRelAssigns() {
}

bool IfcRelAssigns::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssigns(this);
}

const std::string &IfcRelAssigns::type() const {
    return IfcRelAssigns::s_type.getName();
}

const Step::ClassType &IfcRelAssigns::getClassType() {
    return IfcRelAssigns::s_type;
}

const Step::ClassType &IfcRelAssigns::getType() const {
    return IfcRelAssigns::s_type;
}

bool IfcRelAssigns::isOfType(const Step::ClassType &t) const {
    return IfcRelAssigns::s_type == t ? true : IfcRelationship::isOfType(t);
}

Set_IfcObjectDefinition_1_n &IfcRelAssigns::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

const Set_IfcObjectDefinition_1_n &IfcRelAssigns::getRelatedObjects() const {
    IfcRelAssigns * deConstObject = const_cast< IfcRelAssigns * > (this);
    return deConstObject->getRelatedObjects();
}

void IfcRelAssigns::unsetRelatedObjects() {
    m_relatedObjects.clear();
    m_relatedObjects.setUnset(true);
}

bool IfcRelAssigns::testRelatedObjects() const {
    return !m_relatedObjects.isUnset();
}

IfcObjectTypeEnum IfcRelAssigns::getRelatedObjectsType() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjectsType;
    }
    else {
        return IfcObjectTypeEnum_UNSET;
    }
}

const IfcObjectTypeEnum IfcRelAssigns::getRelatedObjectsType() const {
    IfcRelAssigns * deConstObject = const_cast< IfcRelAssigns * > (this);
    return deConstObject->getRelatedObjectsType();
}

void IfcRelAssigns::setRelatedObjectsType(IfcObjectTypeEnum value) {
    m_relatedObjectsType = value;
}

void IfcRelAssigns::unsetRelatedObjectsType() {
    m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
}

bool IfcRelAssigns::testRelatedObjectsType() const {
    return getRelatedObjectsType() != IfcObjectTypeEnum_UNSET;
}

bool IfcRelAssigns::init() {
    bool status = IfcRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedObjects.setUnset(true);
    }
    else {
        m_relatedObjects.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcObjectDefinition > attr2;
                attr2 = static_cast< IfcObjectDefinition * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedObjects.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedObjectsType = IfcObjectTypeEnum_UNSET;
    }
    else {
        if (arg == ".PRODUCT.") {
            m_relatedObjectsType = IfcObjectTypeEnum_PRODUCT;
        }
        else if (arg == ".PROCESS.") {
            m_relatedObjectsType = IfcObjectTypeEnum_PROCESS;
        }
        else if (arg == ".CONTROL.") {
            m_relatedObjectsType = IfcObjectTypeEnum_CONTROL;
        }
        else if (arg == ".RESOURCE.") {
            m_relatedObjectsType = IfcObjectTypeEnum_RESOURCE;
        }
        else if (arg == ".ACTOR.") {
            m_relatedObjectsType = IfcObjectTypeEnum_ACTOR;
        }
        else if (arg == ".GROUP.") {
            m_relatedObjectsType = IfcObjectTypeEnum_GROUP;
        }
        else if (arg == ".PROJECT.") {
            m_relatedObjectsType = IfcObjectTypeEnum_PROJECT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_relatedObjectsType = IfcObjectTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRelAssigns::copy(const IfcRelAssigns &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcObjectDefinition >, 1 >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcObjectDefinition > copyTarget = (IfcObjectDefinition *) (copyop((*it_m_relatedObjects).get()));
        m_relatedObjects.insert(copyTarget.get());
    }
    setRelatedObjectsType(obj.m_relatedObjectsType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssigns::s_type("IfcRelAssigns");
