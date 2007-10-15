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

#include "ifc2x3/IfcReferenceElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAlignmentElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReferenceElement::IfcReferenceElement(Step::Id id, Step::SPFData *args) : IfcAlignmentElement(id, args) {
}

IfcReferenceElement::~IfcReferenceElement() {
}

bool IfcReferenceElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferenceElement(this);
}

const std::string &IfcReferenceElement::type() {
    return IfcReferenceElement::s_type.getName();
}

Step::ClassType IfcReferenceElement::getClassType() {
    return IfcReferenceElement::s_type;
}

Step::ClassType IfcReferenceElement::getType() const {
    return IfcReferenceElement::s_type;
}

bool IfcReferenceElement::isOfType(Step::ClassType t) {
    return IfcReferenceElement::s_type == t ? true : IfcAlignmentElement::isOfType(t);
}

void IfcReferenceElement::release() {
    IfcAlignmentElement::release();
}

bool IfcReferenceElement::init() {
    bool status = IfcAlignmentElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcReferenceElement::copy(const IfcReferenceElement &obj, const CopyOp &copyop) {
    IfcAlignmentElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferenceElement::s_type("IfcReferenceElement");
