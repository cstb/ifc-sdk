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



#include <ifc2x3/IfcConstructionMaterialResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcConstructionResource.h>
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

IfcConstructionMaterialResource::IfcConstructionMaterialResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
    m_suppliers.setUnset(true);
    m_usageRatio = Step::getUnset(m_usageRatio);
}

IfcConstructionMaterialResource::~IfcConstructionMaterialResource() {
}

bool IfcConstructionMaterialResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstructionMaterialResource(this);
}

const std::string &IfcConstructionMaterialResource::type() const {
    return IfcConstructionMaterialResource::s_type.getName();
}

const Step::ClassType &IfcConstructionMaterialResource::getClassType() {
    return IfcConstructionMaterialResource::s_type;
}

const Step::ClassType &IfcConstructionMaterialResource::getType() const {
    return IfcConstructionMaterialResource::s_type;
}

bool IfcConstructionMaterialResource::isOfType(const Step::ClassType &t) const {
    return IfcConstructionMaterialResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

Set_IfcActorSelect_1_n &IfcConstructionMaterialResource::getSuppliers() {
    if (Step::BaseObject::inited()) {
        return m_suppliers;
    }
    else {
        m_suppliers.setUnset(true);
        return m_suppliers;
    }
}

const Set_IfcActorSelect_1_n &IfcConstructionMaterialResource::getSuppliers() const {
    IfcConstructionMaterialResource * deConstObject = const_cast< IfcConstructionMaterialResource * > (this);
    return deConstObject->getSuppliers();
}

void IfcConstructionMaterialResource::setSuppliers(const Set_IfcActorSelect_1_n &value) {
    m_suppliers = value;
}

void IfcConstructionMaterialResource::unsetSuppliers() {
    m_suppliers.clear();
    m_suppliers.setUnset(true);
}

bool IfcConstructionMaterialResource::testSuppliers() const {
    return !m_suppliers.isUnset();
}

IfcRatioMeasure IfcConstructionMaterialResource::getUsageRatio() {
    if (Step::BaseObject::inited()) {
        return m_usageRatio;
    }
    else {
        return Step::getUnset(m_usageRatio);
    }
}

const IfcRatioMeasure IfcConstructionMaterialResource::getUsageRatio() const {
    IfcConstructionMaterialResource * deConstObject = const_cast< IfcConstructionMaterialResource * > (this);
    return deConstObject->getUsageRatio();
}

void IfcConstructionMaterialResource::setUsageRatio(IfcRatioMeasure value) {
    m_usageRatio = value;
}

void IfcConstructionMaterialResource::unsetUsageRatio() {
    m_usageRatio = Step::getUnset(getUsageRatio());
}

bool IfcConstructionMaterialResource::testUsageRatio() const {
    return !Step::isUnset(getUsageRatio());
}

bool IfcConstructionMaterialResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_suppliers.setUnset(true);
    }
    else {
        m_suppliers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorSelect > attr2;
                attr2 = new IfcActorSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) m_suppliers.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usageRatio = Step::getUnset(m_usageRatio);
    }
    else {
        m_usageRatio = Step::spfToReal(arg);
    }
    return true;
}

void IfcConstructionMaterialResource::copy(const IfcConstructionMaterialResource &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcActorSelect >, 1 >::const_iterator it_m_suppliers;
    IfcConstructionResource::copy(obj, copyop);
    for (it_m_suppliers = obj.m_suppliers.begin(); it_m_suppliers != obj.m_suppliers.end(); ++it_m_suppliers) {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_suppliers).get()), copyop);
        m_suppliers.insert(copyTarget.get());
    }
    setUsageRatio(obj.m_usageRatio);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConstructionMaterialResource::s_type("IfcConstructionMaterialResource");
