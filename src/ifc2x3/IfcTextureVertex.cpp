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



#include <ifc2x3/IfcTextureVertex.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTextureVertex::IfcTextureVertex(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcTextureVertex::~IfcTextureVertex() {
}

bool IfcTextureVertex::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextureVertex(this);
}

const std::string &IfcTextureVertex::type() const {
    return IfcTextureVertex::s_type.getName();
}

const Step::ClassType &IfcTextureVertex::getClassType() {
    return IfcTextureVertex::s_type;
}

const Step::ClassType &IfcTextureVertex::getType() const {
    return IfcTextureVertex::s_type;
}

bool IfcTextureVertex::isOfType(const Step::ClassType &t) const {
    return IfcTextureVertex::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcParameterValue_2_2 &IfcTextureVertex::getCoordinates() {
    if (Step::BaseObject::inited()) {
        return m_coordinates;
    }
    else {
        m_coordinates.setUnset(true);
        return m_coordinates;
    }
}

const List_IfcParameterValue_2_2 &IfcTextureVertex::getCoordinates() const {
    IfcTextureVertex * deConstObject = const_cast< IfcTextureVertex * > (this);
    return deConstObject->getCoordinates();
}

void IfcTextureVertex::setCoordinates(const List_IfcParameterValue_2_2 &value) {
    m_coordinates = value;
}

void IfcTextureVertex::unsetCoordinates() {
    m_coordinates.clear();
    m_coordinates.setUnset(true);
}

bool IfcTextureVertex::testCoordinates() const {
    return !m_coordinates.isUnset();
}

bool IfcTextureVertex::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coordinates.setUnset(true);
    }
    else {
        m_coordinates.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcParameterValue attr2;
                attr2 = Step::spfToReal(str1);
                m_coordinates.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTextureVertex::copy(const IfcTextureVertex &obj, const CopyOp &copyop) {
    Step::List< IfcParameterValue, 2, 2 >::const_iterator it_m_coordinates;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_coordinates = obj.m_coordinates.begin(); it_m_coordinates != obj.m_coordinates.end(); ++it_m_coordinates) {
        IfcParameterValue copyTarget = (*it_m_coordinates);
        m_coordinates.push_back(copyTarget);
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTextureVertex::s_type("IfcTextureVertex");
