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

#include "ifc2x3/IfcCurveOrEdgeCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcEdgeCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcCurveOrEdgeCurve::~IfcCurveOrEdgeCurve() {
    deleteUnion();
}

bool IfcCurveOrEdgeCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurveOrEdgeCurve(this);
}

bool IfcCurveOrEdgeCurve::init() {
    return false;
}

const std::string &IfcCurveOrEdgeCurve::type() {
    return IfcCurveOrEdgeCurve::s_type.getName();
}

Step::ClassType IfcCurveOrEdgeCurve::getClassType() {
    return IfcCurveOrEdgeCurve::s_type;
}

Step::ClassType IfcCurveOrEdgeCurve::getType() const {
    return IfcCurveOrEdgeCurve::s_type;
}

bool IfcCurveOrEdgeCurve::isOfType(Step::ClassType t) {
    return IfcCurveOrEdgeCurve::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcCurveOrEdgeCurve::copy(const IfcCurveOrEdgeCurve &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCBOUNDEDCURVE:
        setIfcBoundedCurve(copyop(obj.m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve));
        break;
    case IFCEDGECURVE:
        setIfcEdgeCurve(copyop(obj.m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve));
        break;
        }
}

char *IfcCurveOrEdgeCurve::currentTypeName() {
    switch(m_type) {
    case IFCBOUNDEDCURVE:
        return "IfcBoundedCurve";
        break;
    case IFCEDGECURVE:
        return "IfcEdgeCurve";
        break;
    default:
        return "UNSET";
    }
}

IfcCurveOrEdgeCurve::IfcCurveOrEdgeCurve_select IfcCurveOrEdgeCurve::currentType() {
    return m_type;
}

void IfcCurveOrEdgeCurve::deleteUnion() {
    switch(m_type) {
    case IFCBOUNDEDCURVE:
        m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve->unref();
        break;
    case IFCEDGECURVE:
        m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve->unref();
        break;
        }
    m_type = UNSET;
}

IfcBoundedCurve *IfcCurveOrEdgeCurve::getIfcBoundedCurve() {
    return m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve;
}

void IfcCurveOrEdgeCurve::setIfcBoundedCurve(IfcBoundedCurve *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCurveOrEdgeCurve_union.m_IfcBoundedCurve = value;
    if (value) {
        value->ref();
        m_type = IFCBOUNDEDCURVE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCBOUNDEDCURVE;
}

IfcEdgeCurve *IfcCurveOrEdgeCurve::getIfcEdgeCurve() {
    return m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve;
}

void IfcCurveOrEdgeCurve::setIfcEdgeCurve(IfcEdgeCurve *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcCurveOrEdgeCurve_union.m_IfcEdgeCurve = value;
    if (value) {
        value->ref();
        m_type = IFCEDGECURVE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEDGECURVE;
}

void IfcCurveOrEdgeCurve::set(Step::BaseObject *v) {
    if (v->isOfType(IfcBoundedCurve::getClassType())) {
        setIfcBoundedCurve(static_cast< IfcBoundedCurve* > (v));
    }
    else if (v->isOfType(IfcEdgeCurve::getClassType())) {
        setIfcEdgeCurve(static_cast< IfcEdgeCurve* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveOrEdgeCurve::s_type("IfcCurveOrEdgeCurve");
