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

#include "ifc2x3/IfcPolygonalBoundedHalfSpace.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
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

IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace(Step::Id id, Step::SPFData *args) : IfcHalfSpaceSolid(id, args) {
    m_position = NULL;
    m_polygonalBoundary = NULL;
}

IfcPolygonalBoundedHalfSpace::~IfcPolygonalBoundedHalfSpace() {
}

bool IfcPolygonalBoundedHalfSpace::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPolygonalBoundedHalfSpace(this);
}

const std::string &IfcPolygonalBoundedHalfSpace::type() {
    return IfcPolygonalBoundedHalfSpace::s_type.getName();
}

Step::ClassType IfcPolygonalBoundedHalfSpace::getClassType() {
    return IfcPolygonalBoundedHalfSpace::s_type;
}

Step::ClassType IfcPolygonalBoundedHalfSpace::getType() const {
    return IfcPolygonalBoundedHalfSpace::s_type;
}

bool IfcPolygonalBoundedHalfSpace::isOfType(Step::ClassType t) {
    return IfcPolygonalBoundedHalfSpace::s_type == t ? true : IfcHalfSpaceSolid::isOfType(t);
}

IfcAxis2Placement3D *IfcPolygonalBoundedHalfSpace::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcPolygonalBoundedHalfSpace::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

IfcBoundedCurve *IfcPolygonalBoundedHalfSpace::getPolygonalBoundary() {
    if (Step::BaseObject::inited()) {
        return m_polygonalBoundary.get();
    }
    else {
        return NULL;
    }
}

void IfcPolygonalBoundedHalfSpace::setPolygonalBoundary(const Step::RefPtr< IfcBoundedCurve > &value) {
    m_polygonalBoundary = value;
}

void IfcPolygonalBoundedHalfSpace::release() {
    IfcHalfSpaceSolid::release();
    m_position.release();
    m_polygonalBoundary.release();
}

bool IfcPolygonalBoundedHalfSpace::init() {
    bool status = IfcHalfSpaceSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_polygonalBoundary = NULL;
    }
    else {
        m_polygonalBoundary = static_cast< IfcBoundedCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcPolygonalBoundedHalfSpace::copy(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop) {
    IfcHalfSpaceSolid::copy(obj, copyop);
    setPosition(copyop(obj.m_position.get()));
    setPolygonalBoundary(copyop(obj.m_polygonalBoundary.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolygonalBoundedHalfSpace::s_type("IfcPolygonalBoundedHalfSpace");
