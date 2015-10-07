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



#include <ifc2x3/IfcLibraryReference.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcLibraryReference::IfcLibraryReference(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcLibraryReference::~IfcLibraryReference() {
}

bool IfcLibraryReference::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLibraryReference(this);
}

const std::string &IfcLibraryReference::type() const {
    return IfcLibraryReference::s_type.getName();
}

const Step::ClassType &IfcLibraryReference::getClassType() {
    return IfcLibraryReference::s_type;
}

const Step::ClassType &IfcLibraryReference::getType() const {
    return IfcLibraryReference::s_type;
}

bool IfcLibraryReference::isOfType(const Step::ClassType &t) const {
    return IfcLibraryReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Inverse_Set_IfcLibraryInformation_0_1 &IfcLibraryReference::getReferenceIntoLibrary() {
    if (Step::BaseObject::inited()) {
        return m_referenceIntoLibrary;
    }
    else {
        m_referenceIntoLibrary.setUnset(true);
        return m_referenceIntoLibrary;
    }
}

const Inverse_Set_IfcLibraryInformation_0_1 &IfcLibraryReference::getReferenceIntoLibrary() const {
    IfcLibraryReference * deConstObject = const_cast< IfcLibraryReference * > (this);
    return deConstObject->getReferenceIntoLibrary();
}

bool IfcLibraryReference::testReferenceIntoLibrary() const {
    return !m_referenceIntoLibrary.isUnset();
}

bool IfcLibraryReference::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcLibraryInformation::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_referenceIntoLibrary.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referenceIntoLibrary.insert(static_cast< IfcLibraryInformation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcLibraryReference::copy(const IfcLibraryReference &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLibraryReference::s_type("IfcLibraryReference");
