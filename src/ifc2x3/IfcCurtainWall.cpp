/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

bool IfcCurtainWall::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurtainWall(this);
}

const std::string &IfcCurtainWall::type() const {
    return IfcCurtainWall::s_type.getName();
}

const Step::ClassType &IfcCurtainWall::getClassType() {
    return IfcCurtainWall::s_type;
}

const Step::ClassType &IfcCurtainWall::getType() const {
    return IfcCurtainWall::s_type;
}

bool IfcCurtainWall::isOfType(const Step::ClassType &t) const {
    return IfcCurtainWall::s_type == t ? true : IfcBuildingElement::isOfType(t);
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
