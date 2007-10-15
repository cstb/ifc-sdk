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

#include "ifc2x3/IfcEdgeCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcEdge.h"
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

IfcEdgeCurve::IfcEdgeCurve(Step::Id id, Step::SPFData *args) : IfcEdge(id, args) {
    m_edgeGeometry = NULL;
    m_sameSense = Step::getUnset(m_sameSense);
}

IfcEdgeCurve::~IfcEdgeCurve() {
}

bool IfcEdgeCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEdgeCurve(this);
}

const std::string &IfcEdgeCurve::type() {
    return IfcEdgeCurve::s_type.getName();
}

Step::ClassType IfcEdgeCurve::getClassType() {
    return IfcEdgeCurve::s_type;
}

Step::ClassType IfcEdgeCurve::getType() const {
    return IfcEdgeCurve::s_type;
}

bool IfcEdgeCurve::isOfType(Step::ClassType t) {
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

void IfcEdgeCurve::setEdgeGeometry(const Step::RefPtr< IfcCurve > &value) {
    m_edgeGeometry = value;
}

Step::Bool IfcEdgeCurve::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

void IfcEdgeCurve::setSameSense(Step::Bool value) {
    m_sameSense = value;
}

void IfcEdgeCurve::release() {
    IfcEdge::release();
    m_edgeGeometry.release();
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
        m_edgeGeometry = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBool(arg);
    }
    return true;
}

void IfcEdgeCurve::copy(const IfcEdgeCurve &obj, const CopyOp &copyop) {
    IfcEdge::copy(obj, copyop);
    setEdgeGeometry(copyop(obj.m_edgeGeometry.get()));
    setSameSense(obj.m_sameSense);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeCurve::s_type("IfcEdgeCurve");
