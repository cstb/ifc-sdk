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

#include "ifc2x3/IfcAnnotationCurveOccurrence.h"

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

IfcAnnotationCurveOccurrence::IfcAnnotationCurveOccurrence(Step::Id id, Step::SPFData *args) : IfcAnnotationOccurrence(id, args) {
}

IfcAnnotationCurveOccurrence::~IfcAnnotationCurveOccurrence() {
}

bool IfcAnnotationCurveOccurrence::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAnnotationCurveOccurrence(this);
}

const std::string &IfcAnnotationCurveOccurrence::type() {
    return IfcAnnotationCurveOccurrence::s_type.getName();
}

Step::ClassType IfcAnnotationCurveOccurrence::getClassType() {
    return IfcAnnotationCurveOccurrence::s_type;
}

Step::ClassType IfcAnnotationCurveOccurrence::getType() const {
    return IfcAnnotationCurveOccurrence::s_type;
}

bool IfcAnnotationCurveOccurrence::isOfType(Step::ClassType t) {
    return IfcAnnotationCurveOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

void IfcAnnotationCurveOccurrence::release() {
    IfcAnnotationOccurrence::release();
}

bool IfcAnnotationCurveOccurrence::init() {
    bool status = IfcAnnotationOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationCurveOccurrence::copy(const IfcAnnotationCurveOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationCurveOccurrence::s_type("IfcAnnotationCurveOccurrence");
