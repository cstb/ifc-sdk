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



#include <ifc2x3/IfcMaterialClassificationRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClassificationNotationSelect.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_classifiedMaterial = NULL;
}

IfcMaterialClassificationRelationship::~IfcMaterialClassificationRelationship() {
}

bool IfcMaterialClassificationRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialClassificationRelationship(this);
}

const std::string &IfcMaterialClassificationRelationship::type() const {
    return IfcMaterialClassificationRelationship::s_type.getName();
}

const Step::ClassType &IfcMaterialClassificationRelationship::getClassType() {
    return IfcMaterialClassificationRelationship::s_type;
}

const Step::ClassType &IfcMaterialClassificationRelationship::getType() const {
    return IfcMaterialClassificationRelationship::s_type;
}

bool IfcMaterialClassificationRelationship::isOfType(const Step::ClassType &t) const {
    return IfcMaterialClassificationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Set_IfcClassificationNotationSelect_1_n &IfcMaterialClassificationRelationship::getMaterialClassifications() {
    if (Step::BaseObject::inited()) {
        return m_materialClassifications;
    }
    else {
        m_materialClassifications.setUnset(true);
        return m_materialClassifications;
    }
}

const Set_IfcClassificationNotationSelect_1_n &IfcMaterialClassificationRelationship::getMaterialClassifications() const {
    IfcMaterialClassificationRelationship * deConstObject = const_cast< IfcMaterialClassificationRelationship * > (this);
    return deConstObject->getMaterialClassifications();
}

void IfcMaterialClassificationRelationship::setMaterialClassifications(const Set_IfcClassificationNotationSelect_1_n &value) {
    m_materialClassifications = value;
}

void IfcMaterialClassificationRelationship::unsetMaterialClassifications() {
    m_materialClassifications.clear();
    m_materialClassifications.setUnset(true);
}

bool IfcMaterialClassificationRelationship::testMaterialClassifications() const {
    return !m_materialClassifications.isUnset();
}

IfcMaterial *IfcMaterialClassificationRelationship::getClassifiedMaterial() {
    if (Step::BaseObject::inited()) {
        return m_classifiedMaterial.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterial *IfcMaterialClassificationRelationship::getClassifiedMaterial() const {
    IfcMaterialClassificationRelationship * deConstObject = const_cast< IfcMaterialClassificationRelationship * > (this);
    return deConstObject->getClassifiedMaterial();
}

void IfcMaterialClassificationRelationship::setClassifiedMaterial(const Step::RefPtr< IfcMaterial > &value) {
    if (m_classifiedMaterial.valid()) {
        m_classifiedMaterial->m_classifiedAs.erase(this);
    }
    if (value.valid()) {
        value->m_classifiedAs.insert(this);
    }
    m_classifiedMaterial = value;
}

void IfcMaterialClassificationRelationship::unsetClassifiedMaterial() {
    m_classifiedMaterial = Step::getUnset(getClassifiedMaterial());
}

bool IfcMaterialClassificationRelationship::testClassifiedMaterial() const {
    return !Step::isUnset(getClassifiedMaterial());
}

bool IfcMaterialClassificationRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_materialClassifications.setUnset(true);
    }
    else {
        m_materialClassifications.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationNotationSelect > attr2;
                attr2 = new IfcClassificationNotationSelect;
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
                if (attr2.valid()) m_materialClassifications.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_classifiedMaterial = NULL;
    }
    else {
        m_classifiedMaterial = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcMaterialClassificationRelationship::copy(const IfcMaterialClassificationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationNotationSelect >, 1 >::const_iterator it_m_materialClassifications;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_materialClassifications = obj.m_materialClassifications.begin(); it_m_materialClassifications != obj.m_materialClassifications.end(); ++it_m_materialClassifications) {
        Step::RefPtr< IfcClassificationNotationSelect > copyTarget = new IfcClassificationNotationSelect;
        copyTarget->copy(*((*it_m_materialClassifications).get()), copyop);
        m_materialClassifications.insert(copyTarget.get());
    }
    setClassifiedMaterial((IfcMaterial*)copyop(obj.m_classifiedMaterial.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialClassificationRelationship::s_type("IfcMaterialClassificationRelationship");
