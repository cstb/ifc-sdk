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

#include "ifc2x3/IfcPreDefinedTextFont.h"

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

IfcPreDefinedTextFont::IfcPreDefinedTextFont(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedTextFont::~IfcPreDefinedTextFont() {
}

bool IfcPreDefinedTextFont::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPreDefinedTextFont(this);
}

const std::string &IfcPreDefinedTextFont::type() {
    return IfcPreDefinedTextFont::s_type.getName();
}

Step::ClassType IfcPreDefinedTextFont::getClassType() {
    return IfcPreDefinedTextFont::s_type;
}

Step::ClassType IfcPreDefinedTextFont::getType() const {
    return IfcPreDefinedTextFont::s_type;
}

bool IfcPreDefinedTextFont::isOfType(Step::ClassType t) {
    return IfcPreDefinedTextFont::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

void IfcPreDefinedTextFont::release() {
    IfcPreDefinedItem::release();
}

bool IfcPreDefinedTextFont::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedTextFont::copy(const IfcPreDefinedTextFont &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedTextFont::s_type("IfcPreDefinedTextFont");
