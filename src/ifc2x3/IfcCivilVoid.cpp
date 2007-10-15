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

#include "ifc2x3/IfcCivilVoid.h"

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

IfcCivilVoid::IfcCivilVoid(Step::Id id, Step::SPFData *args) : IfcCivilElementPart(id, args) {
}

IfcCivilVoid::~IfcCivilVoid() {
}

bool IfcCivilVoid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCivilVoid(this);
}

const std::string &IfcCivilVoid::type() {
    return IfcCivilVoid::s_type.getName();
}

Step::ClassType IfcCivilVoid::getClassType() {
    return IfcCivilVoid::s_type;
}

Step::ClassType IfcCivilVoid::getType() const {
    return IfcCivilVoid::s_type;
}

bool IfcCivilVoid::isOfType(Step::ClassType t) {
    return IfcCivilVoid::s_type == t ? true : IfcCivilElementPart::isOfType(t);
}

void IfcCivilVoid::release() {
    IfcCivilElementPart::release();
}

bool IfcCivilVoid::init() {
    bool status = IfcCivilElementPart::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCivilVoid::copy(const IfcCivilVoid &obj, const CopyOp &copyop) {
    IfcCivilElementPart::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCivilVoid::s_type("IfcCivilVoid");
