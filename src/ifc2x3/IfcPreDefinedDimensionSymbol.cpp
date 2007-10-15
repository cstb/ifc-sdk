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

#include "ifc2x3/IfcPreDefinedDimensionSymbol.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedSymbol.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPreDefinedDimensionSymbol::IfcPreDefinedDimensionSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedSymbol(id, args) {
}

IfcPreDefinedDimensionSymbol::~IfcPreDefinedDimensionSymbol() {
}

bool IfcPreDefinedDimensionSymbol::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPreDefinedDimensionSymbol(this);
}

const std::string &IfcPreDefinedDimensionSymbol::type() {
    return IfcPreDefinedDimensionSymbol::s_type.getName();
}

Step::ClassType IfcPreDefinedDimensionSymbol::getClassType() {
    return IfcPreDefinedDimensionSymbol::s_type;
}

Step::ClassType IfcPreDefinedDimensionSymbol::getType() const {
    return IfcPreDefinedDimensionSymbol::s_type;
}

bool IfcPreDefinedDimensionSymbol::isOfType(Step::ClassType t) {
    return IfcPreDefinedDimensionSymbol::s_type == t ? true : IfcPreDefinedSymbol::isOfType(t);
}

void IfcPreDefinedDimensionSymbol::release() {
    IfcPreDefinedSymbol::release();
}

bool IfcPreDefinedDimensionSymbol::init() {
    bool status = IfcPreDefinedSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedDimensionSymbol::copy(const IfcPreDefinedDimensionSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedSymbol::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedDimensionSymbol::s_type("IfcPreDefinedDimensionSymbol");
