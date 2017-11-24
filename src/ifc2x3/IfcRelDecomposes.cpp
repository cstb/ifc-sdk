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



#include <ifc2x3/IfcRelDecomposes.h>


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

Inverted_IfcRelDecomposes_RelatedObjects_type::Inverted_IfcRelDecomposes_RelatedObjects_type():
    mOwner(0)
{
}

void Inverted_IfcRelDecomposes_RelatedObjects_type::setOwner(IfcRelDecomposes *owner) {
    mOwner = owner;
}

void Inverted_IfcRelDecomposes_RelatedObjects_type::insert(const Step::RefPtr< IfcObjectDefinition > &value) throw(std::out_of_range) {
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    Set_IfcObjectDefinition_1_n::insert(value);
    inverse->m_decomposes.insert(mOwner);
}

Inverted_IfcRelDecomposes_RelatedObjects_type::size_type Inverted_IfcRelDecomposes_RelatedObjects_type::erase(const Step::RefPtr< IfcObjectDefinition > &value) {
    IfcObjectDefinition *inverse = const_cast< IfcObjectDefinition * > (value.get());
    inverse->m_decomposes.erase(mOwner);
    return Set_IfcObjectDefinition_1_n::erase(value);
}

void Inverted_IfcRelDecomposes_RelatedObjects_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelDecomposes::IfcRelDecomposes(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatingObject = NULL;
    m_relatedObjects.setOwner(this);
}

IfcRelDecomposes::~IfcRelDecomposes() {
}

bool IfcRelDecomposes::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelDecomposes(this);
}

const std::string &IfcRelDecomposes::type() const {
    return IfcRelDecomposes::s_type.getName();
}

const Step::ClassType &IfcRelDecomposes::getClassType() {
    return IfcRelDecomposes::s_type;
}

const Step::ClassType &IfcRelDecomposes::getType() const {
    return IfcRelDecomposes::s_type;
}

bool IfcRelDecomposes::isOfType(const Step::ClassType &t) const {
    return IfcRelDecomposes::s_type == t ? true : IfcRelationship::isOfType(t);
}

IfcObjectDefinition *IfcRelDecomposes::getRelatingObject() {
    if (Step::BaseObject::inited()) {
        return m_relatingObject.get();
    }
    else {
        return NULL;
    }
}

const IfcObjectDefinition *IfcRelDecomposes::getRelatingObject() const {
    IfcRelDecomposes * deConstObject = const_cast< IfcRelDecomposes * > (this);
    return deConstObject->getRelatingObject();
}

void IfcRelDecomposes::setRelatingObject(const Step::RefPtr< IfcObjectDefinition > &value) {
    if (m_relatingObject.valid()) {
        m_relatingObject->m_isDecomposedBy.erase(this);
    }
    if (value.valid()) {
        value->m_isDecomposedBy.insert(this);
    }
    m_relatingObject = value;
}

void IfcRelDecomposes::unsetRelatingObject() {
    m_relatingObject = Step::getUnset(getRelatingObject());
}

bool IfcRelDecomposes::testRelatingObject() const {
    return !Step::isUnset(getRelatingObject());
}

Set_IfcObjectDefinition_1_n &IfcRelDecomposes::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

const Set_IfcObjectDefinition_1_n &IfcRelDecomposes::getRelatedObjects() const {
    IfcRelDecomposes * deConstObject = const_cast< IfcRelDecomposes * > (this);
    return deConstObject->getRelatedObjects();
}

void IfcRelDecomposes::unsetRelatedObjects() {
    m_relatedObjects.clear();
    m_relatedObjects.setUnset(true);
}

bool IfcRelDecomposes::testRelatedObjects() const {
    return !m_relatedObjects.isUnset();
}

bool IfcRelDecomposes::init() {
    bool status = IfcRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingObject = NULL;
    }
    else {
        m_relatingObject = static_cast< IfcObjectDefinition * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
                if (attr2 != NULL)
                    if (attr2.valid()) m_relatedObjects.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelDecomposes::copy(const IfcRelDecomposes &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcObjectDefinition >, 1 >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    setRelatingObject((IfcObjectDefinition*)copyop(obj.m_relatingObject.get()));
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcObjectDefinition > copyTarget = (IfcObjectDefinition *) (copyop((*it_m_relatedObjects).get()));
        m_relatedObjects.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelDecomposes::s_type("IfcRelDecomposes");
