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

#include "ifc2x3/IfcSurfaceOfRevolution.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcSweptSurface.h"
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

IfcSurfaceOfRevolution::IfcSurfaceOfRevolution(Step::Id id, Step::SPFData *args) : IfcSweptSurface(id, args) {
    m_axisPosition = NULL;
}

IfcSurfaceOfRevolution::~IfcSurfaceOfRevolution() {
}

bool IfcSurfaceOfRevolution::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSurfaceOfRevolution(this);
}

const std::string &IfcSurfaceOfRevolution::type() {
    return IfcSurfaceOfRevolution::s_type.getName();
}

Step::ClassType IfcSurfaceOfRevolution::getClassType() {
    return IfcSurfaceOfRevolution::s_type;
}

Step::ClassType IfcSurfaceOfRevolution::getType() const {
    return IfcSurfaceOfRevolution::s_type;
}

bool IfcSurfaceOfRevolution::isOfType(Step::ClassType t) {
    return IfcSurfaceOfRevolution::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() {
    if (Step::BaseObject::inited()) {
        return m_axisPosition.get();
    }
    else {
        return NULL;
    }
}

void IfcSurfaceOfRevolution::setAxisPosition(const Step::RefPtr< IfcAxis1Placement > &value) {
    m_axisPosition = value;
}

void IfcSurfaceOfRevolution::release() {
    IfcSweptSurface::release();
    m_axisPosition.release();
}

bool IfcSurfaceOfRevolution::init() {
    bool status = IfcSweptSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axisPosition = NULL;
    }
    else {
        m_axisPosition = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcSurfaceOfRevolution::copy(const IfcSurfaceOfRevolution &obj, const CopyOp &copyop) {
    IfcSweptSurface::copy(obj, copyop);
    setAxisPosition(copyop(obj.m_axisPosition.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSurfaceOfRevolution::s_type("IfcSurfaceOfRevolution");
