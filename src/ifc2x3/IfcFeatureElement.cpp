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

#include "ifc2x3/IfcFeatureElement.h"

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

IfcFeatureElement::IfcFeatureElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcFeatureElement::~IfcFeatureElement() {
}

bool IfcFeatureElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFeatureElement(this);
}

const std::string &IfcFeatureElement::type() {
    return IfcFeatureElement::s_type.getName();
}

Step::ClassType IfcFeatureElement::getClassType() {
    return IfcFeatureElement::s_type;
}

Step::ClassType IfcFeatureElement::getType() const {
    return IfcFeatureElement::s_type;
}

bool IfcFeatureElement::isOfType(Step::ClassType t) {
    return IfcFeatureElement::s_type == t ? true : IfcElement::isOfType(t);
}

void IfcFeatureElement::release() {
    IfcElement::release();
}

bool IfcFeatureElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFeatureElement::copy(const IfcFeatureElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFeatureElement::s_type("IfcFeatureElement");
