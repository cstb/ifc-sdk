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



#include <ifc2x3/IfcDefinedSymbol.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcDefinedSymbolSelect.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDefinedSymbol::IfcDefinedSymbol(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_definition = NULL;
    m_target = NULL;
}

IfcDefinedSymbol::~IfcDefinedSymbol() {
}

bool IfcDefinedSymbol::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDefinedSymbol(this);
}

const std::string &IfcDefinedSymbol::type() const {
    return IfcDefinedSymbol::s_type.getName();
}

const Step::ClassType &IfcDefinedSymbol::getClassType() {
    return IfcDefinedSymbol::s_type;
}

const Step::ClassType &IfcDefinedSymbol::getType() const {
    return IfcDefinedSymbol::s_type;
}

bool IfcDefinedSymbol::isOfType(const Step::ClassType &t) const {
    return IfcDefinedSymbol::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDefinedSymbolSelect *IfcDefinedSymbol::getDefinition() {
    if (Step::BaseObject::inited()) {
        return m_definition.get();
    }
    else {
        return NULL;
    }
}

const IfcDefinedSymbolSelect *IfcDefinedSymbol::getDefinition() const {
    IfcDefinedSymbol * deConstObject = const_cast< IfcDefinedSymbol * > (this);
    return deConstObject->getDefinition();
}

void IfcDefinedSymbol::setDefinition(const Step::RefPtr< IfcDefinedSymbolSelect > &value) {
    m_definition = value;
}

void IfcDefinedSymbol::unsetDefinition() {
    m_definition = Step::getUnset(getDefinition());
}

bool IfcDefinedSymbol::testDefinition() const {
    return !Step::isUnset(getDefinition());
}

IfcCartesianTransformationOperator2D *IfcDefinedSymbol::getTarget() {
    if (Step::BaseObject::inited()) {
        return m_target.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianTransformationOperator2D *IfcDefinedSymbol::getTarget() const {
    IfcDefinedSymbol * deConstObject = const_cast< IfcDefinedSymbol * > (this);
    return deConstObject->getTarget();
}

void IfcDefinedSymbol::setTarget(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
    m_target = value;
}

void IfcDefinedSymbol::unsetTarget() {
    m_target = Step::getUnset(getTarget());
}

bool IfcDefinedSymbol::testTarget() const {
    return !Step::isUnset(getTarget());
}

bool IfcDefinedSymbol::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_definition = NULL;
    }
    else {
        m_definition = new IfcDefinedSymbolSelect;
        if (arg[0] == '#') {
            m_definition->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_target = NULL;
    }
    else {
        m_target = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcDefinedSymbol::copy(const IfcDefinedSymbol &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    m_definition = new IfcDefinedSymbolSelect;
    m_definition->copy(*(obj.m_definition.get()), copyop);
    setTarget((IfcCartesianTransformationOperator2D*)copyop(obj.m_target.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDefinedSymbol::s_type("IfcDefinedSymbol");
