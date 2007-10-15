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

#include "ifc2x3/IfcSurfaceStyleShading.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourRgb.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSurfaceStyleShading::IfcSurfaceStyleShading(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_surfaceColour = NULL;
}

IfcSurfaceStyleShading::~IfcSurfaceStyleShading() {
}

bool IfcSurfaceStyleShading::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceStyleShading(this);
}

const std::string &IfcSurfaceStyleShading::type() {
    return IfcSurfaceStyleShading::s_type.getName();
}

Step::ClassType IfcSurfaceStyleShading::getClassType() {
    return IfcSurfaceStyleShading::s_type;
}

Step::ClassType IfcSurfaceStyleShading::getType() const {
    return IfcSurfaceStyleShading::s_type;
}

bool IfcSurfaceStyleShading::isOfType(Step::ClassType t) {
    return IfcSurfaceStyleShading::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() {
    if (Step::BaseObject::inited()) {
        return m_surfaceColour.get();
    }
    else {
        return NULL;
    }
}

void IfcSurfaceStyleShading::setSurfaceColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_surfaceColour = value;
}

void IfcSurfaceStyleShading::release() {
    m_surfaceColour.release();
}

bool IfcSurfaceStyleShading::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_surfaceColour = NULL;
    }
    else {
        m_surfaceColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSurfaceStyleShading::copy(const IfcSurfaceStyleShading &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSurfaceColour(copyop(obj.m_surfaceColour.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceStyleShading::s_type("IfcSurfaceStyleShading");
