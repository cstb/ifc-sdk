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



#include <ifc2x3/IfcRelAssociatesClassification.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssociatesClassification::IfcRelAssociatesClassification(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingClassification = NULL;
}

IfcRelAssociatesClassification::~IfcRelAssociatesClassification() {
}

bool IfcRelAssociatesClassification::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesClassification(this);
}

const std::string &IfcRelAssociatesClassification::type() const {
    return IfcRelAssociatesClassification::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesClassification::getClassType() {
    return IfcRelAssociatesClassification::s_type;
}

const Step::ClassType &IfcRelAssociatesClassification::getType() const {
    return IfcRelAssociatesClassification::s_type;
}

bool IfcRelAssociatesClassification::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesClassification::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification() {
    if (Step::BaseObject::inited()) {
        return m_relatingClassification.get();
    }
    else {
        return NULL;
    }
}

const IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification() const {
    IfcRelAssociatesClassification * deConstObject = const_cast< IfcRelAssociatesClassification * > (this);
    return deConstObject->getRelatingClassification();
}

void IfcRelAssociatesClassification::setRelatingClassification(const Step::RefPtr< IfcClassificationNotationSelect > &value) {
    m_relatingClassification = value;
}

void IfcRelAssociatesClassification::unsetRelatingClassification() {
    m_relatingClassification = Step::getUnset(getRelatingClassification());
}

bool IfcRelAssociatesClassification::testRelatingClassification() const {
    return !Step::isUnset(getRelatingClassification());
}

bool IfcRelAssociatesClassification::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingClassification = NULL;
    }
    else {
        m_relatingClassification = new IfcClassificationNotationSelect;
        if (arg[0] == '#') {
            m_relatingClassification->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcRelAssociatesClassification::copy(const IfcRelAssociatesClassification &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingClassification = new IfcClassificationNotationSelect;
    m_relatingClassification->copy(*(obj.m_relatingClassification.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesClassification::s_type("IfcRelAssociatesClassification");
