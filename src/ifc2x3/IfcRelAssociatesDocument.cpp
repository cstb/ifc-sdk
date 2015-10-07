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



#include <ifc2x3/IfcRelAssociatesDocument.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssociatesDocument::IfcRelAssociatesDocument(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingDocument = NULL;
}

IfcRelAssociatesDocument::~IfcRelAssociatesDocument() {
}

bool IfcRelAssociatesDocument::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesDocument(this);
}

const std::string &IfcRelAssociatesDocument::type() const {
    return IfcRelAssociatesDocument::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesDocument::getClassType() {
    return IfcRelAssociatesDocument::s_type;
}

const Step::ClassType &IfcRelAssociatesDocument::getType() const {
    return IfcRelAssociatesDocument::s_type;
}

bool IfcRelAssociatesDocument::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesDocument::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcDocumentSelect *IfcRelAssociatesDocument::getRelatingDocument() {
    if (Step::BaseObject::inited()) {
        return m_relatingDocument.get();
    }
    else {
        return NULL;
    }
}

const IfcDocumentSelect *IfcRelAssociatesDocument::getRelatingDocument() const {
    IfcRelAssociatesDocument * deConstObject = const_cast< IfcRelAssociatesDocument * > (this);
    return deConstObject->getRelatingDocument();
}

void IfcRelAssociatesDocument::setRelatingDocument(const Step::RefPtr< IfcDocumentSelect > &value) {
    m_relatingDocument = value;
}

void IfcRelAssociatesDocument::unsetRelatingDocument() {
    m_relatingDocument = Step::getUnset(getRelatingDocument());
}

bool IfcRelAssociatesDocument::testRelatingDocument() const {
    return !Step::isUnset(getRelatingDocument());
}

bool IfcRelAssociatesDocument::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingDocument = NULL;
    }
    else {
        m_relatingDocument = new IfcDocumentSelect;
        if (arg[0] == '#') {
            m_relatingDocument->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcRelAssociatesDocument::copy(const IfcRelAssociatesDocument &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingDocument = new IfcDocumentSelect;
    m_relatingDocument->copy(*(obj.m_relatingDocument.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesDocument::s_type("IfcRelAssociatesDocument");
