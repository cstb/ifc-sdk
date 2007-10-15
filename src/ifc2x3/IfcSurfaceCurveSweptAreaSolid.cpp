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

#include "ifc2x3/IfcSurfaceCurveSweptAreaSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/IfcSweptAreaSolid.h"
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

IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid(Step::Id id, Step::SPFData *args) : IfcSweptAreaSolid(id, args) {
    m_directrix = NULL;
    m_startParam = Step::getUnset(m_startParam);
    m_endParam = Step::getUnset(m_endParam);
    m_referenceSurface = NULL;
}

IfcSurfaceCurveSweptAreaSolid::~IfcSurfaceCurveSweptAreaSolid() {
}

bool IfcSurfaceCurveSweptAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceCurveSweptAreaSolid(this);
}

const std::string &IfcSurfaceCurveSweptAreaSolid::type() {
    return IfcSurfaceCurveSweptAreaSolid::s_type.getName();
}

Step::ClassType IfcSurfaceCurveSweptAreaSolid::getClassType() {
    return IfcSurfaceCurveSweptAreaSolid::s_type;
}

Step::ClassType IfcSurfaceCurveSweptAreaSolid::getType() const {
    return IfcSurfaceCurveSweptAreaSolid::s_type;
}

bool IfcSurfaceCurveSweptAreaSolid::isOfType(Step::ClassType t) {
    return IfcSurfaceCurveSweptAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcCurve *IfcSurfaceCurveSweptAreaSolid::getDirectrix() {
    if (Step::BaseObject::inited()) {
        return m_directrix.get();
    }
    else {
        return NULL;
    }
}

void IfcSurfaceCurveSweptAreaSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value) {
    m_directrix = value;
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getStartParam() {
    if (Step::BaseObject::inited()) {
        return m_startParam;
    }
    else {
        return Step::getUnset(m_startParam);
    }
}

void IfcSurfaceCurveSweptAreaSolid::setStartParam(IfcParameterValue value) {
    m_startParam = value;
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getEndParam() {
    if (Step::BaseObject::inited()) {
        return m_endParam;
    }
    else {
        return Step::getUnset(m_endParam);
    }
}

void IfcSurfaceCurveSweptAreaSolid::setEndParam(IfcParameterValue value) {
    m_endParam = value;
}

IfcSurface *IfcSurfaceCurveSweptAreaSolid::getReferenceSurface() {
    if (Step::BaseObject::inited()) {
        return m_referenceSurface.get();
    }
    else {
        return NULL;
    }
}

void IfcSurfaceCurveSweptAreaSolid::setReferenceSurface(const Step::RefPtr< IfcSurface > &value) {
    m_referenceSurface = value;
}

void IfcSurfaceCurveSweptAreaSolid::release() {
    IfcSweptAreaSolid::release();
    m_directrix.release();
    m_referenceSurface.release();
}

bool IfcSurfaceCurveSweptAreaSolid::init() {
    bool status = IfcSweptAreaSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_directrix = NULL;
    }
    else {
        m_directrix = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startParam = Step::getUnset(m_startParam);
    }
    else {
        m_startParam = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_endParam = Step::getUnset(m_endParam);
    }
    else {
        m_endParam = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referenceSurface = NULL;
    }
    else {
        m_referenceSurface = static_cast< IfcSurface * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSurfaceCurveSweptAreaSolid::copy(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop) {
    IfcSweptAreaSolid::copy(obj, copyop);
    setDirectrix(copyop(obj.m_directrix.get()));
    setStartParam(obj.m_startParam);
    setEndParam(obj.m_endParam);
    setReferenceSurface(copyop(obj.m_referenceSurface.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceCurveSweptAreaSolid::s_type("IfcSurfaceCurveSweptAreaSolid");
