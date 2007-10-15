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

#include "ifc2x3/IfcDistributionControlElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionControlElementType::IfcDistributionControlElementType(Step::Id id, Step::SPFData *args) : IfcDistributionElementType(id, args) {
}

IfcDistributionControlElementType::~IfcDistributionControlElementType() {
}

bool IfcDistributionControlElementType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionControlElementType(this);
}

const std::string &IfcDistributionControlElementType::type() {
    return IfcDistributionControlElementType::s_type.getName();
}

Step::ClassType IfcDistributionControlElementType::getClassType() {
    return IfcDistributionControlElementType::s_type;
}

Step::ClassType IfcDistributionControlElementType::getType() const {
    return IfcDistributionControlElementType::s_type;
}

bool IfcDistributionControlElementType::isOfType(Step::ClassType t) {
    return IfcDistributionControlElementType::s_type == t ? true : IfcDistributionElementType::isOfType(t);
}

void IfcDistributionControlElementType::release() {
    IfcDistributionElementType::release();
}

bool IfcDistributionControlElementType::init() {
    bool status = IfcDistributionElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionControlElementType::copy(const IfcDistributionControlElementType &obj, const CopyOp &copyop) {
    IfcDistributionElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionControlElementType::s_type("IfcDistributionControlElementType");
