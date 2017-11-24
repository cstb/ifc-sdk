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



#include <ifc2x3/IfcDocumentInformationRelationship.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type():
    mOwner(0)
{
}

void Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::setOwner(IfcDocumentInformationRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::insert(const Step::RefPtr< IfcDocumentInformation > &value) throw(std::out_of_range) {
    IfcDocumentInformation *inverse = const_cast< IfcDocumentInformation * > (value.get());
    Set_IfcDocumentInformation_1_n::insert(value);
    inverse->m_isPointedTo.insert(mOwner);
}

Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::size_type Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::erase(const Step::RefPtr< IfcDocumentInformation > &value) {
    IfcDocumentInformation *inverse = const_cast< IfcDocumentInformation * > (value.get());
    inverse->m_isPointedTo.erase(mOwner);
    return Set_IfcDocumentInformation_1_n::erase(value);
}

void Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcDocumentInformationRelationship::IfcDocumentInformationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingDocument = NULL;
    m_relatedDocuments.setOwner(this);
    m_relationshipType = Step::getUnset(m_relationshipType);
}

IfcDocumentInformationRelationship::~IfcDocumentInformationRelationship() {
}

bool IfcDocumentInformationRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDocumentInformationRelationship(this);
}

const std::string &IfcDocumentInformationRelationship::type() const {
    return IfcDocumentInformationRelationship::s_type.getName();
}

const Step::ClassType &IfcDocumentInformationRelationship::getClassType() {
    return IfcDocumentInformationRelationship::s_type;
}

const Step::ClassType &IfcDocumentInformationRelationship::getType() const {
    return IfcDocumentInformationRelationship::s_type;
}

bool IfcDocumentInformationRelationship::isOfType(const Step::ClassType &t) const {
    return IfcDocumentInformationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDocumentInformation *IfcDocumentInformationRelationship::getRelatingDocument() {
    if (Step::BaseObject::inited()) {
        return m_relatingDocument.get();
    }
    else {
        return NULL;
    }
}

const IfcDocumentInformation *IfcDocumentInformationRelationship::getRelatingDocument() const {
    IfcDocumentInformationRelationship * deConstObject = const_cast< IfcDocumentInformationRelationship * > (this);
    return deConstObject->getRelatingDocument();
}

void IfcDocumentInformationRelationship::setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value) {
    if (m_relatingDocument.valid()) {
        m_relatingDocument->m_isPointer.erase(this);
    }
    if (value.valid()) {
        value->m_isPointer.insert(this);
    }
    m_relatingDocument = value;
}

void IfcDocumentInformationRelationship::unsetRelatingDocument() {
    m_relatingDocument = Step::getUnset(getRelatingDocument());
}

bool IfcDocumentInformationRelationship::testRelatingDocument() const {
    return !Step::isUnset(getRelatingDocument());
}

Set_IfcDocumentInformation_1_n &IfcDocumentInformationRelationship::getRelatedDocuments() {
    if (Step::BaseObject::inited()) {
        return m_relatedDocuments;
    }
    else {
        m_relatedDocuments.setUnset(true);
        return m_relatedDocuments;
    }
}

const Set_IfcDocumentInformation_1_n &IfcDocumentInformationRelationship::getRelatedDocuments() const {
    IfcDocumentInformationRelationship * deConstObject = const_cast< IfcDocumentInformationRelationship * > (this);
    return deConstObject->getRelatedDocuments();
}

void IfcDocumentInformationRelationship::unsetRelatedDocuments() {
    m_relatedDocuments.clear();
    m_relatedDocuments.setUnset(true);
}

bool IfcDocumentInformationRelationship::testRelatedDocuments() const {
    return !m_relatedDocuments.isUnset();
}

IfcLabel IfcDocumentInformationRelationship::getRelationshipType() {
    if (Step::BaseObject::inited()) {
        return m_relationshipType;
    }
    else {
        return Step::getUnset(m_relationshipType);
    }
}

const IfcLabel IfcDocumentInformationRelationship::getRelationshipType() const {
    IfcDocumentInformationRelationship * deConstObject = const_cast< IfcDocumentInformationRelationship * > (this);
    return deConstObject->getRelationshipType();
}

void IfcDocumentInformationRelationship::setRelationshipType(const IfcLabel &value) {
    m_relationshipType = value;
}

void IfcDocumentInformationRelationship::unsetRelationshipType() {
    m_relationshipType = Step::getUnset(getRelationshipType());
}

bool IfcDocumentInformationRelationship::testRelationshipType() const {
    return !Step::isUnset(getRelationshipType());
}

bool IfcDocumentInformationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingDocument = NULL;
    }
    else {
        m_relatingDocument = static_cast< IfcDocumentInformation * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedDocuments.setUnset(true);
    }
    else {
        m_relatedDocuments.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDocumentInformation > attr2;
                attr2 = static_cast< IfcDocumentInformation * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedDocuments.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relationshipType = Step::getUnset(m_relationshipType);
    }
    else {
        m_relationshipType = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcDocumentInformationRelationship::copy(const IfcDocumentInformationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDocumentInformation >, 1 >::const_iterator it_m_relatedDocuments;
    Step::BaseEntity::copy(obj, copyop);
    setRelatingDocument((IfcDocumentInformation*)copyop(obj.m_relatingDocument.get()));
    for (it_m_relatedDocuments = obj.m_relatedDocuments.begin(); it_m_relatedDocuments != obj.m_relatedDocuments.end(); ++it_m_relatedDocuments) {
        Step::RefPtr< IfcDocumentInformation > copyTarget = (IfcDocumentInformation *) (copyop((*it_m_relatedDocuments).get()));
        m_relatedDocuments.insert(copyTarget.get());
    }
    setRelationshipType(obj.m_relationshipType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDocumentInformationRelationship::s_type("IfcDocumentInformationRelationship");
