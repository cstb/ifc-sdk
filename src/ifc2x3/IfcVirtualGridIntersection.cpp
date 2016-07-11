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



#include <ifc2x3/IfcVirtualGridIntersection.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGridAxis.h>
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

Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::Inverted_IfcVirtualGridIntersection_IntersectingAxes_type():
    mOwner(0)
{
}

void Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::setOwner(IfcVirtualGridIntersection *owner) {
    mOwner = owner;
}

void Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_2_2::push_back(value);
    inverse->m_hasIntersections.insert(mOwner);
}

Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::iterator Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_hasIntersections.erase(mOwner);
    return List_IfcGridAxis_2_2::erase(value);
}

void Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcVirtualGridIntersection::IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_intersectingAxes.setOwner(this);
}

IfcVirtualGridIntersection::~IfcVirtualGridIntersection() {
}

bool IfcVirtualGridIntersection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVirtualGridIntersection(this);
}

const std::string &IfcVirtualGridIntersection::type() const {
    return IfcVirtualGridIntersection::s_type.getName();
}

const Step::ClassType &IfcVirtualGridIntersection::getClassType() {
    return IfcVirtualGridIntersection::s_type;
}

const Step::ClassType &IfcVirtualGridIntersection::getType() const {
    return IfcVirtualGridIntersection::s_type;
}

bool IfcVirtualGridIntersection::isOfType(const Step::ClassType &t) const {
    return IfcVirtualGridIntersection::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcGridAxis_2_2 &IfcVirtualGridIntersection::getIntersectingAxes() {
    if (Step::BaseObject::inited()) {
        return m_intersectingAxes;
    }
    else {
        m_intersectingAxes.setUnset(true);
        return m_intersectingAxes;
    }
}

const List_IfcGridAxis_2_2 &IfcVirtualGridIntersection::getIntersectingAxes() const {
    IfcVirtualGridIntersection * deConstObject = const_cast< IfcVirtualGridIntersection * > (this);
    return deConstObject->getIntersectingAxes();
}

void IfcVirtualGridIntersection::unsetIntersectingAxes() {
    m_intersectingAxes.clear();
    m_intersectingAxes.setUnset(true);
}

bool IfcVirtualGridIntersection::testIntersectingAxes() const {
    return !m_intersectingAxes.isUnset();
}

List_IfcLengthMeasure_2_3 &IfcVirtualGridIntersection::getOffsetDistances() {
    if (Step::BaseObject::inited()) {
        return m_offsetDistances;
    }
    else {
        m_offsetDistances.setUnset(true);
        return m_offsetDistances;
    }
}

const List_IfcLengthMeasure_2_3 &IfcVirtualGridIntersection::getOffsetDistances() const {
    IfcVirtualGridIntersection * deConstObject = const_cast< IfcVirtualGridIntersection * > (this);
    return deConstObject->getOffsetDistances();
}

void IfcVirtualGridIntersection::setOffsetDistances(const List_IfcLengthMeasure_2_3 &value) {
    m_offsetDistances = value;
}

void IfcVirtualGridIntersection::unsetOffsetDistances() {
    m_offsetDistances.clear();
    m_offsetDistances.setUnset(true);
}

bool IfcVirtualGridIntersection::testOffsetDistances() const {
    return !m_offsetDistances.isUnset();
}

bool IfcVirtualGridIntersection::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intersectingAxes.setUnset(true);
    }
    else {
        m_intersectingAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_intersectingAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_offsetDistances.setUnset(true);
    }
    else {
        m_offsetDistances.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLengthMeasure attr2;
                attr2 = Step::spfToReal(str1);
                m_offsetDistances.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcVirtualGridIntersection::copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcGridAxis >, 2, 2 >::const_iterator it_m_intersectingAxes;
    Step::List< IfcLengthMeasure, 2, 3 >::const_iterator it_m_offsetDistances;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_intersectingAxes = obj.m_intersectingAxes.begin(); it_m_intersectingAxes != obj.m_intersectingAxes.end(); ++it_m_intersectingAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_intersectingAxes).get()));
        m_intersectingAxes.push_back(copyTarget.get());
    }
    for (it_m_offsetDistances = obj.m_offsetDistances.begin(); it_m_offsetDistances != obj.m_offsetDistances.end(); ++it_m_offsetDistances) {
        IfcLengthMeasure copyTarget = (*it_m_offsetDistances);
        m_offsetDistances.push_back(copyTarget);
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcVirtualGridIntersection::s_type("IfcVirtualGridIntersection");
