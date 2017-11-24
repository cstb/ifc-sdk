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



#include <ifc2x3/IfcConnectedFaceSet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFace.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConnectedFaceSet::IfcConnectedFaceSet(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcConnectedFaceSet::~IfcConnectedFaceSet() {
}

bool IfcConnectedFaceSet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectedFaceSet(this);
}

const std::string &IfcConnectedFaceSet::type() const {
    return IfcConnectedFaceSet::s_type.getName();
}

const Step::ClassType &IfcConnectedFaceSet::getClassType() {
    return IfcConnectedFaceSet::s_type;
}

const Step::ClassType &IfcConnectedFaceSet::getType() const {
    return IfcConnectedFaceSet::s_type;
}

bool IfcConnectedFaceSet::isOfType(const Step::ClassType &t) const {
    return IfcConnectedFaceSet::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Set_IfcFace_1_n &IfcConnectedFaceSet::getCfsFaces() {
    if (Step::BaseObject::inited()) {
        return m_cfsFaces;
    }
    else {
        m_cfsFaces.setUnset(true);
        return m_cfsFaces;
    }
}

const Set_IfcFace_1_n &IfcConnectedFaceSet::getCfsFaces() const {
    IfcConnectedFaceSet * deConstObject = const_cast< IfcConnectedFaceSet * > (this);
    return deConstObject->getCfsFaces();
}

void IfcConnectedFaceSet::setCfsFaces(const Set_IfcFace_1_n &value) {
    m_cfsFaces = value;
}

void IfcConnectedFaceSet::unsetCfsFaces() {
    m_cfsFaces.clear();
    m_cfsFaces.setUnset(true);
}

bool IfcConnectedFaceSet::testCfsFaces() const {
    return !m_cfsFaces.isUnset();
}

bool IfcConnectedFaceSet::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_cfsFaces.setUnset(true);
    }
    else {
        m_cfsFaces.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFace > attr2;
                attr2 = static_cast< IfcFace * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_cfsFaces.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcConnectedFaceSet::copy(const IfcConnectedFaceSet &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFace >, 1 >::const_iterator it_m_cfsFaces;
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    for (it_m_cfsFaces = obj.m_cfsFaces.begin(); it_m_cfsFaces != obj.m_cfsFaces.end(); ++it_m_cfsFaces) {
        Step::RefPtr< IfcFace > copyTarget = (IfcFace *) (copyop((*it_m_cfsFaces).get()));
        m_cfsFaces.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConnectedFaceSet::s_type("IfcConnectedFaceSet");
