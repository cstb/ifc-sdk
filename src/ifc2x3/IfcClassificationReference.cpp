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



#include <ifc2x3/IfcClassificationReference.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcClassificationReference::IfcClassificationReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
    m_referencedSource = NULL;
}

IfcClassificationReference::~IfcClassificationReference() {
}

bool IfcClassificationReference::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcClassificationReference(this);
}

const std::string &IfcClassificationReference::type() const {
    return IfcClassificationReference::s_type.getName();
}

const Step::ClassType &IfcClassificationReference::getClassType() {
    return IfcClassificationReference::s_type;
}

const Step::ClassType &IfcClassificationReference::getType() const {
    return IfcClassificationReference::s_type;
}

bool IfcClassificationReference::isOfType(const Step::ClassType &t) const {
    return IfcClassificationReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

IfcClassification *IfcClassificationReference::getReferencedSource() {
    if (Step::BaseObject::inited()) {
        return m_referencedSource.get();
    }
    else {
        return NULL;
    }
}

const IfcClassification *IfcClassificationReference::getReferencedSource() const {
    IfcClassificationReference * deConstObject = const_cast< IfcClassificationReference * > (this);
    return deConstObject->getReferencedSource();
}

void IfcClassificationReference::setReferencedSource(const Step::RefPtr< IfcClassification > &value) {
    m_referencedSource = value;
}

void IfcClassificationReference::unsetReferencedSource() {
    m_referencedSource = Step::getUnset(getReferencedSource());
}

bool IfcClassificationReference::testReferencedSource() const {
    return !Step::isUnset(getReferencedSource());
}

bool IfcClassificationReference::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencedSource = NULL;
    }
    else {
        m_referencedSource = static_cast< IfcClassification * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcClassificationReference::copy(const IfcClassificationReference &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    setReferencedSource((IfcClassification*)copyop(obj.m_referencedSource.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcClassificationReference::s_type("IfcClassificationReference");
