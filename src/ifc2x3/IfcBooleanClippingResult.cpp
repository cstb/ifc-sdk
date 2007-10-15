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

#include "ifc2x3/IfcBooleanClippingResult.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBooleanResult.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBooleanClippingResult::IfcBooleanClippingResult(Step::Id id, Step::SPFData *args) : IfcBooleanResult(id, args) {
}

IfcBooleanClippingResult::~IfcBooleanClippingResult() {
}

bool IfcBooleanClippingResult::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBooleanClippingResult(this);
}

const std::string &IfcBooleanClippingResult::type() {
    return IfcBooleanClippingResult::s_type.getName();
}

Step::ClassType IfcBooleanClippingResult::getClassType() {
    return IfcBooleanClippingResult::s_type;
}

Step::ClassType IfcBooleanClippingResult::getType() const {
    return IfcBooleanClippingResult::s_type;
}

bool IfcBooleanClippingResult::isOfType(Step::ClassType t) {
    return IfcBooleanClippingResult::s_type == t ? true : IfcBooleanResult::isOfType(t);
}

void IfcBooleanClippingResult::release() {
    IfcBooleanResult::release();
}

bool IfcBooleanClippingResult::init() {
    bool status = IfcBooleanResult::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBooleanClippingResult::copy(const IfcBooleanClippingResult &obj, const CopyOp &copyop) {
    IfcBooleanResult::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBooleanClippingResult::s_type("IfcBooleanClippingResult");
