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



#include <ifc2x3/IfcSymbolStyle.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationStyle.h>
#include <ifc2x3/IfcSymbolStyleSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSymbolStyle::IfcSymbolStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_styleOfSymbol = NULL;
}

IfcSymbolStyle::~IfcSymbolStyle() {
}

bool IfcSymbolStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSymbolStyle(this);
}

const std::string &IfcSymbolStyle::type() const {
    return IfcSymbolStyle::s_type.getName();
}

const Step::ClassType &IfcSymbolStyle::getClassType() {
    return IfcSymbolStyle::s_type;
}

const Step::ClassType &IfcSymbolStyle::getType() const {
    return IfcSymbolStyle::s_type;
}

bool IfcSymbolStyle::isOfType(const Step::ClassType &t) const {
    return IfcSymbolStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcSymbolStyleSelect *IfcSymbolStyle::getStyleOfSymbol() {
    if (Step::BaseObject::inited()) {
        return m_styleOfSymbol.get();
    }
    else {
        return NULL;
    }
}

const IfcSymbolStyleSelect *IfcSymbolStyle::getStyleOfSymbol() const {
    IfcSymbolStyle * deConstObject = const_cast< IfcSymbolStyle * > (this);
    return deConstObject->getStyleOfSymbol();
}

void IfcSymbolStyle::setStyleOfSymbol(const Step::RefPtr< IfcSymbolStyleSelect > &value) {
    m_styleOfSymbol = value;
}

void IfcSymbolStyle::unsetStyleOfSymbol() {
    m_styleOfSymbol = Step::getUnset(getStyleOfSymbol());
}

bool IfcSymbolStyle::testStyleOfSymbol() const {
    return !Step::isUnset(getStyleOfSymbol());
}

bool IfcSymbolStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_styleOfSymbol = NULL;
    }
    else {
        m_styleOfSymbol = new IfcSymbolStyleSelect;
        if (arg[0] == '#') {
            m_styleOfSymbol->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcSymbolStyle::copy(const IfcSymbolStyle &obj, const CopyOp &copyop) {
    IfcPresentationStyle::copy(obj, copyop);
    m_styleOfSymbol = new IfcSymbolStyleSelect;
    m_styleOfSymbol->copy(*(obj.m_styleOfSymbol.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSymbolStyle::s_type("IfcSymbolStyle");
