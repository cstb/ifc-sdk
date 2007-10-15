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

#include "ifc2x3/IfcAnnotationTextOccurrence.h"

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

IfcAnnotationTextOccurrence::IfcAnnotationTextOccurrence(Step::Id id, Step::SPFData *args) : IfcAnnotationOccurrence(id, args) {
}

IfcAnnotationTextOccurrence::~IfcAnnotationTextOccurrence() {
}

bool IfcAnnotationTextOccurrence::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAnnotationTextOccurrence(this);
}

const std::string &IfcAnnotationTextOccurrence::type() {
    return IfcAnnotationTextOccurrence::s_type.getName();
}

Step::ClassType IfcAnnotationTextOccurrence::getClassType() {
    return IfcAnnotationTextOccurrence::s_type;
}

Step::ClassType IfcAnnotationTextOccurrence::getType() const {
    return IfcAnnotationTextOccurrence::s_type;
}

bool IfcAnnotationTextOccurrence::isOfType(Step::ClassType t) {
    return IfcAnnotationTextOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

void IfcAnnotationTextOccurrence::release() {
    IfcAnnotationOccurrence::release();
}

bool IfcAnnotationTextOccurrence::init() {
    bool status = IfcAnnotationOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationTextOccurrence::copy(const IfcAnnotationTextOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationTextOccurrence::s_type("IfcAnnotationTextOccurrence");
