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



#include <ifc2x3/IfcRelAssignsToResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelAssigns.h>
#include <ifc2x3/IfcResource.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssignsToResource::IfcRelAssignsToResource(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingResource = NULL;
}

IfcRelAssignsToResource::~IfcRelAssignsToResource() {
}

bool IfcRelAssignsToResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToResource(this);
}

const std::string &IfcRelAssignsToResource::type() const {
    return IfcRelAssignsToResource::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToResource::getClassType() {
    return IfcRelAssignsToResource::s_type;
}

const Step::ClassType &IfcRelAssignsToResource::getType() const {
    return IfcRelAssignsToResource::s_type;
}

bool IfcRelAssignsToResource::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsToResource::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcResource *IfcRelAssignsToResource::getRelatingResource() {
    if (Step::BaseObject::inited()) {
        return m_relatingResource.get();
    }
    else {
        return NULL;
    }
}

const IfcResource *IfcRelAssignsToResource::getRelatingResource() const {
    IfcRelAssignsToResource * deConstObject = const_cast< IfcRelAssignsToResource * > (this);
    return deConstObject->getRelatingResource();
}

void IfcRelAssignsToResource::setRelatingResource(const Step::RefPtr< IfcResource > &value) {
    if (m_relatingResource.valid()) {
        m_relatingResource->m_resourceOf.erase(this);
    }
    if (value.valid()) {
        value->m_resourceOf.insert(this);
    }
    m_relatingResource = value;
}

void IfcRelAssignsToResource::unsetRelatingResource() {
    m_relatingResource = Step::getUnset(getRelatingResource());
}

bool IfcRelAssignsToResource::testRelatingResource() const {
    return !Step::isUnset(getRelatingResource());
}

bool IfcRelAssignsToResource::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingResource = NULL;
    }
    else {
        m_relatingResource = static_cast< IfcResource * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsToResource::copy(const IfcRelAssignsToResource &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingResource((IfcResource*)copyop(obj.m_relatingResource.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssignsToResource::s_type("IfcRelAssignsToResource");
