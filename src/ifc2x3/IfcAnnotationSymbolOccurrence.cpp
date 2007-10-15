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

#include "ifc2x3/IfcAnnotationSymbolOccurrence.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAnnotationSymbolOccurrence::IfcAnnotationSymbolOccurrence(Step::Id id, Step::SPFData *args) : IfcAnnotationOccurrence(id, args) {
}

IfcAnnotationSymbolOccurrence::~IfcAnnotationSymbolOccurrence() {
}

bool IfcAnnotationSymbolOccurrence::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAnnotationSymbolOccurrence(this);
}

const std::string &IfcAnnotationSymbolOccurrence::type() {
    return IfcAnnotationSymbolOccurrence::s_type.getName();
}

Step::ClassType IfcAnnotationSymbolOccurrence::getClassType() {
    return IfcAnnotationSymbolOccurrence::s_type;
}

Step::ClassType IfcAnnotationSymbolOccurrence::getType() const {
    return IfcAnnotationSymbolOccurrence::s_type;
}

bool IfcAnnotationSymbolOccurrence::isOfType(Step::ClassType t) {
    return IfcAnnotationSymbolOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

void IfcAnnotationSymbolOccurrence::release() {
    IfcAnnotationOccurrence::release();
}

bool IfcAnnotationSymbolOccurrence::init() {
    bool status = IfcAnnotationOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationSymbolOccurrence::copy(const IfcAnnotationSymbolOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationSymbolOccurrence::s_type("IfcAnnotationSymbolOccurrence");
