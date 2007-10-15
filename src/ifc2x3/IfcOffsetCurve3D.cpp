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

#include "ifc2x3/IfcOffsetCurve3D.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcDirection.h"
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

IfcOffsetCurve3D::IfcOffsetCurve3D(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_basisCurve = NULL;
    m_distance = Step::getUnset(m_distance);
    m_selfIntersect = Step::getUnset(m_selfIntersect);
    m_refDirection = NULL;
}

IfcOffsetCurve3D::~IfcOffsetCurve3D() {
}

bool IfcOffsetCurve3D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOffsetCurve3D(this);
}

const std::string &IfcOffsetCurve3D::type() {
    return IfcOffsetCurve3D::s_type.getName();
}

Step::ClassType IfcOffsetCurve3D::getClassType() {
    return IfcOffsetCurve3D::s_type;
}

Step::ClassType IfcOffsetCurve3D::getType() const {
    return IfcOffsetCurve3D::s_type;
}

bool IfcOffsetCurve3D::isOfType(Step::ClassType t) {
    return IfcOffsetCurve3D::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcCurve *IfcOffsetCurve3D::getBasisCurve() {
    if (Step::BaseObject::inited()) {
        return m_basisCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcOffsetCurve3D::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_basisCurve = value;
}

IfcLengthMeasure IfcOffsetCurve3D::getDistance() {
    if (Step::BaseObject::inited()) {
        return m_distance;
    }
    else {
        return Step::getUnset(m_distance);
    }
}

void IfcOffsetCurve3D::setDistance(IfcLengthMeasure value) {
    m_distance = value;
}

Step::Logical IfcOffsetCurve3D::getSelfIntersect() {
    if (Step::BaseObject::inited()) {
        return m_selfIntersect;
    }
    else {
        return Step::getUnset(m_selfIntersect);
    }
}

void IfcOffsetCurve3D::setSelfIntersect(Step::Logical value) {
    m_selfIntersect = value;
}

IfcDirection *IfcOffsetCurve3D::getRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_refDirection.get();
    }
    else {
        return NULL;
    }
}

void IfcOffsetCurve3D::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
    m_refDirection = value;
}

void IfcOffsetCurve3D::release() {
    IfcCurve::release();
    m_basisCurve.release();
    m_refDirection.release();
}

bool IfcOffsetCurve3D::init() {
    bool status = IfcCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisCurve = NULL;
    }
    else {
        m_basisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distance = Step::getUnset(m_distance);
    }
    else {
        m_distance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_selfIntersect = Step::getUnset(m_selfIntersect);
    }
    else {
        m_selfIntersect = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refDirection = NULL;
    }
    else {
        m_refDirection = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcOffsetCurve3D::copy(const IfcOffsetCurve3D &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    setBasisCurve(copyop(obj.m_basisCurve.get()));
    setDistance(obj.m_distance);
    setSelfIntersect(obj.m_selfIntersect);
    setRefDirection(copyop(obj.m_refDirection.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOffsetCurve3D::s_type("IfcOffsetCurve3D");
