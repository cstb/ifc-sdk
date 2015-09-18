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



#include <ifc2x3/IfcSystem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGroup.h>
#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcSystem::IfcSystem(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
}

IfcSystem::~IfcSystem() {
}

bool IfcSystem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSystem(this);
}

const std::string &IfcSystem::type() const {
    return IfcSystem::s_type.getName();
}

const Step::ClassType &IfcSystem::getClassType() {
    return IfcSystem::s_type;
}

const Step::ClassType &IfcSystem::getType() const {
    return IfcSystem::s_type;
}

bool IfcSystem::isOfType(const Step::ClassType &t) const {
    return IfcSystem::s_type == t ? true : IfcGroup::isOfType(t);
}

Inverse_Set_IfcRelServicesBuildings_0_1 &IfcSystem::getServicesBuildings() {
    if (Step::BaseObject::inited()) {
        return m_servicesBuildings;
    }
    else {
        m_servicesBuildings.setUnset(true);
        return m_servicesBuildings;
    }
}

const Inverse_Set_IfcRelServicesBuildings_0_1 &IfcSystem::getServicesBuildings() const {
    IfcSystem * deConstObject = const_cast< IfcSystem * > (this);
    return deConstObject->getServicesBuildings();
}

bool IfcSystem::testServicesBuildings() const {
    return !m_servicesBuildings.isUnset();
}

bool IfcSystem::init() {
    bool status = IfcGroup::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_servicesBuildings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_servicesBuildings.insert(static_cast< IfcRelServicesBuildings * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSystem::copy(const IfcSystem &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSystem::s_type("IfcSystem");
