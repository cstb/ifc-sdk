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



#include <ifc2x3/IfcFaceBasedSurfaceModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConnectedFaceSet.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFaceBasedSurfaceModel::IfcFaceBasedSurfaceModel(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcFaceBasedSurfaceModel::~IfcFaceBasedSurfaceModel() {
}

bool IfcFaceBasedSurfaceModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFaceBasedSurfaceModel(this);
}

const std::string &IfcFaceBasedSurfaceModel::type() const {
    return IfcFaceBasedSurfaceModel::s_type.getName();
}

const Step::ClassType &IfcFaceBasedSurfaceModel::getClassType() {
    return IfcFaceBasedSurfaceModel::s_type;
}

const Step::ClassType &IfcFaceBasedSurfaceModel::getType() const {
    return IfcFaceBasedSurfaceModel::s_type;
}

bool IfcFaceBasedSurfaceModel::isOfType(const Step::ClassType &t) const {
    return IfcFaceBasedSurfaceModel::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Set_IfcConnectedFaceSet_1_n &IfcFaceBasedSurfaceModel::getFbsmFaces() {
    if (Step::BaseObject::inited()) {
        return m_fbsmFaces;
    }
    else {
        m_fbsmFaces.setUnset(true);
        return m_fbsmFaces;
    }
}

const Set_IfcConnectedFaceSet_1_n &IfcFaceBasedSurfaceModel::getFbsmFaces() const {
    IfcFaceBasedSurfaceModel * deConstObject = const_cast< IfcFaceBasedSurfaceModel * > (this);
    return deConstObject->getFbsmFaces();
}

void IfcFaceBasedSurfaceModel::setFbsmFaces(const Set_IfcConnectedFaceSet_1_n &value) {
    m_fbsmFaces = value;
}

void IfcFaceBasedSurfaceModel::unsetFbsmFaces() {
    m_fbsmFaces.clear();
    m_fbsmFaces.setUnset(true);
}

bool IfcFaceBasedSurfaceModel::testFbsmFaces() const {
    return !m_fbsmFaces.isUnset();
}

bool IfcFaceBasedSurfaceModel::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fbsmFaces.setUnset(true);
    }
    else {
        m_fbsmFaces.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcConnectedFaceSet > attr2;
                attr2 = static_cast< IfcConnectedFaceSet * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_fbsmFaces.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcFaceBasedSurfaceModel::copy(const IfcFaceBasedSurfaceModel &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcConnectedFaceSet >, 1 >::const_iterator it_m_fbsmFaces;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_fbsmFaces = obj.m_fbsmFaces.begin(); it_m_fbsmFaces != obj.m_fbsmFaces.end(); ++it_m_fbsmFaces) {
        Step::RefPtr< IfcConnectedFaceSet > copyTarget = (IfcConnectedFaceSet *) (copyop((*it_m_fbsmFaces).get()));
        m_fbsmFaces.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFaceBasedSurfaceModel::s_type("IfcFaceBasedSurfaceModel");
