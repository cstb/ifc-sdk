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

#include "ifc2x3/IfcFlowFitting.h"

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

IfcFlowFitting::IfcFlowFitting(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowFitting::~IfcFlowFitting() {
}

bool IfcFlowFitting::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowFitting(this);
}

const std::string &IfcFlowFitting::type() const {
    return IfcFlowFitting::s_type.getName();
}

const Step::ClassType &IfcFlowFitting::getClassType() {
    return IfcFlowFitting::s_type;
}

const Step::ClassType &IfcFlowFitting::getType() const {
    return IfcFlowFitting::s_type;
}

bool IfcFlowFitting::isOfType(const Step::ClassType &t) const {
    return IfcFlowFitting::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

bool IfcFlowFitting::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowFitting::copy(const IfcFlowFitting &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowFitting::s_type("IfcFlowFitting");
