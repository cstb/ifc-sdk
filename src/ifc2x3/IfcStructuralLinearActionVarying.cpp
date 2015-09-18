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



#include <ifc2x3/IfcStructuralLinearActionVarying.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcStructuralLinearAction.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLinearActionVarying::IfcStructuralLinearActionVarying(Step::Id id, Step::SPFData *args) : IfcStructuralLinearAction(id, args) {
    m_varyingAppliedLoadLocation = NULL;
}

IfcStructuralLinearActionVarying::~IfcStructuralLinearActionVarying() {
}

bool IfcStructuralLinearActionVarying::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLinearActionVarying(this);
}

const std::string &IfcStructuralLinearActionVarying::type() const {
    return IfcStructuralLinearActionVarying::s_type.getName();
}

const Step::ClassType &IfcStructuralLinearActionVarying::getClassType() {
    return IfcStructuralLinearActionVarying::s_type;
}

const Step::ClassType &IfcStructuralLinearActionVarying::getType() const {
    return IfcStructuralLinearActionVarying::s_type;
}

bool IfcStructuralLinearActionVarying::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLinearActionVarying::s_type == t ? true : IfcStructuralLinearAction::isOfType(t);
}

IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() {
    if (Step::BaseObject::inited()) {
        return m_varyingAppliedLoadLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() const {
    IfcStructuralLinearActionVarying * deConstObject = const_cast< IfcStructuralLinearActionVarying * > (this);
    return deConstObject->getVaryingAppliedLoadLocation();
}

void IfcStructuralLinearActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_varyingAppliedLoadLocation = value;
}

void IfcStructuralLinearActionVarying::unsetVaryingAppliedLoadLocation() {
    m_varyingAppliedLoadLocation = Step::getUnset(getVaryingAppliedLoadLocation());
}

bool IfcStructuralLinearActionVarying::testVaryingAppliedLoadLocation() const {
    return !Step::isUnset(getVaryingAppliedLoadLocation());
}

List_IfcStructuralLoad_1_n &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() {
    if (Step::BaseObject::inited()) {
        return m_subsequentAppliedLoads;
    }
    else {
        m_subsequentAppliedLoads.setUnset(true);
        return m_subsequentAppliedLoads;
    }
}

const List_IfcStructuralLoad_1_n &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() const {
    IfcStructuralLinearActionVarying * deConstObject = const_cast< IfcStructuralLinearActionVarying * > (this);
    return deConstObject->getSubsequentAppliedLoads();
}

void IfcStructuralLinearActionVarying::setSubsequentAppliedLoads(const List_IfcStructuralLoad_1_n &value) {
    m_subsequentAppliedLoads = value;
}

void IfcStructuralLinearActionVarying::unsetSubsequentAppliedLoads() {
    m_subsequentAppliedLoads.clear();
    m_subsequentAppliedLoads.setUnset(true);
}

bool IfcStructuralLinearActionVarying::testSubsequentAppliedLoads() const {
    return !m_subsequentAppliedLoads.isUnset();
}

bool IfcStructuralLinearActionVarying::init() {
    bool status = IfcStructuralLinearAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_varyingAppliedLoadLocation = NULL;
    }
    else {
        m_varyingAppliedLoadLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_subsequentAppliedLoads.setUnset(true);
    }
    else {
        m_subsequentAppliedLoads.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcStructuralLoad > attr2;
                attr2 = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_subsequentAppliedLoads.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcStructuralLinearActionVarying::copy(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcStructuralLoad >, 1 >::const_iterator it_m_subsequentAppliedLoads;
    IfcStructuralLinearAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation((IfcShapeAspect*)copyop(obj.m_varyingAppliedLoadLocation.get()));
    for (it_m_subsequentAppliedLoads = obj.m_subsequentAppliedLoads.begin(); it_m_subsequentAppliedLoads != obj.m_subsequentAppliedLoads.end(); ++it_m_subsequentAppliedLoads) {
        Step::RefPtr< IfcStructuralLoad > copyTarget = (IfcStructuralLoad *) (copyop((*it_m_subsequentAppliedLoads).get()));
        m_subsequentAppliedLoads.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLinearActionVarying::s_type("IfcStructuralLinearActionVarying");
