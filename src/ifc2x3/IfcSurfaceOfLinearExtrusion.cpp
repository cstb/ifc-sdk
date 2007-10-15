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

#include "ifc2x3/IfcSurfaceOfLinearExtrusion.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcSweptSurface.h"
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

IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion(Step::Id id, Step::SPFData *args) : IfcSweptSurface(id, args) {
    m_extrudedDirection = NULL;
    m_depth = Step::getUnset(m_depth);
}

IfcSurfaceOfLinearExtrusion::~IfcSurfaceOfLinearExtrusion() {
}

bool IfcSurfaceOfLinearExtrusion::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceOfLinearExtrusion(this);
}

const std::string &IfcSurfaceOfLinearExtrusion::type() {
    return IfcSurfaceOfLinearExtrusion::s_type.getName();
}

Step::ClassType IfcSurfaceOfLinearExtrusion::getClassType() {
    return IfcSurfaceOfLinearExtrusion::s_type;
}

Step::ClassType IfcSurfaceOfLinearExtrusion::getType() const {
    return IfcSurfaceOfLinearExtrusion::s_type;
}

bool IfcSurfaceOfLinearExtrusion::isOfType(Step::ClassType t) {
    return IfcSurfaceOfLinearExtrusion::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcDirection *IfcSurfaceOfLinearExtrusion::getExtrudedDirection() {
    if (Step::BaseObject::inited()) {
        return m_extrudedDirection.get();
    }
    else {
        return NULL;
    }
}

void IfcSurfaceOfLinearExtrusion::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value) {
    m_extrudedDirection = value;
}

IfcLengthMeasure IfcSurfaceOfLinearExtrusion::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

void IfcSurfaceOfLinearExtrusion::setDepth(IfcLengthMeasure value) {
    m_depth = value;
}

void IfcSurfaceOfLinearExtrusion::release() {
    IfcSweptSurface::release();
    m_extrudedDirection.release();
}

bool IfcSurfaceOfLinearExtrusion::init() {
    bool status = IfcSweptSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_extrudedDirection = NULL;
    }
    else {
        m_extrudedDirection = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    return true;
}

void IfcSurfaceOfLinearExtrusion::copy(const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop) {
    IfcSweptSurface::copy(obj, copyop);
    setExtrudedDirection(copyop(obj.m_extrudedDirection.get()));
    setDepth(obj.m_depth);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOfLinearExtrusion::s_type("IfcSurfaceOfLinearExtrusion");
