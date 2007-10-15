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

#include "ifc2x3/IfcFlowSegment.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFlowSegment::IfcFlowSegment(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowSegment::~IfcFlowSegment() {
}

bool IfcFlowSegment::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowSegment(this);
}

const std::string &IfcFlowSegment::type() {
    return IfcFlowSegment::s_type.getName();
}

Step::ClassType IfcFlowSegment::getClassType() {
    return IfcFlowSegment::s_type;
}

Step::ClassType IfcFlowSegment::getType() const {
    return IfcFlowSegment::s_type;
}

bool IfcFlowSegment::isOfType(Step::ClassType t) {
    return IfcFlowSegment::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcFlowSegment::release() {
    IfcDistributionFlowElement::release();
}

bool IfcFlowSegment::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowSegment::copy(const IfcFlowSegment &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowSegment::s_type("IfcFlowSegment");
