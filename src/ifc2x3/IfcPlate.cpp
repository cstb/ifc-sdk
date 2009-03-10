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

#include "ifc2x3/IfcPlate.h"

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

IfcPlate::IfcPlate(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcPlate::~IfcPlate() {
}

bool IfcPlate::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlate(this);
}

const std::string &IfcPlate::type() const {
    return IfcPlate::s_type.getName();
}

const Step::ClassType &IfcPlate::getClassType() {
    return IfcPlate::s_type;
}

const Step::ClassType &IfcPlate::getType() const {
    return IfcPlate::s_type;
}

bool IfcPlate::isOfType(const Step::ClassType &t) const {
    return IfcPlate::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

bool IfcPlate::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPlate::copy(const IfcPlate &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlate::s_type("IfcPlate");
