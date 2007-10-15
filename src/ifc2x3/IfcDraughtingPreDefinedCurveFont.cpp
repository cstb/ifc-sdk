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

#include "ifc2x3/IfcDraughtingPreDefinedCurveFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedCurveFont.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDraughtingPreDefinedCurveFont::IfcDraughtingPreDefinedCurveFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedCurveFont(id, args) {
}

IfcDraughtingPreDefinedCurveFont::~IfcDraughtingPreDefinedCurveFont() {
}

bool IfcDraughtingPreDefinedCurveFont::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDraughtingPreDefinedCurveFont(this);
}

const std::string &IfcDraughtingPreDefinedCurveFont::type() {
    return IfcDraughtingPreDefinedCurveFont::s_type.getName();
}

Step::ClassType IfcDraughtingPreDefinedCurveFont::getClassType() {
    return IfcDraughtingPreDefinedCurveFont::s_type;
}

Step::ClassType IfcDraughtingPreDefinedCurveFont::getType() const {
    return IfcDraughtingPreDefinedCurveFont::s_type;
}

bool IfcDraughtingPreDefinedCurveFont::isOfType(Step::ClassType t) {
    return IfcDraughtingPreDefinedCurveFont::s_type == t ? true : IfcPreDefinedCurveFont::isOfType(t);
}

void IfcDraughtingPreDefinedCurveFont::release() {
    IfcPreDefinedCurveFont::release();
}

bool IfcDraughtingPreDefinedCurveFont::init() {
    bool status = IfcPreDefinedCurveFont::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDraughtingPreDefinedCurveFont::copy(const IfcDraughtingPreDefinedCurveFont &obj, const CopyOp &copyop) {
    IfcPreDefinedCurveFont::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingPreDefinedCurveFont::s_type("IfcDraughtingPreDefinedCurveFont");
