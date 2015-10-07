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



#include <ifc2x3/IfcRelAssociatesMaterial.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialSelect.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssociatesMaterial::IfcRelAssociatesMaterial(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingMaterial = NULL;
}

IfcRelAssociatesMaterial::~IfcRelAssociatesMaterial() {
}

bool IfcRelAssociatesMaterial::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesMaterial(this);
}

const std::string &IfcRelAssociatesMaterial::type() const {
    return IfcRelAssociatesMaterial::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesMaterial::getClassType() {
    return IfcRelAssociatesMaterial::s_type;
}

const Step::ClassType &IfcRelAssociatesMaterial::getType() const {
    return IfcRelAssociatesMaterial::s_type;
}

bool IfcRelAssociatesMaterial::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesMaterial::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcMaterialSelect *IfcRelAssociatesMaterial::getRelatingMaterial() {
    if (Step::BaseObject::inited()) {
        return m_relatingMaterial.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterialSelect *IfcRelAssociatesMaterial::getRelatingMaterial() const {
    IfcRelAssociatesMaterial * deConstObject = const_cast< IfcRelAssociatesMaterial * > (this);
    return deConstObject->getRelatingMaterial();
}

void IfcRelAssociatesMaterial::setRelatingMaterial(const Step::RefPtr< IfcMaterialSelect > &value) {
    m_relatingMaterial = value;
}

void IfcRelAssociatesMaterial::unsetRelatingMaterial() {
    m_relatingMaterial = Step::getUnset(getRelatingMaterial());
}

bool IfcRelAssociatesMaterial::testRelatingMaterial() const {
    return !Step::isUnset(getRelatingMaterial());
}

bool IfcRelAssociatesMaterial::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingMaterial = NULL;
    }
    else {
        m_relatingMaterial = new IfcMaterialSelect;
        if (arg[0] == '#') {
            m_relatingMaterial->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcRelAssociatesMaterial::copy(const IfcRelAssociatesMaterial &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingMaterial = new IfcMaterialSelect;
    m_relatingMaterial->copy(*(obj.m_relatingMaterial.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesMaterial::s_type("IfcRelAssociatesMaterial");
