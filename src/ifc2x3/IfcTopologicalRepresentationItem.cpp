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

#include "ifc2x3/IfcTopologicalRepresentationItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTopologicalRepresentationItem::IfcTopologicalRepresentationItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
}

IfcTopologicalRepresentationItem::~IfcTopologicalRepresentationItem() {
}

bool IfcTopologicalRepresentationItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTopologicalRepresentationItem(this);
}

const std::string &IfcTopologicalRepresentationItem::type() {
    return IfcTopologicalRepresentationItem::s_type.getName();
}

Step::ClassType IfcTopologicalRepresentationItem::getClassType() {
    return IfcTopologicalRepresentationItem::s_type;
}

Step::ClassType IfcTopologicalRepresentationItem::getType() const {
    return IfcTopologicalRepresentationItem::s_type;
}

bool IfcTopologicalRepresentationItem::isOfType(Step::ClassType t) {
    return IfcTopologicalRepresentationItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

void IfcTopologicalRepresentationItem::release() {
    IfcRepresentationItem::release();
}

bool IfcTopologicalRepresentationItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcTopologicalRepresentationItem::copy(const IfcTopologicalRepresentationItem &obj, const CopyOp &copyop) {
    IfcRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTopologicalRepresentationItem::s_type("IfcTopologicalRepresentationItem");
