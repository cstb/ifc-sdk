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



#include <ifc2x3/IfcConic.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConic::IfcConic(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_position = NULL;
}

IfcConic::~IfcConic() {
}

bool IfcConic::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConic(this);
}

const std::string &IfcConic::type() const {
    return IfcConic::s_type.getName();
}

const Step::ClassType &IfcConic::getClassType() {
    return IfcConic::s_type;
}

const Step::ClassType &IfcConic::getType() const {
    return IfcConic::s_type;
}

bool IfcConic::isOfType(const Step::ClassType &t) const {
    return IfcConic::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcAxis2Placement *IfcConic::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcConic::getPosition() const {
    IfcConic * deConstObject = const_cast< IfcConic * > (this);
    return deConstObject->getPosition();
}

void IfcConic::setPosition(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_position = value;
}

void IfcConic::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcConic::testPosition() const {
    return !Step::isUnset(getPosition());
}

bool IfcConic::init() {
    bool status = IfcCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_position->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcConic::copy(const IfcConic &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    m_position = new IfcAxis2Placement;
    m_position->copy(*(obj.m_position.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConic::s_type("IfcConic");
