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



#include <ifc2x3/IfcFlowFitting.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFlowFitting::IfcFlowFitting(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowFitting::~IfcFlowFitting() {
}

bool IfcFlowFitting::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowFitting(this);
}

const std::string &IfcFlowFitting::type() const {
    return IfcFlowFitting::s_type.getName();
}

const Step::ClassType &IfcFlowFitting::getClassType() {
    return IfcFlowFitting::s_type;
}

const Step::ClassType &IfcFlowFitting::getType() const {
    return IfcFlowFitting::s_type;
}

bool IfcFlowFitting::isOfType(const Step::ClassType &t) const {
    return IfcFlowFitting::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

bool IfcFlowFitting::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowFitting::copy(const IfcFlowFitting &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFlowFitting::s_type("IfcFlowFitting");
