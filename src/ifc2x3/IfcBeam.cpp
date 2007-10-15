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

#include "ifc2x3/IfcBeam.h"

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

IfcBeam::IfcBeam(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcBeam::~IfcBeam() {
}

bool IfcBeam::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBeam(this);
}

const std::string &IfcBeam::type() {
    return IfcBeam::s_type.getName();
}

Step::ClassType IfcBeam::getClassType() {
    return IfcBeam::s_type;
}

Step::ClassType IfcBeam::getType() const {
    return IfcBeam::s_type;
}

bool IfcBeam::isOfType(Step::ClassType t) {
    return IfcBeam::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcBeam::release() {
    IfcBuildingElement::release();
}

bool IfcBeam::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBeam::copy(const IfcBeam &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBeam::s_type("IfcBeam");
