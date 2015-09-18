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



#include <ifc2x3/IfcTextLiteral.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTextLiteral::IfcTextLiteral(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_literal = Step::getUnset(m_literal);
    m_placement = NULL;
    m_path = IfcTextPath_UNSET;
}

IfcTextLiteral::~IfcTextLiteral() {
}

bool IfcTextLiteral::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTextLiteral(this);
}

const std::string &IfcTextLiteral::type() const {
    return IfcTextLiteral::s_type.getName();
}

const Step::ClassType &IfcTextLiteral::getClassType() {
    return IfcTextLiteral::s_type;
}

const Step::ClassType &IfcTextLiteral::getType() const {
    return IfcTextLiteral::s_type;
}

bool IfcTextLiteral::isOfType(const Step::ClassType &t) const {
    return IfcTextLiteral::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcPresentableText IfcTextLiteral::getLiteral() {
    if (Step::BaseObject::inited()) {
        return m_literal;
    }
    else {
        return Step::getUnset(m_literal);
    }
}

const IfcPresentableText IfcTextLiteral::getLiteral() const {
    IfcTextLiteral * deConstObject = const_cast< IfcTextLiteral * > (this);
    return deConstObject->getLiteral();
}

void IfcTextLiteral::setLiteral(const IfcPresentableText &value) {
    m_literal = value;
}

void IfcTextLiteral::unsetLiteral() {
    m_literal = Step::getUnset(getLiteral());
}

bool IfcTextLiteral::testLiteral() const {
    return !Step::isUnset(getLiteral());
}

IfcAxis2Placement *IfcTextLiteral::getPlacement() {
    if (Step::BaseObject::inited()) {
        return m_placement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcTextLiteral::getPlacement() const {
    IfcTextLiteral * deConstObject = const_cast< IfcTextLiteral * > (this);
    return deConstObject->getPlacement();
}

void IfcTextLiteral::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_placement = value;
}

void IfcTextLiteral::unsetPlacement() {
    m_placement = Step::getUnset(getPlacement());
}

bool IfcTextLiteral::testPlacement() const {
    return !Step::isUnset(getPlacement());
}

IfcTextPath IfcTextLiteral::getPath() {
    if (Step::BaseObject::inited()) {
        return m_path;
    }
    else {
        return IfcTextPath_UNSET;
    }
}

const IfcTextPath IfcTextLiteral::getPath() const {
    IfcTextLiteral * deConstObject = const_cast< IfcTextLiteral * > (this);
    return deConstObject->getPath();
}

void IfcTextLiteral::setPath(IfcTextPath value) {
    m_path = value;
}

void IfcTextLiteral::unsetPath() {
    m_path = IfcTextPath_UNSET;
}

bool IfcTextLiteral::testPath() const {
    return getPath() != IfcTextPath_UNSET;
}

bool IfcTextLiteral::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_literal = Step::getUnset(m_literal);
    }
    else {
        m_literal = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placement = NULL;
    }
    else {
        m_placement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_placement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_path = IfcTextPath_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_path = IfcTextPath_LEFT;
        }
        else if (arg == ".RIGHT.") {
            m_path = IfcTextPath_RIGHT;
        }
        else if (arg == ".UP.") {
            m_path = IfcTextPath_UP;
        }
        else if (arg == ".DOWN.") {
            m_path = IfcTextPath_DOWN;
        }
    }
    return true;
}

void IfcTextLiteral::copy(const IfcTextLiteral &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setLiteral(obj.m_literal);
    m_placement = new IfcAxis2Placement;
    m_placement->copy(*(obj.m_placement.get()), copyop);
    setPath(obj.m_path);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTextLiteral::s_type("IfcTextLiteral");
