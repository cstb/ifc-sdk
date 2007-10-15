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

#include "ifc2x3/IfcLoop.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcLoop::IfcLoop(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcLoop::~IfcLoop() {
}

bool IfcLoop::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLoop(this);
}

const std::string &IfcLoop::type() {
    return IfcLoop::s_type.getName();
}

Step::ClassType IfcLoop::getClassType() {
    return IfcLoop::s_type;
}

Step::ClassType IfcLoop::getType() const {
    return IfcLoop::s_type;
}

bool IfcLoop::isOfType(Step::ClassType t) {
    return IfcLoop::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

void IfcLoop::release() {
    IfcTopologicalRepresentationItem::release();
}

bool IfcLoop::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcLoop::copy(const IfcLoop &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLoop::s_type("IfcLoop");
