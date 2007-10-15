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

#include "ifc2x3/IfcPreDefinedTerminatorSymbol.h"

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

IfcPreDefinedTerminatorSymbol::IfcPreDefinedTerminatorSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedSymbol(id, args) {
}

IfcPreDefinedTerminatorSymbol::~IfcPreDefinedTerminatorSymbol() {
}

bool IfcPreDefinedTerminatorSymbol::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPreDefinedTerminatorSymbol(this);
}

const std::string &IfcPreDefinedTerminatorSymbol::type() {
    return IfcPreDefinedTerminatorSymbol::s_type.getName();
}

Step::ClassType IfcPreDefinedTerminatorSymbol::getClassType() {
    return IfcPreDefinedTerminatorSymbol::s_type;
}

Step::ClassType IfcPreDefinedTerminatorSymbol::getType() const {
    return IfcPreDefinedTerminatorSymbol::s_type;
}

bool IfcPreDefinedTerminatorSymbol::isOfType(Step::ClassType t) {
    return IfcPreDefinedTerminatorSymbol::s_type == t ? true : IfcPreDefinedSymbol::isOfType(t);
}

void IfcPreDefinedTerminatorSymbol::release() {
    IfcPreDefinedSymbol::release();
}

bool IfcPreDefinedTerminatorSymbol::init() {
    bool status = IfcPreDefinedSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedTerminatorSymbol::copy(const IfcPreDefinedTerminatorSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedSymbol::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedTerminatorSymbol::s_type("IfcPreDefinedTerminatorSymbol");
