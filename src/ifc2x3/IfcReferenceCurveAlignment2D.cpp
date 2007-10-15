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

#include "ifc2x3/IfcReferenceCurveAlignment2D.h"

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

IfcReferenceCurveAlignment2D::IfcReferenceCurveAlignment2D(Step::Id id, Step::SPFData *args) : IfcReferenceCurve(id, args) {
    m_horizontalAlignment = NULL;
    m_verticalAlignment = NULL;
}

IfcReferenceCurveAlignment2D::~IfcReferenceCurveAlignment2D() {
}

bool IfcReferenceCurveAlignment2D::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferenceCurveAlignment2D(this);
}

const std::string &IfcReferenceCurveAlignment2D::type() {
    return IfcReferenceCurveAlignment2D::s_type.getName();
}

Step::ClassType IfcReferenceCurveAlignment2D::getClassType() {
    return IfcReferenceCurveAlignment2D::s_type;
}

Step::ClassType IfcReferenceCurveAlignment2D::getType() const {
    return IfcReferenceCurveAlignment2D::s_type;
}

bool IfcReferenceCurveAlignment2D::isOfType(Step::ClassType t) {
    return IfcReferenceCurveAlignment2D::s_type == t ? true : IfcReferenceCurve::isOfType(t);
}

IfcCurve *IfcReferenceCurveAlignment2D::getHorizontalAlignment() {
    if (Step::BaseObject::inited()) {
        return m_horizontalAlignment.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurveAlignment2D::setHorizontalAlignment(const Step::RefPtr< IfcCurve > &value) {
    m_horizontalAlignment = value;
}

IfcCurve *IfcReferenceCurveAlignment2D::getVerticalAlignment() {
    if (Step::BaseObject::inited()) {
        return m_verticalAlignment.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurveAlignment2D::setVerticalAlignment(const Step::RefPtr< IfcCurve > &value) {
    m_verticalAlignment = value;
}

void IfcReferenceCurveAlignment2D::release() {
    IfcReferenceCurve::release();
    m_horizontalAlignment.release();
    m_verticalAlignment.release();
}

bool IfcReferenceCurveAlignment2D::init() {
    bool status = IfcReferenceCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_horizontalAlignment = NULL;
    }
    else {
        m_horizontalAlignment = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_verticalAlignment = NULL;
    }
    else {
        m_verticalAlignment = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcReferenceCurveAlignment2D::copy(const IfcReferenceCurveAlignment2D &obj, const CopyOp &copyop) {
    IfcReferenceCurve::copy(obj, copyop);
    setHorizontalAlignment(copyop(obj.m_horizontalAlignment.get()));
    setVerticalAlignment(copyop(obj.m_verticalAlignment.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferenceCurveAlignment2D::s_type("IfcReferenceCurveAlignment2D");
