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

#include "ifc2x3/IfcRampFlight.h"

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

IfcRampFlight::IfcRampFlight(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcRampFlight::~IfcRampFlight() {
}

bool IfcRampFlight::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRampFlight(this);
}

const std::string &IfcRampFlight::type() {
    return IfcRampFlight::s_type.getName();
}

Step::ClassType IfcRampFlight::getClassType() {
    return IfcRampFlight::s_type;
}

Step::ClassType IfcRampFlight::getType() const {
    return IfcRampFlight::s_type;
}

bool IfcRampFlight::isOfType(Step::ClassType t) {
    return IfcRampFlight::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcRampFlight::release() {
    IfcBuildingElement::release();
}

bool IfcRampFlight::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRampFlight::copy(const IfcRampFlight &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRampFlight::s_type("IfcRampFlight");
