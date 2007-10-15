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

#include "ifc2x3/IfcVertex.h"

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

IfcVertex::IfcVertex(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcVertex::~IfcVertex() {
}

bool IfcVertex::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcVertex(this);
}

const std::string &IfcVertex::type() {
    return IfcVertex::s_type.getName();
}

Step::ClassType IfcVertex::getClassType() {
    return IfcVertex::s_type;
}

Step::ClassType IfcVertex::getType() const {
    return IfcVertex::s_type;
}

bool IfcVertex::isOfType(Step::ClassType t) {
    return IfcVertex::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

void IfcVertex::release() {
    IfcTopologicalRepresentationItem::release();
}

bool IfcVertex::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcVertex::copy(const IfcVertex &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertex::s_type("IfcVertex");
