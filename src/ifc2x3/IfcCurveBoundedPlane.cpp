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

#include "ifc2x3/IfcCurveBoundedPlane.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedSurface.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcPlane.h"
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

IfcCurveBoundedPlane::IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args) : IfcBoundedSurface(id, args) {
    m_basisSurface = NULL;
    m_outerBoundary = NULL;
    m_innerBoundaries.setUnset(true);
}

IfcCurveBoundedPlane::~IfcCurveBoundedPlane() {
}

bool IfcCurveBoundedPlane::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurveBoundedPlane(this);
}

const std::string &IfcCurveBoundedPlane::type() {
    return IfcCurveBoundedPlane::s_type.getName();
}

Step::ClassType IfcCurveBoundedPlane::getClassType() {
    return IfcCurveBoundedPlane::s_type;
}

Step::ClassType IfcCurveBoundedPlane::getType() const {
    return IfcCurveBoundedPlane::s_type;
}

bool IfcCurveBoundedPlane::isOfType(Step::ClassType t) {
    return IfcCurveBoundedPlane::s_type == t ? true : IfcBoundedSurface::isOfType(t);
}

IfcPlane *IfcCurveBoundedPlane::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

void IfcCurveBoundedPlane::setBasisSurface(const Step::RefPtr< IfcPlane > &value) {
    m_basisSurface = value;
}

IfcCurve *IfcCurveBoundedPlane::getOuterBoundary() {
    if (Step::BaseObject::inited()) {
        return m_outerBoundary.get();
    }
    else {
        return NULL;
    }
}

void IfcCurveBoundedPlane::setOuterBoundary(const Step::RefPtr< IfcCurve > &value) {
    m_outerBoundary = value;
}

Step::Set< Step::RefPtr< IfcCurve > > &IfcCurveBoundedPlane::getInnerBoundaries() {
    if (Step::BaseObject::inited()) {
        return m_innerBoundaries;
    }
    else {
        m_innerBoundaries.setUnset(true);
        return m_innerBoundaries;
    }
}

void IfcCurveBoundedPlane::setInnerBoundaries(const Step::Set< Step::RefPtr< IfcCurve > > &value) {
    m_innerBoundaries = value;
}

void IfcCurveBoundedPlane::release() {
    IfcBoundedSurface::release();
    m_basisSurface.release();
    m_outerBoundary.release();
    m_innerBoundaries.clear();
}

bool IfcCurveBoundedPlane::init() {
    bool status = IfcBoundedSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisSurface = NULL;
    }
    else {
        m_basisSurface = static_cast< IfcPlane * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outerBoundary = NULL;
    }
    else {
        m_outerBoundary = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerBoundaries.setUnset(true);
    }
    else {
        m_innerBoundaries.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCurve > attr2;
                attr2 = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_innerBoundaries.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcCurveBoundedPlane::copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCurve > >::const_iterator it_m_innerBoundaries;
    IfcBoundedSurface::copy(obj, copyop);
    setBasisSurface(copyop(obj.m_basisSurface.get()));
    setOuterBoundary(copyop(obj.m_outerBoundary.get()));
    for (it_m_innerBoundaries = obj.m_innerBoundaries.begin(); it_m_innerBoundaries != obj.m_innerBoundaries.end(); ++it_m_innerBoundaries) {
        Step::RefPtr< IfcCurve > copyTarget = copyop((*it_m_innerBoundaries).get());
        m_innerBoundaries.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveBoundedPlane::s_type("IfcCurveBoundedPlane");
