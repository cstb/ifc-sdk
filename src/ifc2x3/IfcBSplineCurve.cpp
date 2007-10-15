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

#include "ifc2x3/IfcBSplineCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/Visitor.h"
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

IfcBSplineCurve::IfcBSplineCurve(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_degree = Step::getUnset(m_degree);
    m_controlPointsList.setUnset(true);
    m_curveForm = IfcBSplineCurveForm_UNSET;
    m_closedCurve = Step::getUnset(m_closedCurve);
    m_selfIntersect = Step::getUnset(m_selfIntersect);
}

IfcBSplineCurve::~IfcBSplineCurve() {
}

bool IfcBSplineCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBSplineCurve(this);
}

const std::string &IfcBSplineCurve::type() {
    return IfcBSplineCurve::s_type.getName();
}

Step::ClassType IfcBSplineCurve::getClassType() {
    return IfcBSplineCurve::s_type;
}

Step::ClassType IfcBSplineCurve::getType() const {
    return IfcBSplineCurve::s_type;
}

bool IfcBSplineCurve::isOfType(Step::ClassType t) {
    return IfcBSplineCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Step::Integer IfcBSplineCurve::getDegree() {
    if (Step::BaseObject::inited()) {
        return m_degree;
    }
    else {
        return Step::getUnset(m_degree);
    }
}

void IfcBSplineCurve::setDegree(Step::Integer value) {
    m_degree = value;
}

Step::List< Step::RefPtr< IfcCartesianPoint > > &IfcBSplineCurve::getControlPointsList() {
    if (Step::BaseObject::inited()) {
        return m_controlPointsList;
    }
    else {
        m_controlPointsList.setUnset(true);
        return m_controlPointsList;
    }
}

void IfcBSplineCurve::setControlPointsList(const Step::List< Step::RefPtr< IfcCartesianPoint > > &value) {
    m_controlPointsList = value;
}

IfcBSplineCurveForm IfcBSplineCurve::getCurveForm() {
    if (Step::BaseObject::inited()) {
        return m_curveForm;
    }
    else {
        return IfcBSplineCurveForm_UNSET;
    }
}

void IfcBSplineCurve::setCurveForm(IfcBSplineCurveForm value) {
    m_curveForm = value;
}

Step::Logical IfcBSplineCurve::getClosedCurve() {
    if (Step::BaseObject::inited()) {
        return m_closedCurve;
    }
    else {
        return Step::getUnset(m_closedCurve);
    }
}

void IfcBSplineCurve::setClosedCurve(Step::Logical value) {
    m_closedCurve = value;
}

Step::Logical IfcBSplineCurve::getSelfIntersect() {
    if (Step::BaseObject::inited()) {
        return m_selfIntersect;
    }
    else {
        return Step::getUnset(m_selfIntersect);
    }
}

void IfcBSplineCurve::setSelfIntersect(Step::Logical value) {
    m_selfIntersect = value;
}

void IfcBSplineCurve::release() {
    IfcBoundedCurve::release();
    m_controlPointsList.clear();
}

bool IfcBSplineCurve::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_degree = Step::getUnset(m_degree);
    }
    else {
        m_degree = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_controlPointsList.setUnset(true);
    }
    else {
        m_controlPointsList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_controlPointsList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveForm = IfcBSplineCurveForm_UNSET;
    }
    else {
        if (arg == ".POLYLINE_FORM.") {
            m_curveForm = IfcBSplineCurveForm_POLYLINE_FORM;
        }
        else if (arg == ".CIRCULAR_ARC.") {
            m_curveForm = IfcBSplineCurveForm_CIRCULAR_ARC;
        }
        else if (arg == ".ELLIPTIC_ARC.") {
            m_curveForm = IfcBSplineCurveForm_ELLIPTIC_ARC;
        }
        else if (arg == ".PARABOLIC_ARC.") {
            m_curveForm = IfcBSplineCurveForm_PARABOLIC_ARC;
        }
        else if (arg == ".HYPERBOLIC_ARC.") {
            m_curveForm = IfcBSplineCurveForm_HYPERBOLIC_ARC;
        }
        else if (arg == ".UNSPECIFIED.") {
            m_curveForm = IfcBSplineCurveForm_UNSPECIFIED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_closedCurve = Step::getUnset(m_closedCurve);
    }
    else {
        m_closedCurve = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_selfIntersect = Step::getUnset(m_selfIntersect);
    }
    else {
        m_selfIntersect = Step::spfToLogical(arg);
    }
    return true;
}

void IfcBSplineCurve::copy(const IfcBSplineCurve &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCartesianPoint > >::const_iterator it_m_controlPointsList;
    IfcBoundedCurve::copy(obj, copyop);
    setDegree(obj.m_degree);
    for (it_m_controlPointsList = obj.m_controlPointsList.begin(); it_m_controlPointsList != obj.m_controlPointsList.end(); ++it_m_controlPointsList) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = copyop((*it_m_controlPointsList).get());
        m_controlPointsList.push_back(copyTarget.get());
    }
    setCurveForm(obj.m_curveForm);
    setClosedCurve(obj.m_closedCurve);
    setSelfIntersect(obj.m_selfIntersect);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBSplineCurve::s_type("IfcBSplineCurve");
