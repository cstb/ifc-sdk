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

#include "ifc2x3/IfcLine.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianPoint.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcVector.h"
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

IfcLine::IfcLine(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_pnt = NULL;
    m_dir = NULL;
}

IfcLine::~IfcLine() {
}

bool IfcLine::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLine(this);
}

const std::string &IfcLine::type() {
    return IfcLine::s_type.getName();
}

Step::ClassType IfcLine::getClassType() {
    return IfcLine::s_type;
}

Step::ClassType IfcLine::getType() const {
    return IfcLine::s_type;
}

bool IfcLine::isOfType(Step::ClassType t) {
    return IfcLine::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcCartesianPoint *IfcLine::getPnt() {
    if (Step::BaseObject::inited()) {
        return m_pnt.get();
    }
    else {
        return NULL;
    }
}

void IfcLine::setPnt(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_pnt = value;
}

IfcVector *IfcLine::getDir() {
    if (Step::BaseObject::inited()) {
        return m_dir.get();
    }
    else {
        return NULL;
    }
}

void IfcLine::setDir(const Step::RefPtr< IfcVector > &value) {
    m_dir = value;
}

void IfcLine::release() {
    IfcCurve::release();
    m_pnt.release();
    m_dir.release();
}

bool IfcLine::init() {
    bool status = IfcCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pnt = NULL;
    }
    else {
        m_pnt = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dir = NULL;
    }
    else {
        m_dir = static_cast< IfcVector * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcLine::copy(const IfcLine &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    setPnt(copyop(obj.m_pnt.get()));
    setDir(copyop(obj.m_dir.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLine::s_type("IfcLine");
