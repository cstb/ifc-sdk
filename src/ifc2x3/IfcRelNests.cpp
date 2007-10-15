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

#include "ifc2x3/IfcRelNests.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelNests::IfcRelNests(Step::Id id, Step::SPFData *args) : IfcRelDecomposes(id, args) {
}

IfcRelNests::~IfcRelNests() {
}

bool IfcRelNests::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelNests(this);
}

const std::string &IfcRelNests::type() {
    return IfcRelNests::s_type.getName();
}

Step::ClassType IfcRelNests::getClassType() {
    return IfcRelNests::s_type;
}

Step::ClassType IfcRelNests::getType() const {
    return IfcRelNests::s_type;
}

bool IfcRelNests::isOfType(Step::ClassType t) {
    return IfcRelNests::s_type == t ? true : IfcRelDecomposes::isOfType(t);
}

void IfcRelNests::release() {
    IfcRelDecomposes::release();
}

bool IfcRelNests::init() {
    bool status = IfcRelDecomposes::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelNests::copy(const IfcRelNests &obj, const CopyOp &copyop) {
    IfcRelDecomposes::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelNests::s_type("IfcRelNests");
