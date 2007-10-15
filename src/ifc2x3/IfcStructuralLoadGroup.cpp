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

#include "ifc2x3/IfcStructuralLoadGroup.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcStructuralAnalysisModel.h"
#include "ifc2x3/IfcStructuralResultGroup.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadGroup::IfcStructuralLoadGroup(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
    m_actionType = IfcActionTypeEnum_UNSET;
    m_actionSource = IfcActionSourceTypeEnum_UNSET;
    m_coefficient = Step::getUnset(m_coefficient);
    m_purpose = Step::getUnset(m_purpose);
    m_sourceOfResultGroup.setUnset(true);
    m_loadGroupFor.setUnset(true);
}

IfcStructuralLoadGroup::~IfcStructuralLoadGroup() {
}

bool IfcStructuralLoadGroup::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadGroup(this);
}

const std::string &IfcStructuralLoadGroup::type() {
    return IfcStructuralLoadGroup::s_type.getName();
}

Step::ClassType IfcStructuralLoadGroup::getClassType() {
    return IfcStructuralLoadGroup::s_type;
}

Step::ClassType IfcStructuralLoadGroup::getType() const {
    return IfcStructuralLoadGroup::s_type;
}

bool IfcStructuralLoadGroup::isOfType(Step::ClassType t) {
    return IfcStructuralLoadGroup::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcLoadGroupTypeEnum IfcStructuralLoadGroup::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcLoadGroupTypeEnum_UNSET;
    }
}

void IfcStructuralLoadGroup::setPredefinedType(IfcLoadGroupTypeEnum value) {
    m_predefinedType = value;
}

IfcActionTypeEnum IfcStructuralLoadGroup::getActionType() {
    if (Step::BaseObject::inited()) {
        return m_actionType;
    }
    else {
        return IfcActionTypeEnum_UNSET;
    }
}

void IfcStructuralLoadGroup::setActionType(IfcActionTypeEnum value) {
    m_actionType = value;
}

IfcActionSourceTypeEnum IfcStructuralLoadGroup::getActionSource() {
    if (Step::BaseObject::inited()) {
        return m_actionSource;
    }
    else {
        return IfcActionSourceTypeEnum_UNSET;
    }
}

void IfcStructuralLoadGroup::setActionSource(IfcActionSourceTypeEnum value) {
    m_actionSource = value;
}

IfcPositiveRatioMeasure IfcStructuralLoadGroup::getCoefficient() {
    if (Step::BaseObject::inited()) {
        return m_coefficient;
    }
    else {
        return Step::getUnset(m_coefficient);
    }
}

void IfcStructuralLoadGroup::setCoefficient(IfcPositiveRatioMeasure value) {
    m_coefficient = value;
}

IfcLabel IfcStructuralLoadGroup::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return Step::getUnset(m_purpose);
    }
}

void IfcStructuralLoadGroup::setPurpose(const IfcLabel &value) {
    m_purpose = value;
}

Step::Set< Step::ObsPtr< IfcStructuralResultGroup > > &IfcStructuralLoadGroup::getSourceOfResultGroup() {
    if (Step::BaseObject::inited()) {
        return m_sourceOfResultGroup;
    }
    else {
        m_sourceOfResultGroup.setUnset(true);
        return m_sourceOfResultGroup;
    }
}

Step::Set< Step::ObsPtr< IfcStructuralAnalysisModel > > &IfcStructuralLoadGroup::getLoadGroupFor() {
    if (Step::BaseObject::inited()) {
        return m_loadGroupFor;
    }
    else {
        m_loadGroupFor.setUnset(true);
        return m_loadGroupFor;
    }
}

void IfcStructuralLoadGroup::release() {
    IfcGroup::release();
}

bool IfcStructuralLoadGroup::init() {
    bool status = IfcGroup::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcLoadGroupTypeEnum_UNSET;
    }
    else {
        if (arg == ".LOAD_GROUP.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_GROUP;
        }
        else if (arg == ".LOAD_CASE.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_CASE;
        }
        else if (arg == ".LOAD_COMBINATION_GROUP.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION_GROUP;
        }
        else if (arg == ".LOAD_COMBINATION.") {
            m_predefinedType = IfcLoadGroupTypeEnum_LOAD_COMBINATION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcLoadGroupTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcLoadGroupTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actionType = IfcActionTypeEnum_UNSET;
    }
    else {
        if (arg == ".PERMANENT_G.") {
            m_actionType = IfcActionTypeEnum_PERMANENT_G;
        }
        else if (arg == ".VARIABLE_Q.") {
            m_actionType = IfcActionTypeEnum_VARIABLE_Q;
        }
        else if (arg == ".EXTRAORDINARY_A.") {
            m_actionType = IfcActionTypeEnum_EXTRAORDINARY_A;
        }
        else if (arg == ".USERDEFINED.") {
            m_actionType = IfcActionTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_actionType = IfcActionTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actionSource = IfcActionSourceTypeEnum_UNSET;
    }
    else {
        if (arg == ".DEAD_LOAD_G.") {
            m_actionSource = IfcActionSourceTypeEnum_DEAD_LOAD_G;
        }
        else if (arg == ".COMPLETION_G1.") {
            m_actionSource = IfcActionSourceTypeEnum_COMPLETION_G1;
        }
        else if (arg == ".LIVE_LOAD_Q.") {
            m_actionSource = IfcActionSourceTypeEnum_LIVE_LOAD_Q;
        }
        else if (arg == ".SNOW_S.") {
            m_actionSource = IfcActionSourceTypeEnum_SNOW_S;
        }
        else if (arg == ".WIND_W.") {
            m_actionSource = IfcActionSourceTypeEnum_WIND_W;
        }
        else if (arg == ".PRESTRESSING_P.") {
            m_actionSource = IfcActionSourceTypeEnum_PRESTRESSING_P;
        }
        else if (arg == ".SETTLEMENT_U.") {
            m_actionSource = IfcActionSourceTypeEnum_SETTLEMENT_U;
        }
        else if (arg == ".TEMPERATURE_T.") {
            m_actionSource = IfcActionSourceTypeEnum_TEMPERATURE_T;
        }
        else if (arg == ".EARTHQUAKE_E.") {
            m_actionSource = IfcActionSourceTypeEnum_EARTHQUAKE_E;
        }
        else if (arg == ".FIRE.") {
            m_actionSource = IfcActionSourceTypeEnum_FIRE;
        }
        else if (arg == ".IMPULSE.") {
            m_actionSource = IfcActionSourceTypeEnum_IMPULSE;
        }
        else if (arg == ".IMPACT.") {
            m_actionSource = IfcActionSourceTypeEnum_IMPACT;
        }
        else if (arg == ".TRANSPORT.") {
            m_actionSource = IfcActionSourceTypeEnum_TRANSPORT;
        }
        else if (arg == ".ERECTION.") {
            m_actionSource = IfcActionSourceTypeEnum_ERECTION;
        }
        else if (arg == ".PROPPING.") {
            m_actionSource = IfcActionSourceTypeEnum_PROPPING;
        }
        else if (arg == ".SYSTEM_IMPERFECTION.") {
            m_actionSource = IfcActionSourceTypeEnum_SYSTEM_IMPERFECTION;
        }
        else if (arg == ".SHRINKAGE.") {
            m_actionSource = IfcActionSourceTypeEnum_SHRINKAGE;
        }
        else if (arg == ".CREEP.") {
            m_actionSource = IfcActionSourceTypeEnum_CREEP;
        }
        else if (arg == ".LACK_OF_FIT.") {
            m_actionSource = IfcActionSourceTypeEnum_LACK_OF_FIT;
        }
        else if (arg == ".BUOYANCY.") {
            m_actionSource = IfcActionSourceTypeEnum_BUOYANCY;
        }
        else if (arg == ".ICE.") {
            m_actionSource = IfcActionSourceTypeEnum_ICE;
        }
        else if (arg == ".CURRENT.") {
            m_actionSource = IfcActionSourceTypeEnum_CURRENT;
        }
        else if (arg == ".WAVE.") {
            m_actionSource = IfcActionSourceTypeEnum_WAVE;
        }
        else if (arg == ".RAIN.") {
            m_actionSource = IfcActionSourceTypeEnum_RAIN;
        }
        else if (arg == ".BRAKES.") {
            m_actionSource = IfcActionSourceTypeEnum_BRAKES;
        }
        else if (arg == ".USERDEFINED.") {
            m_actionSource = IfcActionSourceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_actionSource = IfcActionSourceTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coefficient = Step::getUnset(m_coefficient);
    }
    else {
        m_coefficient = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = Step::getUnset(m_purpose);
    }
    else {
        m_purpose = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcStructuralResultGroup::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_sourceOfResultGroup.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_sourceOfResultGroup.insert(static_cast< IfcStructuralResultGroup * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_loadGroupFor.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_loadGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralLoadGroup::copy(const IfcStructuralLoadGroup &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setActionType(obj.m_actionType);
    setActionSource(obj.m_actionSource);
    setCoefficient(obj.m_coefficient);
    setPurpose(obj.m_purpose);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadGroup::s_type("IfcStructuralLoadGroup");
