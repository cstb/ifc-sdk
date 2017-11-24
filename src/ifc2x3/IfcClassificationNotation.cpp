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



#include <ifc2x3/IfcClassificationNotation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClassificationNotationFacet.h>
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

IfcClassificationNotation::IfcClassificationNotation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcClassificationNotation::~IfcClassificationNotation() {
}

bool IfcClassificationNotation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcClassificationNotation(this);
}

const std::string &IfcClassificationNotation::type() const {
    return IfcClassificationNotation::s_type.getName();
}

const Step::ClassType &IfcClassificationNotation::getClassType() {
    return IfcClassificationNotation::s_type;
}

const Step::ClassType &IfcClassificationNotation::getType() const {
    return IfcClassificationNotation::s_type;
}

bool IfcClassificationNotation::isOfType(const Step::ClassType &t) const {
    return IfcClassificationNotation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Set_IfcClassificationNotationFacet_1_n &IfcClassificationNotation::getNotationFacets() {
    if (Step::BaseObject::inited()) {
        return m_notationFacets;
    }
    else {
        m_notationFacets.setUnset(true);
        return m_notationFacets;
    }
}

const Set_IfcClassificationNotationFacet_1_n &IfcClassificationNotation::getNotationFacets() const {
    IfcClassificationNotation * deConstObject = const_cast< IfcClassificationNotation * > (this);
    return deConstObject->getNotationFacets();
}

void IfcClassificationNotation::setNotationFacets(const Set_IfcClassificationNotationFacet_1_n &value) {
    m_notationFacets = value;
}

void IfcClassificationNotation::unsetNotationFacets() {
    m_notationFacets.clear();
    m_notationFacets.setUnset(true);
}

bool IfcClassificationNotation::testNotationFacets() const {
    return !m_notationFacets.isUnset();
}

bool IfcClassificationNotation::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_notationFacets.setUnset(true);
    }
    else {
        m_notationFacets.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationNotationFacet > attr2;
                attr2 = static_cast< IfcClassificationNotationFacet * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_notationFacets.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcClassificationNotation::copy(const IfcClassificationNotation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationNotationFacet >, 1 >::const_iterator it_m_notationFacets;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_notationFacets = obj.m_notationFacets.begin(); it_m_notationFacets != obj.m_notationFacets.end(); ++it_m_notationFacets) {
        Step::RefPtr< IfcClassificationNotationFacet > copyTarget = (IfcClassificationNotationFacet *) (copyop((*it_m_notationFacets).get()));
        m_notationFacets.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcClassificationNotation::s_type("IfcClassificationNotation");
