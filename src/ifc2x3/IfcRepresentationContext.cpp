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



#include <ifc2x3/IfcRepresentationContext.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcRepresentationContext::IfcRepresentationContext(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_contextIdentifier = Step::getUnset(m_contextIdentifier);
    m_contextType = Step::getUnset(m_contextType);
}

IfcRepresentationContext::~IfcRepresentationContext() {
}

bool IfcRepresentationContext::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRepresentationContext(this);
}

const std::string &IfcRepresentationContext::type() const {
    return IfcRepresentationContext::s_type.getName();
}

const Step::ClassType &IfcRepresentationContext::getClassType() {
    return IfcRepresentationContext::s_type;
}

const Step::ClassType &IfcRepresentationContext::getType() const {
    return IfcRepresentationContext::s_type;
}

bool IfcRepresentationContext::isOfType(const Step::ClassType &t) const {
    return IfcRepresentationContext::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcRepresentationContext::getContextIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_contextIdentifier;
    }
    else {
        return Step::getUnset(m_contextIdentifier);
    }
}

const IfcLabel IfcRepresentationContext::getContextIdentifier() const {
    IfcRepresentationContext * deConstObject = const_cast< IfcRepresentationContext * > (this);
    return deConstObject->getContextIdentifier();
}

void IfcRepresentationContext::setContextIdentifier(const IfcLabel &value) {
    m_contextIdentifier = value;
}

void IfcRepresentationContext::unsetContextIdentifier() {
    m_contextIdentifier = Step::getUnset(getContextIdentifier());
}

bool IfcRepresentationContext::testContextIdentifier() const {
    return !Step::isUnset(getContextIdentifier());
}

IfcLabel IfcRepresentationContext::getContextType() {
    if (Step::BaseObject::inited()) {
        return m_contextType;
    }
    else {
        return Step::getUnset(m_contextType);
    }
}

const IfcLabel IfcRepresentationContext::getContextType() const {
    IfcRepresentationContext * deConstObject = const_cast< IfcRepresentationContext * > (this);
    return deConstObject->getContextType();
}

void IfcRepresentationContext::setContextType(const IfcLabel &value) {
    m_contextType = value;
}

void IfcRepresentationContext::unsetContextType() {
    m_contextType = Step::getUnset(getContextType());
}

bool IfcRepresentationContext::testContextType() const {
    return !Step::isUnset(getContextType());
}

Inverse_Set_IfcRepresentation_0_n &IfcRepresentationContext::getRepresentationsInContext() {
    if (Step::BaseObject::inited()) {
        return m_representationsInContext;
    }
    else {
        m_representationsInContext.setUnset(true);
        return m_representationsInContext;
    }
}

const Inverse_Set_IfcRepresentation_0_n &IfcRepresentationContext::getRepresentationsInContext() const {
    IfcRepresentationContext * deConstObject = const_cast< IfcRepresentationContext * > (this);
    return deConstObject->getRepresentationsInContext();
}

bool IfcRepresentationContext::testRepresentationsInContext() const {
    return !m_representationsInContext.isUnset();
}

bool IfcRepresentationContext::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contextIdentifier = Step::getUnset(m_contextIdentifier);
    }
    else {
        m_contextIdentifier = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contextType = Step::getUnset(m_contextType);
    }
    else {
        m_contextType = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcRepresentation::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_representationsInContext.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_representationsInContext.insert(static_cast< IfcRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationContext::copy(const IfcRepresentationContext &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setContextIdentifier(obj.m_contextIdentifier);
    setContextType(obj.m_contextType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRepresentationContext::s_type("IfcRepresentationContext");
