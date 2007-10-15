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

#include "ifc2x3/IfcDraughtingPreDefinedColour.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedColour.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDraughtingPreDefinedColour::IfcDraughtingPreDefinedColour(Step::Id id, Step::SPFData *args) : IfcPreDefinedColour(id, args) {
}

IfcDraughtingPreDefinedColour::~IfcDraughtingPreDefinedColour() {
}

bool IfcDraughtingPreDefinedColour::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDraughtingPreDefinedColour(this);
}

const std::string &IfcDraughtingPreDefinedColour::type() {
    return IfcDraughtingPreDefinedColour::s_type.getName();
}

Step::ClassType IfcDraughtingPreDefinedColour::getClassType() {
    return IfcDraughtingPreDefinedColour::s_type;
}

Step::ClassType IfcDraughtingPreDefinedColour::getType() const {
    return IfcDraughtingPreDefinedColour::s_type;
}

bool IfcDraughtingPreDefinedColour::isOfType(Step::ClassType t) {
    return IfcDraughtingPreDefinedColour::s_type == t ? true : IfcPreDefinedColour::isOfType(t);
}

void IfcDraughtingPreDefinedColour::release() {
    IfcPreDefinedColour::release();
}

bool IfcDraughtingPreDefinedColour::init() {
    bool status = IfcPreDefinedColour::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDraughtingPreDefinedColour::copy(const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop) {
    IfcPreDefinedColour::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingPreDefinedColour::s_type("IfcDraughtingPreDefinedColour");
