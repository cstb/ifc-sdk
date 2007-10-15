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

#include "ifc2x3/IfcConnectionGeometry.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConnectionGeometry::IfcConnectionGeometry(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcConnectionGeometry::~IfcConnectionGeometry() {
}

bool IfcConnectionGeometry::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConnectionGeometry(this);
}

const std::string &IfcConnectionGeometry::type() {
    return IfcConnectionGeometry::s_type.getName();
}

Step::ClassType IfcConnectionGeometry::getClassType() {
    return IfcConnectionGeometry::s_type;
}

Step::ClassType IfcConnectionGeometry::getType() const {
    return IfcConnectionGeometry::s_type;
}

bool IfcConnectionGeometry::isOfType(Step::ClassType t) {
    return IfcConnectionGeometry::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcConnectionGeometry::release() {
}

bool IfcConnectionGeometry::init() {
    std::string arg;
    return true;
}

void IfcConnectionGeometry::copy(const IfcConnectionGeometry &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionGeometry::s_type("IfcConnectionGeometry");
