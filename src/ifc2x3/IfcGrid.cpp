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



#include <ifc2x3/IfcGrid.h>




#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
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

Inverted_IfcGrid_UAxes_type::Inverted_IfcGrid_UAxes_type():
    mOwner(0)
{
}

void Inverted_IfcGrid_UAxes_type::setOwner(IfcGrid *owner) {
    mOwner = owner;
}

void Inverted_IfcGrid_UAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_1_n::push_back(value);
    inverse->m_partOfU.insert(mOwner);
}

Inverted_IfcGrid_UAxes_type::iterator Inverted_IfcGrid_UAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_partOfU.erase(mOwner);
    return List_IfcGridAxis_1_n::erase(value);
}

void Inverted_IfcGrid_UAxes_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

Inverted_IfcGrid_VAxes_type::Inverted_IfcGrid_VAxes_type():
    mOwner(0)
{
}

void Inverted_IfcGrid_VAxes_type::setOwner(IfcGrid *owner) {
    mOwner = owner;
}

void Inverted_IfcGrid_VAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_1_n::push_back(value);
    inverse->m_partOfV.insert(mOwner);
}

Inverted_IfcGrid_VAxes_type::iterator Inverted_IfcGrid_VAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_partOfV.erase(mOwner);
    return List_IfcGridAxis_1_n::erase(value);
}

void Inverted_IfcGrid_VAxes_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

Inverted_IfcGrid_WAxes_type::Inverted_IfcGrid_WAxes_type():
    mOwner(0)
{
}

void Inverted_IfcGrid_WAxes_type::setOwner(IfcGrid *owner) {
    mOwner = owner;
}

void Inverted_IfcGrid_WAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value) throw(std::out_of_range) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_1_n::push_back(value);
    inverse->m_partOfW.insert(mOwner);
}

Inverted_IfcGrid_WAxes_type::iterator Inverted_IfcGrid_WAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value) {
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_partOfW.erase(mOwner);
    return List_IfcGridAxis_1_n::erase(value);
}

void Inverted_IfcGrid_WAxes_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcGrid::IfcGrid(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_uAxes.setOwner(this);
    m_vAxes.setOwner(this);
    m_wAxes.setUnset(true);
    m_wAxes.setOwner(this);
}

IfcGrid::~IfcGrid() {
}

bool IfcGrid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGrid(this);
}

const std::string &IfcGrid::type() const {
    return IfcGrid::s_type.getName();
}

const Step::ClassType &IfcGrid::getClassType() {
    return IfcGrid::s_type;
}

const Step::ClassType &IfcGrid::getType() const {
    return IfcGrid::s_type;
}

bool IfcGrid::isOfType(const Step::ClassType &t) const {
    return IfcGrid::s_type == t ? true : IfcProduct::isOfType(t);
}

List_IfcGridAxis_1_n &IfcGrid::getUAxes() {
    if (Step::BaseObject::inited()) {
        return m_uAxes;
    }
    else {
        m_uAxes.setUnset(true);
        return m_uAxes;
    }
}

const List_IfcGridAxis_1_n &IfcGrid::getUAxes() const {
    IfcGrid * deConstObject = const_cast< IfcGrid * > (this);
    return deConstObject->getUAxes();
}

void IfcGrid::unsetUAxes() {
    m_uAxes.clear();
    m_uAxes.setUnset(true);
}

bool IfcGrid::testUAxes() const {
    return !m_uAxes.isUnset();
}

List_IfcGridAxis_1_n &IfcGrid::getVAxes() {
    if (Step::BaseObject::inited()) {
        return m_vAxes;
    }
    else {
        m_vAxes.setUnset(true);
        return m_vAxes;
    }
}

const List_IfcGridAxis_1_n &IfcGrid::getVAxes() const {
    IfcGrid * deConstObject = const_cast< IfcGrid * > (this);
    return deConstObject->getVAxes();
}

void IfcGrid::unsetVAxes() {
    m_vAxes.clear();
    m_vAxes.setUnset(true);
}

bool IfcGrid::testVAxes() const {
    return !m_vAxes.isUnset();
}

List_IfcGridAxis_1_n &IfcGrid::getWAxes() {
    if (Step::BaseObject::inited()) {
        return m_wAxes;
    }
    else {
        m_wAxes.setUnset(true);
        return m_wAxes;
    }
}

const List_IfcGridAxis_1_n &IfcGrid::getWAxes() const {
    IfcGrid * deConstObject = const_cast< IfcGrid * > (this);
    return deConstObject->getWAxes();
}

void IfcGrid::unsetWAxes() {
    m_wAxes.clear();
    m_wAxes.setUnset(true);
}

bool IfcGrid::testWAxes() const {
    return !m_wAxes.isUnset();
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcGrid::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return m_containedInStructure;
    }
    else {
        m_containedInStructure.setUnset(true);
        return m_containedInStructure;
    }
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcGrid::getContainedInStructure() const {
    IfcGrid * deConstObject = const_cast< IfcGrid * > (this);
    return deConstObject->getContainedInStructure();
}

bool IfcGrid::testContainedInStructure() const {
    return !m_containedInStructure.isUnset();
}

bool IfcGrid::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_uAxes.setUnset(true);
    }
    else {
        m_uAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_uAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vAxes.setUnset(true);
    }
    else {
        m_vAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_vAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wAxes.setUnset(true);
    }
    else {
        m_wAxes.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGridAxis > attr2;
                attr2 = static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_wAxes.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGrid::copy(const IfcGrid &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcGridAxis >, 1 >::const_iterator it_m_uAxes;
    Step::List< Step::RefPtr< IfcGridAxis >, 1 >::const_iterator it_m_vAxes;
    Step::List< Step::RefPtr< IfcGridAxis >, 1 >::const_iterator it_m_wAxes;
    IfcProduct::copy(obj, copyop);
    for (it_m_uAxes = obj.m_uAxes.begin(); it_m_uAxes != obj.m_uAxes.end(); ++it_m_uAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_uAxes).get()));
        m_uAxes.push_back(copyTarget.get());
    }
    for (it_m_vAxes = obj.m_vAxes.begin(); it_m_vAxes != obj.m_vAxes.end(); ++it_m_vAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_vAxes).get()));
        m_vAxes.push_back(copyTarget.get());
    }
    for (it_m_wAxes = obj.m_wAxes.begin(); it_m_wAxes != obj.m_wAxes.end(); ++it_m_wAxes) {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_wAxes).get()));
        m_wAxes.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGrid::s_type("IfcGrid");
