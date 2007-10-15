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

#include "ifc2x3/IfcSolidModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSolidModel::IfcSolidModel(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcSolidModel::~IfcSolidModel() {
}

bool IfcSolidModel::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSolidModel(this);
}

const std::string &IfcSolidModel::type() {
    return IfcSolidModel::s_type.getName();
}

Step::ClassType IfcSolidModel::getClassType() {
    return IfcSolidModel::s_type;
}

Step::ClassType IfcSolidModel::getType() const {
    return IfcSolidModel::s_type;
}

bool IfcSolidModel::isOfType(Step::ClassType t) {
    return IfcSolidModel::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

void IfcSolidModel::release() {
    IfcGeometricRepresentationItem::release();
}

bool IfcSolidModel::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSolidModel::copy(const IfcSolidModel &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSolidModel::s_type("IfcSolidModel");
