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

#include "ifc2x3/IfcCivilStructureElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCivilStructureElement::IfcCivilStructureElement(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElement(id, args) {
}

IfcCivilStructureElement::~IfcCivilStructureElement() {
}

bool IfcCivilStructureElement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCivilStructureElement(this);
}

const std::string &IfcCivilStructureElement::type() {
    return IfcCivilStructureElement::s_type.getName();
}

Step::ClassType IfcCivilStructureElement::getClassType() {
    return IfcCivilStructureElement::s_type;
}

Step::ClassType IfcCivilStructureElement::getType() const {
    return IfcCivilStructureElement::s_type;
}

bool IfcCivilStructureElement::isOfType(Step::ClassType t) {
    return IfcCivilStructureElement::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

void IfcCivilStructureElement::release() {
    IfcSpatialStructureElement::release();
}

bool IfcCivilStructureElement::init() {
    bool status = IfcSpatialStructureElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCivilStructureElement::copy(const IfcCivilStructureElement &obj, const CopyOp &copyop) {
    IfcSpatialStructureElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCivilStructureElement::s_type("IfcCivilStructureElement");
