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



#include <ifc2x3/IfcElementAssembly.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElementAssembly::IfcElementAssembly(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
    m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
    m_predefinedType = IfcElementAssemblyTypeEnum_UNSET;
}

IfcElementAssembly::~IfcElementAssembly() {
}

bool IfcElementAssembly::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementAssembly(this);
}

const std::string &IfcElementAssembly::type() const {
    return IfcElementAssembly::s_type.getName();
}

const Step::ClassType &IfcElementAssembly::getClassType() {
    return IfcElementAssembly::s_type;
}

const Step::ClassType &IfcElementAssembly::getType() const {
    return IfcElementAssembly::s_type;
}

bool IfcElementAssembly::isOfType(const Step::ClassType &t) const {
    return IfcElementAssembly::s_type == t ? true : IfcElement::isOfType(t);
}

IfcAssemblyPlaceEnum IfcElementAssembly::getAssemblyPlace() {
    if (Step::BaseObject::inited()) {
        return m_assemblyPlace;
    }
    else {
        return IfcAssemblyPlaceEnum_UNSET;
    }
}

const IfcAssemblyPlaceEnum IfcElementAssembly::getAssemblyPlace() const {
    IfcElementAssembly * deConstObject = const_cast< IfcElementAssembly * > (this);
    return deConstObject->getAssemblyPlace();
}

void IfcElementAssembly::setAssemblyPlace(IfcAssemblyPlaceEnum value) {
    m_assemblyPlace = value;
}

void IfcElementAssembly::unsetAssemblyPlace() {
    m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
}

bool IfcElementAssembly::testAssemblyPlace() const {
    return getAssemblyPlace() != IfcAssemblyPlaceEnum_UNSET;
}

IfcElementAssemblyTypeEnum IfcElementAssembly::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElementAssemblyTypeEnum_UNSET;
    }
}

const IfcElementAssemblyTypeEnum IfcElementAssembly::getPredefinedType() const {
    IfcElementAssembly * deConstObject = const_cast< IfcElementAssembly * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElementAssembly::setPredefinedType(IfcElementAssemblyTypeEnum value) {
    m_predefinedType = value;
}

void IfcElementAssembly::unsetPredefinedType() {
    m_predefinedType = IfcElementAssemblyTypeEnum_UNSET;
}

bool IfcElementAssembly::testPredefinedType() const {
    return getPredefinedType() != IfcElementAssemblyTypeEnum_UNSET;
}

bool IfcElementAssembly::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
    }
    else {
        if (arg == ".SITE.") {
            m_assemblyPlace = IfcAssemblyPlaceEnum_SITE;
        }
        else if (arg == ".FACTORY.") {
            m_assemblyPlace = IfcAssemblyPlaceEnum_FACTORY;
        }
        else if (arg == ".NOTDEFINED.") {
            m_assemblyPlace = IfcAssemblyPlaceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElementAssemblyTypeEnum_UNSET;
    }
    else {
        if (arg == ".ACCESSORY_ASSEMBLY.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_ACCESSORY_ASSEMBLY;
        }
        else if (arg == ".ARCH.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_ARCH;
        }
        else if (arg == ".BEAM_GRID.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_BEAM_GRID;
        }
        else if (arg == ".BRACED_FRAME.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_BRACED_FRAME;
        }
        else if (arg == ".GIRDER.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_GIRDER;
        }
        else if (arg == ".REINFORCEMENT_UNIT.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_REINFORCEMENT_UNIT;
        }
        else if (arg == ".RIGID_FRAME.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_RIGID_FRAME;
        }
        else if (arg == ".SLAB_FIELD.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_SLAB_FIELD;
        }
        else if (arg == ".TRUSS.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_TRUSS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElementAssemblyTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElementAssembly::copy(const IfcElementAssembly &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    setAssemblyPlace(obj.m_assemblyPlace);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElementAssembly::s_type("IfcElementAssembly");
