/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcStructuralAnalysisModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcStructuralLoadGroup.h"
#include "ifc2x3/IfcStructuralResultGroup.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

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

bool IfcStructuralAnalysisModel::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralAnalysisModel(this);
}

const std::string &IfcStructuralAnalysisModel::type() {
    return IfcStructuralAnalysisModel::s_type.getName();
}

Step::ClassType IfcStructuralAnalysisModel::getClassType() {
    return IfcStructuralAnalysisModel::s_type;
}

Step::ClassType IfcStructuralAnalysisModel::getType() const {
    return IfcStructuralAnalysisModel::s_type;
}

bool IfcStructuralAnalysisModel::isOfType(Step::ClassType t) {
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

void IfcStructuralAnalysisModel::setPredefinedType(IfcAnalysisModelTypeEnum value) {
    m_predefinedType = value;
}

IfcAxis2Placement3D *IfcStructuralAnalysisModel::getOrientationOf2DPlane() {
    if (Step::BaseObject::inited()) {
        return m_orientationOf2DPlane.get();
    }
    else {
        return NULL;
    }
}

void IfcStructuralAnalysisModel::setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_orientationOf2DPlane = value;
}

Step::Set< Step::RefPtr< IfcStructuralLoadGroup > > &IfcStructuralAnalysisModel::getLoadedBy() {
    if (Step::BaseObject::inited()) {
        return m_loadedBy;
    }
    else {
        m_loadedBy.setUnset(true);
        return m_loadedBy;
    }
}

Step::Set< Step::RefPtr< IfcStructuralResultGroup > > &IfcStructuralAnalysisModel::getHasResults() {
    if (Step::BaseObject::inited()) {
        return m_hasResults;
    }
    else {
        m_hasResults.setUnset(true);
        return m_hasResults;
    }
}

void IfcStructuralAnalysisModel::release() {
    IfcSystem::release();
    m_orientationOf2DPlane.release();
    m_loadedBy.clear();
    m_hasResults.clear();
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
        m_orientationOf2DPlane = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
                attr2 = static_cast< IfcStructuralLoadGroup * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_loadedBy.insert(attr2);
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
                attr2 = static_cast< IfcStructuralResultGroup * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_hasResults.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcStructuralAnalysisModel::copy(const IfcStructuralAnalysisModel &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcStructuralLoadGroup > >::const_iterator it_m_loadedBy;
    Step::Set< Step::RefPtr< IfcStructuralResultGroup > >::const_iterator it_m_hasResults;
    IfcSystem::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setOrientationOf2DPlane(copyop(obj.m_orientationOf2DPlane.get()));
    for (it_m_loadedBy = obj.m_loadedBy.begin(); it_m_loadedBy != obj.m_loadedBy.end(); ++it_m_loadedBy) {
        Step::RefPtr< IfcStructuralLoadGroup > copyTarget = copyop((*it_m_loadedBy).get());
        m_loadedBy.insert(copyTarget.get());
    }
    for (it_m_hasResults = obj.m_hasResults.begin(); it_m_hasResults != obj.m_hasResults.end(); ++it_m_hasResults) {
        Step::RefPtr< IfcStructuralResultGroup > copyTarget = copyop((*it_m_hasResults).get());
        m_hasResults.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralAnalysisModel::s_type("IfcStructuralAnalysisModel");
IfcStructuralAnalysisModel::Inverted_HasResults_type::Inverted_HasResults_type() {
}

void IfcStructuralAnalysisModel::Inverted_HasResults_type::setOwner(IfcStructuralAnalysisModel *owner) {
    mOwner = owner;
}

void IfcStructuralAnalysisModel::Inverted_HasResults_type::insert(const Step::RefPtr< IfcStructuralResultGroup > &value) {
    IfcStructuralResultGroup *inverse = const_cast< IfcStructuralResultGroup * > (value.get());
    Step::Set< Step::RefPtr< IfcStructuralResultGroup > >::insert(value);
    inverse->m_resultGroupFor.insert(mOwner);
}

IfcStructuralAnalysisModel::Inverted_LoadedBy_type::Inverted_LoadedBy_type() {
}

void IfcStructuralAnalysisModel::Inverted_LoadedBy_type::setOwner(IfcStructuralAnalysisModel *owner) {
    mOwner = owner;
}

void IfcStructuralAnalysisModel::Inverted_LoadedBy_type::insert(const Step::RefPtr< IfcStructuralLoadGroup > &value) {
    IfcStructuralLoadGroup *inverse = const_cast< IfcStructuralLoadGroup * > (value.get());
    Step::Set< Step::RefPtr< IfcStructuralLoadGroup > >::insert(value);
    inverse->m_loadGroupFor.insert(mOwner);
}

