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

bool IfcColumn::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColumn(this);
}

const std::string &IfcColumn::type() const {
    return IfcColumn::s_type.getName();
}

const Step::ClassType &IfcColumn::getClassType() {
    return IfcColumn::s_type;
}

const Step::ClassType &IfcColumn::getType() const {
    return IfcColumn::s_type;
}

bool IfcColumn::isOfType(const Step::ClassType &t) const {
    return IfcColumn::s_type == t ? true : IfcBuildingElement::isOfType(t);
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
