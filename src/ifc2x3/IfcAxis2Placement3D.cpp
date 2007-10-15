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

#include "ifc2x3/IfcAxis2Placement3D.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcPlacement.h"
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

IfcAxis2Placement3D::IfcAxis2Placement3D(Step::Id id, Step::SPFData *args) : IfcPlacement(id, args) {
    m_axis = NULL;
    m_refDirection = NULL;
}

IfcAxis2Placement3D::~IfcAxis2Placement3D() {
}

bool IfcAxis2Placement3D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAxis2Placement3D(this);
}

const std::string &IfcAxis2Placement3D::type() {
    return IfcAxis2Placement3D::s_type.getName();
}

Step::ClassType IfcAxis2Placement3D::getClassType() {
    return IfcAxis2Placement3D::s_type;
}

Step::ClassType IfcAxis2Placement3D::getType() const {
    return IfcAxis2Placement3D::s_type;
}

bool IfcAxis2Placement3D::isOfType(Step::ClassType t) {
    return IfcAxis2Placement3D::s_type == t ? true : IfcPlacement::isOfType(t);
}

IfcDirection *IfcAxis2Placement3D::getAxis() {
    if (Step::BaseObject::inited()) {
        return m_axis.get();
    }
    else {
        return NULL;
    }
}

void IfcAxis2Placement3D::setAxis(const Step::RefPtr< IfcDirection > &value) {
    m_axis = value;
}

IfcDirection *IfcAxis2Placement3D::getRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_refDirection.get();
    }
    else {
        return NULL;
    }
}

void IfcAxis2Placement3D::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
    m_refDirection = value;
}

void IfcAxis2Placement3D::release() {
    IfcPlacement::release();
    m_axis.release();
    m_refDirection.release();
}

bool IfcAxis2Placement3D::init() {
    bool status = IfcPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis = NULL;
    }
    else {
        m_axis = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refDirection = NULL;
    }
    else {
        m_refDirection = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcAxis2Placement3D::copy(const IfcAxis2Placement3D &obj, const CopyOp &copyop) {
    IfcPlacement::copy(obj, copyop);
    setAxis(copyop(obj.m_axis.get()));
    setRefDirection(copyop(obj.m_refDirection.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAxis2Placement3D::s_type("IfcAxis2Placement3D");
