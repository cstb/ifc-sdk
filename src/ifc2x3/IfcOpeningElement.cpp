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



#include <ifc2x3/IfcOpeningElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcOpeningElement::IfcOpeningElement(Step::Id id, Step::SPFData *args) : IfcFeatureElementSubtraction(id, args) {
}

IfcOpeningElement::~IfcOpeningElement() {
}

bool IfcOpeningElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOpeningElement(this);
}

const std::string &IfcOpeningElement::type() const {
    return IfcOpeningElement::s_type.getName();
}

const Step::ClassType &IfcOpeningElement::getClassType() {
    return IfcOpeningElement::s_type;
}

const Step::ClassType &IfcOpeningElement::getType() const {
    return IfcOpeningElement::s_type;
}

bool IfcOpeningElement::isOfType(const Step::ClassType &t) const {
    return IfcOpeningElement::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

Inverse_Set_IfcRelFillsElement_0_n &IfcOpeningElement::getHasFillings() {
    if (Step::BaseObject::inited()) {
        return m_hasFillings;
    }
    else {
        m_hasFillings.setUnset(true);
        return m_hasFillings;
    }
}

const Inverse_Set_IfcRelFillsElement_0_n &IfcOpeningElement::getHasFillings() const {
    IfcOpeningElement * deConstObject = const_cast< IfcOpeningElement * > (this);
    return deConstObject->getHasFillings();
}

bool IfcOpeningElement::testHasFillings() const {
    return !m_hasFillings.isUnset();
}

bool IfcOpeningElement::init() {
    bool status = IfcFeatureElementSubtraction::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasFillings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasFillings.insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcOpeningElement::copy(const IfcOpeningElement &obj, const CopyOp &copyop) {
    IfcFeatureElementSubtraction::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOpeningElement::s_type("IfcOpeningElement");
