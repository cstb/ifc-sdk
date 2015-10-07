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



#include <ifc2x3/IfcMaterialList.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMaterialList::IfcMaterialList(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcMaterialList::~IfcMaterialList() {
}

bool IfcMaterialList::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialList(this);
}

const std::string &IfcMaterialList::type() const {
    return IfcMaterialList::s_type.getName();
}

const Step::ClassType &IfcMaterialList::getClassType() {
    return IfcMaterialList::s_type;
}

const Step::ClassType &IfcMaterialList::getType() const {
    return IfcMaterialList::s_type;
}

bool IfcMaterialList::isOfType(const Step::ClassType &t) const {
    return IfcMaterialList::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcMaterial_1_n &IfcMaterialList::getMaterials() {
    if (Step::BaseObject::inited()) {
        return m_materials;
    }
    else {
        m_materials.setUnset(true);
        return m_materials;
    }
}

const List_IfcMaterial_1_n &IfcMaterialList::getMaterials() const {
    IfcMaterialList * deConstObject = const_cast< IfcMaterialList * > (this);
    return deConstObject->getMaterials();
}

void IfcMaterialList::setMaterials(const List_IfcMaterial_1_n &value) {
    m_materials = value;
}

void IfcMaterialList::unsetMaterials() {
    m_materials.clear();
    m_materials.setUnset(true);
}

bool IfcMaterialList::testMaterials() const {
    return !m_materials.isUnset();
}

bool IfcMaterialList::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_materials.setUnset(true);
    }
    else {
        m_materials.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcMaterial > attr2;
                attr2 = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_materials.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcMaterialList::copy(const IfcMaterialList &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcMaterial >, 1 >::const_iterator it_m_materials;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_materials = obj.m_materials.begin(); it_m_materials != obj.m_materials.end(); ++it_m_materials) {
        Step::RefPtr< IfcMaterial > copyTarget = (IfcMaterial *) (copyop((*it_m_materials).get()));
        m_materials.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialList::s_type("IfcMaterialList");
