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

#include "ifc2x3/IfcPointOnSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/IfcSurface.h"
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

IfcPointOnSurface::IfcPointOnSurface(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
    m_basisSurface = NULL;
    m_pointParameterU = Step::getUnset(m_pointParameterU);
    m_pointParameterV = Step::getUnset(m_pointParameterV);
}

IfcPointOnSurface::~IfcPointOnSurface() {
}

bool IfcPointOnSurface::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPointOnSurface(this);
}

const std::string &IfcPointOnSurface::type() {
    return IfcPointOnSurface::s_type.getName();
}

Step::ClassType IfcPointOnSurface::getClassType() {
    return IfcPointOnSurface::s_type;
}

Step::ClassType IfcPointOnSurface::getType() const {
    return IfcPointOnSurface::s_type;
}

bool IfcPointOnSurface::isOfType(Step::ClassType t) {
    return IfcPointOnSurface::s_type == t ? true : IfcPoint::isOfType(t);
}

IfcSurface *IfcPointOnSurface::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

void IfcPointOnSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
    m_basisSurface = value;
}

IfcParameterValue IfcPointOnSurface::getPointParameterU() {
    if (Step::BaseObject::inited()) {
        return m_pointParameterU;
    }
    else {
        return Step::getUnset(m_pointParameterU);
    }
}

void IfcPointOnSurface::setPointParameterU(IfcParameterValue value) {
    m_pointParameterU = value;
}

IfcParameterValue IfcPointOnSurface::getPointParameterV() {
    if (Step::BaseObject::inited()) {
        return m_pointParameterV;
    }
    else {
        return Step::getUnset(m_pointParameterV);
    }
}

void IfcPointOnSurface::setPointParameterV(IfcParameterValue value) {
    m_pointParameterV = value;
}

void IfcPointOnSurface::release() {
    IfcPoint::release();
    m_basisSurface.release();
}

bool IfcPointOnSurface::init() {
    bool status = IfcPoint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisSurface = NULL;
    }
    else {
        m_basisSurface = static_cast< IfcSurface * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameterU = Step::getUnset(m_pointParameterU);
    }
    else {
        m_pointParameterU = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameterV = Step::getUnset(m_pointParameterV);
    }
    else {
        m_pointParameterV = Step::spfToReal(arg);
    }
    return true;
}

void IfcPointOnSurface::copy(const IfcPointOnSurface &obj, const CopyOp &copyop) {
    IfcPoint::copy(obj, copyop);
    setBasisSurface(copyop(obj.m_basisSurface.get()));
    setPointParameterU(obj.m_pointParameterU);
    setPointParameterV(obj.m_pointParameterV);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOnSurface::s_type("IfcPointOnSurface");
