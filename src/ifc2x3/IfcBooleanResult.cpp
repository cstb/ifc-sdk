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



#include <ifc2x3/IfcBooleanResult.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBooleanOperand.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBooleanResult::IfcBooleanResult(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_operator = IfcBooleanOperator_UNSET;
    m_firstOperand = NULL;
    m_secondOperand = NULL;
}

IfcBooleanResult::~IfcBooleanResult() {
}

bool IfcBooleanResult::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBooleanResult(this);
}

const std::string &IfcBooleanResult::type() const {
    return IfcBooleanResult::s_type.getName();
}

const Step::ClassType &IfcBooleanResult::getClassType() {
    return IfcBooleanResult::s_type;
}

const Step::ClassType &IfcBooleanResult::getType() const {
    return IfcBooleanResult::s_type;
}

bool IfcBooleanResult::isOfType(const Step::ClassType &t) const {
    return IfcBooleanResult::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcBooleanOperator IfcBooleanResult::getOperator() {
    if (Step::BaseObject::inited()) {
        return m_operator;
    }
    else {
        return IfcBooleanOperator_UNSET;
    }
}

const IfcBooleanOperator IfcBooleanResult::getOperator() const {
    IfcBooleanResult * deConstObject = const_cast< IfcBooleanResult * > (this);
    return deConstObject->getOperator();
}

void IfcBooleanResult::setOperator(IfcBooleanOperator value) {
    m_operator = value;
}

void IfcBooleanResult::unsetOperator() {
    m_operator = IfcBooleanOperator_UNSET;
}

bool IfcBooleanResult::testOperator() const {
    return getOperator() != IfcBooleanOperator_UNSET;
}

IfcBooleanOperand *IfcBooleanResult::getFirstOperand() {
    if (Step::BaseObject::inited()) {
        return m_firstOperand.get();
    }
    else {
        return NULL;
    }
}

const IfcBooleanOperand *IfcBooleanResult::getFirstOperand() const {
    IfcBooleanResult * deConstObject = const_cast< IfcBooleanResult * > (this);
    return deConstObject->getFirstOperand();
}

void IfcBooleanResult::setFirstOperand(const Step::RefPtr< IfcBooleanOperand > &value) {
    m_firstOperand = value;
}

void IfcBooleanResult::unsetFirstOperand() {
    m_firstOperand = Step::getUnset(getFirstOperand());
}

bool IfcBooleanResult::testFirstOperand() const {
    return !Step::isUnset(getFirstOperand());
}

IfcBooleanOperand *IfcBooleanResult::getSecondOperand() {
    if (Step::BaseObject::inited()) {
        return m_secondOperand.get();
    }
    else {
        return NULL;
    }
}

const IfcBooleanOperand *IfcBooleanResult::getSecondOperand() const {
    IfcBooleanResult * deConstObject = const_cast< IfcBooleanResult * > (this);
    return deConstObject->getSecondOperand();
}

void IfcBooleanResult::setSecondOperand(const Step::RefPtr< IfcBooleanOperand > &value) {
    m_secondOperand = value;
}

void IfcBooleanResult::unsetSecondOperand() {
    m_secondOperand = Step::getUnset(getSecondOperand());
}

bool IfcBooleanResult::testSecondOperand() const {
    return !Step::isUnset(getSecondOperand());
}

bool IfcBooleanResult::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operator = IfcBooleanOperator_UNSET;
    }
    else {
        if (arg == ".UNION.") {
            m_operator = IfcBooleanOperator_UNION;
        }
        else if (arg == ".INTERSECTION.") {
            m_operator = IfcBooleanOperator_INTERSECTION;
        }
        else if (arg == ".DIFFERENCE.") {
            m_operator = IfcBooleanOperator_DIFFERENCE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_firstOperand = NULL;
    }
    else {
        m_firstOperand = new IfcBooleanOperand;
        if (arg[0] == '#') {
            m_firstOperand->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_secondOperand = NULL;
    }
    else {
        m_secondOperand = new IfcBooleanOperand;
        if (arg[0] == '#') {
            m_secondOperand->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcBooleanResult::copy(const IfcBooleanResult &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOperator(obj.m_operator);
    m_firstOperand = new IfcBooleanOperand;
    m_firstOperand->copy(*(obj.m_firstOperand.get()), copyop);
    m_secondOperand = new IfcBooleanOperand;
    m_secondOperand->copy(*(obj.m_secondOperand.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBooleanResult::s_type("IfcBooleanResult");
