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

#include "ifc2x3/IfcWallStandardCase.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcWall.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcWallStandardCase::IfcWallStandardCase(Step::Id id, Step::SPFData *args) : IfcWall(id, args) {
}

IfcWallStandardCase::~IfcWallStandardCase() {
}

bool IfcWallStandardCase::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWallStandardCase(this);
}

const std::string &IfcWallStandardCase::type() {
    return IfcWallStandardCase::s_type.getName();
}

Step::ClassType IfcWallStandardCase::getClassType() {
    return IfcWallStandardCase::s_type;
}

Step::ClassType IfcWallStandardCase::getType() const {
    return IfcWallStandardCase::s_type;
}

bool IfcWallStandardCase::isOfType(Step::ClassType t) {
    return IfcWallStandardCase::s_type == t ? true : IfcWall::isOfType(t);
}

void IfcWallStandardCase::release() {
    IfcWall::release();
}

bool IfcWallStandardCase::init() {
    bool status = IfcWall::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWallStandardCase::copy(const IfcWallStandardCase &obj, const CopyOp &copyop) {
    IfcWall::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcWallStandardCase::s_type("IfcWallStandardCase");
