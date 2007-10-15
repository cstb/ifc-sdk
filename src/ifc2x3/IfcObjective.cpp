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

#include "ifc2x3/IfcObjective.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstraint.h"
#include "ifc2x3/IfcMetric.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcObjective::IfcObjective(Step::Id id, Step::SPFData *args) : IfcConstraint(id, args) {
    m_benchmarkValues = NULL;
    m_resultValues = NULL;
    m_objectiveQualifier = IfcObjectiveEnum_UNSET;
    m_userDefinedQualifier = Step::getUnset(m_userDefinedQualifier);
}

IfcObjective::~IfcObjective() {
}

bool IfcObjective::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcObjective(this);
}

const std::string &IfcObjective::type() {
    return IfcObjective::s_type.getName();
}

Step::ClassType IfcObjective::getClassType() {
    return IfcObjective::s_type;
}

Step::ClassType IfcObjective::getType() const {
    return IfcObjective::s_type;
}

bool IfcObjective::isOfType(Step::ClassType t) {
    return IfcObjective::s_type == t ? true : IfcConstraint::isOfType(t);
}

IfcMetric *IfcObjective::getBenchmarkValues() {
    if (Step::BaseObject::inited()) {
        return m_benchmarkValues.get();
    }
    else {
        return NULL;
    }
}

void IfcObjective::setBenchmarkValues(const Step::RefPtr< IfcMetric > &value) {
    m_benchmarkValues = value;
}

IfcMetric *IfcObjective::getResultValues() {
    if (Step::BaseObject::inited()) {
        return m_resultValues.get();
    }
    else {
        return NULL;
    }
}

void IfcObjective::setResultValues(const Step::RefPtr< IfcMetric > &value) {
    m_resultValues = value;
}

IfcObjectiveEnum IfcObjective::getObjectiveQualifier() {
    if (Step::BaseObject::inited()) {
        return m_objectiveQualifier;
    }
    else {
        return IfcObjectiveEnum_UNSET;
    }
}

void IfcObjective::setObjectiveQualifier(IfcObjectiveEnum value) {
    m_objectiveQualifier = value;
}

IfcLabel IfcObjective::getUserDefinedQualifier() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedQualifier;
    }
    else {
        return Step::getUnset(m_userDefinedQualifier);
    }
}

void IfcObjective::setUserDefinedQualifier(const IfcLabel &value) {
    m_userDefinedQualifier = value;
}

void IfcObjective::release() {
    IfcConstraint::release();
    m_benchmarkValues.release();
    m_resultValues.release();
}

bool IfcObjective::init() {
    bool status = IfcConstraint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_benchmarkValues = NULL;
    }
    else {
        m_benchmarkValues = static_cast< IfcMetric * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resultValues = NULL;
    }
    else {
        m_resultValues = static_cast< IfcMetric * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_objectiveQualifier = IfcObjectiveEnum_UNSET;
    }
    else {
        if (arg == ".CODECOMPLIANCE.") {
            m_objectiveQualifier = IfcObjectiveEnum_CODECOMPLIANCE;
        }
        else if (arg == ".DESIGNINTENT.") {
            m_objectiveQualifier = IfcObjectiveEnum_DESIGNINTENT;
        }
        else if (arg == ".HEALTHANDSAFETY.") {
            m_objectiveQualifier = IfcObjectiveEnum_HEALTHANDSAFETY;
        }
        else if (arg == ".REQUIREMENT.") {
            m_objectiveQualifier = IfcObjectiveEnum_REQUIREMENT;
        }
        else if (arg == ".SPECIFICATION.") {
            m_objectiveQualifier = IfcObjectiveEnum_SPECIFICATION;
        }
        else if (arg == ".TRIGGERCONDITION.") {
            m_objectiveQualifier = IfcObjectiveEnum_TRIGGERCONDITION;
        }
        else if (arg == ".USERDEFINED.") {
            m_objectiveQualifier = IfcObjectiveEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_objectiveQualifier = IfcObjectiveEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedQualifier = Step::getUnset(m_userDefinedQualifier);
    }
    else {
        m_userDefinedQualifier = Step::spfToString(arg);
    }
    return true;
}

void IfcObjective::copy(const IfcObjective &obj, const CopyOp &copyop) {
    IfcConstraint::copy(obj, copyop);
    setBenchmarkValues(copyop(obj.m_benchmarkValues.get()));
    setResultValues(copyop(obj.m_resultValues.get()));
    setObjectiveQualifier(obj.m_objectiveQualifier);
    setUserDefinedQualifier(obj.m_userDefinedQualifier);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjective::s_type("IfcObjective");
