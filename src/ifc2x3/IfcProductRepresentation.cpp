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



#include <ifc2x3/IfcProductRepresentation.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRepresentation.h>
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

Inverted_IfcProductRepresentation_Representations_type::Inverted_IfcProductRepresentation_Representations_type():
    mOwner(0)
{
}

void Inverted_IfcProductRepresentation_Representations_type::setOwner(IfcProductRepresentation *owner) {
    mOwner = owner;
}

void Inverted_IfcProductRepresentation_Representations_type::push_back(const Step::RefPtr< IfcRepresentation > &value) throw(std::out_of_range) {
    IfcRepresentation *inverse = const_cast< IfcRepresentation * > (value.get());
    List_IfcRepresentation_1_n::push_back(value);
    inverse->m_ofProductRepresentation.insert(mOwner);
}

Inverted_IfcProductRepresentation_Representations_type::iterator Inverted_IfcProductRepresentation_Representations_type::erase(const Step::RefPtr< IfcRepresentation > &value) {
    IfcRepresentation *inverse = const_cast< IfcRepresentation * > (value.get());
    inverse->m_ofProductRepresentation.erase(mOwner);
    return List_IfcRepresentation_1_n::erase(value);
}

void Inverted_IfcProductRepresentation_Representations_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcProductRepresentation::IfcProductRepresentation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_representations.setOwner(this);
}

IfcProductRepresentation::~IfcProductRepresentation() {
}

bool IfcProductRepresentation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProductRepresentation(this);
}

const std::string &IfcProductRepresentation::type() const {
    return IfcProductRepresentation::s_type.getName();
}

const Step::ClassType &IfcProductRepresentation::getClassType() {
    return IfcProductRepresentation::s_type;
}

const Step::ClassType &IfcProductRepresentation::getType() const {
    return IfcProductRepresentation::s_type;
}

bool IfcProductRepresentation::isOfType(const Step::ClassType &t) const {
    return IfcProductRepresentation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcProductRepresentation::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcProductRepresentation::getName() const {
    IfcProductRepresentation * deConstObject = const_cast< IfcProductRepresentation * > (this);
    return deConstObject->getName();
}

void IfcProductRepresentation::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcProductRepresentation::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcProductRepresentation::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcProductRepresentation::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcProductRepresentation::getDescription() const {
    IfcProductRepresentation * deConstObject = const_cast< IfcProductRepresentation * > (this);
    return deConstObject->getDescription();
}

void IfcProductRepresentation::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcProductRepresentation::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcProductRepresentation::testDescription() const {
    return !Step::isUnset(getDescription());
}

List_IfcRepresentation_1_n &IfcProductRepresentation::getRepresentations() {
    if (Step::BaseObject::inited()) {
        return m_representations;
    }
    else {
        m_representations.setUnset(true);
        return m_representations;
    }
}

const List_IfcRepresentation_1_n &IfcProductRepresentation::getRepresentations() const {
    IfcProductRepresentation * deConstObject = const_cast< IfcProductRepresentation * > (this);
    return deConstObject->getRepresentations();
}

void IfcProductRepresentation::unsetRepresentations() {
    m_representations.clear();
    m_representations.setUnset(true);
}

bool IfcProductRepresentation::testRepresentations() const {
    return !m_representations.isUnset();
}

bool IfcProductRepresentation::init() {
    std::string arg;
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representations.setUnset(true);
    }
    else {
        m_representations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentation > attr2;
                attr2 = static_cast< IfcRepresentation * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_representations.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcProductRepresentation::copy(const IfcProductRepresentation &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcRepresentation >, 1 >::const_iterator it_m_representations;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_representations = obj.m_representations.begin(); it_m_representations != obj.m_representations.end(); ++it_m_representations) {
        Step::RefPtr< IfcRepresentation > copyTarget = (IfcRepresentation *) (copyop((*it_m_representations).get()));
        m_representations.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProductRepresentation::s_type("IfcProductRepresentation");
