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



#include <ifc2x3/IfcBuildingElementProxy.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBuildingElementProxy::IfcBuildingElementProxy(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_compositionType = IfcElementCompositionEnum_UNSET;
}

IfcBuildingElementProxy::~IfcBuildingElementProxy() {
}

bool IfcBuildingElementProxy::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingElementProxy(this);
}

const std::string &IfcBuildingElementProxy::type() const {
    return IfcBuildingElementProxy::s_type.getName();
}

const Step::ClassType &IfcBuildingElementProxy::getClassType() {
    return IfcBuildingElementProxy::s_type;
}

const Step::ClassType &IfcBuildingElementProxy::getType() const {
    return IfcBuildingElementProxy::s_type;
}

bool IfcBuildingElementProxy::isOfType(const Step::ClassType &t) const {
    return IfcBuildingElementProxy::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType() {
    if (Step::BaseObject::inited()) {
        return m_compositionType;
    }
    else {
        return IfcElementCompositionEnum_UNSET;
    }
}

const IfcElementCompositionEnum IfcBuildingElementProxy::getCompositionType() const {
    IfcBuildingElementProxy * deConstObject = const_cast< IfcBuildingElementProxy * > (this);
    return deConstObject->getCompositionType();
}

void IfcBuildingElementProxy::setCompositionType(IfcElementCompositionEnum value) {
    m_compositionType = value;
}

void IfcBuildingElementProxy::unsetCompositionType() {
    m_compositionType = IfcElementCompositionEnum_UNSET;
}

bool IfcBuildingElementProxy::testCompositionType() const {
    return getCompositionType() != IfcElementCompositionEnum_UNSET;
}

bool IfcBuildingElementProxy::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compositionType = IfcElementCompositionEnum_UNSET;
    }
    else {
        if (arg == ".COMPLEX.") {
            m_compositionType = IfcElementCompositionEnum_COMPLEX;
        }
        else if (arg == ".ELEMENT.") {
            m_compositionType = IfcElementCompositionEnum_ELEMENT;
        }
        else if (arg == ".PARTIAL.") {
            m_compositionType = IfcElementCompositionEnum_PARTIAL;
        }
    }
    return true;
}

void IfcBuildingElementProxy::copy(const IfcBuildingElementProxy &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setCompositionType(obj.m_compositionType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBuildingElementProxy::s_type("IfcBuildingElementProxy");
