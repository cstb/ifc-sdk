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

#include "ifc2x3/IfcExternallyDefinedSymbol.h"

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

IfcExternallyDefinedSymbol::IfcExternallyDefinedSymbol(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcExternallyDefinedSymbol::~IfcExternallyDefinedSymbol() {
}

bool IfcExternallyDefinedSymbol::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExternallyDefinedSymbol(this);
}

const std::string &IfcExternallyDefinedSymbol::type() const {
    return IfcExternallyDefinedSymbol::s_type.getName();
}

const Step::ClassType &IfcExternallyDefinedSymbol::getClassType() {
    return IfcExternallyDefinedSymbol::s_type;
}

const Step::ClassType &IfcExternallyDefinedSymbol::getType() const {
    return IfcExternallyDefinedSymbol::s_type;
}

bool IfcExternallyDefinedSymbol::isOfType(const Step::ClassType &t) const {
    return IfcExternallyDefinedSymbol::s_type == t ? true : IfcExternalReference::isOfType(t);
}

bool IfcExternallyDefinedSymbol::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcExternallyDefinedSymbol::copy(const IfcExternallyDefinedSymbol &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedSymbol::s_type("IfcExternallyDefinedSymbol");
