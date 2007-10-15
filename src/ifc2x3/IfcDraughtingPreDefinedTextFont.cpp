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

#include "ifc2x3/IfcDraughtingPreDefinedTextFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedTextFont.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDraughtingPreDefinedTextFont::IfcDraughtingPreDefinedTextFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedTextFont(id, args) {
}

IfcDraughtingPreDefinedTextFont::~IfcDraughtingPreDefinedTextFont() {
}

bool IfcDraughtingPreDefinedTextFont::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDraughtingPreDefinedTextFont(this);
}

const std::string &IfcDraughtingPreDefinedTextFont::type() {
    return IfcDraughtingPreDefinedTextFont::s_type.getName();
}

Step::ClassType IfcDraughtingPreDefinedTextFont::getClassType() {
    return IfcDraughtingPreDefinedTextFont::s_type;
}

Step::ClassType IfcDraughtingPreDefinedTextFont::getType() const {
    return IfcDraughtingPreDefinedTextFont::s_type;
}

bool IfcDraughtingPreDefinedTextFont::isOfType(Step::ClassType t) {
    return IfcDraughtingPreDefinedTextFont::s_type == t ? true : IfcPreDefinedTextFont::isOfType(t);
}

void IfcDraughtingPreDefinedTextFont::release() {
    IfcPreDefinedTextFont::release();
}

bool IfcDraughtingPreDefinedTextFont::init() {
    bool status = IfcPreDefinedTextFont::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDraughtingPreDefinedTextFont::copy(const IfcDraughtingPreDefinedTextFont &obj, const CopyOp &copyop) {
    IfcPreDefinedTextFont::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingPreDefinedTextFont::s_type("IfcDraughtingPreDefinedTextFont");
