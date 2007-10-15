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

#include "ifc2x3/IfcPlane.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementarySurface.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPlane::IfcPlane(Step::Id id, Step::SPFData *args) : IfcElementarySurface(id, args) {
}

IfcPlane::~IfcPlane() {
}

bool IfcPlane::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPlane(this);
}

const std::string &IfcPlane::type() {
    return IfcPlane::s_type.getName();
}

Step::ClassType IfcPlane::getClassType() {
    return IfcPlane::s_type;
}

Step::ClassType IfcPlane::getType() const {
    return IfcPlane::s_type;
}

bool IfcPlane::isOfType(Step::ClassType t) {
    return IfcPlane::s_type == t ? true : IfcElementarySurface::isOfType(t);
}

void IfcPlane::release() {
    IfcElementarySurface::release();
}

bool IfcPlane::init() {
    bool status = IfcElementarySurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPlane::copy(const IfcPlane &obj, const CopyOp &copyop) {
    IfcElementarySurface::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlane::s_type("IfcPlane");
