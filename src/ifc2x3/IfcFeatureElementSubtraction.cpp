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



#include <ifc2x3/IfcFeatureElementSubtraction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFeatureElement.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcFeatureElementSubtraction::IfcFeatureElementSubtraction(Step::Id id, Step::SPFData *args) : IfcFeatureElement(id, args) {
}

IfcFeatureElementSubtraction::~IfcFeatureElementSubtraction() {
}

bool IfcFeatureElementSubtraction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFeatureElementSubtraction(this);
}

const std::string &IfcFeatureElementSubtraction::type() const {
    return IfcFeatureElementSubtraction::s_type.getName();
}

const Step::ClassType &IfcFeatureElementSubtraction::getClassType() {
    return IfcFeatureElementSubtraction::s_type;
}

const Step::ClassType &IfcFeatureElementSubtraction::getType() const {
    return IfcFeatureElementSubtraction::s_type;
}

bool IfcFeatureElementSubtraction::isOfType(const Step::ClassType &t) const {
    return IfcFeatureElementSubtraction::s_type == t ? true : IfcFeatureElement::isOfType(t);
}

IfcRelVoidsElement *IfcFeatureElementSubtraction::getVoidsElements() {
    if (Step::BaseObject::inited()) {
        return m_voidsElements.get();
    }
    else {
        return NULL;
    }
}

const IfcRelVoidsElement *IfcFeatureElementSubtraction::getVoidsElements() const {
    IfcFeatureElementSubtraction * deConstObject = const_cast< IfcFeatureElementSubtraction * > (this);
    return deConstObject->getVoidsElements();
}

bool IfcFeatureElementSubtraction::testVoidsElements() const {
    return !Step::isUnset(getVoidsElements());
}

bool IfcFeatureElementSubtraction::init() {
    bool status = IfcFeatureElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 5);
    if (inverses) {
        m_voidsElements = static_cast< IfcRelVoidsElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcFeatureElementSubtraction::copy(const IfcFeatureElementSubtraction &obj, const CopyOp &copyop) {
    IfcFeatureElement::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFeatureElementSubtraction::s_type("IfcFeatureElementSubtraction");
