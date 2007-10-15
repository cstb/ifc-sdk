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

#include "ifc2x3/IfcSimpleProperty.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProperty.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSimpleProperty::IfcSimpleProperty(Step::Id id, Step::SPFData *args) : IfcProperty(id, args) {
}

IfcSimpleProperty::~IfcSimpleProperty() {
}

bool IfcSimpleProperty::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSimpleProperty(this);
}

const std::string &IfcSimpleProperty::type() {
    return IfcSimpleProperty::s_type.getName();
}

Step::ClassType IfcSimpleProperty::getClassType() {
    return IfcSimpleProperty::s_type;
}

Step::ClassType IfcSimpleProperty::getType() const {
    return IfcSimpleProperty::s_type;
}

bool IfcSimpleProperty::isOfType(Step::ClassType t) {
    return IfcSimpleProperty::s_type == t ? true : IfcProperty::isOfType(t);
}

void IfcSimpleProperty::release() {
    IfcProperty::release();
}

bool IfcSimpleProperty::init() {
    bool status = IfcProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSimpleProperty::copy(const IfcSimpleProperty &obj, const CopyOp &copyop) {
    IfcProperty::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSimpleProperty::s_type("IfcSimpleProperty");
