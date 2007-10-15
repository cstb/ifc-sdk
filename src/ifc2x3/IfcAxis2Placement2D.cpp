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

#include "ifc2x3/IfcAxis2Placement2D.h"

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

IfcAxis2Placement2D::IfcAxis2Placement2D(Step::Id id, Step::SPFData *args) : IfcPlacement(id, args) {
    m_refDirection = NULL;
}

IfcAxis2Placement2D::~IfcAxis2Placement2D() {
}

bool IfcAxis2Placement2D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAxis2Placement2D(this);
}

const std::string &IfcAxis2Placement2D::type() {
    return IfcAxis2Placement2D::s_type.getName();
}

Step::ClassType IfcAxis2Placement2D::getClassType() {
    return IfcAxis2Placement2D::s_type;
}

Step::ClassType IfcAxis2Placement2D::getType() const {
    return IfcAxis2Placement2D::s_type;
}

bool IfcAxis2Placement2D::isOfType(Step::ClassType t) {
    return IfcAxis2Placement2D::s_type == t ? true : IfcPlacement::isOfType(t);
}

IfcDirection *IfcAxis2Placement2D::getRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_refDirection.get();
    }
    else {
        return NULL;
    }
}

void IfcAxis2Placement2D::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
    m_refDirection = value;
}

void IfcAxis2Placement2D::release() {
    IfcPlacement::release();
    m_refDirection.release();
}

bool IfcAxis2Placement2D::init() {
    bool status = IfcPlacement::init();
    std::string arg;
    if (!status) {
        return false;
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

void IfcAxis2Placement2D::copy(const IfcAxis2Placement2D &obj, const CopyOp &copyop) {
    IfcPlacement::copy(obj, copyop);
    setRefDirection(copyop(obj.m_refDirection.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAxis2Placement2D::s_type("IfcAxis2Placement2D");
