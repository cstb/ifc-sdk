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

#include "ifc2x3/IfcReferencePlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObjectPlacement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReferencePlacement::IfcReferencePlacement(Step::Id id, Step::SPFData *args) : IfcObjectPlacement(id, args) {
}

IfcReferencePlacement::~IfcReferencePlacement() {
}

bool IfcReferencePlacement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferencePlacement(this);
}

const std::string &IfcReferencePlacement::type() {
    return IfcReferencePlacement::s_type.getName();
}

Step::ClassType IfcReferencePlacement::getClassType() {
    return IfcReferencePlacement::s_type;
}

Step::ClassType IfcReferencePlacement::getType() const {
    return IfcReferencePlacement::s_type;
}

bool IfcReferencePlacement::isOfType(Step::ClassType t) {
    return IfcReferencePlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

void IfcReferencePlacement::release() {
    IfcObjectPlacement::release();
}

bool IfcReferencePlacement::init() {
    bool status = IfcObjectPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcReferencePlacement::copy(const IfcReferencePlacement &obj, const CopyOp &copyop) {
    IfcObjectPlacement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferencePlacement::s_type("IfcReferencePlacement");
