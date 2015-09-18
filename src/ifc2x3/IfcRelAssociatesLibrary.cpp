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



#include <ifc2x3/IfcRelAssociatesLibrary.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcLibrarySelect.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssociatesLibrary::IfcRelAssociatesLibrary(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingLibrary = NULL;
}

IfcRelAssociatesLibrary::~IfcRelAssociatesLibrary() {
}

bool IfcRelAssociatesLibrary::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesLibrary(this);
}

const std::string &IfcRelAssociatesLibrary::type() const {
    return IfcRelAssociatesLibrary::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesLibrary::getClassType() {
    return IfcRelAssociatesLibrary::s_type;
}

const Step::ClassType &IfcRelAssociatesLibrary::getType() const {
    return IfcRelAssociatesLibrary::s_type;
}

bool IfcRelAssociatesLibrary::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesLibrary::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcLibrarySelect *IfcRelAssociatesLibrary::getRelatingLibrary() {
    if (Step::BaseObject::inited()) {
        return m_relatingLibrary.get();
    }
    else {
        return NULL;
    }
}

const IfcLibrarySelect *IfcRelAssociatesLibrary::getRelatingLibrary() const {
    IfcRelAssociatesLibrary * deConstObject = const_cast< IfcRelAssociatesLibrary * > (this);
    return deConstObject->getRelatingLibrary();
}

void IfcRelAssociatesLibrary::setRelatingLibrary(const Step::RefPtr< IfcLibrarySelect > &value) {
    m_relatingLibrary = value;
}

void IfcRelAssociatesLibrary::unsetRelatingLibrary() {
    m_relatingLibrary = Step::getUnset(getRelatingLibrary());
}

bool IfcRelAssociatesLibrary::testRelatingLibrary() const {
    return !Step::isUnset(getRelatingLibrary());
}

bool IfcRelAssociatesLibrary::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingLibrary = NULL;
    }
    else {
        m_relatingLibrary = new IfcLibrarySelect;
        if (arg[0] == '#') {
            m_relatingLibrary->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcRelAssociatesLibrary::copy(const IfcRelAssociatesLibrary &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingLibrary = new IfcLibrarySelect;
    m_relatingLibrary->copy(*(obj.m_relatingLibrary.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesLibrary::s_type("IfcRelAssociatesLibrary");
