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

#include "ifc2x3/IfcCompositeCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcCompositeCurveSegment.h"
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

IfcCompositeCurve::IfcCompositeCurve(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_segments.setUnset(true);
    m_segments.setOwner(this);
    m_selfIntersect = Step::getUnset(m_selfIntersect);
}

IfcCompositeCurve::~IfcCompositeCurve() {
}

bool IfcCompositeCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCompositeCurve(this);
}

const std::string &IfcCompositeCurve::type() {
    return IfcCompositeCurve::s_type.getName();
}

Step::ClassType IfcCompositeCurve::getClassType() {
    return IfcCompositeCurve::s_type;
}

Step::ClassType IfcCompositeCurve::getType() const {
    return IfcCompositeCurve::s_type;
}

bool IfcCompositeCurve::isOfType(Step::ClassType t) {
    return IfcCompositeCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Step::List< Step::RefPtr< IfcCompositeCurveSegment > > &IfcCompositeCurve::getSegments() {
    if (Step::BaseObject::inited()) {
        return m_segments;
    }
    else {
        m_segments.setUnset(true);
        return m_segments;
    }
}

Step::Logical IfcCompositeCurve::getSelfIntersect() {
    if (Step::BaseObject::inited()) {
        return m_selfIntersect;
    }
    else {
        return Step::getUnset(m_selfIntersect);
    }
}

void IfcCompositeCurve::setSelfIntersect(Step::Logical value) {
    m_selfIntersect = value;
}

void IfcCompositeCurve::release() {
    IfcBoundedCurve::release();
    m_segments.clear();
}

bool IfcCompositeCurve::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_segments.setUnset(true);
    }
    else {
        m_segments.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCompositeCurveSegment > attr2;
                attr2 = static_cast< IfcCompositeCurveSegment * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_segments.push_back(attr2);
            }
            else {
                break;
            }
        }
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

void IfcCompositeCurve::copy(const IfcCompositeCurve &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCompositeCurveSegment > >::const_iterator it_m_segments;
    IfcBoundedCurve::copy(obj, copyop);
    for (it_m_segments = obj.m_segments.begin(); it_m_segments != obj.m_segments.end(); ++it_m_segments) {
        Step::RefPtr< IfcCompositeCurveSegment > copyTarget = copyop((*it_m_segments).get());
        m_segments.push_back(copyTarget.get());
    }
    setSelfIntersect(obj.m_selfIntersect);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompositeCurve::s_type("IfcCompositeCurve");
IfcCompositeCurve::Inverted_Segments_type::Inverted_Segments_type() {
}

void IfcCompositeCurve::Inverted_Segments_type::setOwner(IfcCompositeCurve *owner) {
    mOwner = owner;
}

void IfcCompositeCurve::Inverted_Segments_type::push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value) {
    IfcCompositeCurveSegment *inverse = const_cast< IfcCompositeCurveSegment * > (value.get());
    Step::List< Step::RefPtr< IfcCompositeCurveSegment > >::push_back(value);
    inverse->m_usingCurves.insert(mOwner);
}

