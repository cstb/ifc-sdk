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

#include "ifc2x3/IfcConstructionProductResource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstructionResource.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConstructionProductResource::IfcConstructionProductResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
}

IfcConstructionProductResource::~IfcConstructionProductResource() {
}

bool IfcConstructionProductResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstructionProductResource(this);
}

const std::string &IfcConstructionProductResource::type() const {
    return IfcConstructionProductResource::s_type.getName();
}

const Step::ClassType &IfcConstructionProductResource::getClassType() {
    return IfcConstructionProductResource::s_type;
}

const Step::ClassType &IfcConstructionProductResource::getType() const {
    return IfcConstructionProductResource::s_type;
}

bool IfcConstructionProductResource::isOfType(const Step::ClassType &t) const {
    return IfcConstructionProductResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

bool IfcConstructionProductResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcConstructionProductResource::copy(const IfcConstructionProductResource &obj, const CopyOp &copyop) {
    IfcConstructionResource::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstructionProductResource::s_type("IfcConstructionProductResource");
