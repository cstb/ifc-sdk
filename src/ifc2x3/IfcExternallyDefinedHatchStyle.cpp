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

#include "ifc2x3/IfcExternallyDefinedHatchStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcExternallyDefinedHatchStyle::IfcExternallyDefinedHatchStyle(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcExternallyDefinedHatchStyle::~IfcExternallyDefinedHatchStyle() {
}

bool IfcExternallyDefinedHatchStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcExternallyDefinedHatchStyle(this);
}

const std::string &IfcExternallyDefinedHatchStyle::type() {
    return IfcExternallyDefinedHatchStyle::s_type.getName();
}

Step::ClassType IfcExternallyDefinedHatchStyle::getClassType() {
    return IfcExternallyDefinedHatchStyle::s_type;
}

Step::ClassType IfcExternallyDefinedHatchStyle::getType() const {
    return IfcExternallyDefinedHatchStyle::s_type;
}

bool IfcExternallyDefinedHatchStyle::isOfType(Step::ClassType t) {
    return IfcExternallyDefinedHatchStyle::s_type == t ? true : IfcExternalReference::isOfType(t);
}

void IfcExternallyDefinedHatchStyle::release() {
    IfcExternalReference::release();
}

bool IfcExternallyDefinedHatchStyle::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcExternallyDefinedHatchStyle::copy(const IfcExternallyDefinedHatchStyle &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedHatchStyle::s_type("IfcExternallyDefinedHatchStyle");
