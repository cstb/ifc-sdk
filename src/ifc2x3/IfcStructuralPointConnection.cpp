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

#include "ifc2x3/IfcStructuralPointConnection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralPointConnection::IfcStructuralPointConnection(Step::Id id, Step::SPFData *args) : IfcStructuralConnection(id, args) {
}

IfcStructuralPointConnection::~IfcStructuralPointConnection() {
}

bool IfcStructuralPointConnection::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralPointConnection(this);
}

const std::string &IfcStructuralPointConnection::type() {
    return IfcStructuralPointConnection::s_type.getName();
}

Step::ClassType IfcStructuralPointConnection::getClassType() {
    return IfcStructuralPointConnection::s_type;
}

Step::ClassType IfcStructuralPointConnection::getType() const {
    return IfcStructuralPointConnection::s_type;
}

bool IfcStructuralPointConnection::isOfType(Step::ClassType t) {
    return IfcStructuralPointConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

void IfcStructuralPointConnection::release() {
    IfcStructuralConnection::release();
}

bool IfcStructuralPointConnection::init() {
    bool status = IfcStructuralConnection::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralPointConnection::copy(const IfcStructuralPointConnection &obj, const CopyOp &copyop) {
    IfcStructuralConnection::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPointConnection::s_type("IfcStructuralPointConnection");
