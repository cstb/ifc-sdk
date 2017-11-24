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



#include <ifc2x3/IfcFacetedBrepWithVoids.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcManifoldSolidBrep.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids(Step::Id id, Step::SPFData *args) : IfcManifoldSolidBrep(id, args) {
}

IfcFacetedBrepWithVoids::~IfcFacetedBrepWithVoids() {
}

bool IfcFacetedBrepWithVoids::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFacetedBrepWithVoids(this);
}

const std::string &IfcFacetedBrepWithVoids::type() const {
    return IfcFacetedBrepWithVoids::s_type.getName();
}

const Step::ClassType &IfcFacetedBrepWithVoids::getClassType() {
    return IfcFacetedBrepWithVoids::s_type;
}

const Step::ClassType &IfcFacetedBrepWithVoids::getType() const {
    return IfcFacetedBrepWithVoids::s_type;
}

bool IfcFacetedBrepWithVoids::isOfType(const Step::ClassType &t) const {
    return IfcFacetedBrepWithVoids::s_type == t ? true : IfcManifoldSolidBrep::isOfType(t);
}

Set_IfcClosedShell_1_n &IfcFacetedBrepWithVoids::getVoids() {
    if (Step::BaseObject::inited()) {
        return m_voids;
    }
    else {
        m_voids.setUnset(true);
        return m_voids;
    }
}

const Set_IfcClosedShell_1_n &IfcFacetedBrepWithVoids::getVoids() const {
    IfcFacetedBrepWithVoids * deConstObject = const_cast< IfcFacetedBrepWithVoids * > (this);
    return deConstObject->getVoids();
}

void IfcFacetedBrepWithVoids::setVoids(const Set_IfcClosedShell_1_n &value) {
    m_voids = value;
}

void IfcFacetedBrepWithVoids::unsetVoids() {
    m_voids.clear();
    m_voids.setUnset(true);
}

bool IfcFacetedBrepWithVoids::testVoids() const {
    return !m_voids.isUnset();
}

bool IfcFacetedBrepWithVoids::init() {
    bool status = IfcManifoldSolidBrep::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_voids.setUnset(true);
    }
    else {
        m_voids.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClosedShell > attr2;
                attr2 = static_cast< IfcClosedShell * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_voids.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcFacetedBrepWithVoids::copy(const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClosedShell >, 1 >::const_iterator it_m_voids;
    IfcManifoldSolidBrep::copy(obj, copyop);
    for (it_m_voids = obj.m_voids.begin(); it_m_voids != obj.m_voids.end(); ++it_m_voids) {
        Step::RefPtr< IfcClosedShell > copyTarget = (IfcClosedShell *) (copyop((*it_m_voids).get()));
        m_voids.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFacetedBrepWithVoids::s_type("IfcFacetedBrepWithVoids");
