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

#include "ifc2x3/IfcPreDefinedSymbol.h"

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

IfcPreDefinedSymbol::IfcPreDefinedSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedItem(id, args) {
}

IfcPreDefinedSymbol::~IfcPreDefinedSymbol() {
}

bool IfcPreDefinedSymbol::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPreDefinedSymbol(this);
}

const std::string &IfcPreDefinedSymbol::type() {
    return IfcPreDefinedSymbol::s_type.getName();
}

Step::ClassType IfcPreDefinedSymbol::getClassType() {
    return IfcPreDefinedSymbol::s_type;
}

Step::ClassType IfcPreDefinedSymbol::getType() const {
    return IfcPreDefinedSymbol::s_type;
}

bool IfcPreDefinedSymbol::isOfType(Step::ClassType t) {
    return IfcPreDefinedSymbol::s_type == t ? true : IfcPreDefinedItem::isOfType(t);
}

void IfcPreDefinedSymbol::release() {
    IfcPreDefinedItem::release();
}

bool IfcPreDefinedSymbol::init() {
    bool status = IfcPreDefinedItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedSymbol::copy(const IfcPreDefinedSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedSymbol::s_type("IfcPreDefinedSymbol");
