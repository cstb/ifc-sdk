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

#include "ifc2x3/IfcExternallyDefinedTextFont.h"

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

IfcExternallyDefinedTextFont::IfcExternallyDefinedTextFont(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcExternallyDefinedTextFont::~IfcExternallyDefinedTextFont() {
}

bool IfcExternallyDefinedTextFont::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcExternallyDefinedTextFont(this);
}

const std::string &IfcExternallyDefinedTextFont::type() {
    return IfcExternallyDefinedTextFont::s_type.getName();
}

Step::ClassType IfcExternallyDefinedTextFont::getClassType() {
    return IfcExternallyDefinedTextFont::s_type;
}

Step::ClassType IfcExternallyDefinedTextFont::getType() const {
    return IfcExternallyDefinedTextFont::s_type;
}

bool IfcExternallyDefinedTextFont::isOfType(Step::ClassType t) {
    return IfcExternallyDefinedTextFont::s_type == t ? true : IfcExternalReference::isOfType(t);
}

void IfcExternallyDefinedTextFont::release() {
    IfcExternalReference::release();
}

bool IfcExternallyDefinedTextFont::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcExternallyDefinedTextFont::copy(const IfcExternallyDefinedTextFont &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedTextFont::s_type("IfcExternallyDefinedTextFont");
