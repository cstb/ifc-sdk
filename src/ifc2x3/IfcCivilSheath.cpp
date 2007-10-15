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

#include "ifc2x3/IfcCivilSheath.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCivilElementPart.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCivilSheath::IfcCivilSheath(Step::Id id, Step::SPFData *args) : IfcCivilElementPart(id, args) {
}

IfcCivilSheath::~IfcCivilSheath() {
}

bool IfcCivilSheath::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCivilSheath(this);
}

const std::string &IfcCivilSheath::type() {
    return IfcCivilSheath::s_type.getName();
}

Step::ClassType IfcCivilSheath::getClassType() {
    return IfcCivilSheath::s_type;
}

Step::ClassType IfcCivilSheath::getType() const {
    return IfcCivilSheath::s_type;
}

bool IfcCivilSheath::isOfType(Step::ClassType t) {
    return IfcCivilSheath::s_type == t ? true : IfcCivilElementPart::isOfType(t);
}

void IfcCivilSheath::release() {
    IfcCivilElementPart::release();
}

bool IfcCivilSheath::init() {
    bool status = IfcCivilElementPart::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCivilSheath::copy(const IfcCivilSheath &obj, const CopyOp &copyop) {
    IfcCivilElementPart::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCivilSheath::s_type("IfcCivilSheath");
