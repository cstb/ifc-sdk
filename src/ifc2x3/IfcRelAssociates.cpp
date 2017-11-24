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



#include <ifc2x3/IfcRelAssociates.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcPropertyDefinition.h>
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcRelAssociates_RelatedObjects_type::Inverted_IfcRelAssociates_RelatedObjects_type():
    mOwner(0)
{
}

void Inverted_IfcRelAssociates_RelatedObjects_type::setOwner(IfcRelAssociates *owner) {
    mOwner = owner;
}

void Inverted_IfcRelAssociates_RelatedObjects_type::insert(const Step::RefPtr< IfcRoot > &value) throw(std::out_of_range) {
    IfcRoot *inverse = const_cast< IfcRoot * > (value.get());
    Set_IfcRoot_1_n::insert(value);
    if (dynamic_cast< IfcObjectDefinition * > (inverse) != NULL) {
        ((IfcObjectDefinition *) (inverse))->m_hasAssociations.insert(mOwner);
    }
    if (dynamic_cast< IfcPropertyDefinition * > (inverse) != NULL) {
        ((IfcPropertyDefinition *) (inverse))->m_hasAssociations.insert(mOwner);
    }
}

Inverted_IfcRelAssociates_RelatedObjects_type::size_type Inverted_IfcRelAssociates_RelatedObjects_type::erase(const Step::RefPtr< IfcRoot > &value) {
    IfcRoot *inverse = const_cast< IfcRoot * > (value.get());
	if (dynamic_cast< IfcObjectDefinition * > (inverse) != NULL) {
        ((IfcObjectDefinition *) (inverse))->m_hasAssociations.erase(mOwner);
    }
    if (dynamic_cast< IfcPropertyDefinition * > (inverse) != NULL) {
        ((IfcPropertyDefinition *) (inverse))->m_hasAssociations.erase(mOwner);
    }
    return Set_IfcRoot_1_n::erase(value);
}

void Inverted_IfcRelAssociates_RelatedObjects_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelAssociates::IfcRelAssociates(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
    m_relatedObjects.setOwner(this);
}

IfcRelAssociates::~IfcRelAssociates() {
}

bool IfcRelAssociates::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociates(this);
}

const std::string &IfcRelAssociates::type() const {
    return IfcRelAssociates::s_type.getName();
}

const Step::ClassType &IfcRelAssociates::getClassType() {
    return IfcRelAssociates::s_type;
}

const Step::ClassType &IfcRelAssociates::getType() const {
    return IfcRelAssociates::s_type;
}

bool IfcRelAssociates::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociates::s_type == t ? true : IfcRelationship::isOfType(t);
}

Set_IfcRoot_1_n &IfcRelAssociates::getRelatedObjects() {
    if (Step::BaseObject::inited()) {
        return m_relatedObjects;
    }
    else {
        m_relatedObjects.setUnset(true);
        return m_relatedObjects;
    }
}

const Set_IfcRoot_1_n &IfcRelAssociates::getRelatedObjects() const {
    IfcRelAssociates * deConstObject = const_cast< IfcRelAssociates * > (this);
    return deConstObject->getRelatedObjects();
}

void IfcRelAssociates::unsetRelatedObjects() {
    m_relatedObjects.clear();
    m_relatedObjects.setUnset(true);
}

bool IfcRelAssociates::testRelatedObjects() const {
    return !m_relatedObjects.isUnset();
}

bool IfcRelAssociates::init() {
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
                Step::RefPtr< IfcRoot > attr2;
                attr2 = static_cast< IfcRoot * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedObjects.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelAssociates::copy(const IfcRelAssociates &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRoot >, 1 >::const_iterator it_m_relatedObjects;
    IfcRelationship::copy(obj, copyop);
    for (it_m_relatedObjects = obj.m_relatedObjects.begin(); it_m_relatedObjects != obj.m_relatedObjects.end(); ++it_m_relatedObjects) {
        Step::RefPtr< IfcRoot > copyTarget = (IfcRoot *) (copyop((*it_m_relatedObjects).get()));
        m_relatedObjects.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociates::s_type("IfcRelAssociates");
