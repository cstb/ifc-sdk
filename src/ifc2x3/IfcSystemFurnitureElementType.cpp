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

#include "ifc2x3/IfcSystemFurnitureElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFurnishingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSystemFurnitureElementType::IfcSystemFurnitureElementType(Step::Id id, Step::SPFData *args) : IfcFurnishingElementType(id, args) {
}

IfcSystemFurnitureElementType::~IfcSystemFurnitureElementType() {
}

bool IfcSystemFurnitureElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSystemFurnitureElementType(this);
}

const std::string &IfcSystemFurnitureElementType::type() const {
    return IfcSystemFurnitureElementType::s_type.getName();
}

const Step::ClassType &IfcSystemFurnitureElementType::getClassType() {
    return IfcSystemFurnitureElementType::s_type;
}

const Step::ClassType &IfcSystemFurnitureElementType::getType() const {
    return IfcSystemFurnitureElementType::s_type;
}

bool IfcSystemFurnitureElementType::isOfType(const Step::ClassType &t) const {
    return IfcSystemFurnitureElementType::s_type == t ? true : IfcFurnishingElementType::isOfType(t);
}

bool IfcSystemFurnitureElementType::init() {
    bool status = IfcFurnishingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSystemFurnitureElementType::copy(const IfcSystemFurnitureElementType &obj, const CopyOp &copyop) {
    IfcFurnishingElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSystemFurnitureElementType::s_type("IfcSystemFurnitureElementType");
