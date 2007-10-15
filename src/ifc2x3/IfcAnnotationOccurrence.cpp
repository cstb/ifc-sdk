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

#include "ifc2x3/IfcAnnotationOccurrence.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStyledItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAnnotationOccurrence::IfcAnnotationOccurrence(Step::Id id, Step::SPFData *args) : IfcStyledItem(id, args) {
}

IfcAnnotationOccurrence::~IfcAnnotationOccurrence() {
}

bool IfcAnnotationOccurrence::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAnnotationOccurrence(this);
}

const std::string &IfcAnnotationOccurrence::type() {
    return IfcAnnotationOccurrence::s_type.getName();
}

Step::ClassType IfcAnnotationOccurrence::getClassType() {
    return IfcAnnotationOccurrence::s_type;
}

Step::ClassType IfcAnnotationOccurrence::getType() const {
    return IfcAnnotationOccurrence::s_type;
}

bool IfcAnnotationOccurrence::isOfType(Step::ClassType t) {
    return IfcAnnotationOccurrence::s_type == t ? true : IfcStyledItem::isOfType(t);
}

void IfcAnnotationOccurrence::release() {
    IfcStyledItem::release();
}

bool IfcAnnotationOccurrence::init() {
    bool status = IfcStyledItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationOccurrence::copy(const IfcAnnotationOccurrence &obj, const CopyOp &copyop) {
    IfcStyledItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationOccurrence::s_type("IfcAnnotationOccurrence");
