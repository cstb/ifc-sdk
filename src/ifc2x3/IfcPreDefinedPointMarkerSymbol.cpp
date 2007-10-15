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

#include "ifc2x3/IfcPreDefinedPointMarkerSymbol.h"

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

IfcPreDefinedPointMarkerSymbol::IfcPreDefinedPointMarkerSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedSymbol(id, args) {
}

IfcPreDefinedPointMarkerSymbol::~IfcPreDefinedPointMarkerSymbol() {
}

bool IfcPreDefinedPointMarkerSymbol::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPreDefinedPointMarkerSymbol(this);
}

const std::string &IfcPreDefinedPointMarkerSymbol::type() {
    return IfcPreDefinedPointMarkerSymbol::s_type.getName();
}

Step::ClassType IfcPreDefinedPointMarkerSymbol::getClassType() {
    return IfcPreDefinedPointMarkerSymbol::s_type;
}

Step::ClassType IfcPreDefinedPointMarkerSymbol::getType() const {
    return IfcPreDefinedPointMarkerSymbol::s_type;
}

bool IfcPreDefinedPointMarkerSymbol::isOfType(Step::ClassType t) {
    return IfcPreDefinedPointMarkerSymbol::s_type == t ? true : IfcPreDefinedSymbol::isOfType(t);
}

void IfcPreDefinedPointMarkerSymbol::release() {
    IfcPreDefinedSymbol::release();
}

bool IfcPreDefinedPointMarkerSymbol::init() {
    bool status = IfcPreDefinedSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedPointMarkerSymbol::copy(const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedSymbol::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPreDefinedPointMarkerSymbol::s_type("IfcPreDefinedPointMarkerSymbol");
