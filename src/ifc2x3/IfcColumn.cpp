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

#include "ifc2x3/IfcColumn.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcColumn::IfcColumn(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcColumn::~IfcColumn() {
}

bool IfcColumn::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcColumn(this);
}

const std::string &IfcColumn::type() {
    return IfcColumn::s_type.getName();
}

Step::ClassType IfcColumn::getClassType() {
    return IfcColumn::s_type;
}

Step::ClassType IfcColumn::getType() const {
    return IfcColumn::s_type;
}

bool IfcColumn::isOfType(Step::ClassType t) {
    return IfcColumn::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcColumn::release() {
    IfcBuildingElement::release();
}

bool IfcColumn::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcColumn::copy(const IfcColumn &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcColumn::s_type("IfcColumn");
