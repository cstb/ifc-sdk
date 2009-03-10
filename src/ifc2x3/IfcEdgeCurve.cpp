/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcEdgeCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcEdge.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcEdgeCurve::IfcEdgeCurve(Step::Id id, Step::SPFData *args) : IfcEdge(id, args) {
    m_edgeGeometry = NULL;
    m_sameSense = Step::getUnset(m_sameSense);
}

IfcEdgeCurve::~IfcEdgeCurve() {
}

bool IfcEdgeCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEdgeCurve(this);
}

const std::string &IfcEdgeCurve::type() const {
    return IfcEdgeCurve::s_type.getName();
}

const Step::ClassType &IfcEdgeCurve::getClassType() {
    return IfcEdgeCurve::s_type;
}

const Step::ClassType &IfcEdgeCurve::getType() const {
    return IfcEdgeCurve::s_type;
}

bool IfcEdgeCurve::isOfType(const Step::ClassType &t) const {
    return IfcEdgeCurve::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcCurve *IfcEdgeCurve::getEdgeGeometry() {
    if (Step::BaseObject::inited()) {
        return m_edgeGeometry.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcEdgeCurve::getEdgeGeometry() const {
    IfcEdgeCurve * deConstObject = const_cast< IfcEdgeCurve * > (this);
    return deConstObject->getEdgeGeometry();
}

void IfcEdgeCurve::setEdgeGeometry(const Step::RefPtr< IfcCurve > &value) {
    m_edgeGeometry = value;
}

Step::Boolean IfcEdgeCurve::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

const Step::Boolean IfcEdgeCurve::getSameSense() const {
    IfcEdgeCurve * deConstObject = const_cast< IfcEdgeCurve * > (this);
    return deConstObject->getSameSense();
}

void IfcEdgeCurve::setSameSense(Step::Boolean value) {
    m_sameSense = value;
}

bool IfcEdgeCurve::init() {
    bool status = IfcEdge::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeGeometry = NULL;
    }
    else {
        m_edgeGeometry = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcEdgeCurve::copy(const IfcEdgeCurve &obj, const CopyOp &copyop) {
    IfcEdge::copy(obj, copyop);
    setEdgeGeometry((IfcCurve*)copyop(obj.m_edgeGeometry.get()));
    setSameSense(obj.m_sameSense);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeCurve::s_type("IfcEdgeCurve");
