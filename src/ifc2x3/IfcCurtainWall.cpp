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

#include "ifc2x3/IfcCurtainWall.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCurtainWall::IfcCurtainWall(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcCurtainWall::~IfcCurtainWall() {
}

bool IfcCurtainWall::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurtainWall(this);
}

const std::string &IfcCurtainWall::type() {
    return IfcCurtainWall::s_type.getName();
}

Step::ClassType IfcCurtainWall::getClassType() {
    return IfcCurtainWall::s_type;
}

Step::ClassType IfcCurtainWall::getType() const {
    return IfcCurtainWall::s_type;
}

bool IfcCurtainWall::isOfType(Step::ClassType t) {
    return IfcCurtainWall::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcCurtainWall::release() {
    IfcBuildingElement::release();
}

bool IfcCurtainWall::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCurtainWall::copy(const IfcCurtainWall &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurtainWall::s_type("IfcCurtainWall");
