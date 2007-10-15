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

#include "ifc2x3/IfcAlignmentElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAlignmentElement::IfcAlignmentElement(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
}

IfcAlignmentElement::~IfcAlignmentElement() {
}

bool IfcAlignmentElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAlignmentElement(this);
}

const std::string &IfcAlignmentElement::type() {
    return IfcAlignmentElement::s_type.getName();
}

Step::ClassType IfcAlignmentElement::getClassType() {
    return IfcAlignmentElement::s_type;
}

Step::ClassType IfcAlignmentElement::getType() const {
    return IfcAlignmentElement::s_type;
}

bool IfcAlignmentElement::isOfType(Step::ClassType t) {
    return IfcAlignmentElement::s_type == t ? true : IfcProduct::isOfType(t);
}

void IfcAlignmentElement::release() {
    IfcProduct::release();
}

bool IfcAlignmentElement::init() {
    bool status = IfcProduct::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAlignmentElement::copy(const IfcAlignmentElement &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAlignmentElement::s_type("IfcAlignmentElement");
