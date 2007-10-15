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

#include "ifc2x3/IfcBoundedSurface.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBoundedSurface::IfcBoundedSurface(Step::Id id, Step::SPFData *args) : IfcSurface(id, args) {
}

IfcBoundedSurface::~IfcBoundedSurface() {
}

bool IfcBoundedSurface::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBoundedSurface(this);
}

const std::string &IfcBoundedSurface::type() {
    return IfcBoundedSurface::s_type.getName();
}

Step::ClassType IfcBoundedSurface::getClassType() {
    return IfcBoundedSurface::s_type;
}

Step::ClassType IfcBoundedSurface::getType() const {
    return IfcBoundedSurface::s_type;
}

bool IfcBoundedSurface::isOfType(Step::ClassType t) {
    return IfcBoundedSurface::s_type == t ? true : IfcSurface::isOfType(t);
}

void IfcBoundedSurface::release() {
    IfcSurface::release();
}

bool IfcBoundedSurface::init() {
    bool status = IfcSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBoundedSurface::copy(const IfcBoundedSurface &obj, const CopyOp &copyop) {
    IfcSurface::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundedSurface::s_type("IfcBoundedSurface");
