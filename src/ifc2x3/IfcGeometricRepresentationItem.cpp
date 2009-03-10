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

#include "ifc2x3/IfcGeometricRepresentationItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGeometricRepresentationItem::IfcGeometricRepresentationItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
}

IfcGeometricRepresentationItem::~IfcGeometricRepresentationItem() {
}

bool IfcGeometricRepresentationItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricRepresentationItem(this);
}

const std::string &IfcGeometricRepresentationItem::type() const {
    return IfcGeometricRepresentationItem::s_type.getName();
}

const Step::ClassType &IfcGeometricRepresentationItem::getClassType() {
    return IfcGeometricRepresentationItem::s_type;
}

const Step::ClassType &IfcGeometricRepresentationItem::getType() const {
    return IfcGeometricRepresentationItem::s_type;
}

bool IfcGeometricRepresentationItem::isOfType(const Step::ClassType &t) const {
    return IfcGeometricRepresentationItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

bool IfcGeometricRepresentationItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcGeometricRepresentationItem::copy(const IfcGeometricRepresentationItem &obj, const CopyOp &copyop) {
    IfcRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricRepresentationItem::s_type("IfcGeometricRepresentationItem");
