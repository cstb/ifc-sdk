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



#include <ifc2x3/IfcStructuralActivity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralActivity::IfcStructuralActivity(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_appliedLoad = NULL;
    m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

IfcStructuralActivity::~IfcStructuralActivity() {
}

bool IfcStructuralActivity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralActivity(this);
}

const std::string &IfcStructuralActivity::type() const {
    return IfcStructuralActivity::s_type.getName();
}

const Step::ClassType &IfcStructuralActivity::getClassType() {
    return IfcStructuralActivity::s_type;
}

const Step::ClassType &IfcStructuralActivity::getType() const {
    return IfcStructuralActivity::s_type;
}

bool IfcStructuralActivity::isOfType(const Step::ClassType &t) const {
    return IfcStructuralActivity::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcStructuralLoad *IfcStructuralActivity::getAppliedLoad() {
    if (Step::BaseObject::inited()) {
        return m_appliedLoad.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralLoad *IfcStructuralActivity::getAppliedLoad() const {
    IfcStructuralActivity * deConstObject = const_cast< IfcStructuralActivity * > (this);
    return deConstObject->getAppliedLoad();
}

void IfcStructuralActivity::setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value) {
    m_appliedLoad = value;
}

void IfcStructuralActivity::unsetAppliedLoad() {
    m_appliedLoad = Step::getUnset(getAppliedLoad());
}

bool IfcStructuralActivity::testAppliedLoad() const {
    return !Step::isUnset(getAppliedLoad());
}

IfcGlobalOrLocalEnum IfcStructuralActivity::getGlobalOrLocal() {
    if (Step::BaseObject::inited()) {
        return m_globalOrLocal;
    }
    else {
        return IfcGlobalOrLocalEnum_UNSET;
    }
}

const IfcGlobalOrLocalEnum IfcStructuralActivity::getGlobalOrLocal() const {
    IfcStructuralActivity * deConstObject = const_cast< IfcStructuralActivity * > (this);
    return deConstObject->getGlobalOrLocal();
}

void IfcStructuralActivity::setGlobalOrLocal(IfcGlobalOrLocalEnum value) {
    m_globalOrLocal = value;
}

void IfcStructuralActivity::unsetGlobalOrLocal() {
    m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
}

bool IfcStructuralActivity::testGlobalOrLocal() const {
    return getGlobalOrLocal() != IfcGlobalOrLocalEnum_UNSET;
}

IfcRelConnectsStructuralActivity *IfcStructuralActivity::getAssignedToStructuralItem() {
    if (Step::BaseObject::inited()) {
        return m_assignedToStructuralItem.get();
    }
    else {
        return NULL;
    }
}

const IfcRelConnectsStructuralActivity *IfcStructuralActivity::getAssignedToStructuralItem() const {
    IfcStructuralActivity * deConstObject = const_cast< IfcStructuralActivity * > (this);
    return deConstObject->getAssignedToStructuralItem();
}

bool IfcStructuralActivity::testAssignedToStructuralItem() const {
    return !Step::isUnset(getAssignedToStructuralItem());
}

bool IfcStructuralActivity::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_appliedLoad = NULL;
    }
    else {
        m_appliedLoad = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
    }
    else {
        if (arg == ".GLOBAL_COORDS.") {
            m_globalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
        }
        else if (arg == ".LOCAL_COORDS.") {
            m_globalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 5);
    if (inverses) {
        m_assignedToStructuralItem = static_cast< IfcRelConnectsStructuralActivity * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcStructuralActivity::copy(const IfcStructuralActivity &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setAppliedLoad((IfcStructuralLoad*)copyop(obj.m_appliedLoad.get()));
    setGlobalOrLocal(obj.m_globalOrLocal);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralActivity::s_type("IfcStructuralActivity");
