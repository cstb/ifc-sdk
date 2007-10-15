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

#include "ifc2x3/IfcCsgPrimitive3D.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCsgPrimitive3D::IfcCsgPrimitive3D(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_position = NULL;
}

IfcCsgPrimitive3D::~IfcCsgPrimitive3D() {
}

bool IfcCsgPrimitive3D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCsgPrimitive3D(this);
}

const std::string &IfcCsgPrimitive3D::type() {
    return IfcCsgPrimitive3D::s_type.getName();
}

Step::ClassType IfcCsgPrimitive3D::getClassType() {
    return IfcCsgPrimitive3D::s_type;
}

Step::ClassType IfcCsgPrimitive3D::getType() const {
    return IfcCsgPrimitive3D::s_type;
}

bool IfcCsgPrimitive3D::isOfType(Step::ClassType t) {
    return IfcCsgPrimitive3D::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcAxis2Placement3D *IfcCsgPrimitive3D::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

void IfcCsgPrimitive3D::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcCsgPrimitive3D::release() {
    IfcGeometricRepresentationItem::release();
    m_position.release();
}

bool IfcCsgPrimitive3D::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcCsgPrimitive3D::copy(const IfcCsgPrimitive3D &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setPosition(copyop(obj.m_position.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCsgPrimitive3D::s_type("IfcCsgPrimitive3D");
