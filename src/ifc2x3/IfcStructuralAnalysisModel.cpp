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



#include <ifc2x3/IfcStructuralAnalysisModel.h>



#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcStructuralLoadGroup.h>
#include <ifc2x3/IfcStructuralResultGroup.h>
#include <ifc2x3/IfcSystem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcStructuralAnalysisModel_LoadedBy_type::Inverted_IfcStructuralAnalysisModel_LoadedBy_type():
    mOwner(0)
{
}

void Inverted_IfcStructuralAnalysisModel_LoadedBy_type::setOwner(IfcStructuralAnalysisModel *owner) {
    mOwner = owner;
}

void Inverted_IfcStructuralAnalysisModel_LoadedBy_type::insert(const Step::RefPtr< IfcStructuralLoadGroup > &value) throw(std::out_of_range) {
    IfcStructuralLoadGroup *inverse = const_cast< IfcStructuralLoadGroup * > (value.get());
    Set_IfcStructuralLoadGroup_1_n::insert(value);
    inverse->m_loadGroupFor.insert(mOwner);
}

Inverted_IfcStructuralAnalysisModel_LoadedBy_type::size_type Inverted_IfcStructuralAnalysisModel_LoadedBy_type::erase(const Step::RefPtr< IfcStructuralLoadGroup > &value) {
    IfcStructuralLoadGroup *inverse = const_cast< IfcStructuralLoadGroup * > (value.get());
    inverse->m_loadGroupFor.erase(mOwner);
    return Set_IfcStructuralLoadGroup_1_n::erase(value);
}

void Inverted_IfcStructuralAnalysisModel_LoadedBy_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

Inverted_IfcStructuralAnalysisModel_HasResults_type::Inverted_IfcStructuralAnalysisModel_HasResults_type():
    mOwner(0)
{
}

void Inverted_IfcStructuralAnalysisModel_HasResults_type::setOwner(IfcStructuralAnalysisModel *owner) {
    mOwner = owner;
}

void Inverted_IfcStructuralAnalysisModel_HasResults_type::insert(const Step::RefPtr< IfcStructuralResultGroup > &value) throw(std::out_of_range) {
    IfcStructuralResultGroup *inverse = const_cast< IfcStructuralResultGroup * > (value.get());
    Set_IfcStructuralResultGroup_1_n::insert(value);
    inverse->m_resultGroupFor.insert(mOwner);
}

Inverted_IfcStructuralAnalysisModel_HasResults_type::size_type Inverted_IfcStructuralAnalysisModel_HasResults_type::erase(const Step::RefPtr< IfcStructuralResultGroup > &value) {
    IfcStructuralResultGroup *inverse = const_cast< IfcStructuralResultGroup * > (value.get());
    inverse->m_resultGroupFor.erase(mOwner);
    return Set_IfcStructuralResultGroup_1_n::erase(value);
}

void Inverted_IfcStructuralAnalysisModel_HasResults_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcStructuralAnalysisModel::IfcStructuralAnalysisModel(Step::Id id, Step::SPFData *args) : IfcSystem(id, args) {
    m_predefinedType = IfcAnalysisModelTypeEnum_UNSET;
    m_orientationOf2DPlane = NULL;
    m_loadedBy.setUnset(true);
    m_loadedBy.setOwner(this);
    m_hasResults.setUnset(true);
    m_hasResults.setOwner(this);
}

IfcStructuralAnalysisModel::~IfcStructuralAnalysisModel() {
}

bool IfcStructuralAnalysisModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralAnalysisModel(this);
}

const std::string &IfcStructuralAnalysisModel::type() const {
    return IfcStructuralAnalysisModel::s_type.getName();
}

const Step::ClassType &IfcStructuralAnalysisModel::getClassType() {
    return IfcStructuralAnalysisModel::s_type;
}

const Step::ClassType &IfcStructuralAnalysisModel::getType() const {
    return IfcStructuralAnalysisModel::s_type;
}

bool IfcStructuralAnalysisModel::isOfType(const Step::ClassType &t) const {
    return IfcStructuralAnalysisModel::s_type == t ? true : IfcSystem::isOfType(t);
}

IfcAnalysisModelTypeEnum IfcStructuralAnalysisModel::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcAnalysisModelTypeEnum_UNSET;
    }
}

const IfcAnalysisModelTypeEnum IfcStructuralAnalysisModel::getPredefinedType() const {
    IfcStructuralAnalysisModel * deConstObject = const_cast< IfcStructuralAnalysisModel * > (this);
    return deConstObject->getPredefinedType();
}

void IfcStructuralAnalysisModel::setPredefinedType(IfcAnalysisModelTypeEnum value) {
    m_predefinedType = value;
}

void IfcStructuralAnalysisModel::unsetPredefinedType() {
    m_predefinedType = IfcAnalysisModelTypeEnum_UNSET;
}

bool IfcStructuralAnalysisModel::testPredefinedType() const {
    return getPredefinedType() != IfcAnalysisModelTypeEnum_UNSET;
}

IfcAxis2Placement3D *IfcStructuralAnalysisModel::getOrientationOf2DPlane() {
    if (Step::BaseObject::inited()) {
        return m_orientationOf2DPlane.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcStructuralAnalysisModel::getOrientationOf2DPlane() const {
    IfcStructuralAnalysisModel * deConstObject = const_cast< IfcStructuralAnalysisModel * > (this);
    return deConstObject->getOrientationOf2DPlane();
}

void IfcStructuralAnalysisModel::setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_orientationOf2DPlane = value;
}

void IfcStructuralAnalysisModel::unsetOrientationOf2DPlane() {
    m_orientationOf2DPlane = Step::getUnset(getOrientationOf2DPlane());
}

bool IfcStructuralAnalysisModel::testOrientationOf2DPlane() const {
    return !Step::isUnset(getOrientationOf2DPlane());
}

Set_IfcStructuralLoadGroup_1_n &IfcStructuralAnalysisModel::getLoadedBy() {
    if (Step::BaseObject::inited()) {
        return m_loadedBy;
    }
    else {
        m_loadedBy.setUnset(true);
        return m_loadedBy;
    }
}

const Set_IfcStructuralLoadGroup_1_n &IfcStructuralAnalysisModel::getLoadedBy() const {
    IfcStructuralAnalysisModel * deConstObject = const_cast< IfcStructuralAnalysisModel * > (this);
    return deConstObject->getLoadedBy();
}

void IfcStructuralAnalysisModel::unsetLoadedBy() {
    m_loadedBy.clear();
    m_loadedBy.setUnset(true);
}

bool IfcStructuralAnalysisModel::testLoadedBy() const {
    return !m_loadedBy.isUnset();
}

Set_IfcStructuralResultGroup_1_n &IfcStructuralAnalysisModel::getHasResults() {
    if (Step::BaseObject::inited()) {
        return m_hasResults;
    }
    else {
        m_hasResults.setUnset(true);
        return m_hasResults;
    }
}

const Set_IfcStructuralResultGroup_1_n &IfcStructuralAnalysisModel::getHasResults() const {
    IfcStructuralAnalysisModel * deConstObject = const_cast< IfcStructuralAnalysisModel * > (this);
    return deConstObject->getHasResults();
}

void IfcStructuralAnalysisModel::unsetHasResults() {
    m_hasResults.clear();
    m_hasResults.setUnset(true);
}

bool IfcStructuralAnalysisModel::testHasResults() const {
    return !m_hasResults.isUnset();
}

bool IfcStructuralAnalysisModel::init() {
    bool status = IfcSystem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcAnalysisModelTypeEnum_UNSET;
    }
    else {
        if (arg == ".IN_PLANE_LOADING_2D.") {
            m_predefinedType = IfcAnalysisModelTypeEnum_IN_PLANE_LOADING_2D;
        }
        else if (arg == ".OUT_PLANE_LOADING_2D.") {
            m_predefinedType = IfcAnalysisModelTypeEnum_OUT_PLANE_LOADING_2D;
        }
        else if (arg == ".LOADING_3D.") {
            m_predefinedType = IfcAnalysisModelTypeEnum_LOADING_3D;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcAnalysisModelTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcAnalysisModelTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientationOf2DPlane = NULL;
    }
    else {
        m_orientationOf2DPlane = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_loadedBy.setUnset(true);
    }
    else {
        m_loadedBy.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcStructuralLoadGroup > attr2;
                attr2 = static_cast< IfcStructuralLoadGroup * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_loadedBy.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasResults.setUnset(true);
    }
    else {
        m_hasResults.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcStructuralResultGroup > attr2;
                attr2 = static_cast< IfcStructuralResultGroup * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_hasResults.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcStructuralAnalysisModel::copy(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcStructuralLoadGroup >, 1 >::const_iterator it_m_loadedBy;
    Step::Set< Step::RefPtr< IfcStructuralResultGroup >, 1 >::const_iterator it_m_hasResults;
    IfcSystem::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setOrientationOf2DPlane((IfcAxis2Placement3D*)copyop(obj.m_orientationOf2DPlane.get()));
    for (it_m_loadedBy = obj.m_loadedBy.begin(); it_m_loadedBy != obj.m_loadedBy.end(); ++it_m_loadedBy) {
        Step::RefPtr< IfcStructuralLoadGroup > copyTarget = (IfcStructuralLoadGroup *) (copyop((*it_m_loadedBy).get()));
        m_loadedBy.insert(copyTarget.get());
    }
    for (it_m_hasResults = obj.m_hasResults.begin(); it_m_hasResults != obj.m_hasResults.end(); ++it_m_hasResults) {
        Step::RefPtr< IfcStructuralResultGroup > copyTarget = (IfcStructuralResultGroup *) (copyop((*it_m_hasResults).get()));
        m_hasResults.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralAnalysisModel::s_type("IfcStructuralAnalysisModel");
