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

#include "ifc2x3/IfcReferenceCurve3D.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcReferenceCurve.h"
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

IfcReferenceCurve3D::IfcReferenceCurve3D(Step::Id id, Step::SPFData *args) : IfcReferenceCurve(id, args) {
    m_curve3D = NULL;
}

IfcReferenceCurve3D::~IfcReferenceCurve3D() {
}

bool IfcReferenceCurve3D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferenceCurve3D(this);
}

const std::string &IfcReferenceCurve3D::type() {
    return IfcReferenceCurve3D::s_type.getName();
}

Step::ClassType IfcReferenceCurve3D::getClassType() {
    return IfcReferenceCurve3D::s_type;
}

Step::ClassType IfcReferenceCurve3D::getType() const {
    return IfcReferenceCurve3D::s_type;
}

bool IfcReferenceCurve3D::isOfType(Step::ClassType t) {
    return IfcReferenceCurve3D::s_type == t ? true : IfcReferenceCurve::isOfType(t);
}

IfcCurve *IfcReferenceCurve3D::getCurve3D() {
    if (Step::BaseObject::inited()) {
        return m_curve3D.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurve3D::setCurve3D(const Step::RefPtr< IfcCurve > &value) {
    m_curve3D = value;
}

void IfcReferenceCurve3D::release() {
    IfcReferenceCurve::release();
    m_curve3D.release();
}

bool IfcReferenceCurve3D::init() {
    bool status = IfcReferenceCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curve3D = NULL;
    }
    else {
        m_curve3D = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcReferenceCurve3D::copy(const IfcReferenceCurve3D &obj, const CopyOp &copyop) {
    IfcReferenceCurve::copy(obj, copyop);
    setCurve3D(copyop(obj.m_curve3D.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferenceCurve3D::s_type("IfcReferenceCurve3D");
