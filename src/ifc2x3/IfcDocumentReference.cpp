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



#include <ifc2x3/IfcDocumentReference.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcDocumentReference::IfcDocumentReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcDocumentReference::~IfcDocumentReference() {
}

bool IfcDocumentReference::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDocumentReference(this);
}

const std::string &IfcDocumentReference::type() const {
    return IfcDocumentReference::s_type.getName();
}

const Step::ClassType &IfcDocumentReference::getClassType() {
    return IfcDocumentReference::s_type;
}

const Step::ClassType &IfcDocumentReference::getType() const {
    return IfcDocumentReference::s_type;
}

bool IfcDocumentReference::isOfType(const Step::ClassType &t) const {
    return IfcDocumentReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Inverse_Set_IfcDocumentInformation_0_1 &IfcDocumentReference::getReferenceToDocument() {
    if (Step::BaseObject::inited()) {
        return m_referenceToDocument;
    }
    else {
        m_referenceToDocument.setUnset(true);
        return m_referenceToDocument;
    }
}

const Inverse_Set_IfcDocumentInformation_0_1 &IfcDocumentReference::getReferenceToDocument() const {
    IfcDocumentReference * deConstObject = const_cast< IfcDocumentReference * > (this);
    return deConstObject->getReferenceToDocument();
}

bool IfcDocumentReference::testReferenceToDocument() const {
    return !m_referenceToDocument.isUnset();
}

bool IfcDocumentReference::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcDocumentInformation::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_referenceToDocument.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referenceToDocument.insert(static_cast< IfcDocumentInformation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDocumentReference::copy(const IfcDocumentReference &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDocumentReference::s_type("IfcDocumentReference");
