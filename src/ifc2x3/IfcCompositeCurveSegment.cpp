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

#include "ifc2x3/IfcCompositeCurveSegment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCompositeCurve.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCompositeCurveSegment::IfcCompositeCurveSegment(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_transition = IfcTransitionCode_UNSET;
    m_sameSense = Step::getUnset(m_sameSense);
    m_parentCurve = NULL;
    m_usingCurves.setUnset(true);
}

IfcCompositeCurveSegment::~IfcCompositeCurveSegment() {
}

bool IfcCompositeCurveSegment::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCompositeCurveSegment(this);
}

const std::string &IfcCompositeCurveSegment::type() {
    return IfcCompositeCurveSegment::s_type.getName();
}

Step::ClassType IfcCompositeCurveSegment::getClassType() {
    return IfcCompositeCurveSegment::s_type;
}

Step::ClassType IfcCompositeCurveSegment::getType() const {
    return IfcCompositeCurveSegment::s_type;
}

bool IfcCompositeCurveSegment::isOfType(Step::ClassType t) {
    return IfcCompositeCurveSegment::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcTransitionCode IfcCompositeCurveSegment::getTransition() {
    if (Step::BaseObject::inited()) {
        return m_transition;
    }
    else {
        return IfcTransitionCode_UNSET;
    }
}

void IfcCompositeCurveSegment::setTransition(IfcTransitionCode value) {
    m_transition = value;
}

Step::Bool IfcCompositeCurveSegment::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

void IfcCompositeCurveSegment::setSameSense(Step::Bool value) {
    m_sameSense = value;
}

IfcCurve *IfcCompositeCurveSegment::getParentCurve() {
    if (Step::BaseObject::inited()) {
        return m_parentCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcCompositeCurveSegment::setParentCurve(const Step::RefPtr< IfcCurve > &value) {
    m_parentCurve = value;
}

Step::Set< Step::ObsPtr< IfcCompositeCurve > > &IfcCompositeCurveSegment::getUsingCurves() {
    if (Step::BaseObject::inited()) {
        return m_usingCurves;
    }
    else {
        m_usingCurves.setUnset(true);
        return m_usingCurves;
    }
}

void IfcCompositeCurveSegment::release() {
    IfcGeometricRepresentationItem::release();
    m_parentCurve.release();
}

bool IfcCompositeCurveSegment::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transition = IfcTransitionCode_UNSET;
    }
    else {
        if (arg == ".DISCONTINUOUS.") {
            m_transition = IfcTransitionCode_DISCONTINUOUS;
        }
        else if (arg == ".CONTINUOUS.") {
            m_transition = IfcTransitionCode_CONTINUOUS;
        }
        else if (arg == ".CONTSAMEGRADIENT.") {
            m_transition = IfcTransitionCode_CONTSAMEGRADIENT;
        }
        else if (arg == ".CONTSAMEGRADIENTSAMECURVATURE.") {
            m_transition = IfcTransitionCode_CONTSAMEGRADIENTSAMECURVATURE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBool(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentCurve = NULL;
    }
    else {
        m_parentCurve = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    inverses = m_args->getInverses(IfcCompositeCurve::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_usingCurves.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_usingCurves.insert(static_cast< IfcCompositeCurve * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcCompositeCurveSegment::copy(const IfcCompositeCurveSegment &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setTransition(obj.m_transition);
    setSameSense(obj.m_sameSense);
    setParentCurve(copyop(obj.m_parentCurve.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompositeCurveSegment::s_type("IfcCompositeCurveSegment");
