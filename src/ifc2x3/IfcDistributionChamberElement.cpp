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

#include "ifc2x3/IfcDistributionChamberElement.h"

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

IfcDistributionChamberElement::IfcDistributionChamberElement(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcDistributionChamberElement::~IfcDistributionChamberElement() {
}

bool IfcDistributionChamberElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionChamberElement(this);
}

const std::string &IfcDistributionChamberElement::type() {
    return IfcDistributionChamberElement::s_type.getName();
}

Step::ClassType IfcDistributionChamberElement::getClassType() {
    return IfcDistributionChamberElement::s_type;
}

Step::ClassType IfcDistributionChamberElement::getType() const {
    return IfcDistributionChamberElement::s_type;
}

bool IfcDistributionChamberElement::isOfType(Step::ClassType t) {
    return IfcDistributionChamberElement::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcDistributionChamberElement::release() {
    IfcDistributionFlowElement::release();
}

bool IfcDistributionChamberElement::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionChamberElement::copy(const IfcDistributionChamberElement &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionChamberElement::s_type("IfcDistributionChamberElement");
