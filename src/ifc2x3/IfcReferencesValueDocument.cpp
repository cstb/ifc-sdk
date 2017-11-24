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



#include <ifc2x3/IfcReferencesValueDocument.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcReferencesValueDocument_ReferencingValues_type::Inverted_IfcReferencesValueDocument_ReferencingValues_type():
    mOwner(0)
{
}

void Inverted_IfcReferencesValueDocument_ReferencingValues_type::setOwner(IfcReferencesValueDocument *owner) {
    mOwner = owner;
}

void Inverted_IfcReferencesValueDocument_ReferencingValues_type::insert(const Step::RefPtr< IfcAppliedValue > &value) throw(std::out_of_range) {
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    Set_IfcAppliedValue_1_n::insert(value);
    inverse->m_valuesReferenced.insert(mOwner);
}

Inverted_IfcReferencesValueDocument_ReferencingValues_type::size_type Inverted_IfcReferencesValueDocument_ReferencingValues_type::erase(const Step::RefPtr< IfcAppliedValue > &value) {
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    inverse->m_valuesReferenced.erase(mOwner);
    return Set_IfcAppliedValue_1_n::erase(value);
}

void Inverted_IfcReferencesValueDocument_ReferencingValues_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcReferencesValueDocument::IfcReferencesValueDocument(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_referencedDocument = NULL;
    m_referencingValues.setOwner(this);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcReferencesValueDocument::~IfcReferencesValueDocument() {
}

bool IfcReferencesValueDocument::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReferencesValueDocument(this);
}

const std::string &IfcReferencesValueDocument::type() const {
    return IfcReferencesValueDocument::s_type.getName();
}

const Step::ClassType &IfcReferencesValueDocument::getClassType() {
    return IfcReferencesValueDocument::s_type;
}

const Step::ClassType &IfcReferencesValueDocument::getType() const {
    return IfcReferencesValueDocument::s_type;
}

bool IfcReferencesValueDocument::isOfType(const Step::ClassType &t) const {
    return IfcReferencesValueDocument::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDocumentSelect *IfcReferencesValueDocument::getReferencedDocument() {
    if (Step::BaseObject::inited()) {
        return m_referencedDocument.get();
    }
    else {
        return NULL;
    }
}

const IfcDocumentSelect *IfcReferencesValueDocument::getReferencedDocument() const {
    IfcReferencesValueDocument * deConstObject = const_cast< IfcReferencesValueDocument * > (this);
    return deConstObject->getReferencedDocument();
}

void IfcReferencesValueDocument::setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value) {
    m_referencedDocument = value;
}

void IfcReferencesValueDocument::unsetReferencedDocument() {
    m_referencedDocument = Step::getUnset(getReferencedDocument());
}

bool IfcReferencesValueDocument::testReferencedDocument() const {
    return !Step::isUnset(getReferencedDocument());
}

Set_IfcAppliedValue_1_n &IfcReferencesValueDocument::getReferencingValues() {
    if (Step::BaseObject::inited()) {
        return m_referencingValues;
    }
    else {
        m_referencingValues.setUnset(true);
        return m_referencingValues;
    }
}

const Set_IfcAppliedValue_1_n &IfcReferencesValueDocument::getReferencingValues() const {
    IfcReferencesValueDocument * deConstObject = const_cast< IfcReferencesValueDocument * > (this);
    return deConstObject->getReferencingValues();
}

void IfcReferencesValueDocument::unsetReferencingValues() {
    m_referencingValues.clear();
    m_referencingValues.setUnset(true);
}

bool IfcReferencesValueDocument::testReferencingValues() const {
    return !m_referencingValues.isUnset();
}

IfcLabel IfcReferencesValueDocument::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcReferencesValueDocument::getName() const {
    IfcReferencesValueDocument * deConstObject = const_cast< IfcReferencesValueDocument * > (this);
    return deConstObject->getName();
}

void IfcReferencesValueDocument::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcReferencesValueDocument::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcReferencesValueDocument::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcReferencesValueDocument::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcReferencesValueDocument::getDescription() const {
    IfcReferencesValueDocument * deConstObject = const_cast< IfcReferencesValueDocument * > (this);
    return deConstObject->getDescription();
}

void IfcReferencesValueDocument::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcReferencesValueDocument::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcReferencesValueDocument::testDescription() const {
    return !Step::isUnset(getDescription());
}

bool IfcReferencesValueDocument::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencedDocument = NULL;
    }
    else {
        m_referencedDocument = new IfcDocumentSelect;
        if (arg[0] == '#') {
            m_referencedDocument->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencingValues.setUnset(true);
    }
    else {
        m_referencingValues.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAppliedValue > attr2;
                attr2 = static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_referencingValues.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcReferencesValueDocument::copy(const IfcReferencesValueDocument &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcAppliedValue >, 1 >::const_iterator it_m_referencingValues;
    Step::BaseEntity::copy(obj, copyop);
    m_referencedDocument = new IfcDocumentSelect;
    m_referencedDocument->copy(*(obj.m_referencedDocument.get()), copyop);
    for (it_m_referencingValues = obj.m_referencingValues.begin(); it_m_referencingValues != obj.m_referencingValues.end(); ++it_m_referencingValues) {
        Step::RefPtr< IfcAppliedValue > copyTarget = (IfcAppliedValue *) (copyop((*it_m_referencingValues).get()));
        m_referencingValues.insert(copyTarget.get());
    }
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcReferencesValueDocument::s_type("IfcReferencesValueDocument");
