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



#include <ifc2x3/IfcRelServicesBuildings.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcSystem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcRelServicesBuildings_RelatedBuildings_type::Inverted_IfcRelServicesBuildings_RelatedBuildings_type():
    mOwner(0)
{
}

void Inverted_IfcRelServicesBuildings_RelatedBuildings_type::setOwner(IfcRelServicesBuildings *owner) {
    mOwner = owner;
}

void Inverted_IfcRelServicesBuildings_RelatedBuildings_type::insert(const Step::RefPtr< IfcSpatialStructureElement > &value) throw(std::out_of_range) {
    IfcSpatialStructureElement *inverse = const_cast< IfcSpatialStructureElement * > (value.get());
    Set_IfcSpatialStructureElement_1_n::insert(value);
    inverse->m_servicedBySystems.insert(mOwner);
}

Inverted_IfcRelServicesBuildings_RelatedBuildings_type::size_type Inverted_IfcRelServicesBuildings_RelatedBuildings_type::erase(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    IfcSpatialStructureElement *inverse = const_cast< IfcSpatialStructureElement * > (value.get());
    inverse->m_servicedBySystems.erase(mOwner);
    return Set_IfcSpatialStructureElement_1_n::erase(value);
}

void Inverted_IfcRelServicesBuildings_RelatedBuildings_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelServicesBuildings::IfcRelServicesBuildings(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingSystem = NULL;
    m_relatedBuildings.setOwner(this);
}

IfcRelServicesBuildings::~IfcRelServicesBuildings() {
}

bool IfcRelServicesBuildings::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelServicesBuildings(this);
}

const std::string &IfcRelServicesBuildings::type() const {
    return IfcRelServicesBuildings::s_type.getName();
}

const Step::ClassType &IfcRelServicesBuildings::getClassType() {
    return IfcRelServicesBuildings::s_type;
}

const Step::ClassType &IfcRelServicesBuildings::getType() const {
    return IfcRelServicesBuildings::s_type;
}

bool IfcRelServicesBuildings::isOfType(const Step::ClassType &t) const {
    return IfcRelServicesBuildings::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSystem *IfcRelServicesBuildings::getRelatingSystem() {
    if (Step::BaseObject::inited()) {
        return m_relatingSystem.get();
    }
    else {
        return NULL;
    }
}

const IfcSystem *IfcRelServicesBuildings::getRelatingSystem() const {
    IfcRelServicesBuildings * deConstObject = const_cast< IfcRelServicesBuildings * > (this);
    return deConstObject->getRelatingSystem();
}

void IfcRelServicesBuildings::setRelatingSystem(const Step::RefPtr< IfcSystem > &value) {
    if (m_relatingSystem.valid()) {
        m_relatingSystem->m_servicesBuildings.erase(this);
    }
    if (value.valid()) {
        value->m_servicesBuildings.insert(this);
    }
    m_relatingSystem = value;
}

void IfcRelServicesBuildings::unsetRelatingSystem() {
    m_relatingSystem = Step::getUnset(getRelatingSystem());
}

bool IfcRelServicesBuildings::testRelatingSystem() const {
    return !Step::isUnset(getRelatingSystem());
}

Set_IfcSpatialStructureElement_1_n &IfcRelServicesBuildings::getRelatedBuildings() {
    if (Step::BaseObject::inited()) {
        return m_relatedBuildings;
    }
    else {
        m_relatedBuildings.setUnset(true);
        return m_relatedBuildings;
    }
}

const Set_IfcSpatialStructureElement_1_n &IfcRelServicesBuildings::getRelatedBuildings() const {
    IfcRelServicesBuildings * deConstObject = const_cast< IfcRelServicesBuildings * > (this);
    return deConstObject->getRelatedBuildings();
}

void IfcRelServicesBuildings::unsetRelatedBuildings() {
    m_relatedBuildings.clear();
    m_relatedBuildings.setUnset(true);
}

bool IfcRelServicesBuildings::testRelatedBuildings() const {
    return !m_relatedBuildings.isUnset();
}

bool IfcRelServicesBuildings::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingSystem = NULL;
    }
    else {
        m_relatingSystem = static_cast< IfcSystem * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedBuildings.setUnset(true);
    }
    else {
        m_relatedBuildings.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSpatialStructureElement > attr2;
                attr2 = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedBuildings.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelServicesBuildings::copy(const IfcRelServicesBuildings &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcSpatialStructureElement >, 1 >::const_iterator it_m_relatedBuildings;
    IfcRelConnects::copy(obj, copyop);
    setRelatingSystem((IfcSystem*)copyop(obj.m_relatingSystem.get()));
    for (it_m_relatedBuildings = obj.m_relatedBuildings.begin(); it_m_relatedBuildings != obj.m_relatedBuildings.end(); ++it_m_relatedBuildings) {
        Step::RefPtr< IfcSpatialStructureElement > copyTarget = (IfcSpatialStructureElement *) (copyop((*it_m_relatedBuildings).get()));
        m_relatedBuildings.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelServicesBuildings::s_type("IfcRelServicesBuildings");
