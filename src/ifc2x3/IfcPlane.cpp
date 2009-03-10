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

bool IfcPlane::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlane(this);
}

const std::string &IfcPlane::type() const {
    return IfcPlane::s_type.getName();
}

const Step::ClassType &IfcPlane::getClassType() {
    return IfcPlane::s_type;
}

const Step::ClassType &IfcPlane::getType() const {
    return IfcPlane::s_type;
}

bool IfcPlane::isOfType(const Step::ClassType &t) const {
    return IfcPlane::s_type == t ? true : IfcElementarySurface::isOfType(t);
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
