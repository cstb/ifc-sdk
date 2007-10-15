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

#include "ifc2x3/IfcDistributionElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionElement::IfcDistributionElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcDistributionElement::~IfcDistributionElement() {
}

bool IfcDistributionElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionElement(this);
}

const std::string &IfcDistributionElement::type() {
    return IfcDistributionElement::s_type.getName();
}

Step::ClassType IfcDistributionElement::getClassType() {
    return IfcDistributionElement::s_type;
}

Step::ClassType IfcDistributionElement::getType() const {
    return IfcDistributionElement::s_type;
}

bool IfcDistributionElement::isOfType(Step::ClassType t) {
    return IfcDistributionElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcDistributionElement::release() {
    IfcElement::release();
}

bool IfcDistributionElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionElement::copy(const IfcDistributionElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionElement::s_type("IfcDistributionElement");
