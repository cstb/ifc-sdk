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

#include "ifc2x3/IfcCurveStyleFontPattern.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCurveStyleFontPattern::IfcCurveStyleFontPattern(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_visibleSegmentLength = Step::getUnset(m_visibleSegmentLength);
    m_invisibleSegmentLength = Step::getUnset(m_invisibleSegmentLength);
}

IfcCurveStyleFontPattern::~IfcCurveStyleFontPattern() {
}

bool IfcCurveStyleFontPattern::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurveStyleFontPattern(this);
}

const std::string &IfcCurveStyleFontPattern::type() {
    return IfcCurveStyleFontPattern::s_type.getName();
}

Step::ClassType IfcCurveStyleFontPattern::getClassType() {
    return IfcCurveStyleFontPattern::s_type;
}

Step::ClassType IfcCurveStyleFontPattern::getType() const {
    return IfcCurveStyleFontPattern::s_type;
}

bool IfcCurveStyleFontPattern::isOfType(Step::ClassType t) {
    return IfcCurveStyleFontPattern::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLengthMeasure IfcCurveStyleFontPattern::getVisibleSegmentLength() {
    if (Step::BaseObject::inited()) {
        return m_visibleSegmentLength;
    }
    else {
        return Step::getUnset(m_visibleSegmentLength);
    }
}

void IfcCurveStyleFontPattern::setVisibleSegmentLength(IfcLengthMeasure value) {
    m_visibleSegmentLength = value;
}

IfcPositiveLengthMeasure IfcCurveStyleFontPattern::getInvisibleSegmentLength() {
    if (Step::BaseObject::inited()) {
        return m_invisibleSegmentLength;
    }
    else {
        return Step::getUnset(m_invisibleSegmentLength);
    }
}

void IfcCurveStyleFontPattern::setInvisibleSegmentLength(IfcPositiveLengthMeasure value) {
    m_invisibleSegmentLength = value;
}

void IfcCurveStyleFontPattern::release() {
}

bool IfcCurveStyleFontPattern::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleSegmentLength = Step::getUnset(m_visibleSegmentLength);
    }
    else {
        m_visibleSegmentLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_invisibleSegmentLength = Step::getUnset(m_invisibleSegmentLength);
    }
    else {
        m_invisibleSegmentLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcCurveStyleFontPattern::copy(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setVisibleSegmentLength(obj.m_visibleSegmentLength);
    setInvisibleSegmentLength(obj.m_invisibleSegmentLength);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyleFontPattern::s_type("IfcCurveStyleFontPattern");
