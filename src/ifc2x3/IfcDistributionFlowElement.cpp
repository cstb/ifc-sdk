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



#include <ifc2x3/IfcDistributionFlowElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDistributionElement.h>
#include <ifc2x3/IfcRelFlowControlElements.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcDistributionFlowElement::IfcDistributionFlowElement(Step::Id id, Step::SPFData *args) : IfcDistributionElement(id, args) {
}

IfcDistributionFlowElement::~IfcDistributionFlowElement() {
}

bool IfcDistributionFlowElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionFlowElement(this);
}

const std::string &IfcDistributionFlowElement::type() const {
    return IfcDistributionFlowElement::s_type.getName();
}

const Step::ClassType &IfcDistributionFlowElement::getClassType() {
    return IfcDistributionFlowElement::s_type;
}

const Step::ClassType &IfcDistributionFlowElement::getType() const {
    return IfcDistributionFlowElement::s_type;
}

bool IfcDistributionFlowElement::isOfType(const Step::ClassType &t) const {
    return IfcDistributionFlowElement::s_type == t ? true : IfcDistributionElement::isOfType(t);
}

Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionFlowElement::getHasControlElements() {
    if (Step::BaseObject::inited()) {
        return m_hasControlElements;
    }
    else {
        m_hasControlElements.setUnset(true);
        return m_hasControlElements;
    }
}

const Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionFlowElement::getHasControlElements() const {
    IfcDistributionFlowElement * deConstObject = const_cast< IfcDistributionFlowElement * > (this);
    return deConstObject->getHasControlElements();
}

bool IfcDistributionFlowElement::testHasControlElements() const {
    return !m_hasControlElements.isUnset();
}

bool IfcDistributionFlowElement::init() {
    bool status = IfcDistributionElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_hasControlElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasControlElements.insert(static_cast< IfcRelFlowControlElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDistributionFlowElement::copy(const IfcDistributionFlowElement &obj, const CopyOp &copyop) {
    IfcDistributionElement::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDistributionFlowElement::s_type("IfcDistributionFlowElement");
