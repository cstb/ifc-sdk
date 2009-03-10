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

#include "ifc2x3/IfcFacetedBrep.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcManifoldSolidBrep.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFacetedBrep::IfcFacetedBrep(Step::Id id, Step::SPFData *args) : IfcManifoldSolidBrep(id, args) {
}

IfcFacetedBrep::~IfcFacetedBrep() {
}

bool IfcFacetedBrep::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFacetedBrep(this);
}

const std::string &IfcFacetedBrep::type() const {
    return IfcFacetedBrep::s_type.getName();
}

const Step::ClassType &IfcFacetedBrep::getClassType() {
    return IfcFacetedBrep::s_type;
}

const Step::ClassType &IfcFacetedBrep::getType() const {
    return IfcFacetedBrep::s_type;
}

bool IfcFacetedBrep::isOfType(const Step::ClassType &t) const {
    return IfcFacetedBrep::s_type == t ? true : IfcManifoldSolidBrep::isOfType(t);
}

bool IfcFacetedBrep::init() {
    bool status = IfcManifoldSolidBrep::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFacetedBrep::copy(const IfcFacetedBrep &obj, const CopyOp &copyop) {
    IfcManifoldSolidBrep::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFacetedBrep::s_type("IfcFacetedBrep");
