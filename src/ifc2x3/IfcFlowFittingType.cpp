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



#include <ifc2x3/IfcFlowFittingType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDistributionFlowElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFlowFittingType::IfcFlowFittingType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowFittingType::~IfcFlowFittingType() {
}

bool IfcFlowFittingType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowFittingType(this);
}

const std::string &IfcFlowFittingType::type() const {
    return IfcFlowFittingType::s_type.getName();
}

const Step::ClassType &IfcFlowFittingType::getClassType() {
    return IfcFlowFittingType::s_type;
}

const Step::ClassType &IfcFlowFittingType::getType() const {
    return IfcFlowFittingType::s_type;
}

bool IfcFlowFittingType::isOfType(const Step::ClassType &t) const {
    return IfcFlowFittingType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcFlowFittingType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowFittingType::copy(const IfcFlowFittingType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFlowFittingType::s_type("IfcFlowFittingType");
