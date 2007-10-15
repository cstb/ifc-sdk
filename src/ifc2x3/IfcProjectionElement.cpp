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

#include "ifc2x3/IfcProjectionElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElementAddition.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProjectionElement::IfcProjectionElement(Step::Id id, Step::SPFData *args) : IfcFeatureElementAddition(id, args) {
}

IfcProjectionElement::~IfcProjectionElement() {
}

bool IfcProjectionElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProjectionElement(this);
}

const std::string &IfcProjectionElement::type() {
    return IfcProjectionElement::s_type.getName();
}

Step::ClassType IfcProjectionElement::getClassType() {
    return IfcProjectionElement::s_type;
}

Step::ClassType IfcProjectionElement::getType() const {
    return IfcProjectionElement::s_type;
}

bool IfcProjectionElement::isOfType(Step::ClassType t) {
    return IfcProjectionElement::s_type == t ? true : IfcFeatureElementAddition::isOfType(t);
}

void IfcProjectionElement::release() {
    IfcFeatureElementAddition::release();
}

bool IfcProjectionElement::init() {
    bool status = IfcFeatureElementAddition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcProjectionElement::copy(const IfcProjectionElement &obj, const CopyOp &copyop) {
    IfcFeatureElementAddition::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectionElement::s_type("IfcProjectionElement");
