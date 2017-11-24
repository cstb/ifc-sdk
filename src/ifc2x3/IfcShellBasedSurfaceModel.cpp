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



#include <ifc2x3/IfcShellBasedSurfaceModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/IfcShell.h>
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

IfcShellBasedSurfaceModel::IfcShellBasedSurfaceModel(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcShellBasedSurfaceModel::~IfcShellBasedSurfaceModel() {
}

bool IfcShellBasedSurfaceModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcShellBasedSurfaceModel(this);
}

const std::string &IfcShellBasedSurfaceModel::type() const {
    return IfcShellBasedSurfaceModel::s_type.getName();
}

const Step::ClassType &IfcShellBasedSurfaceModel::getClassType() {
    return IfcShellBasedSurfaceModel::s_type;
}

const Step::ClassType &IfcShellBasedSurfaceModel::getType() const {
    return IfcShellBasedSurfaceModel::s_type;
}

bool IfcShellBasedSurfaceModel::isOfType(const Step::ClassType &t) const {
    return IfcShellBasedSurfaceModel::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Set_IfcShell_1_n &IfcShellBasedSurfaceModel::getSbsmBoundary() {
    if (Step::BaseObject::inited()) {
        return m_sbsmBoundary;
    }
    else {
        m_sbsmBoundary.setUnset(true);
        return m_sbsmBoundary;
    }
}

const Set_IfcShell_1_n &IfcShellBasedSurfaceModel::getSbsmBoundary() const {
    IfcShellBasedSurfaceModel * deConstObject = const_cast< IfcShellBasedSurfaceModel * > (this);
    return deConstObject->getSbsmBoundary();
}

void IfcShellBasedSurfaceModel::setSbsmBoundary(const Set_IfcShell_1_n &value) {
    m_sbsmBoundary = value;
}

void IfcShellBasedSurfaceModel::unsetSbsmBoundary() {
    m_sbsmBoundary.clear();
    m_sbsmBoundary.setUnset(true);
}

bool IfcShellBasedSurfaceModel::testSbsmBoundary() const {
    return !m_sbsmBoundary.isUnset();
}

bool IfcShellBasedSurfaceModel::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sbsmBoundary.setUnset(true);
    }
    else {
        m_sbsmBoundary.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcShell > attr2;
                attr2 = new IfcShell;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((unsigned)atol(str1.c_str() + 1)));
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
                if (attr2.valid()) m_sbsmBoundary.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcShellBasedSurfaceModel::copy(const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcShell >, 1 >::const_iterator it_m_sbsmBoundary;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_sbsmBoundary = obj.m_sbsmBoundary.begin(); it_m_sbsmBoundary != obj.m_sbsmBoundary.end(); ++it_m_sbsmBoundary) {
        Step::RefPtr< IfcShell > copyTarget = new IfcShell;
        copyTarget->copy(*((*it_m_sbsmBoundary).get()), copyop);
        m_sbsmBoundary.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcShellBasedSurfaceModel::s_type("IfcShellBasedSurfaceModel");
