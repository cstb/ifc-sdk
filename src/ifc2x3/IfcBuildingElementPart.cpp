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

#include "ifc2x3/IfcBuildingElementPart.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBuildingElementPart::IfcBuildingElementPart(Step::Id id, Step::SPFData *args) : IfcElementPart(id, args) {
}

IfcBuildingElementPart::~IfcBuildingElementPart() {
}

bool IfcBuildingElementPart::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBuildingElementPart(this);
}

const std::string &IfcBuildingElementPart::type() {
    return IfcBuildingElementPart::s_type.getName();
}

Step::ClassType IfcBuildingElementPart::getClassType() {
    return IfcBuildingElementPart::s_type;
}

Step::ClassType IfcBuildingElementPart::getType() const {
    return IfcBuildingElementPart::s_type;
}

bool IfcBuildingElementPart::isOfType(Step::ClassType t) {
    return IfcBuildingElementPart::s_type == t ? true : IfcElementPart::isOfType(t);
}

void IfcBuildingElementPart::release() {
    IfcElementPart::release();
}

bool IfcBuildingElementPart::init() {
    bool status = IfcElementPart::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBuildingElementPart::copy(const IfcBuildingElementPart &obj, const CopyOp &copyop) {
    IfcElementPart::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementPart::s_type("IfcBuildingElementPart");
