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

#include "ifc2x3/IfcPreDefinedCurveFont.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPreDefinedCurveFont::IfcPreDefinedCurveFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedCurveFont::~IfcPreDefinedCurveFont() {
}

bool IfcPreDefinedCurveFont::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPreDefinedCurveFont(this);
}

const std::string &IfcPreDefinedCurveFont::type() {
    return IfcPreDefinedCurveFont::s_type.getName();
}

Step::ClassType IfcPreDefinedCurveFont::getClassType() {
    return IfcPreDefinedCurveFont::s_type;
}

Step::ClassType IfcPreDefinedCurveFont::getType() const {
    return IfcPreDefinedCurveFont::s_type;
}

bool IfcPreDefinedCurveFont::isOfType(Step::ClassType t) {
    return IfcPreDefinedCurveFont::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

void IfcPreDefinedCurveFont::release() {
    IfcPreDefinedItem::release();
}

bool IfcPreDefinedCurveFont::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedCurveFont::copy(const IfcPreDefinedCurveFont &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedCurveFont::s_type("IfcPreDefinedCurveFont");
